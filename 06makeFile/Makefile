CDIR=. lib lib/**/* src src/**/*  # c  file directory
INCDIR=inc inc/**/* # header file directory

CC=gcc # comiler
LD=gcc # linker

BINARY=bin # the executable to build

BUILD_DIR=build
OBJS_DIR=$(BUILD_DIR)/objs


# c and header files
CFILES=$(foreach D,$(CDIR),$(wildcard $(D)/*.c)) 
INCFILES=$(foreach D,$(INCDIR),-I $(D))

# list of compiled object and depdency files
OBJECTS=$(patsubst %.c,$(OBJS_DIR)/%.o,$(CFILES))
DEPFILES=$(patsubst %.c,$(OBJS_DIR)/%.d,$(CFILES))

# compiler flag
OPTIMIZE=-O0
CCFLAGS=-Wall -Wextra  -MP -MD $(INCFILES) $(OPTIMIZE)

# linker flags
LDFLAGS=

# Mode-specific flags
DEBUG_FLAGS = -g -O0 -DDEBUG # Debug mode: no optimization, include debug symbols
RELEASE_FLAGS = -O2 -UDEBUG  # Release mode: optimized

# Choose mode (default is debug)
MODE ?= debug

ifeq ($(MODE),debug)
    CCFLAGS += $(DEBUG_FLAGS)
else ifeq ($(MODE),release)
    CCFLAGS += $(RELEASE_FLAGS)
endif

# build rules

all:$(BUILD_DIR)/$(BINARY)

# linking
$(BUILD_DIR)/$(BINARY):$(OBJECTS)
	mkdir -p $(dir $@)
	$(LD) -o $@ $^ 

# compiling
$(OBJS_DIR)/%.o : %.c
	mkdir -p $(dir $@)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

dist: clean
	zip -r dist.zip *

-include $(DEPFILES)
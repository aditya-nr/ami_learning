REMOTE=origin # git remote url
BRANCH=master # git branch

CDIR=. lib lib/**/* src src/**/*  # c  file directory
INCDIR=inc inc/**/* # header file directory

CC=gcc # comiler
LD=gcc # linker

TARGET=main # the executable to build

BIN_DIR=exe
OBJS_DIR=objs


# c and header files
CFILES=$(foreach D,$(CDIR),$(wildcard $(D)/*.c)) 
INCFILES=$(foreach D,$(INCDIR),-I $(D))

# list of compiled object and depdency files
OBJECTS=$(patsubst %.c,$(OBJS_DIR)/%.o,$(CFILES))
DEPFILES=$(patsubst %.c,$(OBJS_DIR)/%.d,$(CFILES))

# compiler flag
CCFLAGS=-Wall -Wextra  -MP -MD $(INCFILES)

# linker flags
LDFLAGS=

# Mode-speREMOTEcific flags
DEBUG_FLAGS = -g -O0 -DDEBUG # Debug mode: no optimization, include debug symbols
RELEASE_FLAGS = -O2 -UDEBUG  # Release mode: optimized

# Choose mode (default is debug)
MODE ?= debug

ifeq ($(MODE),debug)
    CCFLAGS += $(DEBUG_FLAGS)
else 
    CCFLAGS += $(RELEASE_FLAGS)
endif

# build rules

all:$(BIN_DIR)/$(TARGET)

# linking
$(BIN_DIR)/$(TARGET):$(OBJECTS)
	mkdir -p $(dir $@)
	$(LD) -o $@ $^ 

# compiling
$(OBJS_DIR)/%.o : %.c
	mkdir -p $(dir $@)
	$(CC) $(CCFLAGS) -c $< -o $@

run:$(BIN_DIR)/$(TARGET)
	./$(BIN_DIR)/$(TARGET)

clean:
	rm -rf $(OBJS_DIR) $(BIN_DIR) *.zip *.pdf docs

dist: clean
	zip -r dist.zip * 

push: clean
	git push $(REMOTE) $(BRANCH)

-include $(DEPFILES)
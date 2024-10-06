## Write a simple code to get two variable one as integer and another as float. Display the given value as output also print the size of both the variables. Perform all stages of compilation process one by one (preprocessing, Compiling, assembling, linking).

### create following directory and file

```bash
mkdir exec obj src && touch src/program.c
```

### paste the code in `src/program.c`

```c
#include <stdio.h>

int main() {
    int intVar;
    float floatVar;

    // Input values
    printf("Enter an integer value: ");
    scanf("%d", &intVar);
    printf("Enter a float value: ");
    scanf("%f", &floatVar);

    // Display values and sizes
    printf("\n--------------------------------\n");
    printf("|%6s |%10s |%10s|\n","TYPE","SIZE","VALUE");
    printf("--------------------------------\n");
    printf("|%6s |%10zu |%10d|\n","int",sizeof(intVar),intVar);
    printf("|%6s |%10zu |%10.2f|\n","float",sizeof(floatVar),floatVar);
    printf("--------------------------------\n");

    return 0;
}
```

## Step by step compilation

### Prepossing

```bash
gcc -E src/program.c -o obj/program.i
```

### Compiling

```bash
gcc -S obj/program.i -o obj/program.s
```

### Assembling

```bash
gcc -c obj/program.s -o obj/program.o
```

### Linking

```bash
gcc obj/program.o -o exec/program
```

### Running the program

```bash
./exec/program
```

### Output

```
Enter an integer value: 67
Enter a float value: 14.56

--------------------------------
|  TYPE |      SIZE |     VALUE|
--------------------------------
|   int |         4 |        67|
| float |         4 |     14.56|
--------------------------------
```

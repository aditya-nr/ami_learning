#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    // Input file paths
    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    printf("Enter destination file path: ");
    scanf("%s", destPath);

    // Open source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        exit(EXIT_FAILURE);
    }

    // Open destination file in write mode
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Unable to open destination file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Copy file contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

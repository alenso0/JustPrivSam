#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char buffer[1024];
    size_t bytesRead;
    
    const char *sourceFileName = "source.txt";
    const char *destFileName = "destination.txt";
    
    // Open source file for reading
    sourceFile = fopen(sourceFileName, "rb");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'\n", sourceFileName);
        return 1;
    }
    
    // Open destination file for writing
    destinationFile = fopen(destFileName, "wb");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file '%s'\n", destFileName);
        fclose(sourceFile);
        return 1;
    }
    
    // Read and write in chunks
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }
    
    // Close files
    fclose(sourceFile);
    fclose(destinationFile);
    
    printf("File copied successfully!\n");
    return 0;
}
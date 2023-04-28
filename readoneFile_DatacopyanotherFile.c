#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char line[100];

    // Open the source file for reading
    source = fopen("source.txt", "r");

    // Open the destination file for writing
    destination = fopen("destination.txt", "w");

    // Read one line from the source file
    fgets(line, 100, source);

    // Write the line to the destination file
    fputs(line, destination);

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}

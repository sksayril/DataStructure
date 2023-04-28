#include <stdio.h>

int main()
{
    FILE *file;
    char name[100];
    int age;
    long int position;

    // Open the file for writing
    file = fopen("example.txt", "w");

    // Get the starting position in the file
    position = ftell(file);

    // Write some data to the file
    fprintf(file, "Name: %s\n", "John");
    fprintf(file, "Age: %d\n", 30);

    // Get the current position in the file
    position = ftell(file);
    printf("Current position: %ld\n", position);

    // Move the file pointer back to the start of the file
    fseek(file, 0, SEEK_SET);

    // Read the data from the file
    fscanf(file, "Name: %s\n", name);
    fscanf(file, "Age: %d\n", &age);

    // Output the data to the console
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    // Clear the file buffer and close the file
    fflush(file);
    fclose(file);

    return 0;
}

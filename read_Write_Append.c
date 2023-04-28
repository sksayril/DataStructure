#include <stdio.h>

int main()
{
    FILE *file;
    char data[100];

    // Open the file for writing
    file = fopen("file.txt", "w");

    // Write some data to the file
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, file);

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("file.txt", "r");

    // Read the data from the file and print it to the console
    printf("\nData read from the file:\n");
    while (fgets(data, sizeof(data), file))
    {
        printf("%s", data);
    }

    // Close the file
    fclose(file);

    // Open the file for appending
    file = fopen("file.txt", "a");

    // Append some more data to the file
    printf("\nEnter more data to append to the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, file);

    // Close the file
    fclose(file);

    // Open the file for reading again
    file = fopen("file.txt", "r");

    // Read the updated data from the file and print it to the console
    printf("\nUpdated data read from the file:\n");
    while (fgets(data, sizeof(data), file))
    {
        printf("%s", data);
    }

    // Close the file
    fclose(file);

    return 0;
}

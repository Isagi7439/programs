#include <stdio.h>

// Custom strcpy function
char *my_strcpy(char arr[], const char str[]) {
    int i = 0;

    // Copy characters from str to arr
    while (str[i] != '\0') {
        arr[i] = str[i];
        i++;
    }
    arr[i] = '\0'; // Add null terminator to the destination array

    return arr; // Return the destination array
}

int main() {
    char str[] = "soumo"; // Source string
    char arr[90];         // Destination array, ensure it's large enough

    // Call custom strcpy and print the result
    printf("Copied string: %s\n", my_strcpy(arr, str));

    return 0;
}
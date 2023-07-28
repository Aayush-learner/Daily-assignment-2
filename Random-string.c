#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random alphanumeric character (0-9 or A-F)
char randomChar() {
    int randomNum = rand() % 16; // Generating a random number between 0 and 15
    if (randomNum < 10)
        return '0' + randomNum; // Convert to a character from '0' to '9'
    else
        return 'A' + (randomNum - 10); // Convert to a character from 'A' to 'F'
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int minLength = 3;
    int maxLength = 10;

    int length = rand() % (maxLength - minLength + 1) + minLength; // Random length between 3 and 10

    char alphanumericString[11]; // 10 characters + 1 for null terminator

    // Generate the random alphanumeric string
    for (int i = 0; i < length; i++) {
        alphanumericString[i] = randomChar();
    }

    alphanumericString[length] = '\0'; // Null terminator to mark the end of the string

    printf("Random Alphanumeric String: %s\n", alphanumericString);

    return 0;
}

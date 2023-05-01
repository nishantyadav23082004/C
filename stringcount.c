#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // fgets reads a line of input from the user

    for (i = 0; i < strlen(str); i++) {
       if (str[i] != ' ') {
          count++;
       }
    }

    printf("Number of characters except blank spaces: %d\n", (count - 1));
    return 0;
}
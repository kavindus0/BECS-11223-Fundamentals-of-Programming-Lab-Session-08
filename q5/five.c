#include <stdio.h>
#include <ctype.h> // for isdigit()

int main() {
    FILE *file;
    int counts[10] = {0}; // Array to hold counts of digits 0-9
    int ch;

    // Open the file
    file = fopen("set.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (isdigit(ch)) {
            counts[ch - '0']++;
        }
    }


    fclose(file);

 
    for (int i = 0; i < 10; i++) {
        printf("Frequency of number %d: %d\n", i, counts[i]);
    }

    return 0;
}

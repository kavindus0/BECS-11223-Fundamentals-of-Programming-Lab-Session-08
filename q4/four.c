#include <stdio.h>

int main() {
    FILE *file;
    int count = 0;
    char ch;

    
    file = fopen("quotes.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'i') {
            count++;
        }
    }


    fclose(file);

    printf("The character 'i' appears %d times in the quote.\n", count);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *file;
    int values[5];
    int i, oddCount = 0;


    file = fopen("infile.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }


    for (i = 0; i < 5; i++) {
        if (fscanf(file, "%d", &values[i]) != 1) {
            fprintf(stderr, "Error reading number %d from file\n", i + 1);
            fclose(file);
      
        }
    }

    fclose(file);

    // Count odd numbers
    for (i = 0; i < 5; i++) {
        if (values[i] % 2 != 0) {
            oddCount++;
        }
    }


    printf("%d odd numbers\n", oddCount);

    return 0;
}

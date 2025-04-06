#include <stdio.h>

int main() {
    FILE *file;
    int values[10];
    int i, sum,=0;
float avg = 0;
int max = -5;
int min=10000;


    file = fopen("infile.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }


    for (i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &values[i]) != 1) {
            fprintf(stderr, "Error reading number %d from file\n", i + 1);
            fclose(file);
      
        }
    }

    fclose(file);

    // Count odd numbers
    for (i = 0; i < 10; i++) {
       sum = sum + values[i];
 if (values[i] > max) {
            max = values[i];
        }
        if (values[i] < min) {
            min = values[i];
        }
    }


    printf("%d is SUM\n", sum);printf("%f is Avarage\n", sum/10);
printf("%d is Max\n", max);
printf("%d is Min\n", min);


    return 0;
}

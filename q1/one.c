
#include<stdio.h>

int main(){
FILE *fp;
fp = fopen("input.txt","w");
int a;
float b;
char c;
printf("Enter Digit, Float an Character Separately: ");
scanf("%d %f %c",&a,&b,&c);
fprintf(fp,"%d\n%f\n%c",a,b,c);
fclose(fp);

return 0;
}
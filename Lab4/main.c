#include <stdio.h>

int num;
int result;

int main(){
    printf(" ___ L - A - B - A - 4 ___ \n\n");
    printf(" - + - + - + - Exercise 1 - + - + - + - \n\n");

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Result: %s\n\n", ( num >= 76 ) && ( num <= 78) ? "yes" : "no");

    printf(" - + - + - + - Exercise 2 - + - + - + - \n\n");

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Sixth bite is: %d\n\n", (num >> 6) & 1 );
    printf(" ___ E - N - D - - P - R - O - G - R - A - M - M ___ \n\n");
    return 0;
}

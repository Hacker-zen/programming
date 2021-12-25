#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>


int main();

int main() {
    printf(" ___ L - A - B - A - 8 ___ \n\n");

    char str1[100];
    char str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("\n - + - + - + - Exercise 1 - + - + - + - \n");
    char buffstr[100];
    strcpy(buffstr, str1);
    printf("\nConcatenation: %s", strcat(buffstr, str2));

    printf("\n - + - + - + - Exercise 6 - + - + - + - \n");
    str2 = malloc(sizeof(char) * l1);
    strcpy(str3, str1);
    printf("Task 5:\n%s\n\n", str3);
    free(str3);


    printf("\n - + - + - + - Exercise 8 - + - + - + - \n");

    printf("\n - + - + - + - Exercise 10 - + - + - + - \n");

    printf("\n - + - + - + - Exercise 12 - + - + - + - \n");
    if (strpbrk(str1, str2) != NULL) {
        printf("Task 12:\n%d\n\n", strpbrk(str1, str2) - str1);
    } else {
        printf("Task 12:\n%d\n\n", strlen(str1));
    }
    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("\n - + - + - + - Exercise 1 - + - + - + - \n");

    char str[50];
    gets(str);
    int count_numbers = 0;
    int count_letters_lower = 0;
    int count_letters_upper = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z'){
            count_letters_lower += 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') { count_letters_upper += 1; }
        else if (str[i] >= '0' && str[i] <= '9') {
            count_numbers += 1;
        }
    }
    printf("Numbers: %d\n", count_numbers);
    printf("Letters lower: %d\n", count_letters_lower);
    printf("Letters upper: %d\n", count_letters_upper);

    printf("\n - + - + - + - Exercise 3 - + - + - + - \n");
    int d;
    char* c = malloc(sizeof(char));
    scanf("%d", &d);
    sprintf(c, "%d", d);
    printf("%s\n\n", c);

    printf("\n\n ___ E - N - D - - P - R - O - G - R - A - M - M ___ \n\n");
    return 0;
}

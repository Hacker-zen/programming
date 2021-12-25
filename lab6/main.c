#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    printf(" ___ L - A - B - A - 6 ___ \n\n");
    printf(" - + - + - + - Exercise 1 - + - + - + - \n");



	double a[] = {-3.4, 4.5, -5.6, 6.7};

	printf("--1--\n");
	int n = 4;
	double *b = a;
	for (int i = 0; i < n; i++)
	{
        printf("%.2lf ", *(b + i));
	}

	printf("\n--2--\n");
	double *arr = (double*) malloc(n * sizeof(double));
    arr[0] = -3.4;
    arr[1] = 4.5;
    arr[2] = -5.6;
    arr[3] = 6.7;
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", arr[i]);
    }
    free(arr);
	return 0;
}

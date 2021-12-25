#include<stdio.h>
#include <stdio.h>
#include <locale.h>

int main() {
	//Вариант 06
	// char *locale = setlocale(LC_ALL, "");

	int a, b, t;

	printf("Enter the Hexadecimal number: ");
	scanf("%x", &a);

	printf("The Decimal Number: ");
	printf("%d\n", a);

	printf("The Hexadecimal Number: ");
	printf("%x\n", a);
	t = a >> 2;
	printf("%x\n", t);

	printf("Right shift by 2 bits ");
	printf("%x\n", a);
	t = ~a;
	printf("%x\n", t);

	printf("Or operation");
	scanf("%x", &b);
	t = a|b;
	printf("%x\n", t);

	return 0;
}

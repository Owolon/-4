#define CRT_NO_SECURE_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '?';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c,%d,%f,%e",c, i, f, d);

	char cr;
	int ir;
	float fr;
	double dr;

	printf("\nВведите знак:");
	scanf_s("%c", &cr);
	printf("%c", cr);

	printf("\nВведите целое число:");
	scanf_s("%d", &ir);
	printf("%d", ir);

	printf("\nВведите вещественное число:");
	scanf_s("%f", &fr);
	printf("%f", fr);

	printf("\nВведите число в научной нотации:");
	scanf_s("%le", &dr);
	printf("%le", dr);
	int fr2;
	fr2 = (int)fr;

	printf("\nЦелая часть числа:%d", fr2);
	printf("\nДробная часть числа:%.2f", fr - fr2);

	printf("\nШестнадцатиричная:%x",cr);
	printf("\nДесятичная:%i", cr);
	

	return 0;

}
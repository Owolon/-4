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

	printf("\n������� ����:");
	scanf_s("%c", &cr);
	printf("%c", cr);

	printf("\n������� ����� �����:");
	scanf_s("%d", &ir);
	printf("%d", ir);

	printf("\n������� ������������ �����:");
	scanf_s("%f", &fr);
	printf("%f", fr);

	printf("\n������� ����� � ������� �������:");
	scanf_s("%le", &dr);
	printf("%le", dr);
	int fr2;
	fr2 = (int)fr;

	printf("\n����� ����� �����:%d", fr2);
	printf("\n������� ����� �����:%.2f", fr - fr2);

	printf("\n�����������������:%x",cr);
	printf("\n����������:%i", cr);
	

	return 0;

}
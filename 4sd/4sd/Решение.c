#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define G 365
/*��������� ����������:
	D - ����������� ���������� ��������� �����
	n - ���������� ������ � ����
	result - ����������� ����� ��� �� ���
*/
double chasti(float D, int n)
{
	float result;
	result = (D / 4)*n;
	return result;
}

void main()
{
	setlocale(LC_CTYPE, "RUS");
	float D;
	int n = G / 7;
	printf("������� X ����� ����� �� ��������� ������� ���:\n");
	scanf_s("%f", &D);

	float result = chasti(D,n);

	printf("����������� ������ ���� �� ���:\n%.2f", result);

 }
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define G 365
/*Введенные переменные:
	D - изначальное количество карманных денег
	n - количество недель в году
	result - вычисленный доход Юры за год
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
	printf("Введите X число денег на карманные расходы Юры:\n");
	scanf_s("%f", &D);

	float result = chasti(D,n);

	printf("Накопленные деньги Юрой за год:\n%.2f", result);

 }
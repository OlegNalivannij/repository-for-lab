#include "stdio.h"
#include "windows.h"



int main()
{
	double A , S, P;
	printf("input A: ");
	scanf_s("%lf", &A);
	S = A * A;
	P = A * 4;
	printf("P = %lf\n", P);
	printf("S = %lf\n", S);
	system("pause");
	return 0;
}
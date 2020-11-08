#include <stdio.h>
float S(float a, float b)
{
	float S;
	S = a * b;
	return S;
}
float P(float a, float b)
{
	float P;
	P = 2 * (a + b);
	return P;
}
int main ()
{
	float a, b;
	float dientich, chuvi;
	dientich = S(a, b);
	chuvi = P(a, b);
	int selection;
	printf("\n 1. Tinh dien tich");
	printf("\n 2. Tinh chu vi");
	printf("\n Enter a: ");
	scanf("%f", &a);
	printf("\n Enter b: ");
	scanf("%f", &b);
	printf("\n Enter your selection: ");
	scanf("%d", &selection);
	switch(selection)
	{
		case 1:
			dientich = S(a, b);
			printf("\n %f", dientich);
			break;
		case 2:
			chuvi = P(a, b);
			printf("\n %f", chuvi);
			break;
	}
	
	
}

#include <stdio.h>
float sum(float a, float b)
{
	float sum;
	sum = a + b;
	return sum;
}
float sub(float a, float b)
{
	float sub;
	sub = a - b;
	return sub;
}
float multi(float a, float b)
{
	float multi;
	multi = a * b;
	return multi;
}
float div(float a, float b)
{
	double div;
	div = a / b;
	return div;
}
int main ()
{
	float a, b;
	float tong, hieu, tich, thuong;
	tong = sum(a, b);
	hieu = sub(a, b);
	tich = multi(a, b);
	thuong = div(a, b);
	int selection;
	printf("\n TINH TOAN");
	printf("\n=================");
	printf("\n 1. Nhap so");
	printf("\n 2. Tinh tong");
	printf("\n 3. Tinh hieu");
	printf("\n 4. Tinh tich");
	printf("\n 5. Tinh thuong");
	printf("\n 6. Ket thuc");
	printf("\n Enter a: ");
	scanf("%f", &a);
	printf("\n Enter b: ");
	scanf("%f", &b);
	
	printf("\n Enter your selection: ");
	scanf("%d", &selection);
	switch(selection)
	{
		case 2: 
		tong = sum(a, b);
		printf("\n %f", tong);
		break;
		
		case 3:
		hieu = sub(a, b);
		printf("\n %f", hieu);
		break;
		
		case 4:
		tich = multi(a, b);
		printf("\n %f", tich);
		break;
		
		case 5:
		if (b == 0)
		{
			printf("\n Invalid");
		}
		else
		thuong = div(a, b);
		printf("\n %f", thuong);
		break;
		
		case 6:
		printf("\n Stop");
		break;
	}
	
}

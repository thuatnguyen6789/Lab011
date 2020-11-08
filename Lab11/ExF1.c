#include <stdio.h>
int main ()
{
	int a, b, c;
	float S;
	getarea();
}
	void getarea()
	{
	int a, b, c;
	float S;
	printf("\n Canh 1: ");
	scanf("%d", &a);
	printf("\n Canh 2: ");
	scanf("%d", &b);
	printf("\n Canh 3: ");
	scanf("%d", &c);
	if(a + b > c && a + c > b && b + c > a)
	{
	S = sqrt((a + b + c) * (a + b -c) * (a + c - b) * (b + c -a)) / 4;
	printf("%f", S);
	}
	else 
	printf("Invalid trangle");
	}	

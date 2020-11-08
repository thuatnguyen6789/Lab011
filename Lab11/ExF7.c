#include <stdio.h>
int check(int age)
{
	if (age == 26 || age == 30)
	return 1;
}
int find(int high)
{
	if (high >= 155 && high <= 165)
	return 1;
}
int kiemtra(int salary)
{
	if (salary >= 500)
	return 1;
}
int say(char name[100])
{
	printf("\n You are my everything");
	printf("\n I love you. And you?");
}
void breakheart(char code)
{
	do 
	{
		printf("\n Write Code everyday");
		printf("\n Are you good in code? Y/N");
		fflush(stdin);
		scanf("%c", &code);
	}
	while (code != 'Y');
	printf("\n Find new crush");
}
void love(char ans)
{
	do
	{
		printf("\n Take care day by day");
		printf("\n Do you still love me?");
		fflush(stdin);
		scanf("%c", &ans);
	}
	while (ans != 'N');
	printf("\n Find new crush");
}

int main ()
{
	int i;
	int age, high, salary;
	char name[100];
	int answer;
	char ans;
	char code;
	printf("\n Enter your age: ");
	scanf("%d", &age);
	printf("\n Enter your height: ");
	scanf("%d", &high);
	printf("\n Enter your salary: ");
	scanf("%d", &salary);
	if (check(age) == 1 && find(high) == 1 && kiemtra(salary) == 1)
	{
	say(name[100]);
	printf("\n 1.Failure");
	printf("\n 2.Success");
	printf("\n Your answer is: ");
	scanf("%d", &answer);
	switch(answer)
	{
		case 1:
			breakheart(code);
			break;
		case 2:
			love(ans);
			break;
	}

	}
	else
	printf("\n I am sorry");
}

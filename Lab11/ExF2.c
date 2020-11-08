#include <stdio.h>
int checkNum(int num)
{
		if (num % 50 == 0)
		{
			return 0;
		}
		else
		return 1;
	
}
int main ()
{
int arr[1000];
int i, j;
printf("\n Enter number of Array: ");
scanf("%d", &j);
for (i = 0; i < j; i++)
{
scanf("%d", &arr[i]);
}
for (i = 0; i < j; i++)

{
if (checkNum(arr[i]) == 0)
printf("\n%d", arr[i]);
}
}


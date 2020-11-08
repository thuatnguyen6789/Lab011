#include <stdio.h>
void indexMin(int arr[], int j)
{
	int i;
	int min;
	for (i = 1; i <= j; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = arr[1];
	
	for (i = 1; i <= j; i++)
	{
		if (arr[i] < min)
		min = arr[i];
	}
	
	printf("\n Lowest value: %d", min);
	
	
	for (i = 1; i <= j; i++)
	{
		if (arr[i] == min)
		
		printf("\n Position of Lowest value: %5d", i);
		
	}
	
}

int main ()
{
int arr[10];
indexMin(arr, 10);
return 0;
}

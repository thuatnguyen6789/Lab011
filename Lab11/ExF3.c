#include <stdio.h>
void reverse(float arr[], int size)
{
	int i;
	for (i = 1; i <= size; i++)
	{
		scanf("\n%f", &arr[i]);
	}
	for (i = size; i >= 1; i--)
	printf("\n%f", arr[i]);
}
int main ()
{
	float arr[5];
	reverse(arr, 5);

	return 0;
}

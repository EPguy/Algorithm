#include <stdio.h>

int main()
{
	int i, j, temp;
	int arr[10] = {10, 4, 2, 5, 1, 3, 8,7,9,6};
	
	for(int i = 0; i < 10; i++)
	{
		j = i;
		while(arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			j--;
		}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("[%d]",arr[i]);
	}
}

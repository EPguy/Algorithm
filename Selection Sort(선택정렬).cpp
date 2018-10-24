#include <stdio.h>

int main()
{
	int i , j , min, index, temp;
	int arr[10] = {10, 4, 2, 5, 1, 3, 8,7,9,6};
	
	for(i = 0; i < 10; i++)
	{
		min = 9999;
		for(j = i; j < 10; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
	for(i = 0; i < 10; i++)
	{
		printf("[%d]",arr[i]);
	}
}

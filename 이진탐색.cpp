#include <stdio.h>
#include <stdlib.h>
int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (target == ar[mid])
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])
			{
				last = mid-1;
			}
			else if (target > ar[mid])
			{
				first = mid + 1;
			}
		}
	}
	return -1;
}

int main()
{
	/*int ar[5] = { 1,2,3,4,5 };
	printf("%d", BSearch(ar, 5, 5));*/

	int size;
	int input;
	printf("배열의 크기를 입력하시오. : ");
	scanf_s("%d", &size);
	int *ar = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++)
	{
		printf("데이터를 입력하시오. : ");
		scanf_s("%d", &input);
		ar[i] = input;

		for (int j = 0; j < i; j++)
		{
			if (ar[i] == ar[j])
			{
				printf("같은 수가 있습니다. 다시입력해주세요. \n");
				i--;
				break;
			}
		}
	}
	printf("\n\n\n");
	printf("-------------------- 데이터가 모두 입력되었습니다. ------------------------ \n");
	printf("찾을 값을 입력하시오. : ");
	scanf_s("%d", &input);

	while (input != 0)
	{
		printf("index값 : %d 입니다.\n", BSearch(ar, size, input));
		printf("찾을 값을 입력하시오. : ");
		scanf_s("%d", &input);
	}

	system("pause");
}

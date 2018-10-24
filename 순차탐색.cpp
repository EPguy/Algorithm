#include <stdio.h>
#include <stdlib.h>

int LSearch(int ar[], int len, int target)
{
	for (int i = 0; i < len; i++)
	{
		if (ar[i] == target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
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
		printf("index값 : %d 입니다.\n", LSearch(ar, size, input));
		printf("찾을 값을 입력하시오. : ");
		scanf_s("%d", &input);
	}

	system("pause");

}

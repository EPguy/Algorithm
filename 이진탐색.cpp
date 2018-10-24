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
	printf("�迭�� ũ�⸦ �Է��Ͻÿ�. : ");
	scanf_s("%d", &size);
	int *ar = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++)
	{
		printf("�����͸� �Է��Ͻÿ�. : ");
		scanf_s("%d", &input);
		ar[i] = input;

		for (int j = 0; j < i; j++)
		{
			if (ar[i] == ar[j])
			{
				printf("���� ���� �ֽ��ϴ�. �ٽ��Է����ּ���. \n");
				i--;
				break;
			}
		}
	}
	printf("\n\n\n");
	printf("-------------------- �����Ͱ� ��� �ԷµǾ����ϴ�. ------------------------ \n");
	printf("ã�� ���� �Է��Ͻÿ�. : ");
	scanf_s("%d", &input);

	while (input != 0)
	{
		printf("index�� : %d �Դϴ�.\n", BSearch(ar, size, input));
		printf("ã�� ���� �Է��Ͻÿ�. : ");
		scanf_s("%d", &input);
	}

	system("pause");
}

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
		printf("index�� : %d �Դϴ�.\n", LSearch(ar, size, input));
		printf("ã�� ���� �Է��Ͻÿ�. : ");
		scanf_s("%d", &input);
	}

	system("pause");

}

#include<stdio.h>

int main_loop(void)
{
	//����1. 50���� ���� 5�� �������ϱ�
	printf("\n[����1]\n");

	for (int i = 5; i <= 50; i += 5)
		//���� i�� 5�� ����, i�� 50�����ϵ��� i�� 5�� ���ϸ� �ݺ�
	{
		printf("%d\n", i);		//i�� ���
	}

	//����2. ������ ����ϱ�
	printf("\n[����2]\n");

	for (int i = 1; i <= 9; i++)		//i�� 1�� ����, 9 �����ϵ��� i�� 1�� �����ϸ鼭 �ݺ�
	{
		printf("\n%d��\n", i);		//i�� ��: �ش� �� ���
		for (int j = 1; j <= 9; j++)		//j�� ���ϴ� ��. 1�� ������ 9�� �ɶ����� 1�� �����ϸ� �ݺ�
		{
			printf("%d * %d = %d\n", i, j, i * j);		//�� * ���ϴ� �� = ������ ���
		}

	}

	//����3. for loop �̿��Ͽ� �� ���
	printf("\n[����3]\n");

	//�����ﰢ�� ���� ��
	for (int i = 0; i < 5; i++)		//i�� 4���� 1�� 5ȸ ����
	{
		for (int j = 0; j <= i; j++)		//j�� i���� �۰ų� ���ٸ� *�� �����
		{
			printf("*");		//ex)ù ������ i, j ��� 0�̶� *1ȸ ����� �ٹٲ�,
		}
		printf("\n");		//i�� �����ϱ� ���� �ٹٲ��� ����
	}

	printf("\n");

	//�Ųٷ� �����ﰢ�� ���� ��
	for (int i = 5; i > 0; i--)		//i�� 5�� �����ϰ� 1�� �� ������ 1�� ����
	{
		for (int j = 1; j <= i; j++)		//j�� i���� �۰ų� ������ *�� ����ϰ� 1�� ����
		{
			printf("*");		//ex)ù ������ �� i�� 5, j�� 1 >> j�� 5�� �� ������ * 5ȸ ���
		}
		printf("\n");		//i�� �����ϱ� ���� �ٹٲ�
	}

	printf("\n");

	for (int i = 5; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
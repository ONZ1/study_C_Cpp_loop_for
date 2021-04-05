#include<stdio.h>

int main_loop(void)
{
	//문제1. 50보다 작은 5의 배수출력하기
	printf("\n[문제1]\n");

	for (int i = 5; i <= 50; i += 5)
		//변수 i는 5로 시작, i가 50이하일동안 i에 5씩 더하며 반복
	{
		printf("%d\n", i);		//i값 출력
	}

	//문제2. 구구단 출력하기
	printf("\n[문제2]\n");

	for (int i = 1; i <= 9; i++)		//i는 1로 시작, 9 이하일동안 i를 1씩 증가하면서 반복
	{
		printf("\n%d단\n", i);		//i는 단: 해당 단 출력
		for (int j = 1; j <= 9; j++)		//j는 곱하는 수. 1로 시작해 9가 될때까지 1씩 증가하며 반복
		{
			printf("%d * %d = %d\n", i, j, i * j);		//단 * 곱하는 수 = 곱셈값 출력
		}

	}

	//문제3. for loop 이용하여 별 출력
	printf("\n[문제3]\n");

	//직각삼각형 패턴 별
	for (int i = 0; i < 5; i++)		//i가 4까지 1씩 5회 증가
	{
		for (int j = 0; j <= i; j++)		//j가 i보다 작거나 같다면 *을 출력함
		{
			printf("*");		//ex)첫 시작은 i, j 모두 0이라 *1회 출력후 줄바꿈,
		}
		printf("\n");		//i가 증가하기 전에 줄바꿈을 실행
	}

	printf("\n");

	//거꾸로 직각삼각형 패턴 별
	for (int i = 5; i > 0; i--)		//i를 5로 시작하고 1이 될 때까지 1씩 감함
	{
		for (int j = 1; j <= i; j++)		//j가 i보다 작거나 같으면 *을 출력하고 1씩 증가
		{
			printf("*");		//ex)첫 시작할 때 i는 5, j는 1 >> j가 5가 될 때까지 * 5회 출력
		}
		printf("\n");		//i가 증가하기 전에 줄바꿈
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
#include <stdio.h>
int main()
{
	int n, i, odd_sum, even_sum;
	//n을 입력 받는다.
	scanf_s("%d", &n);
	odd_sum = 0;
	even_sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			//짝수의 합을 구한다.
			even_sum += i;
		}
		else
		{
			//홀수의 합을 구한다.
			odd_sum += i;
		}
	}
	//짝수의 합을 출력한다.
	printf("짝수의 합: %d\n", even_sum);
	//홀수의 합을 출력한다.
	printf("홀수의 합: %d\n\n", odd_sum);
	odd_sum = 0;
	even_sum = 0;
	i = 1;
	while (i <= n)
	{
		if (i % 2 == 0)
		{
			//짝수의 합을 구한다.
			even_sum += i;
		}
		else
		{
			//홀수의 합을 구한다.
			odd_sum += i;
		}
		//while 문은 i를 직접 증가시켜야 한다.
		i++;
	}
	//짝수의 합을 출력한다.
	printf("짝수의 합: %d\n", even_sum);
	//홀수의 합을 출력한다.
	printf("홀수의 합: %d\n", odd_sum);
	return 0;
}
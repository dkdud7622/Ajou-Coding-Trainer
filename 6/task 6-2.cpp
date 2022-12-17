#include <stdio.h>
int main()
{
	int n, i, sum;
	//n을 입력 받는다.
	scanf_s("%d", &n);
	sum = 0;
	//1부터 n까지 증가하는 i를 출력하고, 그 합을 구한다.
	for (i = 1; i <= n; i++)
	{
		sum += i;
		printf("%d ", i);
	}
	//합을 출력한다.
	printf("\n%d\n", sum);
	sum = 0;
	i = 1;
	//1부터 n까지 증가하는 i를 출력하고, 그 합을 구한다.
	while (i <= n)
	{
		sum += i;
		printf("%d ", i);
		//while 문은 i를 직접 증가시켜야 한다.
		i++;
	}
	//합을 출력한다.
	printf("\n%d\n", sum);
	return 0;
}
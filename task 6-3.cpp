#include <stdio.h>
int main()
{
	int n;
	do {
		printf("1부터 100까지의 정수를 입력하시오: ");
		scanf_s("%d", &n);
		// 1부터 100사이의 정수값이 아니라면, 입력을 받는 것을 반복 한다.
	} while (n > 100 || n < 1);
	// 입력 받은 정수를 출력한다.
	printf("입력 받은 정수는 %d이다.", n);
	return 0;
}
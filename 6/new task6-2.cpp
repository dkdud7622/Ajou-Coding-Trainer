#include <stdio.h>
int main()
{
	int a, b;
	do {
		printf("정수 a와 b를 입력하시오. (결과가 0이면 종료): ");
		scanf_s("%d %d", &a, &b);
		printf("a * b = %d\n", a * b);
	} while (a * b != 0); // 연산의 결과가 0이 아니라면 반복한다.
	printf("종료되었습니다.");
	return 0;
}
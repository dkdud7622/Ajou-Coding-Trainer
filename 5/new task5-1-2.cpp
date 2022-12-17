#include <stdio.h>
int main()
{
	int age;
	//나이를 입력 받는다.
	printf("나이를 입력하시오.: ");
	scanf_s("%d", &age);
	// 65살 이상 또는 6살 미만
	if (age >= 65 || age < 6)
		printf("0원\n");
	// 19살 이상, 65살 미만 (19살 포함)
	esle if (age >= 19)
		printf("1500원\n");
	// 12살 이상, 19살 미만 (12살 포함)
	else if (age >= 12)
		printf("1100원\n");
	// 6살 이상, 12살 미만 (6살 포함)
	else
		printf("800원\n");
	return 0;
}
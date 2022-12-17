/* 근무한 시간을 분단위로 입력 받아서 지급받을 금액을 출력하는 프로그램 */
#include <stdio.h>
#define MINIMUM_WAGE 9160.0
int main()
{
	float wage, time;
	// 근무한 시간을 입력 받는다.
	printf("근무한 시간을 입력하시오. (단위:분) : ");
	scanf_s("%f", &time);
	// 일한 시간만큼의 금액을 계산한다.
	wage = (MINIMUM_WAGE / 60) * time;
	// 계산한 임금을 출력한다. 이때, 소수점은 출력하지 않는다.
	printf("지급 받을 금액은 ""%.0f원"" 입니다.", wage);
	return 0;
}

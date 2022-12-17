#include <stdio.h>
#define INCHES_PER_METER 39.37
#define FEET_PER_METER 3.281
int main()
{
	double meter, inches, feet;
	// meter 단위의 길이를 입력 받는다.
	printf("meter 단위의 길이를 입력하시오: ");
	scanf_s("%lf", &meter);
	// meter를 inche로 변환하기 위한 계산을 한다.
	inches = meter * INCHES_PER_METER;
	// meter를 feet으로 변환하기 위한 계산을 한다.
	feet = meter * FEET_PER_METER;
	//계산한 inche와 feet을 출력한다. 소수 둘째 자리 표현하기 위해 %.2lf를 사용한다.
	printf("결과:\n%.2lf inches \n%.2lf feet", inches, feet);
	return 0;
}
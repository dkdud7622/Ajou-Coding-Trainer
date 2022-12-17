/* cm로 입력받은 키를 m로 변환하는 프로그램 */
#include <stdio.h>
#define ONE_METER_TO_CENTI 100.0
int main()
{
	float cmHeight, meterHeight;
	// 근무한 시간을 입력 받는다.
	printf("키를 입력하세요.. (단위:cm) : ");
	scanf_s("%f", &cmHeight);
	// 입력받은 키를 meter로 변환합니다.
	meterHeight = cmHeight / ONE_METER_TO_CENTI;
	// 변환한 키를 소수점 둘째 자리까지 출력합니다.
	printf("키는 %.2fM 입니다.", meterHeight);
	return 0;
}

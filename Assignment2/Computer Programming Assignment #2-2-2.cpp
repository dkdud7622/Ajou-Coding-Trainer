#include <stdio.h>
// 맨 첫줄의 공백 계산하는 함수입니다.
int get_space(int total)
{
	return total % 7;
}
// (year-1)년 까지의 총 요일을 계산하는 함수입니다.
int get_totalday(int y)
{
	int y1 = y - 1;
	int total = 365 * y1;
	total += y1 / 400 - y1 / 100 + y1 / 4;
	return total;
}
//윤년을 판별하는 함수입니다.
int year_cal(int y)
{
	if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) return 1;
	return 0;
}

int main(void)
{
	int i, j, k;
	int year, month, total, spacevar;
	//1월부터 12월까지 마지막날의 일 수를 배열에 저장합니다.
	int month_last_day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("연과 월을 입력하세요. ");
	scanf_s("%d %d", &year, &month);
	// (year-1)년 까지의 총 요일을 계산합니다.
	total = get_totalday(year);
	// 윤년을 판별하는 함수를 호출합니다. 리턴 값이 1이라면 true에 해당되므로, 2월달에 +1을 해줍니다.
	if (year_cal(year))
		month_last_day[1] += 1;
	// year년의 1월부터 (month-1)월까지 총 일 수를 total에 더합니다.
	for (i = 0; i < month - 1; i++)
	{
		total += month_last_day[i];
	}
	printf("%d/%d\n\n", year, month);
	// 출력하는 달의 첫주의 요일 앞에 공백이 몇 개인지 계산합니다.
	spacevar = get_space(total + 1);
	// 계산한 첫 주, 첫 요일 앞 공백을 출력합니다.
	for (k = 0; k < spacevar; ++k)
		printf(" ");
	// 입력받은 달의 1일부터 마지막 일 까지 출력합니다.
	for (j = 1; j <= month_last_day[i]; ++j)
	{
		printf("%3d", j);
		// (j+spacevar) % 7 == 0이라면, 한줄을 출력 완료한 것이므로 줄바꿈을 출력합니다.
		if ((j + spacevar) % 7 == 0) printf("\n");
	}
	printf("\n\n");
	return 0;
}
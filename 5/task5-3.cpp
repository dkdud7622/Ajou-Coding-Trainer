#include <stdio.h>
int main()
{
	int score;
	//점수를 입력 받는다.
	printf("점수를 입력하시오.: ");
	scanf_s("%d", &score);
	//90점 이상 (90점 포함)
	if (score >= 90)
		printf("Excellent\n");
	//80점 이상, 90점 미만 (80점 포함)
	else if (score >= 80)
		printf("Good\n");
	//70점 이상, 80점 미만 (70점 포함)
	else if (score >= 70)
		printf("Fair\n");
	//70점 미만
	else
		printf("Poor\n");
	return 0;
}
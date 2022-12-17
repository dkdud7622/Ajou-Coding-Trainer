#include <iostream>
#include <stdio.h>
#define NUM_DATA 5
int main()
{
	double arr[NUM_DATA];
	double compare;
	double max;
	// 요소의 개수가 5인 double형 배열 입력 받기
	printf("배열의 값:");
	for (int i = 0; i < NUM_DATA; i++)
	{
		scanf_s(" %lf", &arr[i]);
	}

	// 비교할 값 입력 받기
	printf("비교할 값:");
	scanf_s(" %lf", &compare);
	printf("%.1lf보다 큰 값:", compare);
	// 배열을 순회하며 비교할 값과 배열에 저장된 값을 비교
	for (int i = 0; i < NUM_DATA; i++)
	{
		// arr[i]가 comapre보다 크다면 출력
		if (arr[i] > compare)
		{
			printf(" %.1lf", arr[i]);
		}

	}
	printf("\n");
}
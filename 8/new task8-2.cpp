#include <stdio.h>
#define NUM_DATA 8
int main()
{
	char arr[NUM_DATA];
	char target1, target2;
	int t1_count = 0;
	int t2_count = 0;
	// 요소의 개수가 5인 char형 배열 입력 받기
	printf("배열의 값(char):");
	for (int i = 0; i < NUM_DATA; i++)
	{
		scanf_s(" %c", &arr[i]);
	}

	// target 값 입력 받기
	printf("target1 : ");
	scanf_s(" %c", &target1);
	printf("target2 : ");
	scanf_s(" %c", &target2);
	// 배열을 순회하며 비교할 값과 배열에 저장된 값을 비교
	for (int i = 0; i < NUM_DATA; i++)
	{
		// arr[i]와 tartget1이 같다면 t1_target +1
		if (arr[i] == target1)
		{
			t1_count += 1;
		}
		// arr[i]와 tartget2가 같다면 t2_target +1
		if (arr[i] == target2)
		{
			t2_count += 1;
		}

	}
	printf("배열에 포함된 %c의 갯수는 %d개, %c의 갯수는 %d개 입니다.", target1, t1_count, target2, t2_count);
}
#include<stdio.h>
#include<string.h>
int main() {
	char str1[30];
	char str2[30];
	char copy[30];
	// 문자가 달라지는 인덱스를 저장할 변수
	int diffIdx = -1;
	int len = 0;
	// 문자열 입력 받기 (scanf_s 사용)
	printf("문자열1을 입력하세요 : ");
	scanf_s("%s", str1, sizeof(str1));
	printf("문자열2를 입력하세요 : ");
	scanf_s("%s", str2, sizeof(str2));
	// str의 길이 저장하기
	len = strlen(str1);
	// 처음부터 중간까지 돌며
	for (int i = 0; i < len; i++)
	{
		if (str1[i] != str2[i])
		{
			// 두 문자열의 문자가 다르다면, 해당 인덱스를 저장하고 반복문 나가기
			diffIdx = i;
			break;
		}
	}
	// 만약 diffIdx가 초기화 한 값에서 변하지 않았다면, 두 문자열은 동일하다.
	if (diffIdx == -1)
	{
		// 빈 문자열을 생성한다.
		copy[0] = '\0';
	}
	// diffIdx가 업데이트 되었다면
	else
	{
		// str2의 diffIdx부터 마지막 문자까지 복사한다.
		strcpy_s(copy, &str2[diffIdx]);
	}
	// 생성된 문자열을 출력한다.
	printf("%s", copy);
}
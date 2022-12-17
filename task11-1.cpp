#include<stdio.h>
#include<string.h>
int main() {
	char str[30];
	char copy[30];
	int lastIdx = 0;
	// 문자열 입력 받기
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));
	// 입력받은 문자열의 길이가 2보다 작거나 같다면
	if (strlen(str) <= 2)
	{
		// 빈 문자열을 생성하고 출력하기
		copy[0] = '\0';
		printf("%s", copy);
		return 0;
	}
	// 2보다 크다면 입력받은 문자열의 1번 인덱스부터 복사하기 (첫 문자 제거)
	strcpy_s(copy, &str[1]);
	// 복사한 문자열의 길이를 구하여
	lastIdx = strlen(copy);
	// 마지막 문자 삭제하기
	copy[lastIdx - 1] = '\0';
	// 첫 문자와 마지막 문자자 제거된 문자열을 출력
	printf("%s", copy);
}
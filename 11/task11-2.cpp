#include<stdio.h>
#include<string.h>
int main() {
	char str[30];
	char tmp;
	int midIdx = 0;
	int len = 0;
	// 문자열 입력 받기
	printf("문자열을 입력하세요 : ");
	gets_s(str, sizeof(str));
	// str의 길이 저장하기
	len = strlen(str);
	// 중간 인덱스 저장하기
	midIdx = len / 2;
	// 처음부터 중간까지 돌며
	for (int i = 0; i < midIdx; i++)
	{
		// 앞에서 i번째와 뒤에서 i번째 바꾸기
		// len - 1 : 뒤에서 첫번째
		// len - 1 - i : 뒤에서 i번째
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
	// 문자의 순서가 반대인 문자열 출력하기
	printf("%s", str);
}
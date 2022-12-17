#define _CRT_SECURE_NO_WARNINGS // scanf error 방지를 위한 부분
#include<stdio.h>
#include<string.h>
struct point {
	int x, y;
};
int main() {
	// struct point type의 배열 선언
	struct point points[3];
	// 0-2번 인덱스에 입력을 저장한다.
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &points[i].x, &points[i].y);
	}
	// 화면에 인덱스 별 구조체의 멤버 변수를 출력한다.
	for (int i = 0; i < 3; i++)
	{
		printf("(%d, %d)\n", points[i].x, points[i].y);
	}
}
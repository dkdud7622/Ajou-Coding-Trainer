#define _CRT_SECURE_NO_WARNINGS // scanf error 방지를 위한 부분
#include<stdio.h>
#include<string.h>
struct point {
	int x, y;
};
void print_point(struct point pt);
struct point get_point();
int main() {
	// struct point type의 배열 선언
	struct point points[3];
	// 0-2번 인덱스에 입력을 저장한다.
	for (int i = 0; i < 3; i++)
	{
		points[i] = get_point();
	}
	// 화면에 인덱스 별 구조체의 멤버 변수를 출력한다.
	for (int i = 0; i < 3; i++)
	{
		print_point(points[i]);
	}
}
struct point get_point()
{
	point tmp;
	scanf("%d %d", &tmp.x, &tmp.y);
	return tmp;
}
void print_point(struct point pt)
{
	printf("(%d, %d)\n", pt.x, pt.y);
}
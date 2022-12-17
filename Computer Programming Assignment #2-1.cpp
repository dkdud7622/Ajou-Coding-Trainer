#include<stdio.h>
int gcd(int a, int b) {
	int small, large, n;

	// a와 b중 더 큰 수가 large에, 작은 수가 small에 할당됩니다.
	large = a > b ? a : b;
	small = a < b ? a : b;
	// small이 0이 되는 순간의 large가 최대 공약수이므로, 리턴합니다.
	while (small != 0) {
		printf("%d = %d*%d + %d\n", large, large / small, small, large % small);
		n = large % small;
		large = small;
		small = n;
	}
	return large;
}
int main() {
	int a, b;
	int result;
	printf("두 정수를 입력하시오.: ");
	scanf_s(" %d %d", &a, &b);
	// gcd 함수에서 if (smal == )에서 return 된 값이 저장됩니다.
	result = gcd(a, b);
	printf("%d과 %d의 최대공약수는 %d이다.", a, b, result);
	return 0;
}
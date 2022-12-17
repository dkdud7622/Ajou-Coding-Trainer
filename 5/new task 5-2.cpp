#include <stdio.h>
int main()
{
	double a, b;
	char op;
	printf("실수를 두 개 입력하시오: ");
	scanf_s("%lf %lf", &a, &b);
	printf("연산자를 입력하시오: ");
	scanf_s(" %c", &op);
	switch (op) {
	case '+':
		printf("%lf\n", a + b);
		break;
	case '-':
		printf("%lf\n", a - b);
		break;
	case '*':
		printf("%lf\n", a * b);
		break;
	case '/':
		printf("%lf\n", a / b);
		break;
	default:
		printf("Try Again\n");
	}
	return 0;
}
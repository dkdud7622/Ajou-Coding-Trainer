#include <stdio.h>
void arithmetic_operation(double a, double b, double* sum, double* sub, double* mul,
	double* div)
{
	*sum = a + b;
	*sub = a - b;
	*mul = a * b;
	*div = a / b;
}
int main()
{
	double a, b, sum, sub, mul, div;
	scanf_s(" %lf %lf", &a, &b);
	arithmetic_operation(a, b, &sum, &sub, &mul, &div);
	printf("사칙 연산의 결과\n");
	printf("%.2lf + %.2lf = %.2lf\n", a, b, sum);
	printf("%.2lf - %.2lf = %.2lf\n", a, b, sub);
	printf("%.2lf * %.2lf = %.2lf\n", a, b, mul);
	printf("%.2lf / %.2lf = %.2lf\n", a, b, div);
}
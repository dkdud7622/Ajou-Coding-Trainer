#define _CRT_SECURE_NO_WARNINGS // scanf error 방지를 위한 부분
#include<stdio.h>
#include<string.h>
struct employee {
	int entry_year;
	char name[9];
	char residence[6];
};

struct employee get_employee();
void print_employee(struct employee e);
int employee_equal(struct employee e1, struct employee e2);
void swap(struct employee* e1, struct employee* e2);

int main() {
	struct employee emp1, emp2;
	emp1 = get_employee();
	emp2 = get_employee();
	if (employee_equal(emp1, emp2))
		printf("두 개의 값은 같다.\n");
	else
		printf("두 개의 값은 다르다.\n");
	printf("swap 전: \n");
	print_employee(emp1);
	print_employee(emp2);
	swap(&emp1, &emp2);
	printf("swap 후: \n");
	print_employee(emp1);
	print_employee(emp2);
	return 0;
}

struct employee get_employee()
{
	// 입력받은 멤버 변수를 저장하기 위한 구조체를 선언한다.
	struct employee emp;
	// 구조체 멤버 변수를 초기화 한다.
	scanf("%d %s %s", &emp.entry_year, emp.name, emp.residence);
	return emp;
}

int employee_equal(struct employee e1, struct employee e2)
{
	// 모두 같다면 1(true)가 return된다.
	return (e1.entry_year == e2.entry_year && strcmp(e1.name, e2.name) == 0 &&
		strcmp(e1.residence, e2.residence) == 0);
}

void print_employee(struct employee e)
{
	// parameter로 받은 e의 멤버 변수를 출력한다.
	printf("Name : %s, Residence : %s, Entry Year : %d\n", e.name, e.residence,
		e.entry_year);
}

void swap(struct employee* e1, struct employee* e2)
{
	tmp = *e1;
	*e1 = *e2;
	*e2 = tmp;
}
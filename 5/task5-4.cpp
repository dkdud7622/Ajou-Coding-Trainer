#include <stdio.h>
int main()
{
	char input;
	printf("문자를 입력하시오: ");
	scanf(" %c", &input);
	switch (input) {
		//‘F’ 혹은 ‘f’인 경우
	case 'F':
	case 'f':
		printf("File Open\n");
		break;
		//‘E’ 혹은 ‘e’인 경우
	case 'E':
	case 'e':
		printf("Edit\n");
		break;
		//‘S’ 혹은 ‘s’인 경우
	case 'S':
	case 's':
		printf("Save\n");
		break;
		// 그 외의 문자인 경우
	default:
		printf("Try Again\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int ch;
	int count = 0;
	FILE* src = fopen("input.txt", "rt");
	FILE* dest = fopen("output.txt", "wt");
	if (src == NULL || dest == NULL) {
		printf("Error opening file.\n");
		exit(1);
	}
	while ((ch = fgetc(src)) != EOF) {
		// 현재 카운트가 30이라면 파일에 '\n'을 쓰고, count를 0으로 초기화 한다.
		if (count == 30)
		{
			fputc('\n', dest);
			count = 0;
		}
		// 만약 파일에서 '\n'을 만난 경우, continue를 통해 다음 ch로 넘어간다.
		if (ch == '\n') continue;
		fputc(ch, dest);
		count++;
	}
	if (feof(src))
		printf("Copy complete");
	else
		printf("Error while copying");
	fclose(src);
	fclose(dest);
	return 0;
}
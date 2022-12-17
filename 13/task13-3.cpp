#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	// 쓰레기 값 방지를 위해 0으로 초기화 한다.
	int nums[100] = { 0 };
	FILE* binaryp1 = fopen("nums1.bin", "rb");
	//FILE* binaryp2 = fopen("nums2.bin", "rb");
	int sum = 0;
	if (binaryp1 == NULL) {
		printf("Error opening file.\n");
		exit(1);
	}
	int complete = fread(nums, sizeof(int), 100, binaryp1);
	// 읽어진 수 만큼 반복하여, nums에 저장된 값들을 더한다.
	for (int i = 0; i < complete; i++)
	{
		sum += nums[i];
	}
	printf("%d", sum);
	fclose(binaryp1);
}
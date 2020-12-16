#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

	int input = 0, result = 0, digit = 0;
	int devider = 100;

<<<<<<< HEAD:code/ch07/dowhilelab.c
	printf("양의 정수[100~999] 입력 : ");
=======
	printf("양의 정수[100~999] 입력 :");
>>>>>>> 0adb3ee213e3d00f80acc8147b90fb9c5d151b43:암호/ch07/dowhilelab.c
	scanf("%d", &input);
	result = input;
	do {
		digit = result / devider;
		result %= devider;
<<<<<<< HEAD:code/ch07/dowhilelab.c
		printf("%3d단위 출력: %d\n", devider, digit);
=======
		printf("%3d단위 : %d\n", devider, digit);
>>>>>>> 0adb3ee213e3d00f80acc8147b90fb9c5d151b43:암호/ch07/dowhilelab.c
		devider /= 10;
	} while (devider >= 1);
	return 0;
}

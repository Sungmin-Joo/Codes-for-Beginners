#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_1(void); 
int main(void) {
	int a = 10;
	int b = 11;

	printf("main의 주소 : %08p\n", main);
	printf("test_1의 주소 : %08p\n", test_1);

	printf("a의 주소 : %08p\n", &a);
	printf("b의 주소 : %08p\n", &b);
	test_1();
	return 0;
}

void test_1() {
	int c = 12;
	int d = 13;
	printf("c의 주소 : %08p\n", &c);
	printf("d의 주소 : %08p\n", &d);
}
/*
--- 실행 결과 ---
main의 주소 : 01311080
test_1의 주소 : 01311100
a의 주소 : 00F3F800
b의 주소 : 00F3F7FC
c의 주소 : 00F3F7EC
d의 주소 : 00F3F7E8

지역변수와 지역변수 사이에 두 개의 포인터 공간이 있는데 이 공간에
bp와 ip가 들어가게 된다.
*/
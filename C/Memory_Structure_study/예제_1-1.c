#include <stdio.h>

int main() {
	int *ptr;
	int num = 10;
	ptr = &num;
	printf("%d\n", *ptr);
	//정상적인 포인터 접근.
	//포인터 변수 ptr에 num의 주소를 대입하여 ptr이 10이라는 값을가진 num을 가리키고있다.

	return 0;
}
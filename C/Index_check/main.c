#include <stdio.h>


int main() {
	int i, a[40];

	for (i = 0; i < 40; i++) {
		a[i] = i;
	}

	for (i = 0; i < 50000000; i += 1) {
		printf("a[%d]의 주소 값은 : 0x%08p, 값은 : 0x%08x\n", i, &a[i], a[i]);
	}
    //https://sungmin-joo.tistory.com/9 에 내용 정리

	return 0;
}a
#include <stdio.h>

int main() {
    int *ptr;
    int a = 10;
    ptr[0] = 10;
    printf("%d\n", *ptr);
    //ptr변수는 메모리가 할당되지않은 포인터
    //아직 할당되지 않은 메모리에 index 접근을 시도하여 엑세스 위반이 발생
    return 0;
}
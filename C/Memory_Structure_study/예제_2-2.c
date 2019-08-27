#include <stdio.h>

int main() {
    char *str = "apple";
    str[0] = 'B';
    printf("%s\n", str);
    //포인터 str을 "apple" 로 초기화 했기 때문에
    //str 은 init영역에 존재하는 리터럴 타입("apple")을 가르키게 된다.
    //다음 블로그 포스팅에서 init과 rodata의 차이를 포스팅 할 예정.
    return 0;
}
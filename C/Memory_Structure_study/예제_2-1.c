#include <stdio.h>

int main() {
    char str[10] = "apple";
    str[0] = 'B';
    printf("%s\n", str);
    //char형 데이터가 10개 들어갈 수 있는 공간을 선언한 뒤 "apple" 이라는 문자열로 초기화
    //미리 할당된 배열에 접근을 시도하는 작업은 ok
    return 0;
}
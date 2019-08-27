#include <stdio.h>
#include <string.h>


void main() {
	char str[3][20] = { 0, },**ptrptr,*ptr[3],*ptr_str[3];
	int i;

	strcpy(str[0], "JaJa");
	strcpy(str[1], "JeJe");
	strcpy(str[2], "JoJo");
	/*
	str 변수를 보면 미리 data영역에 공간이 할당되고 읽기/쓰기가 가능하다.
	*/
	ptr[0] = str[0];
	ptr[1] = str[1];
	ptr[2] = str[2];

	for (i = 0; i < 3; i++)
		printf("%s\n", ptr[i]);
	
	*ptr[0] = 'Z';
	*(ptr[0] + 2) = 'Z';
	*ptr[1] = 'Z';
	*(ptr[1] + 2) = 'Z';
	*ptr[2] = 'Z';
	*(ptr[2] + 2) = 'Z';

	for (i = 0; i < 3; i++)
		printf("%s\n", ptr[i]);
	printf("=====포인터로 글자 변경 가능=====\n");


	ptr_str[0] = "JaJa";
	ptr_str[1] = "JeJe";
	ptr_str[2] = "JoJo";
	/*
	문자열들이 읽기 전용 메모리로 저장되기때문에 수정이 불가능하다.
	rodata영역에 문자열이 있는데, init(const)영역과 rodata영역은 읽기만 가능한(READ ONLY) 메모리 영역이다.
	init과 rodata의 차이는 추후 따로 정리할 예정이다.
	포인터만 데이터 영역에 포함된다.
	*/
	for (i = 0; i < 3; i++)
		printf("%s\n", ptr_str[i]);
	printf("=====이 밑에 코드는 오류발생(참조위반) =====\n");

	*ptr_str[0] = 'Z';
	*(ptr_str[0] + 2) = 'Z';
	*ptr_str[1] = 'Z';
	*(ptr_str[1] + 2) = 'Z';
	*ptr_str[2] = 'Z';
	*(ptr_str[2] + 2) = 'Z';

	/*
	rodata영역의 메모리에 쓰기명령을 실행했기떄문에 참조위반으로 코드가 죽는다.
	
	읽기전용 메모리 영역은 대표적으로 두가지
	init(const)영역, rodata영역 이 있다.
	init(const)영역은 "선언과 동시에 초기화된 변수의 상수"가 기록 된다고 한다.
	))예시
		int v = 3; 에서 3
		const double pi = 3.14; 에서 3.14

	rodata은 read only data 의 줆임말로, rodate영역은 초기화 구문을 제외한 모든 리터럴 타입을 기록한다.
	))예시
		int b;
		b = 30;   에서 30 이 해당한다.
	*/

	for (i = 0; i < 3; i++)
		printf("%s\n", ptr_str[i]);
}
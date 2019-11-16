int main() {
	//널포인터는 아무것도 가리키지 않는 포인터다.
	char* ptr_1 = "0";
	char* ptr_2;
	char* ptr_3 = NULL;
	ptr_2 = 0;


	printf("ptr_1이 가르키는 값 : %d\n", *ptr_1);
	printf("ptr_1 : %d\n", ptr_1);
	printf("ptr_2 :%d\n", ptr_2);
	printf("ptr_3 :%d\n", ptr_3);

	/*
	ptr_2 = 0과
	ptr_2 = Null은 같다.
	근데 왜 면접에선 확실하게 못 말하냐?!!
	*/
	return 0;
}
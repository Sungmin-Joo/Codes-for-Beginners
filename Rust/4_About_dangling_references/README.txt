이 소스코드는 컴파일이 되지 않는다.
컴파일 오류 내용에서
"this function's return type contains a borrowed value, but there is no value for it to be borrowed from"
 => "이 함수의 반환 타입은 빌린 값을 포함하고 있는데, 빌려온 실제 값은 없습니다."
drop 으로 해제한 메모리를 참조하는 참조자를 반환하기때문에 컴파일 에러가 발생. 


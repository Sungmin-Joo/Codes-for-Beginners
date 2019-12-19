package project;

public class Main {
    public static void main(String[] args) {
        //간단한 조건문 예제
        int a = 10;

        if(a > 5){
            System.out.println("a의 값은 5보다 큰 값으로 초기화 되었습니다.");
        } else if(a == 10){
            System.out.println("a의 값은 10으로 초기화 되었습니다.");
        } else {
            System.out.println("a의 값은 5보다 작거나 같은 값으로 초기화 되었습니다.");
        }

        //간단한 선택문 예제
        //조건에 break문을 생략한다면 break를 만날 때 까지 조건무 내부 명령이 수행된다.
        int b = 10;
        switch(b) {
            case 10:
                System.out.println("b는 10입니다.");
                //break;
            case 5:
                System.out.println("b는 5입니다.");
                break;
            default:
                System.out.println("default 조건 수행.");

        }
        //22번째 줄의 주석을 해제하면 정상적으로 작동할 것이다.
    }

}

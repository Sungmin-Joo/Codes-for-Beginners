package project;

public class Main {
    public static void main(String[] args) {
        //간단한 반복문
        //for(시작조건 ; 실행조건 ; 증감식)
        for(int i = 1; i <= 10; i++){
            //for문의 실행조건을 만족할 시 동작하는 구간.
            System.out.println(i + "번째 반복문 입니다.");
        }

        //간단한 구구단 프로그램 예제
        for(int i = 1; i < 10; i++){
            //for문의 실행조건을 만족할 시 동작하는 구간.
            System.out.println(i + "단 입니다.");
            for(int j = 0; j < 10; j++){
                 System.out.println(i + " x " + j + " = " + i * j);
            }
        }

        //while(실행조건)
        int i = 1;
        while(i <= 10){
            //while문의 실행조건을 만족할 시 동작하는 구간.
            System.out.println(i + "번째 반복문 입니다.");
            i++;
        }
    }

}

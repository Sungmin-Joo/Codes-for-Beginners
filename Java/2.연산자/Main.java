package project;

public class Main {
    public static void main(String[] args) {
        //연산자의 종류
        //대입 연산자
        int a = 7;
        System.out.println("\"int a = 10;\"을 수행한 후 a : " + a);

        //덧셈 연산자
        int b = 13;
        System.out.print("\"a + b\"를 출력하면 : ");
        System.out.println(a + b);

        String c = "13";
        System.out.print("\"a + c\"를 출력하면 : ");
        System.out.println(a + c);
        //같은 덧셈 연산자여도 결과가 다르게 출력됨.

        //뺄셈 연산자
        System.out.print("\"a - b\"를 출력하면 : ");
        System.out.println(a - b);

        //곱셈 연산자
        System.out.print("\"a * b\"를 출력하면 : ");
        System.out.println(a * b);

        //나눗셈 연산자 - 몫을 반환하는 연산자 라고 생각
        System.out.print("\"a / b\"를 출력하면 : ");
        System.out.println(a / b);

        //나머지 연산자
        System.out.print("\"a % b\"를 출력하면 : ");
        System.out.println(a % b);


        //논리연산자
        //AND연산
        System.out.println(true && true);
        System.out.println(true && false);
        //OR연산
        System.out.println(false || false);
        System.out.println(true && false);
        //NOT연산
        System.out.println(!true);
        System.out.println(!false);

        //비트연산자
        //<< 왼쪽 시프트연산자
        System.out.println(Integer.toBinaryString(0b11011111<<2));
        //>> 오른쪽 시프트연산자
        System.out.println(Integer.toBinaryString(0b11011111111111111111111111111111>>1));
        //>>> 논리 오른쪽 시프트연산자
        System.out.println(Integer.toBinaryString(0b11011111111111111111111111111111>>>1));
    }

}

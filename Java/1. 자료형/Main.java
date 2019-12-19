package project;

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello Dev_Joo!");

        //Java의 대표적인 자료형
        //정수형
        int intVar = 1;
        short shortVar = 1;
        long longVar = 1;
        System.out.println("----- 정수형 자료형의 정보 -----");
        System.out.println("int형 변수의 크기 : " + Integer.BYTES);
        System.out.println("short형 변수의 크기 : " + Short.BYTES);
        System.out.println("long형 변수의 크기 : " + Long.BYTES);
        System.out.println("-------------------------------");

        //실수형 - float은 f라는 글자로 명시를 해줘야 한다.
        float floatVar = 1.2f;
        double doubleVar = 334.256;
        System.out.println("----- 실수형 자료형의 정보 -----");
        System.out.println("float형 변수의 크기 : " + Float.BYTES);
        System.out.println("double형 변수의 크기 : " + Double.BYTES);
        System.out.println("-------------------------------");

        //boolean형
        boolean bolleanVar = true;
        System.out.println("----- boolean형 자료형의 정보 -----");
        System.out.println("boolean형의 크기는 VM의 구현에 따라 다르다.");
        System.out.println("-------------------------------");

        //문자형
        char charVar = 'c';
        System.out.println("----- 문자형 자료형의 정보 -----");
        System.out.println("char형 변수의 크기 : " + Character.BYTES);
        System.out.println("-------------------------------");

        //바이트형
        byte byteVar = 127;
        System.out.println("----- 바이트형 자료형의 정보 -----");
        System.out.println("byte형 변수의 크기 : " + Byte.BYTES);
        System.out.println("-------------------------------");

        //Java의 변수와 상수
        //변수
        int num = 2;
        System.out.println("--------- 변수와 상수 ---------");
        System.out.println("num is variable -> " + num);
        System.out.println("if \"num = 3;\"");
        num = 3;
        System.out.println("num is variable -> " + num);

        //상수
        final int s_num = 10;
        System.out.println("s_num is constants -> " + s_num);
        System.out.println("-------------------------------");
    }

}

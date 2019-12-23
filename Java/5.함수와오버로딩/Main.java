package project;

public class Main {
    public static void new_func_1() {
        System.out.println("This is new_func_1");
    }
    
    //main도 하나의 함수이다.
    public static void main(String[] args) {
        //리턴값이 없는 함수 호출
        new_func_1();
        
        int result;
        
        result = new_func_2(3, 4);
        System.out.println("new_func_2's return value : " + result);
        result = new_func_2(3, 4, 5);
        System.out.println("overloading new_func_2's return value : " + result);
    }
    
    //절차적 언어인 c언어와 다르게 main보다 나중에 함수를 선언해도 main문에서 함수를 사용할 수 있다.
    public static int new_func_2(int a, int b) {
        System.out.println("This is new_func_2");
        System.out.println("return a + b");
        return a + b;
    }
    
    //함수의 오버로딩 예시이다. 후에 공부할 오버라이딩과는 다른 개념이다.
    public static int new_func_2(int a, int b, int c) {
        System.out.println("This is overloading new_func_2");
        System.out.println("return a + b + c");
        return a + b + c;
    }

}

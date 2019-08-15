fn main() {
    println!("Hello, world!");
    another_function();
    
    println!("33 을 매개변수로 입력.");
    another_function2(33);
    
    println!("100, 101 을 매개변수로 입력.");
    another_function3(100, 101);
    
    println!("정수를 반환하는 함수.");
    let x = another_function4(5);
    println!("반환값은 {} 입니다.",x);

    println!("메인문 안에서 함수(구문)정의");
    let y = {
        let temp = 3;
        temp + 3
        //반환값 문장에서는 ';' 생략
    };
    println!("y 를 변수처럼 호출 : {}",y);
}

//함수의 선언 위치는 고려하지 않아도 된다.
fn another_function() {
    println!("첫 번째 함수 호출!");
}

fn another_function2(temp: i32) {
    println!("두 번째 함수 매개변수는 {} 입니다.",temp);
}

fn another_function3(x: i32, y: i32){
    println!("첫 번째 매개변수 : {}, 두 번째 매개변수 : {}",x,y);
}

fn another_function4(x: i32) -> i32 {//-> 연산자로 반환값의 데이터형을 명시
    x + 30
    //반환값을 나타낼때는 ';'를 생랼합니다.
}

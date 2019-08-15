fn main() {
    //1. if 문으로 변수선언하기
    let condition = false;
    let number = if condition {
        10
    } else {
        100
    }; 
    //10 과 100 도 if 문 안에서 반환 값 이기때문에 ';'를 사용하지 않음.
    //if 의 반환 데이터 형식과  else 의 반환 데이터 형식은 같아야 한다!
    println!("변수 'number'의값은 {} 입니다.",number);
    println!("\n");
    
    //반복문의 종류 테스트
    //1. loop
    println!("1. loop");
    let mut count = 5;
    loop{
        println!("loop test {}", 6 - count);
        count = count - 1;
        if count == 0 {
            break;
        }
    }
    println!("\n");

    //2. while
    println!("2. while");
    count = 5;
    while count != 0 {
        println!("while test {}", 6 - count);
        count = count - 1;
    }
    println!("\n");
    
    //3. for
    let temp = [10, 20, 30, 40, 50];
    count = 0;

    /*
     *while count < 5 {
     *    println!("the value is: {}", temp[count]);
     *    count = count + 1;
     *}
     */
    println!("3. for");
    println!("Do : let temp = [10, 20, 30, 40, 50];");

    for num in temp.iter() {
        println!("'for' test : {}", num);
    }
    println!("\n");
    
    //유용한 for 문 표현
    println!("유용한 for 문 범위 표현");
    for num in (1..4).rev() {
        println!("{} <-- num",num);
    }
    println!("\n");

}

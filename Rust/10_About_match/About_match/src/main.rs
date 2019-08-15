enum Coin {
    Penny,
    Nickel,
    Dime,
    Quarter,
}

impl Coin{
    fn value_plz(&self) -> u32 {
        match self {
            Coin::Penny => 1,
            Coin::Nickel => 5,
            Coin::Dime => 10,
            Coin::Quarter => {
                println!("Most biggist score!");
                25
            },
        }
    }
}
//match함수를 사용해서 mapping 가능하다.

fn plus_one(x: Option<i32>) -> Option<i32> {
    match x {
        None => None,
        Some(i) => Some(i + 1),
        //반드시 None 에 대해서도 정의해 줘야 한다.
    }
}


fn main() {
    let co = Coin::Quarter;
    let score = co.value_plz();
    println!("Score is {}",score);

    //palceholder
    println!("\n");
    let value_u8 = 3;
    match value_u8 {
        1 => println!("one"),
        3 => println!("three"),
        _ => (),
        //'_' 는 매칭되지 않는 모든 값을 의미
    }
    
    println!("\n");
    //Option과 match 를 활용
    let five = Some(5);
    let none = plus_one(None);
    let six = plus_one(five);

}

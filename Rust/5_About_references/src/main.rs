fn main() {
    let mut s = String::from("Hi~ Joo!");
    
    let temp = &mut s;
    change(temp);
    //가변 참조자를 선언하여 change 함수에 넘겨준다.
    //가변 '참조자' 이기때문에 이동(move)를 고려 할 필요가 없다.
    //가변 참조자는 한 스코프에 한 번만 선언 가능하다.(한 개만 정의 가능)
    //불변 참조자는 여러개가 선언되어도 시스템에 큰 영향이 없으므로 가능.
    // + 가변, 불변 참조자를 동시에 한 스코프에서 선언하는것도 금지된다.

    println!("{}",s);
    //스코프가 끝나고 drop이 호출 된다.
}

fn change(some: &mut String) {
    some.push_str(" good morning??");
    //가변참조자를 매개변수로 받아서 수정하는 작업을 수행한다.
}

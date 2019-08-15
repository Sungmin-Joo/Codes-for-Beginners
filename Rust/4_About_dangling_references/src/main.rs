fn main() {
    let dangle_reference = dangle();
}

fn dangle() -> &String {
    let str1 = String::from("Hi! Joo!");
    &s
    //참조자를 반환해주지만 dangle 에 해당하는 스코프가 종료되면서
    //str1 는 drop 이 호출되고반환되는 참조자는 해제된 메모리를 참조하기 떄문에 위험하다.
    //rust는 사전에 이러한 오류를 방지해준다.(컴파일이 되지 않음)
    //s 자체를 반환해주면 문자열이 이동(move)하기 떄문에 문제를 해결할 수 있다.
}

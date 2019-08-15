fn main() {
    let a = [1, 2, 3, 4, 5];
    let slice = &a[1..3];
    //[a..b] => 변수의 인덱스 'a' 부터 인덱스 'b - 1' 까지를 표현
    //slice 는 [2, 3] 가 된다.
    //slice 의 각 원소를 출력해보면 다음과 같다.
    for i in slice {
        println!("{}",i);
    }
}

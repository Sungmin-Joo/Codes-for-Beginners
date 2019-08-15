fn main() {
    //let str1 = "Joo Hi";
    //위 표현은 스트링 레터럴을 선엉하는 표현이다.
    //스택 메모리에 저장되고, 불변의 성질이다.
    
    let mut str1 = String::from("Hi Joo!!");
    str1.push_str(" good morning??");
    println!("{}",str1);

    function_move_str(str1);
    //스코프가 종료되었지만  function_move_str 으로 str1 이
    //이동 했음으로 아무 일이 일어나지 않는다.
}

fn function_move_str(some: String) {
    println!("내용 : \"{}\" 인 문자열을 받았습니다.",some);
    //함수가 실행되고 스코프가 종료될때 some이 해제된다.
}

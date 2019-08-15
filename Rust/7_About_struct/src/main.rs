struct User{
    username: String,
    email: String,
    sign_in_count: u64,
    active: bool,
}

fn main() {
    let Joo = User{
        email: String::from("wntjdals2015@naver.com"),
        username: String::from("Sungmin_Joo"),
        active: true,
        sign_in_count: 1,
    };

    let Seo = build_user(String::from("wn2012@gmail.com")
                         , String::from("Hyeongjin_Seo"));

    let Noop = User{
        email: String::from("noop@naver.com"),
        username: String::from("noop"),
        ..Seo
    };
    println!("Joo_name : {}",Joo.username);
    println!("Seo_name : {}",Seo.username);
    println!("Noop_name : {}",Noop.username);
}

fn build_user(email: String, username: String) -> User{
    User{
        email,
        username,
        active: true,
        sign_in_count: 1,
    }
    //email과 username은 매개변수와 User구조체의 필드명과 같기때문에
    //위와같이 표현할 수 있다.
}

enum IpAddrKind {
    V4(u8, u8, u8, u8),
    V6(String),
}

impl IpAddrKind {
    fn call(&self) {
        println!("Ip Hi!");
    }
}

fn main() {
    let four = IpAddrKind::V4(192,168,35,203);
    let six = IpAddrKind::V6(("::1").to_string());

    four.call();
}

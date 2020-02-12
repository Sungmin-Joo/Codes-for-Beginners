import UIKit
//간단한 조건문과 "?", "??"기호에 대한 문법을 정리

let nameList = ["주성민", "조승아", "안종석", "노준호"]

//for 반복문의 문법은 python과 비슷하다.
for name in nameList{
    //조건문의 결과는 무조건 boolean이여야 한다.
    if name == "주성민"{
        print(name, "은 주인 입니다.")
    } else if name == "조승아"{
        print(name, "은 주인의 여자친구 입니다.")
    } else {
        print(name, "은 그냥 이름입니다.")
    }
}
/*result :
 주성민 은 주인 입니다.
 조승아 은 주인의 여자친구 입니다.
 안종석 은 그냥 이름입니다.
 노준호 은 그냥 이름입니다.
 */

//for 문에 where절을 추가하여 추가적인 조건을 확인할 수 있게 하는 방법
for i in 0..<100 where (i % 4) == 0 {
    print("\(i) is muliple of 4")
}
// 결과는 생략..

//조건문에 boolean이 와야하기 때문에 퀘스천 마크(?)를 사용한 특이한 문법도 있다.
let isString: String? = "I'm Not nil"
if let str = isString{
    print("isString is \"\(str)\", not nil!")
}
/*
 result : isString is "I'm Not nil", not nil!
 자료형에 퀘스쳔 마크를 사용하면 nil과 비교가 가능한 자료형이 된다.
 위 예제 코드에서 퀘스쳔 마크를 제거한다면 조건문 if의 조건 절에서
 컴파일 오류가 발생할 것이다.
 퀘스쳔 마크를 사용함으로써 if문의 조건 절에서 isString의 값이 str에 대입된다.
 nil이 아니라면 "true"의 의미를, nil값이라면 false의 의미를 갖는다.
 또한 true라면 조건문 내부에서 지역 변수나 지역 상수로 사용 가능하다.
 */


//더블 퀘스천 마크(??)문법
//let nickName: String? = "Big-Joo"
let nickName: String? = nil
let fullName: String = "Joo sungmin"
let informalGreeting = "Hi \(nickName ?? fullName)"
print(informalGreeting)
//result : Hi Joo sungmin
//default로 "??"기호의 우측 값을 가지고, 좌측 변수가 nil이 아니라면 촤측 값을 가지게 된다.


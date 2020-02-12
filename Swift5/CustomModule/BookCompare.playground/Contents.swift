import UIKit

//ISBN으로 같은 책인지 판별하는 간단한 프로토콜 구현하기
let books = [
    [
        "title": "멜로디 봉봉 크리스마스 캐럴",
        "author": "김영아",
        "price": "16000",
        "isbn": "9477871915 8809477871913"
    ],
    [
        "title": "멜로디 봉봉 <b>크리스마스</b> 캐럴",
        "author": "김 영 아",
        "price": "15500",
        "isbn": "9477871915 8809477871913"
    ],
    [
        "title": "반짝반짝 행복한 크리스마스",
        "author": "샘 태플린",
        "price": "17000",
        "isbn": "9264181245 8809264181249"
    ],
    [
        "title": "반짝반짝 행복한 <b>크리스마스</b>",
       "author": "샘태플린",
        "price": "16500",
        "isbn": "9264181245 8809264181249"
    ],
    [
        "title": "멜로디봉봉크리스마스캐럴",
       "author": "샘 태 플 린",
        "price": "13000",
        "isbn": "9477871915 8809477871913"
    ]
]

protocol ConvertIoString {
    var convertFunc: String { get }
}

struct Book {
    let title: String
    let author: String
    let price: String
    let isbn: String
}

extension Book: Equatable{
    static func == (lhs: Self, rhs: Self) -> Bool {
        return lhs.isbn ==  rhs.isbn
    }
}

extension Book: ConvertIoString {
    var convertFunc: String {
        return "|title : \(title), author : \(author), price : \(price), isbn : \(isbn)"
    }
}

var bookArray = [Book]()

for book in books {
    guard let bookTitle = book["title"] else { break }
    guard let bookAuthor = book["author"] else { break }
    guard let bookPrice = book["price"] else { break }
    guard let bookIsbn = book["isbn"] else { break }

    bookArray.append(Book(title: bookTitle, author: bookAuthor, price: bookPrice, isbn: bookIsbn))
}

let whatBook = bookArray[0]

print("비교대상 : \(whatBook)")
print("------------------------------------------------")
for book in bookArray[1...] {
    if whatBook == book {
        print("비교하는 책과 같은 책을 찾았습니다.")
        print("정보 : \(book)")
    }
}
/*
 result :
 비교대상 : Book(title: "멜로디 봉봉 크리스마스 캐럴", author: "김영아", price: "16000", isbn: "9477871915 8809477871913")
 ------------------------------------------------
 비교하는 책과 같은 책을 찾았습니다.
 정보 : Book(title: "멜로디 봉봉 <b>크리스마스</b> 캐럴", author: "김 영 아", price: "15500", isbn: "9477871915 8809477871913")
 비교하는 책과 같은 책을 찾았습니다.
 정보 : Book(title: "멜로디봉봉크리스마스캐럴", author: "샘 태 플 린", price: "13000", isbn: "9477871915 8809477871913")
 */

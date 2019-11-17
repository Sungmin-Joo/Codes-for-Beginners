import socket
import argparse
host = "127.0.0.1"
port = 4000
if __name__ == '__main__':
    #parser와 관련된 메서드 정리된 블로그 : https://docs.python.org/ko/3/library/argparse.html
    #description - 인자 도움말 전에 표시할 텍스트 (기본값: none)
    #help - 인자가 하는 일에 대한 간단한 설명.
    parser = argparse.ArgumentParser(description="\nJoo's server\n-p port\n")
    parser.add_argument('-p', help="port", required=True)

    args = parser.parse_args()
    port = int(args.p)
    #IPv4 체계, TCP 타입 소켓 객체를 생성
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    #포트를 사용 중 일때 에러를 해결하기 위한 구문
    server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)

    #ip주소와 port번호를 함께 socket에 바인드 한다.
    #포트의 범위는 1-65535 사이의 숫자를 사용할 수 있다.
    server_socket.bind((host, port))

    #서버가 최대 1개의 클라이언트의 접속을 허용한다.
    server_socket.listen()

    while 1:
        #클라이언트 함수가 접속하면 새로운 소켓을 반환한다.
        client_socket, addr = server_socket.accept()

        print("접속한 클라이언트의 주소 입니다. : ", addr)

        string = client_socket.recv(1024).decode()
        print("받은 데이터는 \"", string, "\" 입니다.", sep="")

        #string = str(string[::-1])
        client_socket.sendall(string.encode())

        #클라이언트에게 반전 메세지를 보냄
        print("클라이언트에게 다음의 메세지를 보냈습니다.\n->",string)
        client_socket.close()
    server_socket.close()
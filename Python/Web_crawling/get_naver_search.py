from bs4 import BeautifulSoup
import requests
import re

url = 'https://www.naver.com/'
response =  requests.get(url = url, verify=False)
soup = BeautifulSoup(response.text, 'html.parser')

words = soup.select('.ah_list .ah_k')
#BeauticulSoup 의 get_text() 함수를 사용 할 수도 있고,
#정규식을 사용하여 태그를 제거 할 수도 있다.

print('----------------------------------')
for i in range(20) :
    print(i+1, '위',words[i].get_text())

#네이버의 실시간 검색어를 사용했다
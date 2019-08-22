from bs4 import BeautifulSoup
import requests
import re

url = 'https://www.daum.net/'
response =  requests.get(url = url, verify=False)
soup = BeautifulSoup(response.text, 'html.parser')

words = soup.select('.hotissue_mini .link_issue')
for i in range(10):
    print(i+1, '위 : ', words[i].get_text())

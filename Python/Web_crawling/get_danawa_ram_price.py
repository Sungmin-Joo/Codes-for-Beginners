# -*- coding: utf-8 -*-
from bs4 import BeautifulSoup
import requests
header = {
    'Referer': 'http://prod.danawa.com',
    'User-Agent': "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.100 Safari/537.36"
}

urls = ["http://prod.danawa.com/info/?pcode=5937666&cate=1131326",
        "http://prod.danawa.com/info/?pcode=5941995&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6460148&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6460155&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6168338&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6168351&cate=1131326",
        "http://prod.danawa.com/info/?pcode=5680228&cate=1131326",
        "http://prod.danawa.com/info/?pcode=5680241&cate=1131326",        
        ]
for ii in urls:
    response =  requests.post(url = ii,headers = header)
    soup = BeautifulSoup(response.text, 'html.parser')
    price = soup.select('.lowest_price .lwst_prc .prc_c')[0].get_text()
    name = soup.select('.top_summary .prod_tit')[0].get_text()
    print(name, ' : ',price,'원 입니다.')
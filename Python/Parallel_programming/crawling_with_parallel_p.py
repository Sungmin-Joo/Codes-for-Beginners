# -*- coding: utf-8 -*-
from bs4 import BeautifulSoup
import requests
import multiprocessing
import time

header = {
    'Referer': 'http://prod.danawa.com',
    'User-Agent': "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.100 Safari/537.36"
}


def craw_func(x):
    response =  requests.post(url = x,headers = header)
    soup = BeautifulSoup(response.text, 'html.parser')
    price = soup.select('.lowest_price .lwst_prc .prc_c')[0].get_text()
    name = soup.select('.top_summary .prod_tit')[0].get_text()
    print(name, ' : ',price,'원 입니다.')
urls = [
        "http://prod.danawa.com/info/?pcode=5937666&cate=1131326",
        "http://prod.danawa.com/info/?pcode=5941995&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6460148&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6460155&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6168338&cate=1131326",
        "http://prod.danawa.com/info/?pcode=6168351&cate=1131326",
        "http://prod.danawa.com/info/?pcode=5680228&cate=1131326",
        "http://prod.danawa.com/info/?pcode=5680241&cate=1131326",        
        ]
if __name__ == '__main__':
    start = time.time()
    p = multiprocessing.Pool(processes=4)
    answer = p.map(craw_func,urls)
    p.close()
    p.join()
    print('%s초'%(time.time() - start))
    '''
    test this
    'processes = 4' vs 'processes = 1'
    '''
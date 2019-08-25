# -*- coding: utf-8 -*-
import time
import multiprocessing

def func(x):
    result = 0
    for i in x:
        result += i
    return result
    

if __name__ == '__main__' :
    
    
    start = time.time()
    p1 = [i for i in range(50000)]
    p2 = [i for i in range(50000,100000)]
    p3 = [i for i in range(100000,150000)]
    p4 = [i for i in range(150000,200000)]
    
    process_list = [p1,p2,p3,p4]
    answer = 1
    for _ in process_list:
        answer *= func(_)
    end = time.time()
    
    print('sequence programming : %s sec' %(end - start))
    print('answer : %d' %(answer))
    
    start = time.time()
    answer=0
    p = multiprocessing.Pool(processes=4)
    answer = p.map(func,process_list)
    p.close()
    p.join()
    temp = 1
    for i in answer:
        temp*= i 
    print('parallel programming : %s sec' %(time.time() - start))
    print('answer : %d' %(temp))
    
'''
---------- result ----------
p1
p2
p3
p4
sequence programming : 8.00560398101807 sec
p1
p2
p3
p4
parallel programming : 2.4593899250030518 sec
'''
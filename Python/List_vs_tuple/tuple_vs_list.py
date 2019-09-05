list_d = [1,'2',3,'4']
tuple_d = ('1',2,'3',4)

print(list_d[0])
print(tuple_d[1])

for i in list_d:
    print(i)
for i in tuple_d:
    print(i)



list_d.append(5)
print(list_d)

#아래 코드는 에러가 발생.
tuple_d.append('d')
print(tuple_d)
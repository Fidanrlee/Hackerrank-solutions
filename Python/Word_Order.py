from collections import Counter, OrderedDict

num = int(input())
list_ = []
for i in range(num):
    list_.append(input())

dic_ = Counter(list_)
print(len(dic_))
dic_ = OrderedDict(dic_).values()
print(*list(dic_))

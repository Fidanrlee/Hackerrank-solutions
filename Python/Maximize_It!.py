from itertools import product
n, M = map(int,input().split())
list_1 = []
for i in range(n):
    num, *list_ = list(map(int,input().split()))
    list_1.append(list_)
print(max(map(lambda x: sum([i**2 for i in x])%M, product(*list_1))))
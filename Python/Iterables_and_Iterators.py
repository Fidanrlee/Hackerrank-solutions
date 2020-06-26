# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
num = int(input())
list_ = input().split()
k = int(input())
list1 = list(combinations(list_,k))
cont = 0
for i in list1:
    if 'a' in i:
        cont += 1
print("{:.3f}".format(cont/len(list1)))

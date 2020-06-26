# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque

num = int(input())
for _ in range(num):
    m = int(input())
    d = deque()
    list_d = deque(map(int, input().split()))
    pivot = True
    prvs = max(list_d[0], list_d[-1])
    while list_d:
        cur = max(list_d[0], list_d[-1])
        if prvs == list_d[0]:
            list_d.popleft()
        else:
            list_d.pop()

        if prvs >= cur:
            prvs = cur
        else:
            pivot = False
            break

    print('Yes' if pivot else 'No')

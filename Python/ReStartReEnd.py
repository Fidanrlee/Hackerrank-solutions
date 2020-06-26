import re
s = input()
k = input()
frmt = re.compile(k)
m = frmt.search(s)

if m:
    print('({0},{1})'.format(m.start(), m.end() - 1))
    m = frmt.search(s,m.start()+1)
    while m:
        print('({0},{1})'.format(m.start(), m.end() - 1))
        m = frmt.search(s,m.start()+1)
else:
    print("(-1, -1)")
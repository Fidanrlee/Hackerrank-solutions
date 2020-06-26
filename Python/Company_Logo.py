#!/bin/python3

from collections import Counter



if __name__ == '__main__':
    s = sorted(input())
    MC = Counter(s).most_common(3)
    print(*[ ' '.join([x[0],str(x[1])]) for x in MC], sep = '\n')

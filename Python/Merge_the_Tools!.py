def merge_the_tools(string, k):
    str = string

    n = len(str)

    for i in range(0, n, k):
        str_ = []
        for n in str[i:i + k]:
            if n not in str_:
                str_.append(n)
        print("".join(str_))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)

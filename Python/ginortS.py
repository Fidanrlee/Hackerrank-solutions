# Enter your code here. Read input from STDIN. Print output to STDOUT
s = input()

def even(s):
    if s.isdigit():
        if int(s) % 2 == 0:
            return True
        else:
            return False

    else:
        return False

s = sorted(s)
s = sorted(s, key = even)
s = sorted(s, key = lambda x: not x.islower())
s = sorted(s, key = lambda x: x.isdigit())
print("".join(s))

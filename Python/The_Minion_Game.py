def minion_game(string):
    # your code goes here
    st = string
    vowel = 'AEUOI'
    kevin = 0
    stuart = 0
    for i in range(len(st)):
        if st[i] in vowel:
            kevin += len(st)-i
        else:
            stuart += len(st)-i

    if kevin > stuart:
        print("Kevin",kevin )
    elif stuart > kevin:
        print("Stuart",stuart)
    else:
        print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)
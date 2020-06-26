# Enter your code here. Read input from STDIN. Print output to STDOUT
As , Ss = list(map(int,input().split()))
arr1 = input().split()
setA = set(input().split())
setB = set(input().split())
happiness = 0
for i in arr1:
    if i in setA:
        happiness += 1
    elif i in setB:
        happiness -= 1
print(happiness)

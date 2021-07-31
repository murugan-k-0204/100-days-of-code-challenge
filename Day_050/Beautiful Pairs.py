for i in range(int(input())):
    n = int(input())
    ls = list(map(int,input().split()))
    ls.sort()
    result = 0
    mul = 1
    for i in range(n-1):
        if ls[i]!=ls[i+1]:
            result += (n-i-1)*mul
            mul = 1
        else:
            mul+=1
        
    print(result*2)

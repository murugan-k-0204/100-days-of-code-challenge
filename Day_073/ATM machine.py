for _ in range(int(input())):
    n, rem = map(int, input().split())
    lis = list(map(int, input().split()))
    s = ""
    for i in lis:
        if i <= rem:
            rem-=i
            s+='1'
        else:
            s+='0'
    print(s)

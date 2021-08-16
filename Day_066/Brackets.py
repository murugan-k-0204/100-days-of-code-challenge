for _ in range(int(input())):
    s=input()
    bal=max_bal=0
    for i in s:
        if i=='(':
            bal+=1
        elif i==')':
            bal-=1
        max_bal=max(bal,max_bal)
    print('('*max_bal+')'*max_bal)

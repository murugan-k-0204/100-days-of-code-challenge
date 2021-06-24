string = input()
u=l=0
for i in string:
    if i.isupper():
        u+=1
    elif i.islower():
        l+=1
if u>l:
    print(string.upper())
else:
    print(string.lower())

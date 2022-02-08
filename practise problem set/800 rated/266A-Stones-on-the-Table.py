n=int(input())
stone=input()
lst=list(stone)
cnt=0
temp=1
if(len(lst)>1):
    while(temp<len(lst)-1):
        temp=1
        for i in lst:
            if(temp<len(lst) and i==lst[temp]):
                lst.pop(temp)
                cnt+=1
                break
            temp+=1
    if(lst[-1]==lst[-2]):
        cnt+=1
    print(cnt)
else:
    print(cnt)
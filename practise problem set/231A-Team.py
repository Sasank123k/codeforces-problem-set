n=int(input())
sum2=0
for i in range(n):
    lst=list(map(int,input().split()))
    sum1=sum(lst)
    if(sum1>=2):
        sum2+=1
print(sum2)
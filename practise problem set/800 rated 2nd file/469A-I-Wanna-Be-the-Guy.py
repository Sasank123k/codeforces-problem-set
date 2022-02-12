from queue import LifoQueue


n=int(input())
lst=[]

for i in range(1,n+1):
    lst.append(i)
set1=set(lst)
lst1=list(map(int,input().split()))
ansset=set()
for i in range(1,lst1[0]+1):
    ansset.add(lst1[i])
lst2=list(map(int,input().split()))
for i in range(1,lst2[0]+1):
    ansset.add(lst2[i])
if(set1==ansset):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")

name=input()
lst1=[]

for i in name:
    lst1.append(i)
set1=set(lst1)
if(len(set1)%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
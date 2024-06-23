x,d1,d2 = map(int, input().split())

a = [0]*(1000+1)

a[1] = x

for i in range(2,1000+1):
    if i%2==0:
        a[i]=a[i-1]+d2
    else :
        a[i]=a[i-1]+d1                

q = int(input())

k=[0]*1001
for i in range(q):
    k[i] = int(input())
for i in range(q):
    print(a[k[i]])
q = int(input())

a = [1]*41

for i in range(3,41):
    a[i]=a[i-1]+a[i-2]

for _ in range(q):
    i =int(input())
    print(a[i])
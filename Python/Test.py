with open('D:\\Documents\\GitHub\\PHAN\\Python\\test.txt', 'r') as f:
        data = f.read().strip().split()

n = int(data[0])        

a = []

for i in range(1,n+1):
       a.append(int(data[i]))

index = n+1

T = int(data[index])
index+=1
Q = int(data[index])

for i in range(index+1,Q*2+index,2):
        x = int(data[i])
        y = int(data[i+1])
        if T >= a[x-1]*y:
                T = T - a[x-1]*y
   
print(T)                

        

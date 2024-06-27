with open('D:\\Documents\\GitHub\\PHAN\\Python\\test.txt', 'r') as f:
        data = f.read().strip().split()


index = 0
N = int(data[index])
index += 1
M = int(data[index])
index += 1


a = []
for i in range(M):
    a.append(int(data[index]))
    index += 1


h = []
for i in range(M):
    measures = []
    for j in range(N):
        measures.append(int(data[index]))
        index += 1
    h.append(measures)


max_points = 0

for j in range(N):  
    pt = 100
    for i in range(M):  
        difference = abs(h[i][j] - a[i])
        if difference <= 5:
            continue 
        elif difference <= 10:
            pt -= 1
        elif difference <= 20:
            pt -= 2
        elif difference <= 30:
            pt -= 3
        else:
            pt -= 5
        
       
        if pt < 0:
            pt = 0
    
   
    if pt > max_points:
        max_points = pt


print(max_points)


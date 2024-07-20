with open('D:\\Documents\\GitHub\\PHAN\\Python\\test.txt', 'r') as f:
        data = f.read().strip().split()

N = int(data[0])

x = list(map(int,data[1:]))

max_high = 0
max_low = 0

for i in range(N):
    low  = 0
    high = 0
    for j in range(i+1,N):
        if x[j] > x[j-1]:
            high += 1
            if high>max_high:
                max_high = high
        else:
            break
    for j in range(i+1,N):
        if x[j] < x[j-1]:
            low += 1
            if low>max_low:
                max_low = low
        else:
            break

print(max_low,max_high)

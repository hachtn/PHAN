import sys
file_path = 'test.txt'
    
with open(file_path, 'r') as f:
    data = f.read().strip().split()

index = 0
M = int(data[index])
index += 1    
A = [0] * 32

for _ in range(M):
    x = int(data[index])
    A[x] = 1
    index += 1
B = [0]*32
N = int(data[index])
index+=1

for _ in range(N):
    x = int(data[index])
    B[x] = 1
    index += 1

turn='A'

for i in range(1,32) :
    if A[i] == 1 and B[i] == 1  :
        print(turn)
        turn = 'B' if turn == 'A' else 'A'
    elif A[i] == 1 :
        print('A')
    elif B[i] == 1 :
        print('B')    
    else           :
        print('X')

        
        



x,d = map(int, input().split())

q = int(input())

queries = [int(input()) for i in range(2, 2 + q)]

for k in queries:
    result = x + (k - 1) * d
    print(result)
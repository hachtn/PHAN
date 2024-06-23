n = int(input())

a = [0]*(n+1)
for i in range(n):
    a[i] = int(input())

dp = [0]*(n+1)  

dp[0] = 1

for i in range(1,n):
    if a[i-1] <= a[i]:
        dp[i] = dp[i-1]+1
    else:
        dp[i]=1
print(max(dp))

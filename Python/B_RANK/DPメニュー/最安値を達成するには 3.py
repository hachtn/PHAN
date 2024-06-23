n,x,a,y,b = map(int, input().split())

dp = [10000000] * (n + x+y)

dp[0] = 0

for i in range(2, n + x + y):
    if i >= x:
        dp[i] = min(dp[i], dp[i - x] + a)
    if i >= y:
        dp[i] = min(dp[i], dp[i - y] + b)

print(min(dp[n:]))
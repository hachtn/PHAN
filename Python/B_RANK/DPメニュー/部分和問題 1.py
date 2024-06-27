mod = 1000000007

n, x = map(int, input().split())
a = [int(input()) for i in range(n)]

dp = [0] * (x + 1)

for val in a:
    dp[val] = 1

for val in a:
    for j in range(x, val - 1, -1):
        if dp[j-val] == 1:
            dp[j] = 1
            dp[j] %= mod

print(dp[x])
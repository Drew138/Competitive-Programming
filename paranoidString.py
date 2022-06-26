t = int(input())


def solve(s, dp):
    if len(s) == 1:
        return True
    if s in dp:
        return dp[s]
    found = False
    for i in range(1, len(s)):
        if found: break

        if s[i] == "1" and s[i - 1] == "0":
            found = found or solve("1" + s[i+ 1:], dp)
        elif s[i] == "0" and s[i - 1] == "1": 
            found = found or solve("0" + s[i+ 1:], dp)
    dp[s] = found
    return found

for _ in range(t):
    n = int(input())
    s = input()
    dp = {}
    sol = 0

    for i in range(n):
        for j in range(i + 1, n + 1):
            sol += solve(s[i:j], dp)
    print(sol)
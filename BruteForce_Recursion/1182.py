n, s = map(int, input().split())
a = list(map(int, input().split()))
cnt = 0


def solve(index, sums):
    global cnt
    if index == n:
        if sums == s:
            cnt += 1
        return
    solve(index + 1, sums + a[index])
    solve(index + 1, sums)


solve(0, 0)
if s == 0:
    cnt -= 1
print(cnt)

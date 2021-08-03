n = int(input())
a = list(map(int, input().split()))
a.sort()
ok = [False] * (n * 100000 + 10)


def solve(index, sums):
    if index == n:
        ok[sums] = True
        return
    solve(index + 1, sums + a[index])
    solve(index + 1, sums)


solve(0, 0)
for i in range(1, len(ok)):
    if ok[i] is False:
        print(i)
        break

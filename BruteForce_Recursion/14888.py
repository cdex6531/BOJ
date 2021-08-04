def go(a, index, cur, plus, minus, mul, div):
    if index == len(a) - 1:
        return (cur, cur)
    res = []
    # plus
    if plus > 0:
        res.append(go(a, index + 1, cur + a[index + 1], plus - 1, minus, mul, div))
    # minus
    if minus > 0:
        res.append(go(a, index + 1, cur - a[index + 1], plus, minus - 1, mul, div))
    # mul
    if mul > 0:
        res.append(go(a, index + 1, cur * a[index + 1], plus, minus, mul - 1, div))
    # div
    if div > 0:
        if cur >= 0:
            res.append(go(a, index + 1, cur // a[index + 1], plus, minus, mul, div - 1))
        else:
            res.append(go(a, index + 1, -(-cur // a[index + 1]), plus, minus, mul, div - 1))
    ans = (max(i[0] for i in res), min(i[1] for i in res))
    return ans


n = int(input())
a = list(map(int, input().split()))
plus, minus, mul, div = map(int, input().split())
ans = go(a, 0, a[0], plus, minus, mul, div)
print(ans[0])
print(ans[1])

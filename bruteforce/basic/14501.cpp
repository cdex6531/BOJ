#include <iostream>

using namespace std;
int day[16];
int cost[16];
int ans;
int sum;

void solve(int today, int n, int pre)
{
	if (today == n)
	{
		if (sum > ans)
			ans = sum;
		return;
	}
	else if (today > n)
	{
		if (sum - cost[pre] > ans)
			ans = sum - cost[pre];
		return;
	}
	for (int i = today; i < n; i++)
	{
		sum += cost[i];
		solve(i + day[i], n, i);
		sum -= cost[i];
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	ans = 0;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		day[i] = x;
		cost[i] = y;
	}
	solve(0, n, 0);
	cout << ans << '\n';
	return 0;
}
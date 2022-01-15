#include <iostream>

using namespace std;

int ans;

void solve(int n, int sum)
{
	if (sum == n)
	{
		ans += 1;
		return;
	}
	else if (sum > n)
		return;
	solve(n, sum + 1);
	solve(n, sum + 2);
	solve(n, sum + 3);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		ans = 0;
		solve(n, 0);
		cout << ans << '\n';
	}
	return 0;
}
#include <iostream>

using namespace std;

int arr[8]; 

void solve(int idx, int n, int m)
{
	if (idx == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i];
			if (i + 1 != m)
				cout << ' ';
			else
				cout << '\n';
		}
		return ;
	}
	for (int i = 1; i <= n; i++)
	{
		arr[idx] = i;
		solve(idx + 1, n, m);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	solve(0, n, m);
	return 0;
}
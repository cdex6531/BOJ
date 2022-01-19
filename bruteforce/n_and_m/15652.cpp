#include <iostream>
#include <algorithm>

using namespace std;

int arr[8]; 

void solve(int idx, int n, int m, int pre)
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
		if (i >= pre)
			solve(idx + 1, n, m, i);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	solve(0, n, m, 1);
	return 0;
}
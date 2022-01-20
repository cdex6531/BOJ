#include <iostream>
#include <algorithm>

using namespace std;

bool ok[8] = {false, }; // 중복검사
int arr[8];
int input[8];

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
	for (int i = 0; i < n; i++)
	{
		if (ok[i] == true)
			continue;
		ok[i] = true;
		arr[idx] = input[i];
		solve(idx + 1, n, m);
		ok[i] = false;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> input[i];
	sort(input, input + n);
	solve(0, n, m);
	return 0;
}
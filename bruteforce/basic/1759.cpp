#include <iostream>
#include <algorithm>

using namespace std;

bool ok[8] = {
	false,
}; // 중복검사
char arr[16];
char input[16];

void solve(int idx, int n, int m, int pre, int vol, int cons)
{
	if (idx == m)
	{
		if (vol < 1 || cons < 2)
			return;
		for (int i = 0; i < m; i++)
			cout << arr[i];
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (ok[i] == true)
			continue;
		if (pre > input[i])
			continue;
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
			vol += 1;
		else
			cons += 1;
		ok[i] = true;
		arr[idx] = input[i];
		solve(idx + 1, n, m, input[i], vol, cons);
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
			vol -= 1;
		else
			cons -= 1;
		ok[i] = false;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		cin >> input[i];
	sort(input, input + n);
	solve(0, n, m, input[0], 0, 0);
	return 0;
}
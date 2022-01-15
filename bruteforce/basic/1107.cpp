#include <iostream>

using namespace std;

int broken[10] = {0, };

int check(int n)
{
	int cnt = 0;
	if (n == 0)
	{
		if (broken[0] == 1)
			return 0;
		else
			return 1;
	}
	else
	{
		while (n > 0)
		{
			if (broken[n % 10] == 1)
				return 0;
			n = n / 10;
			cnt += 1;
		}
		return cnt;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	int M;
	cin >> M;

	int x;
	for (int i = 0; i < M; i++)
	{
		cin >> x;
		broken[x] = 1;
		// 1 -> 고장
	}

	int ans = N - 100; // 정답의 초기값
	if (ans < 0)
		ans *= -1;
	
	for (int i = 0; i <= 1000000; i++)
	{
		int len = check(i);
		if (len > 0)
		{
			int press = i - N;
			if (press < 0)
				press *= -1;
			if (ans > len + press)
				ans = len + press;
		}
	}
	cout << ans << '\n';
	return 0;
}
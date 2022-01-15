#include <iostream>
#include <vector>

using namespace std;

int check (vector<string> &arr)
{
	int n = arr.size();
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 1; j < n; j++)
		{
			if (arr[i][j] == arr[i][j - 1])
				cnt += 1;
			else
				cnt = 1;
			if (cnt > ans)
				ans = cnt;
		}
	}
	for (int j = 0; j < n; j++)
	{
		int cnt = 1;
		for (int i = 1; i < n; i ++)
		{
			if (arr[i][j] == arr[i - 1][j])
				cnt += 1;
			else
				cnt = 1;
			if (cnt > ans)
				ans = cnt;
		}
	}
	return ans;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<string> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + 1 < n)
			{
				swap(arr[i][j], arr[i][j + 1]);
				int tmp = check(arr);
				if (tmp > ans)
					ans = tmp;
				swap(arr[i][j], arr[i][j + 1]);
			}
			if (i + 1 < n)
			{
				swap(arr[i][j], arr[i + 1][j]);
				int tmp = check(arr);
				if (tmp > ans)
					ans = tmp;
				swap(arr[i][j], arr[i + 1][j]);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
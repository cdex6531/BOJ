#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int arr[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (j + 3 < m)
			{
				for (int k = j; k < j + 4; k++)
					tmp += arr[i][k];
				if (tmp > ans)
					ans = tmp;
			}
		}
	}
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			int tmp = 0;
			if (i + 3 < n)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 3][j];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j + 1 < m)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j + 1 < m)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 2][j + 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j - 1 >= 0)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 2][j - 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j + 1 < m)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i][j + 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j + 1 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 2][j + 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i - 1 >= 0 && j + 2 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i - 1][j + 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j + 2 < m)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j + 2 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j + 2 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j + 1 < m)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 2][j + 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j - 1 >= 0)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 2][j - 1];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j - 2 >= 0)
				tmp += arr[i][j] + arr[i][j - 1] + arr[i + 1][j - 1] + arr[i + 1][j - 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j + 2 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 1][j + 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i - 1 >= 0 && j + 2 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i - 1][j + 1] + arr[i][j + 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 1 < n && j + 2 < m)
				tmp += arr[i][j] + arr[i][j + 1] + arr[i + 1][j + 1] + arr[i][j + 2];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j + 1 < m)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 2][j];
			if (tmp > ans)
				ans = tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tmp = 0;
			if (i + 2 < n && j - 1 >= 0)
				tmp += arr[i][j] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 2][j];
			if (tmp > ans)
				ans = tmp;
		}
	}
	cout << ans << '\n';
	return 0;
}
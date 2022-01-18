#include <iostream>

using namespace std;

char wb[8][8];
char bw[8][8];
char arr[50][50];

int wb_solve(int row, int col)
{
	int rst = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (wb[i][j] != arr[i + row][j + col])
				rst += 1;
		}
	}
	return rst;
}

int bw_solve(int row, int col)
{
	int rst = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (bw[i][j] != arr[i + row][j + col])
				rst += 1;
		}
	}
	return rst;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
		
	for (int i = 0; i < 8; i++)
	{
		char c1, c2;
		if (i % 2 == 0)
		{
			c1 = 'W';
			c2 = 'B';
		}
		else
		{
			c1 = 'B';
			c2 = 'W';
		}
		for (int j = 0; j < 8; j++)
		{
			if (j % 2 == 0)
				wb[i][j] = c1;
			else
				wb[i][j] = c2;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		char c1, c2;
		if (i % 2 == 0)
		{
			c1 = 'B';
			c2 = 'W';
		}
		else
		{
			c1 = 'W';
			c2 = 'B';
		}
		for (int j = 0; j < 8; j++)
		{
			if (j % 2 == 0)
				bw[i][j] = c1;
			else
				bw[i][j] = c2;
		}
	}

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	
	int ans = 64;
	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			int a, b;
			a = wb_solve(i, j);
			b = bw_solve(i, j);
			if (a > b)
			{
				if (ans > b)
					ans = b;
			}
			else
			{
				if (ans > a)
					ans = a;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
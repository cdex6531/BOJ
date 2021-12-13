#include <iostream>
#include <vector>

using namespace std;
const int MAX = 1000000;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> arr(MAX + 1, 1);
	arr[0] = 0;
	arr[1] = 0;
	for (int i = 2; i * i<= MAX + 1; i++)
	{
		if (arr[i] == 1)
		{
			for (int j = 2; j * i <= MAX + 1; j++)
				arr[j * i] = 0;
		}
	}

	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++)
	{
		if (arr[i] == 1)
			cout << i << '\n';
	}
	return 0;
}
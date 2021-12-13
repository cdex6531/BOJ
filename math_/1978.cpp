#include <iostream>
#include <vector>

using namespace std;

int is_prime(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int cnt = 0;
	for (int i = 0; i < N; i++)
		cnt += is_prime(arr[i]);
	cout << cnt << '\n';
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	long long sum = 0;
	for (int i = 1; i <= N; i++)
		sum += (N / i) * i;
	cout << sum << '\n';
	return 0;
}
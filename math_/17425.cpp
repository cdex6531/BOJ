#include <iostream>
#include <vector>

using namespace std;
const int MAX = 1000000;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<long long> d(MAX + 1, 1);
	for (int i = 2; i <= MAX; i++)
		for (int j = 1; i * j <= MAX; j++)
			d[i * j] += i;
	
	vector<long long> ans(MAX + 1);
	// ans[i] = 1 ~ i-1 + i
	for (int i = 1; i <= MAX; i++)
		ans[i] = ans[i - 1] + d[i];
	
	int N;
	cin >> N;
	while (N--)
	{
		int idx;
		cin >> idx;
		cout << ans[idx] << '\n';
	}
	return 0;
}
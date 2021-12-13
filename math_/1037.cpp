#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;

	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max_num = *max_element(a.begin(), a.end());
	int min_num = *min_element(a.begin(), a.end());
	cout << max_num * min_num << '\n';
	return 0;
}
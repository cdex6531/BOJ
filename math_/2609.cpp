#include <iostream>

using namespace std;

int get_gcd(int a, int b)
{
	while (b != 0)
	{
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b;
	cin >> a >> b;
	
	int gcd = get_gcd(a, b);
	int lcm = gcd * (a / gcd) * (b / gcd);

	cout << gcd << '\n';
	cout << lcm << '\n';
	return 0;
}
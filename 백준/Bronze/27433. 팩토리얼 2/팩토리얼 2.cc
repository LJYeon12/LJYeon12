#include <iostream>
using namespace std;

long long factorial(int n) {
	long long ans = 1;
	if (n == 0)
		return 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	cout << factorial(n);
}
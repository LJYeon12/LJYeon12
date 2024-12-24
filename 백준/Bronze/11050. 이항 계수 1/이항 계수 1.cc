#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, k, ans = 1;
	cin >> n >> k;
	for (int i = n; i > k; i--) {
		ans *= i;
	}
	for (int i = 1; i <= (n - k); i++) {
		ans /= i;
	}
	cout << ans;
}
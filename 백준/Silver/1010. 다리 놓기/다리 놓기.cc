#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		long long n, k, ans = 1;
		cin >> k >> n;
		for (int i = 1; i ; i--) {
			ans *= i;
		}
		for (int i = 1; i <= k; i++) {
			ans *= (n - i + 1);  // 곱셈
			ans /= i;            // 나눗셈 (중간 값을 작게 유지)
		}
		cout << ans << "\n";
	}
}
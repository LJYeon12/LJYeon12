#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ans *= 2;
	}
	cout << ans;
}
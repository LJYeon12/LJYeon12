#include <iostream>
using namespace std;
// 유클리드 호제법
int mods(int big, int small) {
	int remain;
	while (true) {
		remain = big % small;
		if (remain == 0) return small;
		big = small;
		small = remain;
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, n1, n2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n1 >> n2;
		if (n1 > n2) cout << n1 * n2 / mods(n1, n2) << '\n';
		else cout << n1 * n2 / mods(n2, n1) << '\n';
	}
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, x1, y1, r1, x2, y2, r2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int cal = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		int con1 = (r1 + r2) * (r1 + r2);
		int con2 = (r1 - r2) * (r1 - r2);
		if (cal == 0) {
			if (con2 == 0) cout << -1 << "\n";
			else cout << 0 << "\n";
		}
		else if (cal == con1 || cal == con2) {
			cout << 1 << "\n";
		}
		else if (cal > con2 && cal < con1) {
			cout << 2 << "\n";
		}
		else cout << 0 << "\n";
	}
}
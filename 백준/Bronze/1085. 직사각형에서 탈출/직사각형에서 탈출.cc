#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x, y, w, h, l, d, r, u;
	cin >> x >> y >> w >> h;
	l = x; r = w - x;
	d = y; u = h - y;
	cout << min({ l, d, r, u });
}
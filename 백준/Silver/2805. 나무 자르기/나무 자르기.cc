#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

int n;
ll m;
ll wood[1000001];

bool solve(ll h) {
	ll cur = 0;
	for (int i = 0; i < n; i++) {
		if (wood[i] > h) {
			cur += (wood[i] - h);
		}
	}
	return cur >= m;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> wood[i];
	sort(wood, wood + n);

	// 높이가 h일때 값이 m 이상이다 -> 매개변수 탐색
	ll st = 0, en = wood[n - 1];
	while (st < en) {
		ll mid = (st + en + 1) / 2;
		if (solve(mid)) {
			st = mid;
		}
		else
		{
			en = mid - 1;
		}
	}
	cout << st;
	return 0;
}
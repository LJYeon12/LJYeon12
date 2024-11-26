#include <iostream>
using namespace std;

int between[100001] = { 0, };
int galosu[100001];
int gcd(int a,int b) {
	int big = (a >= b) ? a : b;
	int small = (a <= b) ? a : b;
	while (true) {
		int tmp = big % small;
		if (tmp == 0) return small;
		big = small;
		small = tmp;
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, smallest;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> galosu[i];
	}
	for (int i = 1; i < n; i++) {
		between[i - 1] = galosu[i] - galosu[i - 1];
	}
	smallest = between[0];
	for (int i = 1; i < n - 1; i++) {
		smallest = gcd(smallest, between[i]);
		if (smallest == 1) break;
	}
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		ans += (between[i] / smallest - 1);
	}
	cout << ans;
}
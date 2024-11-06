#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, sum = 0;
	cin >> n;
	int f_base = 1, t_base = 1;
	// 제곱 구하기
	for (int i = 0; i < n; i++) {
		f_base *= 4;
		t_base *= 2;
	}
	cout << f_base + 2 * t_base + 1;
}
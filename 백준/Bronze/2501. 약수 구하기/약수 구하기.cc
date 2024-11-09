#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int p, q;
	cin >> p >> q;
	// 첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력
	int num = 0;
	for (int i = 1; i < p + 1; i++) {
		if (p % i == 0) {
			num++;
			if (num == q) { cout << i; return (0);}
		}
	}
	cout << 0;
}
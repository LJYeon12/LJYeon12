#include <iostream>
using namespace std;

/// prime : 소수
bool is_prime(long long n) {
	if (n < 2) return false;
	else if (n <= 3) return true;
	else if (n % 2 == 0 || n % 3 == 0) return false;

	// 소수 체크 5 ~ n의 제곱근까지
	// i가 longlong인 이유 i의 범위는 4억 이므로 i*i에서 오버플로우가 발생할 수 있다
	for (long long i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; long long p;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> p;
		while (!is_prime(p)) p++;
		cout << p << "\n";
	}
}
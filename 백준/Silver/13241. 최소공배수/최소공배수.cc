#include <iostream>
using namespace std;
// 유클리드 호제법

long long int lcm(long long int a, long long int b) {
	long long int big = (a >= b) ? a : b;
	long long int small = (a <= b) ? a : b;
	long long int remain;
	while (true) {
		remain = big % small;
		if (remain == 0) return a * b / small;
		big = small;
		small = remain;
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long int a, b;
	cin >> a >> b;
	cout << lcm(a, b);
}
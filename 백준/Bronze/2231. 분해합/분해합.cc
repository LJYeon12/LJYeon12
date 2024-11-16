#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, sum, temp, start = 1;
	cin >> n;
	temp = n;
	while (temp / 10 != 0)
	{
		start++;
		temp /= 10;
	}
	for (int i = n - 9 * start; i < n; i++) {
		sum = i; // 생성자 더하기 
		temp = i;
		// 생성자의 자리수 더하기
		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == n) {
			cout << i;
			return (0);
		}
		sum = 0;
	}
	cout << 0;
}
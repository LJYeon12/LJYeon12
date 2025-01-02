#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1억 5천만 만큼 연산 가능

// 중복 호출 계속 발생
//int min_times = 1000000;
//void func(int x,int times) {
//	if (x == 1) {
//		if (min_times > times)
//			min_times = times;
//		return;
//	}
//	func(x - 1, times + 1); // 100만 * 2
//	if (x % 2 == 0) {
//		func(x / 2, times + 1);
//	}
//	if (x % 3 == 0) {
//		func(x / 3, times + 1);
//	}
//}

vector <int> dp;
int func(int x) {
	if (x == 1) {
		return 0;
	}
	if (dp[x] != 0) return dp[x];
	int result = func(x - 1) + 1;
	if (x % 2 == 0) {
		result = min(result, func(x / 2) + 1);
	}
	if (x % 3 == 0) {
		result = min(result, func(x / 3) + 1);
	}
	return dp[x] = result;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;

	dp.resize(n + 1, 0);

	cout << func(n);
	
	return 0;
}
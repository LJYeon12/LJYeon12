#include <iostream>
#include <algorithm>
typedef long long LL;
using namespace std;
int k, n;
LL lenL[10001];

bool solve(LL x) {
	LL cur = 0;
	for (int i = 0; i < k; i++) cur += lenL[i] / x;
	return cur >= n;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> k >> n;

	for (int i = 0; i < k; i++) cin >> lenL[i];
	sort(lenL, lenL + k);
	
	LL left = 1; 
	LL right = lenL[k - 1];
	while (left < right) {
		LL mid = (left + right+1) / 2; // L,R의 값이 1개 차이 일 경우 무한반복에 들어가므로 +1을 해주어 무한 반복에서 벗어나게 한다.
		if (solve(mid)) left = mid;
		else right = mid - 1;
	}
	cout << left;
	return 0;
}
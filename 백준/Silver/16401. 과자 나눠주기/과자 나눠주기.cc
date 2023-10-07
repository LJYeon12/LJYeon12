//파라매트릭 서치
#include <iostream>
#include <algorithm>
typedef long long LL;
using namespace std;
// 과자의 길이가 maxl일때 조카에게 줄 수 있는 과자의 개수가 sum 이상인가?
int m, n;
LL cookielenght[1000001]; //10억을 넘을 경우 그냥 longlong 처리

bool solve(LL x) {
	LL cur = 0;
	for (int i = 0; i < n; i++) cur += cookielenght[i] / x;
	return cur >= m;
}
int main() {

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> cookielenght[i];
	}
	sort(cookielenght, cookielenght + n);
	LL left = 0; 
	LL right = cookielenght[n - 1];
	while (left < right) {
		LL mid = (left + right + 1) / 2;
		if (solve(mid)) left = mid;
		else right = mid - 1;
	}
	cout << left;
	return 0;
}
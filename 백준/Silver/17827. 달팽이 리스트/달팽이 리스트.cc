#include <bits/stdc++.h>
using namespace std;


long long c[200002];
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, v;
	int cal;
	cin >> n >> m >> v;
	for (int i = 1; i < n + 1; i++) {
		cin >> c[i];
	}
	while (m--)
	{
		cin >> cal;
		// n - 1번 이동까지
		if (cal < n) cout << c[cal + 1] << "\n";
		// n번 이동 후 -> v번부터 시작 -> (n - v)번으로 계산하기
		// 16 = (16 - 10) 6 (10 - 3)
		// 49  => 7 % 8 -> 7
		else {
			cal -= 10;
			cout << c[v + (cal % (n - v + 1))] << "\n";
		}
	}

	return 0;
}
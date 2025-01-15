#include <bits/stdc++.h>
using namespace std;

int pos[100001];
int dir[3] = { 1, -1 ,2 };
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	fill(pos, pos + 100001, -1);
	queue <int> q;
	q.push(n);
	pos[n] = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < 3; i++) {
			int future_x;
			if (i == 2) future_x = cur * dir[i];
			else future_x = cur + dir[i];
			// 동생 위치에 도착할 경우
			if (cur == k) {
				cout << pos[cur];
				return 0;
			}
			if (future_x < 0 || future_x > 100000) continue; // 배열 범위를 초과하는 경우
			if (pos[future_x] != -1) continue; // 이미 한번 온 적 있는 경우

			pos[future_x] = pos[cur] + 1;
			q.push(future_x);
		}
	}
}
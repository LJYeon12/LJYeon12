#include <bits/stdc++.h>
using namespace std;
// 시작점 여러개 + 확산 문제
// 시작점 여러개 -> 모든 시작점을 큐에 넣고 BFS를 돌린다.

char building[1001][1001];
int fire[1001][1001];
int human[1001][1001];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
void solve_f(int w, int h) {
	queue <pair<int, int>> q1;
	queue <pair<int, int>> q2;
	// 불&&human 초기화
	memset(fire, -1, sizeof(fire));
	memset(human, -1, sizeof(human));
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			cin >> building[y][x];
			if (building[y][x] == '*') {
				q1.push({ y, x });
				fire[y][x] = 0;
			}
			if (building[y][x] == '@') {
				q2.push({ y, x });
				human[y][x] = 0;
			}
		}
	}
	// 불 값구하기
	while (!q1.empty()) {
		auto cur = q1.front();
		q1.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.second + dx[dir];
			int ny = cur.first + dy[dir];
			// 범위 초과
			if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
			// 벽인 경우 or 이미 지난 경우
			if (building[ny][nx] == '#' || fire[ny][nx] != -1) continue;
			fire[ny][nx] = fire[cur.first][cur.second] + 1;
			q1.push({ ny, nx });
		}
	}

	// 사람 탈출 가능 여부 구하기
	while (!q2.empty()) {
		auto cur = q2.front();
		q2.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.second + dx[dir];
			int ny = cur.first + dy[dir];
			// 벽이 아니고 범위 초과인 경우
			if (nx < 0 || nx >= w || ny < 0 || ny >= h)
			{
				cout << human[cur.first][cur.second] + 1 << "\n";
				return;
			}
			// 벽이고 이미 지나간 경우 -> 벽을 먼저 처리
			if (building[ny][nx] == '#' || human[ny][nx] != -1) continue;
			// 불보다 시간이 큰 경우 && 불 != -1 (벽일 경우 처리) -> 문제 : 기존에 전역 변수 설정 때문에 
			if (fire[ny][nx] != -1 && fire[ny][nx] <= human[cur.first][cur.second] + 1) continue;
			
			human[ny][nx] = human[cur.first][cur.second] + 1;
			q2.push({ ny, nx });
		}
	}

	cout << "IMPOSSIBLE" << "\n";
	return;
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int w, h;
		cin >> w >> h;
		solve_f(w, h);
	}
}
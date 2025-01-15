#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int cabbage[51][51]; // 전역 변수로 선언
int check[51][51];   // 전역 변수로 선언
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
void num_worm() {
	// 초기화
	int  m, n, k;

	// 초기화
	memset(cabbage, 0, sizeof(cabbage));
	memset(check, 0, sizeof(check));

	cin >> m >> n >> k;
	int pos_x, pos_y;
	for (int i = 0; i < k; i++)
	{
		cin >> pos_x >> pos_y;
		cabbage[pos_x][pos_y] = 1;
	}

	int num = 0;
	queue <pair<int, int>> q;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (cabbage[i][j] == 0 || check[i][j] == 1) continue; // 이미 체크를 했거나, 양배추가 없는 경우
			num++;
			check[i][j] = 1;
			q.push({ i, j });
			while (!q.empty())
			{
				auto cur = q.front();
				q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
					if (cabbage[nx][ny] == 0 || check[nx][ny] == 1) continue;
					check[nx][ny] = 1;
					q.push({ nx, ny });
				}
			}
		}
	}
	cout << num << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) num_worm();
}
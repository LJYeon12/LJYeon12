#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[301][301];
int dx[8] = { 2, 2, -2, -2, 1, 1, -1, -1 };
int dy[8] = { -1, 1, 1, -1, 2, -2, 2, -2 };

void go_night(int n, int cur_x, int cur_y, int des_x, int des_y) {
	// board 초기화
	for (int i = 0; i < n; i++) {
		fill(board[i], board[i] + n, -1);

	}
	// 체스 위치 초기화
	queue <pair <int, int>> q;
	board[cur_x][cur_y] = 0;
	q.push({ cur_x, cur_y });
	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 8; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (cur.X == des_x && cur.Y == des_y) {
				cout << board[cur.X][cur.Y] << "\n";
				return;
			}
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (board[nx][ny] != -1) continue; // 보드를 이미 방문한 적이 있을 경우
			board[nx][ny] = board[cur.X][cur.Y] + 1;
			q.push({ nx, ny });
		}
	}
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;

	int n;
	int cur_x, cur_y, des_x, des_y;
	while (t--) {
		cin >> n;
		cin >> cur_x >> cur_y;
		cin >> des_x >> des_y;
		go_night(n, cur_x, cur_y, des_x, des_y);
	}

}
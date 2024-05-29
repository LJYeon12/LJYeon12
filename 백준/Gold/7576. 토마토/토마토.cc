#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second


int tomato[1001][1001];
int board[1001][1001];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	queue <pair <int, int>> Q;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tomato[i][j];
			if (tomato[i][j] == 1) {
				Q.push({ i,j });
				board[i][j] = 1;
			}
			if (tomato[i][j] == -1) board[i][j] = -1;
		}
	}

	int maxDate = 0;
	while (!Q.empty()) {
		pair <int, int> cur = Q.front(); Q.pop();
		if (board[cur.X][cur.Y] > maxDate) maxDate = board[cur.X][cur.Y];
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue; // 범위 초과
			if (board[nx][ny] > 0) continue; // 이미 익은 경우
			if (tomato[nx][ny] == -1) { // 토마토가 없는 경우
				//board[nx][ny] = -1;
				continue;
			}
			// 토마토가 익을 수 있는 경우
			board[nx][ny] = board[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 0) {
				cout << -1; 
				return 0;
			}
		}
	}
	cout << maxDate - 1;

	return 0;
}
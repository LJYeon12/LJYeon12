#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;

int board[101][101];
int vis[101][101] = {0,};

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	string boardNum;
	for (int i = 0; i < n; i++) {
		cin >> boardNum;
		for (int j = 0; j < m; j++) {
			int num = boardNum[j] - '0';
			board[i][j] = num;
		}
	}

	queue <pair<int, int>> Q;

	vis[0][0] = 1;
	Q.push({ 0,0 });

	while(!Q.empty()) {
		pair <int, int> cur = Q.front();
		Q.pop();

		
		for (int i = 0; i < 4; i++) {

			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue; // 범위 초과시 패스
			if (vis[nx][ny] != 0 || board[nx][ny] != 1) continue; // 이미 방문 했거나 보드 이동이 불가한 곳은 패스			
			
			vis[nx][ny] = vis[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}

	cout << vis[n - 1][m - 1];
	return 0;
}
#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;

/*
1. 상하좌우로 연결된 그림의 크기 알아내기 -> pop 몇번 하는지
2. 도화지에 있는 모든 그림을 찾아내기
*/

int n, m; // 도화지 크기 n*m
int board[501][501];
bool vis[501][501]; // 방문 여부
int maxSize = 0; // 그림 사이즈

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) { // 보드 그리기
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	queue <pair<int, int> > Q;
	int num = 0; // 그림 개수

	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < m; j++) {
			if (!vis[i][j] && board[i][j] == 1) { // 보드가 1이고 방문하지 않은 경우
				vis[i][j] = true;
				Q.push({ i, j });
				int size = 1;
				num++;


				while (!Q.empty()) {
					pair <int, int> cur = Q.front();
					Q.pop();

					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue; // 범위 넘어가는 경우
						if (board[nx][ny] != 1 || vis[nx][ny]) continue; // 이미 방문했거나 보드에 그림이 없는 경우

						vis[nx][ny] = true;
						size++;
						Q.push({ nx, ny });
					}

				}
				if (size > maxSize)	maxSize = size;

			}
		}
	}
	cout << num << "\n" << maxSize;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

string board[101];
int rgb[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int i_board[101][101];
int check_color(char color) {
	if (color == 'R') return 0;
	else if (color == 'G') return 1;
	else if (color == 'B') return 2;
}
int check_rb(char color) {
	if (color == 'R' || color == 'G') return 1;
	else return 2;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
		fill(rgb[i], rgb[i] + n, -1);
	}

	// 일반인 먼저
	int zone = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (rgb[i][j] != -1) continue;
			zone++;
			queue <pair<int, int>> q1;
			char color = board[i][j];
			q1.push({ i,j });
			while (!q1.empty())
			{
				auto cur = q1.front();
				color = board[cur.first][cur.second];
				q1.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					// 현재 구역 색과 다르거나 이미 지나간 경우
					if (board[nx][ny] != color || rgb[nx][ny] != -1) continue;
					rgb[nx][ny] = check_color(board[nx][ny]);
					q1.push({ nx, ny });
				}
			}
		}
	}
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++)
	//		cout << rgb[i][j];
	//	cout << "\n";
	//}

	cout << zone << " ";
	// 적록색약인
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			i_board[i][j] = check_rb(board[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		fill(rgb[i], rgb[i] + n, -1);
	}
	zone = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (rgb[i][j] != -1) continue;
			zone++;
			queue <pair<int, int>> q2;
			int color = i_board[i][j];
			q2.push({ i,j });
			while (!q2.empty())
			{
				auto cur = q2.front();
				color = i_board[i][j];
				q2.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					// 현재 구역 색과 다르거나 이미 지나간 경우
					if (i_board[nx][ny] != color || rgb[nx][ny] != -1) continue;
					rgb[nx][ny] = check_rb(board[nx][ny]);
					q2.push({ nx, ny });
				}
			}
		}
	}
	cout << zone;

	return 0;
}
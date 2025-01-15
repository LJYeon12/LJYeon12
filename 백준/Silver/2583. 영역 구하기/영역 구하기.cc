#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int square[101][101] = { 0, };
int check[101][101] = { 0, }; // 방문 체크
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int m, n, k; // 모두 100 이하 자연수
	cin >> m >> n >> k;

	int left_l[2], right_h[2];
	// 직사각형 초기화 (x, y) 좌표
	for (int i = 0; i < k; i++) {
		cin >> left_l[0] >> left_l[1] >> right_h[0] >> right_h[1];
		for (int i = left_l[0]; i < right_h[0]; i++) {
			for (int j = left_l[1]; j < right_h[1]; j++) {
				if (square[i][j] == 1) continue;
				square[i][j] = 1;
			}
		}
	}

	queue <pair<int, int>> q;
	int num = 0;
	vector <int> width;
	pair<int, int> cur;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (square[i][j] == 1 || check[i][j] != 0) continue; // 방문 이력이 있거나 직사각형인 경우
			queue <pair<int, int>> q;
			check[i][j] = 1;
			num++;
			int wd = 1;
			q.push({ i, j });
			while (!q.empty())
			{
				cur = q.front(); q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 보드 범위를 초과한 경우
					if (square[nx][ny] == 1 || check[nx][ny] != 0) continue; // 이미 방문한 이력이 있거나 직사각형인 경우
					check[nx][ny] = 1;
					wd++;
					q.push({ nx, ny });
				}
			}
			width.push_back(wd);
		}
	}
	cout << num << "\n";
	sort(width.begin(), width.end());
	for (auto w : width) {
		cout << w << " ";
	}
}
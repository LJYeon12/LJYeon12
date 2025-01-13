#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1002];
int fire_dist[1002][1002]; // 불의 전파 시간
int jihun_dist[1002][1002]; // 지훈의 이동 시간
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        fill(fire_dist[i], fire_dist[i] + m, -1);
        fill(jihun_dist[i], jihun_dist[i] + m, -1);
    }

    queue<pair<int, int>> fire_q;
    queue<pair<int, int>> jihun_q;

    for (int i = 0; i < n; i++) {
        cin >> board[i];
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'F') {
                fire_q.push({i, j});
                fire_dist[i][j] = 0; // 불의 초기 위치
            }
            if (board[i][j] == 'J') {
                jihun_q.push({i, j});
                jihun_dist[i][j] = 0; // 지훈의 초기 위치
            }
        }
    }

    // 불의 BFS
    while (!fire_q.empty()) {
        auto cur = fire_q.front();
        fire_q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (fire_dist[nx][ny] != -1 || board[nx][ny] == '#') continue; // 이미 방문 or 벽
            fire_dist[nx][ny] = fire_dist[cur.X][cur.Y] + 1;
            fire_q.push({nx, ny});
        }
    }

    // 지훈의 BFS
    while (!jihun_q.empty()) {
        auto cur = jihun_q.front();
        jihun_q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) { // 경계를 벗어나면 탈출
                cout << jihun_dist[cur.X][cur.Y] + 1 << "\n";
                return 0;
            }
            if (jihun_dist[nx][ny] != -1 || board[nx][ny] == '#') continue; // 이미 방문 or 벽
            if (fire_dist[nx][ny] != -1 && fire_dist[nx][ny] <= jihun_dist[cur.X][cur.Y] + 1) continue; // 불이 먼저 도달
            jihun_dist[nx][ny] = jihun_dist[cur.X][cur.Y] + 1;
            jihun_q.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}

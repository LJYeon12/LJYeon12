#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m, n, num = 0;
	char board[50][50];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int min_num = 3000;
	for (int x = 0; x <= m - 8; x++) {
		for (int y = 0; y <= n - 8; y++) {
			num = 0;
			for (int i = x; i < x + 8; i++) {
				for (int j = y; j < y + 8; j++) {
					if (((i - x) % 2 == 0 && (j - y) % 2 == 0) || ((i - x) % 2 != 0 && (j - y) % 2 != 0)) {
						if (board[x][y] != board[i][j])
							num++;
					}
					else {
						if (board[i][j] == board[x][y]) num++;
					}
				}
			}
			min_num = min({ min_num, num, 64 - num });
		}
	}
	cout << min_num;
	return (0);
}
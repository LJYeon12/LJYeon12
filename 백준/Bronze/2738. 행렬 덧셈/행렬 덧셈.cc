#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m;
	int arr[101][101];
	int result_arr[101][101] = {{0,},};
	cin >> n >> m;
	for (int i = 0; i < 2; i++) {
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < m; x++)
			{
				cin >> arr[y][x];
				result_arr[y][x] += arr[y][x];
			}
		}
	}
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++)
		{
			cout << result_arr[y][x] << " ";
		}
		cout << endl;
	}
}
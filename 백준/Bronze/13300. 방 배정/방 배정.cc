#include <iostream>
using namespace std;

int K; // 한방에 배정가능한 최대인원 (1 < K <= 1000)
int N; //참가 학생수
int S, Y; //성별, 학년
int arr[2][6];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		arr[S][Y-1]++;
	}
	int ans = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] == 0) continue;
			else if (arr[i][j] <= K) {
				ans++;
			}
			else
			{
				ans += arr[i][j] / K;
				if (arr[i][j] / K != 0) ans++;
			}
		}
	}
	cout << ans;
}
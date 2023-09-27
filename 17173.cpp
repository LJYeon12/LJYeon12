#include <iostream>
using namespace std;
/*
브루트포스 알고리즘 ==> 전체 탐색
*/
int K[1001];
bool mul[1001] = { false, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N; int M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> K[i];
	}
	for (int j = 0; j < M; j++) { //M*N
		for (int i = 2; i <= N; i++) {
			if (i % K[j] == 0) mul[i] = true;
		}
	}
	int cal = 0;
	for (int i = 2; i <= N; i++) {
		if (mul[i] ==true) cal+= i;
	}
	cout << cal;
	return 0;
}
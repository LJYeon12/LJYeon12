#include <iostream>
#include <vector>
using namespace std;

int N, K, len = 0;
int pre[5001], nxt[5001];
vector <int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;

	// 원형 연결 리스트 생성
	for (int i = 1; i <= N; i++) {
		pre[i] = (i == 1) ? N : i - 1; // ? 7 1 2 3 4 5 6  
		nxt[i] = (i == N) ? 1 : i + 1; // ? 2 3 4 5 6 7 1
		len++;
	}
	/*
		1 2 3 4 5 6 7
	pre 7 1 2 3 4 5 6
	nxt 2 4 4 5 6 7 1
	*/

	int i = 1;
	// 연결리스트를 순회하며 연결 생성
	for (int cur = 1; len != 0; cur = nxt[cur]) {
		if (i == K) {
			// 이전 위치의 nxt를 삭제할 위치의 nxt로 변경
			nxt[pre[cur]] = nxt[cur];
			// 다음 위치의 pre를 삭제할 위치의 pre로 변경
			pre[nxt[cur]] = pre[cur];
			v.push_back(cur);
			i = 1;
			--len;
		}
		else {
			i++;
		}
	}

	cout << "<";
	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i];
		if (i != v.size() - 1) cout << ", ";
	}
	cout << ">";
}
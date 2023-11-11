#include <iostream>
#include <vector>
#include <queue>
#define INF 1000000000
using namespace std;

vector <int> node[1000001];
int dist[300001];

void dijkstra(int start) {
	priority_queue<pair<int, int>>pq; //비용,노드
	pq.push({0,start});
	dist[start] = 0;

	while (!pq.empty()) {
		int cost = -pq.top().first; //0
		int here = pq.top().second; //1
		pq.pop();

		if (dist[here] < cost) continue; 
		for (int i = 0; i < node[here].size(); i++) { //1(2,3)
			int vcost = cost + 1; //1

			if (vcost < dist[node[here][i]]) {
				dist[node[here][i]] = vcost;
				pq.push({ -vcost,node[here][i]});
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, M,K,X;
	cin >> N >> M >> K >> X;
	int A, B;
	for (int i = 1; i <= N; i++) dist[i] = INF;

	for (int i = 0; i < M; i++) {
		cin >> A >> B;
		node[A].push_back(B);
		 // 노드 연결 선 추가
	}
	dijkstra(X);
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		//cout << dist[i] << "\n";
		if (dist[i] == K) {
			cout << i << "\n";
			sum++;
		}
	}
	if (sum == 0) cout << -1 << "\n";

	return 0;
}
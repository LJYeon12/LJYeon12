#include <iostream>
#include <vector>
#include <queue>
#define INF 10000000000 
using namespace std;

vector <pair<int, int>> node[1001];
int dist[1001];

void dijkstra(int restart) {
	priority_queue<pair<int, int>> pq;
	pq.push({0,restart});
	dist[restart] = 0;

	while (!pq.empty()) {
		int cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();

		if (dist[here] < cost) continue;
		for (int i = 0; i < node[here].size(); i++) { //1(2,2)(3,3)(4,1)(5,10)
			int vcost = cost + node[here][i].second;

			if (vcost < dist[node[here][i].first]) {
				dist[node[here][i].first] = vcost;
				pq.push({ -vcost,node[here][i].first });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N ;
	cin >> M;

	for (int i = 1; i <= N; i++) {
		dist[i] = INF;
	}
	int start, end, pay;
	for (int i = 0; i < M; i++) {
		cin >> start >> end >> pay;
		node[start].push_back({ end,pay });
	}
	int rstart, rend;
	cin >> rstart >> rend;
	dijkstra(rstart);

	cout << dist[rend] << " ";
	return 0;
}
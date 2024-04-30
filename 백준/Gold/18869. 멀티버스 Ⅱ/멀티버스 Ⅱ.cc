#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> u(101);

void compression(vector<int>& v) {
	vector <int> tmp(v.size());
	copy(v.begin(), v.end(), tmp.begin());
	sort(tmp.begin(), tmp.end());

	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

	for (int i = 0; i < v.size(); i++) {
		int idx = lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin();
		v[i] = idx; // 위치를 벡터에 저장
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0, size; j < n; j++) {
			cin >> size;
			u[i].push_back(size);
		}
		compression(u[i]);
	}

	int ans = 0;
	for (int i = 0; i < m - 1; i++) {
		for (int j = i + 1; j < m; j++) {
			if (u[i].size() == u[j].size()) { // 값 중복 개수가 동일할 경우
				bool tw = true;
				for (int k = 0; k < u[i].size(); k++) {
					if (u[i][k] != u[j][k]) tw = false;
				}
				if (tw == true) ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
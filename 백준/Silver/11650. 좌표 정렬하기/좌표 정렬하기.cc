#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <pair <int, int>> arr;
bool compare(pair<int, int> a, pair <int,int> b) { // 사용자 지정 함수
	if (a.first == b.first) {
		return a.second < b.second; // y기준 오름차순
	}
	else
		return a.first < b.first; // x 기준 오름차순
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr.push_back({ x,y });
	}
	sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}
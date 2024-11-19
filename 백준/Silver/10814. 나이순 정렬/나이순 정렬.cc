#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int,string> b) { // 사용자 지정 함수
	return a.first < b.first;
}
vector <pair <int, string>> arr;
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, age;
	string name;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		arr.push_back({ age, name });
	}
	// 기존 순서를 보장
	stable_sort(arr.begin(), arr.end(), compare);
	// sort : 기존 순서를 보장하지 않는다.
	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}
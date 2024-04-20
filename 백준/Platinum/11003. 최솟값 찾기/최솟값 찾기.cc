#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, l;
	deque <pair <int,int>> arr;
	int a;
	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		cin >> a;
		// 새로운 값이 들어올 때, 
		// 현재 덱의 뒷부분에서 이 값보다 큰 값들은 제거 (필요없는 값이 되므로)
		while (!arr.empty() && arr.back().first >= a) {
			arr.pop_back();
		}
		
		arr.push_back({ a, i }); // 덱에 값과 인덱스 추가

		if (arr.front().second <= i - l) {
			arr.pop_front();
		}

		cout << arr.front().first << ' ';
	}
}
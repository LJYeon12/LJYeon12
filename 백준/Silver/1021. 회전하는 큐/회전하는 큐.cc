#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;


// 1,2,3,4,5,6,7,8,9,10 -> 3,4,5,6,7,8,9,10,1(1) -> 9,10,1,3,4,5,6,7,8(3) ->5,6,7,8,10,1,3,4 (4)
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	deque<int> dq;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	int ans = 0, value;
	int head, tail;
	for (int i = 0; i < m; i++) {
		cin >> value;

		head = find(dq.begin(), dq.end(), value) - dq.begin();
		tail = dq.size() - head;

		while (value != dq.front()) {
			ans++;
			if (head >= tail) {
				int t = dq.back();
				dq.pop_back();
				dq.push_front(t);
			}
			else {
				int t = dq.front();
				dq.pop_front();
				dq.push_back(t);
			}
		}
		dq.pop_front();
	}
	cout << ans;
}
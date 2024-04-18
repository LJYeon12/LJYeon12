#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void parse(string& arr, deque <int>& dq) {
	int cur = 0;
	for (int i = 1; i < arr.size() - 1; i++) {
		if (arr[i] == ',') {
			dq.push_back(cur);
			cur = 0;
		}
		else {
			cur = cur * 10 + (arr[i] - '0'); // 이전 값 * 10 + 현재 값
		}
	}
	if (cur != 0)dq.push_back(cur); // 마지막 값 넣기
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		string p, arr;
		int n;

		cin >> p;
		cin >> n;
		cin >> arr; // [1,2,3,4]

		deque <int> dq = {};
		
		if (n != 0 ) parse(arr, dq); // 배열 만들기
		
		bool error = false;
		int rev = 0;
		
		for (auto s : p) { // 함수 수행
			if (s == 'R') {
				// reverse 함수 이용
				rev = 1 - rev;
				/*
				for (int i = 0; i < n/2; i++) { // 1,2,3,4,5 (3)
 					int tmp = dq[i]; // 2
					 dq[i] = dq[(n - i) - 1]; // 5 4 3 4 5
					 dq[(n - i) - 1] = tmp; // 5 4 3 2 1
				}*/
			}
			else if (s == 'D') {
				if(dq.empty()){
					error = true;
					continue;
				}
				if (rev == 0) dq.pop_front();
				else dq.pop_back();
			}
		}

		if (error == true) cout << "error" << "\n";
		else {
			if (rev) reverse(dq.begin(), dq.end());
			cout << "[";
			if (!dq.empty()) {
				for (int i = 0; i < dq.size() - 1; ++i) {
					cout << dq[i] << ",";
				}
				cout << dq.back();
			}
			cout << "]\n";
		}
	}
	return 0;
}
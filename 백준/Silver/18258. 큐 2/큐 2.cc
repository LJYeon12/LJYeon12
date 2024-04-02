#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	string str;
	queue <int> arr;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;

			arr.push(x);
		}
		else if (str == "pop") {
			if (arr.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << arr.front() << "\n";
			arr.pop();
		}
		else if (str == "size") {
			cout << arr.size() << "\n";
		}
		else if (str == "empty") {
			cout << ((arr.empty()) ? 1 : 0) << "\n";
			/*
			연산자 <<와 조건부 연산자 ? : 사이의 우선순위에 있습니다. C++에서는 << 연산자가 조건부 연산자보다 우선순위가 낮습니다
			cout << ((arr.empty()) ? 1 : 0) << "\n"; --> 이렇게 작성해야 함
			*/
		}
		else if (str == "front") {
			cout << ((!arr.empty()) ? arr.front() : -1) << "\n";
		}
		else {
			cout << ((!arr.empty()) ? arr.back() : -1) << "\n";
		}

	}

	return 0;
}
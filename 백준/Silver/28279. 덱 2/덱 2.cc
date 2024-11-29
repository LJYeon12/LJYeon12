#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, q, num;
	cin >> n;

	deque <int> x;
	for (int i = 0; i < n; i++) {
		cin >> q;
		switch (q)
		{
		case 1:
			cin >> num;
			x.push_front(num);
			break;
		case 2:
			cin >> num;
			x.push_back(num);
			break;
		case 3:
			if (!x.empty()) {
				cout << x.front() << "\n";
				x.pop_front();
			}
			else cout << -1 << "\n";
			break;
		case 4:
			if (!x.empty()) {
				cout << x.back() << "\n";
				x.pop_back();
			}
			else cout << -1 << "\n";
			break;
		case 5:
			cout << x.size() << "\n";
			break;
		case 6:
			cout << x.empty() << "\n";
			break;
		case 7:
			if (!x.empty()) {
				cout << x.front() << "\n";
			}
			else cout << -1 << "\n";
			break;
		case 8:			
			if (!x.empty()) {
				cout << x.back() << "\n";
			}
			else cout << -1 << "\n";
			break;
		default:
			break;
		}
	}
}
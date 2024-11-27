#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, order, num;
	cin >> n;
	
	stack <int> arr;
	for (int i = 0; i < n; i++) {
		cin >> order;
		switch (order)
		{
		case 1:
			cin >> num;
			arr.push(num);
			break;
		case 2:
			if (!arr.empty()) {
				cout << arr.top() << "\n";
				arr.pop();
			}
			else cout << -1 << "\n";
			break;
		case 3:
			cout << arr.size() << "\n";
			break;
		case 4:
			cout << arr.empty() << "\n";
			break;
		case 5:
			if (!arr.empty()) cout << arr.top() << "\n";
			else cout << -1 << "\n";
			break;
		default:
			break;
		}
	}
	return 0;
}
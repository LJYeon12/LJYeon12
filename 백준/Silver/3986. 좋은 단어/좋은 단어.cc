#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	cin >> n;
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> str;
		stack <char> s;
		for (char c : str) {
			if (s.empty()) s.push(c);
			else {
				if (s.top() == 'A' && c == 'A') {
					s.pop();
				}
				else if (s.top() == 'B' && c == 'B') {
					s.pop();
				}
				else s.push(c);
			}
		}
		if (s.empty()) ans++;
	}
	cout << ans;

	return 0;
}
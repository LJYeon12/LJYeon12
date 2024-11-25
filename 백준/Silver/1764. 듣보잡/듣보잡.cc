#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;

	set <string> no_listen;
	set <string> no_look;
	set <string> answer;
	string w;
	for (int i = 0; i < n; i++) {
		cin >> w;
		no_listen.insert(w);
	}
	for (int i = 0; i < m; i++) {
		cin >> w;
		no_look.insert(w);
	}
	int ans = 0;
	if (n >= m) {
		for (auto x : no_listen) {
			if (no_look.count(x))
			{
				ans++;
				answer.insert(x);
			}
		}
	}
	else {
		for (auto x : no_look) {
			if (no_listen.count(x)) {
				ans++;
				answer.insert(x);
			}
		}
	}
	cout << ans << '\n';
	for (auto x : answer) cout << x << '\n';
}
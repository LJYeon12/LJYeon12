#include<iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		bool vps = true;
		stack <char> s;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '('){
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else vps = false;
			}

		}
		if (!s.empty() || vps == false) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	
	while (true) {
		stack <char> s;
		getline(cin, str);
		if (str == ".") break;
		for (int i = 0; str[i] != '.'; i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else s.push(str[i]);
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else s.push(str[i]);
			}
		}
		if (s.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 스택이 문자 뿐만 아니라 값도 같이 가지고 있을 것
	string str;
	stack <int> s;
	int ans = 0; // 누적해서 더해질 값
	int multi = 1; // 곱해질 값

	cin >> str;

	bool isCorrect = true;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			multi *= 2;
			s.push(str[i]);
		}
		else if (str[i] == '[') {
			multi *= 3;
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (s.empty() || s.top() != '(') {
				cout << 0;
				return 0;
			}

			if (str[i - 1] == '(') ans += multi;
			s.pop();
			multi /= 2;
		}
		else if (str[i] == ']') {
			if (s.empty() || s.top() != '[') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '[') ans += multi;
			s.pop();
			multi /= 3;
		}
	}

	if (s.empty()) cout << ans;
	else cout << 0;

	return 0;
}
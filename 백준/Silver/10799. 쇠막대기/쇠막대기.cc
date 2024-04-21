#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;
	stack <char> s; 
	int sum = 0;

	for (int i = 0; i< str.size(); i++) {
		if (str[i] == '(') {
			s.push('(');
		}
		else if (str[i] == ')') {
			s.pop();
			if (str[i - 1] == '(') { // 레이저일 경우
				sum += s.size();
			}
			else { // 레이저가 아닐 경우
				sum++;
			}

		}
	}
	cout << sum;
	return 0;
}
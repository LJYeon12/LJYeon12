#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, result = 0, num = 1, change_num;
	string s;
	cin >> s >> n;
	for (int i = 0; i < s.length(); i++) {
		if (s[s.length() - 1 - i] >= 'A' && s[s.length() - 1 - i] <= 'Z')
			change_num = s[s.length() - 1 - i] - 'A' + 10;
		else
			change_num = s[s.length() - 1 - i] - '0';
		result += num * change_num;
		num *= n;
	}
	cout << result;
}
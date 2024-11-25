#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	unordered_set <string> word;
	cin >> s;
	int n = 1, idx = 0;
	while (n != s.length() + 1) {
		for (int i = 0; i < s.length() - n + 1; i++) {
			word.insert(s.substr(i, n));
		}
		n++;
	}
	cout << word.size();
}
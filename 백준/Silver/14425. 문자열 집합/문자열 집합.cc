#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	set <string> s;
	int n, m, ans = 0;
	string word;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> word;
		s.insert(word);
	}
	for (int i = 0; i < m; i++) {
		cin >> word;
		if (s.count(word)) { // 집합 안에 단어가 존재하는가 판단
			ans++;
		}
	}
	cout << ans;
}
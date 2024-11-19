#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, s[1001];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	sort(s, s + n);
	for (int i = 0; i < n; i++) cout << s[i] << endl;
}
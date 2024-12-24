#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,ans = 0;
	string str;
	map <string, bool> imoji;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "ENTER") {
			ans += imoji.size();
			imoji.clear();
		}
		else {
			if (imoji.find(str) == imoji.end()) imoji.insert({ str, true });
		}
	}
	ans += imoji.size();
	cout << ans;
	return 0;
}
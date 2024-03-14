#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	vector <int> Ascii(26); //{0,0,0.........}

	cin >> s;

	//아스키코드(a ~ z) : 97 ~ 122 => 122 - 97 + 1 = 26
	
	for (int i = 0; i < s.size(); i++) {
		Ascii[s[i] - 97]++;
	}

	for (int e : Ascii) {
		cout << e << ' ';
	}
}
#include <iostream>
#include <vector>
using namespace std;

int N;
string str1, str2;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int strResult[26] = {};
		cin >> str1 >> str2;

		for (auto c : str1) strResult[c - 'a']++;
		for (auto c : str2) strResult[c - 'a']--; 
		bool result = true;

		for (int i : strResult) {
			if (i != 0) result = false;
		}

		if (result == true) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}
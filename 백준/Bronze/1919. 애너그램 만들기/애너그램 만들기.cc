#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	cin >> str1 >> str2;

	int a[26] = {};
	for (int c : str1) a[c - 'a']++; // 2 2 2 00000000
	for (int c : str2) a[c - 'a']--; // 

	int sum = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] < 0) a[i] *= (-1);
		sum += a[i];
	}
	cout << sum;
}
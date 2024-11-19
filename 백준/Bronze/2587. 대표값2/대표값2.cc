#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s[5], average = 0, mid;
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
		average += s[i];
	}
	average /= 5;
	sort(s, s + 5);
	cout << average << endl << s[2];
}
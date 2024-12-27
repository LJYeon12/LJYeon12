#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	if (n == 0) cout << 0;
	else if (n == 1) cout << 1;
	else {
		int previous = 1;
		int pprevious = 0;
		int temp;
		for (int i = 2; i <= n; i++) {
			temp = previous + pprevious;
			pprevious = previous;
			previous = temp;
		}
		cout << temp;
	}
}
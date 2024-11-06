#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int Quater = 0, Dime = 0, Nickel = 0, Penny = 0, t, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> c;
		Quater = 0, Dime = 0, Nickel = 0, Penny = 0;
		if (c / 25) {
			Quater = c / 25;
			c %= 25;
		}
		if (c / 10) {
			Dime = c / 10;
			c %= 10;
		}
		if (c / 5) {
			Nickel = c / 5;
			c %= 5;
		}
		Penny = c;
		cout << Quater << " " << Dime << " " << Nickel << " " << Penny << endl;
	}

}
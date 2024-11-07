#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int k, right_under = 0; // 0 : right, 1 : under
	cin >> k;
	int result = 1, x = 1, y = 1;
	while (result != k) {
		if (right_under == 0 && x != 1) {
			y++; x--;
		}
		else if (right_under == 1 && y != 1) {
			y--; x++;
		}
		else if (x == 1 && right_under == 0) {
			y++;
			right_under = 1;
		}
		else if (y == 1 && right_under == 1){
			x++;
			right_under = 0;
		}
		result++;
	}
	cout << x << "/" << y;
}
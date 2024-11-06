#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	else {
		int min, max, pass = 1; // pass + 1이 방을 지난 개주
		while (true)
		{
			min = 3 * pass * pass - 3 * pass + 2;
			max = 3 * pass * pass + 3 * pass + 1;
			if (n <= max && n >= min) {
				cout << pass + 1;
				return 0;
			}
			pass++;
		}
	}
}
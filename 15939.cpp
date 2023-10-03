#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int j[2];
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> j[0] >> j[1];
		int sum = 0;
		for (int k = 0; k < 2; k++) {
			if (k == 0) {
				if (j[k] == 1) sum += 5000000;
				else if (2 <= j[k] && j[k] <= 3) sum += 3000000;
				else if (4 <= j[k] && j[k] <= 6) sum += 2000000;
				else if (7 <= j[k] && j[k] <= 10) sum += 500000;
				else if (11 <= j[k] && j[k] <= 15) sum += 300000;
				else if (16 <= j[k] && j[k] <= 21) sum += 100000;
				else sum += 0;
			}
			if (k == 1) {
				if (j[k] == 1) sum += 5120000;
				else if (2 <= j[k] && j[k] <= 3) sum += 2560000;
				else if (4 <= j[k] && j[k] <= 7) sum += 1280000;
				else if (8 <= j[k] && j[k] <= 15) sum += 640000;
				else if (16 <= j[k] && j[k] <= 31) sum += 320000;
				else sum += 0;
			}
		}
		cout << sum<<"\n";
	}

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int r[3];
	cin >> r[0] >> r[1] >> r[2];
	if (r[0] == 60 && r[1] == 60 && r[2] == 60) {
		cout << "Equilateral";
	}
	else if (r[0] + r[1] + r[2] != 180) cout << "Error";
	else if (r[0] != r[1] && r[0] != r[2] && r[1] != r[2]) cout << "Scalene";
	else cout << "Isosceles";
}
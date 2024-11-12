#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int l[3];
	while (true) {
		cin >> l[0] >> l[1] >> l[2];
		if (l[0] == 0 && l[1] == 0 && l[2] == 0) return 0;
		if (l[0] == l[1] && l[0] == l[2] && l[1] == l[2]) {
			cout << "Equilateral" << endl;
		}
		else if (l[0] + l[1] + l[2]  <= 2 * (*max_element(l, l + 3))) cout << "Invalid" <<endl;
		else if (l[0] != l[1] && l[0] != l[2] && l[1] != l[2]) cout << "Scalene" << endl;
		else cout << "Isosceles" << endl;
	}
}
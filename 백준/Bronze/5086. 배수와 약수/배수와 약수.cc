#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a = 9999, b = 9999;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) return 0;
		if (a % b == 0) { // 첫번째 숫자가 두번째 숫자의 배수인 경우
			cout << "multiple" << endl;
		}
		else if (b % a == 0) { // 첫번째 숫자가 두번째 숫자의 약수인 경우
			cout << "factor" << endl;
		}
		else {
			cout << "neither" << endl;
		}
	}
}
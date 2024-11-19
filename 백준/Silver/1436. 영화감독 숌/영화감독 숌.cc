#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	// 666이 들어가는 숫자 중 n번째로 작은 수를 출력
	int title = 666;
	while (n) {
		if (to_string(title).find("666") != string::npos) n--;
		title++;
	}
	cout << title - 1;
}
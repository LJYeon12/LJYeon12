#include <iostream>
using namespace std;

int arr[100001] = { 0, };

void check_perfect_number(int n) {
	int sum = 0, pos = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
			arr[pos++] = i;
		}
	}
	if (sum == n) {
		cout << n << " = ";
		for (int i = 0; i < pos - 1; i++) {
			cout << arr[i] << " + ";
		}
		cout << arr[pos - 1] << endl;
	}
	else cout << n << " is NOT perfect." << endl;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	while (true) {
		cin >> n;
		if (n == -1) return (0);
		check_perfect_number(n);
	}
}
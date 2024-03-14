#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <int> set(10);
	int num;
	int n;
	int max = 0;
	cin >> num;

	while (num != 0) {
		n = num % 10;
		num /= 10;
		if (n == 6 && set[n] > set[9]) {
			set[9]++;
			continue;
		}
		else if (n == 9 && set[n] > set[6]) {
			set[6]++;
			continue;
		}
		else
		{
			set[n]++;
		}
	}

	for (int e : set) {
		if (e > max)
			max = e;
	}
	cout << max;
}
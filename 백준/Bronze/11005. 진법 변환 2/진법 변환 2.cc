#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int b, n;
	char out[31];
	cin >> n >> b;

	int len = 0;
	int rest = 0;
	while (n != 0) {
		rest = n % b;
		if (n % b < 10) {
			out[len] = '0' + (n % b);
		}
		else {
			out[len] = 'A' + ((n % b) - 10);
		}
		n /= b;
		len++;
	}
	if (n < 10) {
		out[len] = '0' + (n % b);
	}
	else {
		out[len] = 'A' + ((n % b) - 10);
	}
	out[len + 1] = '\0';

	for (int i = len - 1; i >= 0; i--) cout << out[i];
}
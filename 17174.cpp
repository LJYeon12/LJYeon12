#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int M; int N;
	cin >> N >> M;

	int result = N;
	int count = N;
	while (count / M) { // 12 >> 1 >> 0
		count = count / M; //12 >> 1
		result += count; // 112 >> 113
	}

	cout << result;
	return 0;
}
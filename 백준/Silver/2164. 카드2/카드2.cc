#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	queue <int> arr;
	for (int i = 1; i <= n; i++) {
		arr.push(i);
	}

	while (arr.size() != 1) {
		arr.pop();
		arr.push(arr.front());
		arr.pop();
	}

	cout << arr.front();
}
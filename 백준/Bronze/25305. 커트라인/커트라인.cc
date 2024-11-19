#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, k, score[1001];
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> score[i];
	sort(score, score + n);
	cout << score[n - k];
}
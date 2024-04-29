#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

int n, m;
ll card[500001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> card[i];
	sort(card, card + n);

	cin >> m;
	
	int mCard;
	for (int i = 0; i < m; i++) {
		cin >> mCard;
		cout << (int)binary_search(card, card + n, mCard) << ' ';
	}

	return 0;
}
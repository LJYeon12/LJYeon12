#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

ll a[500001];
ll b[500001];
vector <ll> ans;
int aN, bN;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> aN >> bN;
	for (int i = 0; i < aN; i++) cin >> a[i];
	for (int i = 0; i < bN; i++) cin >> b[i];
	sort(a, a + aN);
	sort(b, b + bN);

	int sum = aN;
	for (int i = 0; i < aN; i++) {
		if (binary_search(b, b + bN, a[i])) {
			sum--;
			continue;
		}
		ans.push_back(a[i]);
	}

	cout << sum << "\n";
	for (auto v : ans) cout << v << ' ';

	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	map <int, int> num;
	int n, d; double average = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> d;
		if (num.find(d) != num.end()) num[d]++;
		else num.insert(make_pair(d, 1));
	}
	
	int count = 0;
	for (auto m : num) {
		average += m.first * m.second;
	}
	average /= n;
	if (average < 0) cout << (int)(average - 0.5) << "\n";
	else cout << (int)(average + 0.5) << "\n";
	for (auto m : num) {
		count += m.second;
		if (count >= ((n / 2) + 1)) {
			cout << m.first << "\n";
			break;
		}
	}
	int max_repit = 0;
	vector <int> repit;
	for (auto m : num) {
		if (max_repit < m.second) {
			max_repit = m.second;
			repit.clear();
			repit.push_back(m.first);
		}
		else if (max_repit == m.second) repit.push_back(m.first);
	}
	if (repit.size() > 1)
	{
		sort(repit.begin(), repit.end());
		cout << repit[1] << "\n";
	}
	else cout << repit.front() << "\n";

	auto f = num.begin();
	auto l = --num.end();
	cout << l->first - f->first;
}
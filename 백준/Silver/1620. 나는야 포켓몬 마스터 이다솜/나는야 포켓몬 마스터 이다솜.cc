#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
// map(트리)보다 unordered_map(해시)이 더 빠르다. 
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map <string, int> table2;
	unordered_map <int, string> table1;
	int n, m;
	string pokemon;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> pokemon;
		table1[i + 1] = pokemon;
		table2[pokemon] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		string q;
		cin >> q;
		if (isdigit(q[0])) {
			int num = stoi(q);
			cout << table1[num] << "\n";
		}
		else {
			cout << table2[q] << "\n";
		}
	}
}
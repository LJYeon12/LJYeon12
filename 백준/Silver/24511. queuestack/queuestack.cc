#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, a[100001], m, ans;
vector <int> v;
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) { // a[i] = 0 -> 큐 , 1 -> stack
		cin >> a[i];
	}
	int check;
	for (int i = 0; i < n; i++) { // 1 4
		cin >> check;
		if (a[i] == 0) v.push_back(check);
	}
	reverse(v.begin(), v.end());
	queue <int> q;
	for (int num: v) { // 4 1
		q.push(num);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> ans;
		q.push(ans);
		cout << q.front() << " ";
		q.pop();
	}
}
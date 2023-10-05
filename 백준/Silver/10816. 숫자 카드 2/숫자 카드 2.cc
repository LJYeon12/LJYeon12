#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n); //-10 -10 2 3 3 6 7 10 10 10
	cin >> m;
	int num;
	for (int i = 0; i < m; i++) {
		cin >> num;
		int result = upper_bound(arr, arr + n, num) - lower_bound(arr, arr + n, num);
		cout << result << " ";
	}
	return 0;
}
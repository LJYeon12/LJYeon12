#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[100001];
int marr[100001];

int binarysearch(int arr[], int size, int target) {
	int left = 0;
	int right = size - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (target < arr[mid]) right = mid - 1;
		else if (target > arr[mid]) left = mid + 1;
		else return 1;
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,m,num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout <<binarysearch(a, n, num)<<"\n";
	}
	return 0;
}
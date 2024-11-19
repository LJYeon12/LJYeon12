#include <iostream>
#include <algorithm>
using namespace std;

int arr[11];
int main() {
	int n, idx = 0;
	cin >> n;
	while (n)
	{
		arr[idx] = n % 10;
		n /= 10;
		idx++;
	}
	sort(arr, arr + idx);
	for (int i = idx -1; i >= 0; i--) cout << arr[i];
}
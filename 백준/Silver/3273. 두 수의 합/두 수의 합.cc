#include <iostream>
#include <vector>
using namespace std;


vector <int> arr(2000001); // 자연수 존재여부 저장
vector <int> a(1000001);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,x;
	int result = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;

	for (int i = 0; i < n; i++) {
		// x - a[i]가 존재할 경우
		if (x - a[i] > 0 && arr[x - a[i]] != 0) result++;
		arr[a[i]]++;
	}
	cout << result;
}
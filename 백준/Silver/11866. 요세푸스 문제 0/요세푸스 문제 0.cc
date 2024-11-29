#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	queue <int> arr;
	int n, k; //   3  5 -> 2 4 1 5
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		arr.push(i);
	}
	cout << "<";
	while (arr.size() > 1) { //   3 4 5 6 1 2
		// K-1명 뒤로 보내기
		for (int i = 1; i < k; i++) {
			int temp = arr.front();
			arr.pop();
			arr.push(temp);
		}
		// K번째 사람 제거
		cout << arr.front() << ", ";
		arr.pop();
	}
	cout << arr.front() << ">";
	return 0;
}
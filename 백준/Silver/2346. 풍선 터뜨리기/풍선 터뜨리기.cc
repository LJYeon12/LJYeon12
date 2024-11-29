#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, arr[1001];
	cin >> n;

	deque <int> balloon;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		balloon.push_back(i);
	}
	cout << balloon.front() << " ";
	balloon.pop_front();
	int dis = arr[1];
	while (!balloon.empty()) { // 2 3 -> 1 4 5
		if (dis > 0) {
			for (int i = 1; i < dis; i++) {
				int temp = balloon.front();
				balloon.pop_front();
				balloon.push_back(temp);
			}
			dis = arr[balloon.front()];
			cout << balloon.front() << " ";
			balloon.pop_front();
		}
		else { // 1 2 3 4 5
			for (int i = -1; i > dis; i--) {
				int temp = balloon.back();
				balloon.pop_back();
				balloon.push_front(temp);
			}
			dis = arr[balloon.back()];
			cout << balloon.back() << " ";
			balloon.pop_back();
		}
	}
}
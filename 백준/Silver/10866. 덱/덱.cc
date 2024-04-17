#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque <int> arr;
	int n,num;
	cin >> n;
	string comment;
	for (int i = 0; i < n; i++) {
		cin >> comment;
		if (comment == "push_front") {
			cin >> num;
			arr.push_front(num);
		}
		else if (comment == "push_back")
		{
			cin >> num;
			arr.push_back(num);
		}
		else if (comment == "pop_front") {
			if (arr.empty()) cout << -1 <<"\n";
			else {
				cout << arr.front() << "\n";
				arr.pop_front();
			}
		}
		else if (comment == "pop_back") {
			if (arr.empty()) cout << -1 <<"\n";
			else {
				cout << arr.back() << "\n";
				arr.pop_back();
			}
		}
		else if (comment == "size" ) {
			cout << arr.size() << "\n";
		}
		else if (comment == "empty") {
			if (arr.empty()) cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (comment == "front") {
			if (arr.empty()) cout << -1 << "\n";
			else
				cout << arr.front() << "\n";
		}
		else { // back
			if (arr.empty()) cout << -1 << "\n";
			else
				cout << arr.back() << "\n";
		}

	}
}
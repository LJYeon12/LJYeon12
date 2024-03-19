#include <iostream>
#include <stack>
using namespace std;

int N, num;
string order;
stack <int> s;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			s.push(num);
		}
		else if (order == "top")
		{
			if (!s.size()) cout << -1 << "\n";
			else cout << s.top() << "\n";
		}
		else if (order == "size") {
			cout << s.size() << "\n";
		}
		else if (order == "empty") {
			cout << (s.empty()) ? 1 : 0 ;
			cout << "\n";
		}
		else {
			if (s.size()) { cout << s.top() << "\n";  s.pop(); }
			else cout << -1 << "\n";
		}
	}

}
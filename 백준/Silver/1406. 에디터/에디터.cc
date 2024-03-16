#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	list<char> ans;
	int M;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		ans.push_back(str[i]);
	}
	///////////////////
	cin >> M;
	auto cuser = ans.end(); //리스트 마지막을 가리킴
	char command;
	char value;

	for (int i = 0; i < M; i++) {
		cin >> command;
		if (command == 'P') {
			cin >> value;
			ans.insert(cuser, value);
		}
		else if(command == 'L' && cuser != ans.begin()) {
			cuser--;
		}
		else if(command == 'D' && cuser != ans.end())
		{
			cuser++;
		}
		else if (command == 'B' && cuser != ans.begin()) {
			cuser = ans.erase(--cuser);
		}
	}

	for (char e : ans) cout << e;
}
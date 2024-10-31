#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string s;
	char* str = new char[1000001]();
	int* num = new int[1000001]();

	cin >> s;

	int str_pos = 0;
	bool not_in;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - ('A' - 'a');
		not_in = true;
		for (int p = 0; p < str_pos; p++) {
			if (str[p] == s[i]) {
				num[p]++;
				not_in = false;
			}
		}
		if (not_in == true)
		{
			str[str_pos] = s[i];
			num[str_pos]++;
			str_pos++;
		}
	}

	// find_max
	int find_max = 0;
	bool again = false;
	int max_pos = 0;
	for (int i = 0; i < str_pos; i++)
	{
		if (find_max == num[i]) again = true;
		else if (find_max < num[i]) {
			find_max = num[i];
			max_pos = i;
			again = false;
		}
	}

	if (again == true) cout << '?';
	else
	{
		char last = str[max_pos] - ('a' - 'A');
		cout << last;
	}
	

	// 동적 할당 해제
	delete[] str;
	delete[] num;
}
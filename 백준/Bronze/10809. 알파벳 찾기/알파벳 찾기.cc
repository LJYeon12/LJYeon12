#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int pos;
	for (char i = 'a'; i <= 'z'; i++)
	{
		pos = s.find(i);
		if (pos != string::npos)
			cout << pos << " ";
		else cout << -1 << " ";
	}
}
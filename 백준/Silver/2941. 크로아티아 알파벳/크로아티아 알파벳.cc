#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string s;
	cin >> s;

	int cnt = 0, i = 0;

    while (i < s.length()) {
        if (s[i] == 'c') {
            if (i + 1 < s.length() && (s[i + 1] == '=' || s[i + 1] == '-')) i++;
        }
        else if (s[i] == 'd') {
            if (i + 2 < s.length() && s[i + 1] == 'z' && s[i + 2] == '=') i += 2;
            else if (i + 1 < s.length() && s[i + 1] == '-') i++;
        }
        else if (s[i] == 'l') {
            if (i + 1 < s.length() && s[i + 1] == 'j') i++;
        }
        else if (s[i] == 'n') {
            if (i + 1 < s.length() && s[i + 1] == 'j') i++;
        }
        else if (s[i] == 's') {
            if (i + 1 < s.length() && s[i + 1] == '=') i++;
        }
        else if (s[i] == 'z') {
            if (i + 1 < s.length() && s[i + 1] == '=') i++;
        }
        cnt++;
        i++;
    }

	cout << cnt;
}
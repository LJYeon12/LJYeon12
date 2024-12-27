#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

unordered_map <string, pair<int, int>> words;
vector <string> array_word;
int n, m;
string str;
// 자주 나오는 단어 순으로 앞에 배치

void set_array_word() {
	for (auto word : words)
		array_word.push_back(word.first);
	sort(array_word.begin(), array_word.end(), [&](const string& a, const string& b) {
		if (words[a].first != words[b].first)
		return words[a].first > words[b].first;
	if (words[a].second != words[b].second)
		return words[a].second > words[b].second;
	return a < b;
		});
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// 단어, (빈도, 길이)

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.size() < m) continue;
		if (words.find(str) != words.end()) words[str].first++;
		else words.insert({ str, make_pair(1, str.length()) });
	}
	set_array_word();
	for (auto word : array_word) {
		cout << word << "\n";
	}
}
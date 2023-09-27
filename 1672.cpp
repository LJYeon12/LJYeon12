#include <iostream>
//#include <vector>
using namespace std;

string arr;
void FindDNA(int num) { //A: 65(97	G: 71(103 C: 67(99 T: 84(116
	arr.pop_back();
	int k = arr.size()-1;
	if (num == 130 || num == 132 || num == 155) {
		arr[k] = 'A';
	}
	//A : 97+97=194 or 97+99=196 or 103+116=219
	else if (num == 149 || num == 142 || num == 151)	arr[k] = 'G';// G : 97 + 116 = 213 or 206 or 99+116 = 215
	else if (num == 136 || num == 134 ) arr[k] = 'C';	// c : 97+ 103 = 200 or 198
	else if (num == 138 || num == 168)	arr[k] = 'T';					//T; 103 +99 =202 or 232
}

int main() {
	int n;
	cin >> n;
	cin >> arr;

	while (arr.size() != 1) {
		int i = arr.length() - 1; // i= 5
		int cal = arr[i] + arr[i - 1];
		FindDNA(cal);
	}
	cout << arr.front();
	return 0;
}
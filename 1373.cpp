#include <iostream>
using namespace std;

string binary;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> binary;
	while (binary.size() % 3 != 0) binary.insert(0, "0"); //string은 insert사용 가능
	// binary = '0' + binary; >>또한 사용 가능
	for (int i = 0; i < binary.length(); i += 3) { //단순 수학 수식을 이용하면 훨씬 편리
		int chO = (binary[i]-'0') * 4 + (binary[i + 1]-'0') * 2 + (binary[i + 2]-'0') * 1;
		// binary[0] * 3 이나 (int)binary[0]로 변환시 아스키 코드 값을 인식하여 아스키코드*숫자로 계산
		cout << chO;
	} 
	return 0;
}
//오답
/*stack <int> octal;
void changeO(string binary) {
	int sum=0;
	if (binary[binary.size() - 1] == '1') sum++;
	if (binary[binary.size() - 2] == '1') sum += 2;
	if (binary[binary.size() - 3] == '1') sum += 4;

	octal.push(sum);
}*/
/*while (!binary.empty()) { // string과 int의 byte 할당은 서로 달라 오류가 생길지도 모르니 (int)를 붙여 오류 발생률을 줄이자!
	changeO(binary); //O(1)
	binary.pop_back();
	binary.pop_back();
	binary.pop_back();
}
while (!octal.empty()) {
	cout << octal.top();
	octal.pop();
}*/
#include <iostream>
using namespace std;

string binary;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> binary;
	while (binary.size() % 3 != 0) binary.insert(0, "0"); //string�� insert��� ����
	// binary = '0' + binary; >>���� ��� ����
	for (int i = 0; i < binary.length(); i += 3) { //�ܼ� ���� ������ �̿��ϸ� �ξ� ��
		int chO = (binary[i]-'0') * 4 + (binary[i + 1]-'0') * 2 + (binary[i + 2]-'0') * 1;
		// binary[0] * 3 �̳� (int)binary[0]�� ��ȯ�� �ƽ�Ű �ڵ� ���� �ν��Ͽ� �ƽ�Ű�ڵ�*���ڷ� ���
		cout << chO;
	} 
	return 0;
}
//����
/*stack <int> octal;
void changeO(string binary) {
	int sum=0;
	if (binary[binary.size() - 1] == '1') sum++;
	if (binary[binary.size() - 2] == '1') sum += 2;
	if (binary[binary.size() - 3] == '1') sum += 4;

	octal.push(sum);
}*/
/*while (!binary.empty()) { // string�� int�� byte �Ҵ��� ���� �޶� ������ �������� �𸣴� (int)�� �ٿ� ���� �߻����� ������!
	changeO(binary); //O(1)
	binary.pop_back();
	binary.pop_back();
	binary.pop_back();
}
while (!octal.empty()) {
	cout << octal.top();
	octal.pop();
}*/
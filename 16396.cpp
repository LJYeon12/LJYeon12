#include <iostream>
using namespace std;
//�ܼ��ϰ� ������ ��
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,x,y; 
	cin >> n;
	bool len[10001] = {0,}; //�迭 ���� ���

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j=x; j < y; j++) {
			len[j] = 1;
		}
	}
	int sum=0;
	for (int i = 1; i <= 10000; i++) {
		if (len[i] == 1) sum++;
	}
	cout << sum;
	return 0;
}
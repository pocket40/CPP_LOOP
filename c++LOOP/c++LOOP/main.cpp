#include <iostream>

using namespace std;

int main() 
{
	//�迭 ��� �ݺ���
	int a[10] = { 1,3,5,7,9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) { // �迭�� ��� ���� ��� //������ ���� ��µȴ�.
		cout << i;
	}


	return 0;
}
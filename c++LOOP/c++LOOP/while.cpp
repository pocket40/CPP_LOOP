#include <iostream>

using namespace std;

int main()
{
	 // while �� , do while��

	//int i = 0;
	//while (i < 3) {
	//	//code
	//	i++;
	//}

	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}

	bool j = false;
	do {
		cout << "while���Դϴ�." << endl; // while(���ǽ�)�� false do�ȿ��� �ѹ��� ����ȴ�.
	} while (j);

	return 0;
}
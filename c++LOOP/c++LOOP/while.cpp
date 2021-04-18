#include <iostream>

using namespace std;

int main()
{
	 // while 문 , do while문

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
		cout << "while문입니다." << endl; // while(조건식)이 false do안에서 한번은 실행된다.
	} while (j);

	return 0;
}
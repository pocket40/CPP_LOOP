#include <iostream>

using namespace std;

int main() 
{
	//배열 기반 반복문
	int a[10] = { 1,3,5,7,9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) { // 배열의 모든 값을 출력 //나머지 값도 출력된다.
		cout << i;
	}


	return 0;
}
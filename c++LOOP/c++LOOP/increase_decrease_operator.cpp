#include <iostream>
using namespace std;

int main()
{
	//반복문이란?

	for (int i = 5; i > 0; i--) {
		cout << i << "번째입니다." << endl;
	}


	//증감 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	 
	cout << "a++는" << a++ << endl;
	cout << "++b는" << ++b << endl;

	cout << "a는 " << a << ", b는 " << b << endl;
	return 0;
}
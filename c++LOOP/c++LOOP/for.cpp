#include <iostream>
using namespace std;

int main() 
{
	//반복문이란?
	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다." << endl;
		
		//i++; // 반복문안에 증감식을 안에 넣어도 오류 없이 실행된다.
	}

	/*
	1. 반복문에 사용할 카운터의 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행합니다.
	4. 카원터의 값을 변화합니다.
	*/
	return 0;
}
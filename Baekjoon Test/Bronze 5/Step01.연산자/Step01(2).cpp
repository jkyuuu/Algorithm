#include <iostream>
#include <cstdlib> // atoi 함수가 선언된 헤더파일 (char(ASCII) to integer : char 형을 int형으로 바꾸기)
#include <string> // (방법 2) string, stoi()를 쓰기 위한 헤더파일

using namespace std;

int main()
{
	// Step01 마지막 문제

	// 방법 1 (char)

	int A;
	char B[4];

	cin >> A;
	cin >> B;

	cout << A * (B[2] - '0') << endl;
	cout << A * (B[1] - '0') << endl;
	cout << A * (B[0] - '0') << endl;
	cout << A * atoi(B) << endl;

	// 아스키코드 값 '3'은 문자 형식이기 때문에 10진법 정수형으로는 값이 51이다.
	// -'0' 을 해주는 이유 또한 우리가 문자로 저장된 숫자가 아닌 우리가 보는 숫자 그대로의 값을 쓰기 위한 것이다.



	// 방법 2 (string)

	int A;
	string B;

	cin >> A;
	cin >> B;

	cout << A * (B[2] - '0') << endl;
	cout << A * (B[1] - '0') << endl;
	cout << A * (B[0] - '0') << endl;
	cout << A * stoi(B) << endl;


	// 방법 3 (숫자 계산)

	int A, B;

	cin >> A;
	cin >> B;

	cout << A * (B % 10) << endl;
	cout << A * ((B % 100) / 10) << endl;
	cout << A * (B / 100) << endl;
	cout << A * B << endl;
}

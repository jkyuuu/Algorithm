#include <iostream>

using namespace std;

int main()
{
	// 1) 두 수 비교하기

	int A;
	int B;

	cin >> A >> B;

	if (A > B)
	{
		cout << ">" << endl;
	}
	else if (A < B)
	{
		cout << "<" << endl;
	}
	else
	{
		cout << "==" << endl;
	}


	// 2) 점수 별 시험 성적 산출

	int A = 0;

	cin >> A;

	if (90 <= A && A <= 100)
	{
		cout << "A" << endl;
	}
	else if (80 <= A)  // (80 <= A && A <= 89)
	{
		cout << "B" << endl;
	}
	else if (70 <= A) // (70 <= A && A <= 79)
	{
		cout << "C" << endl;
	}
	else if (60 <= A) // (60 <= A && A <= 69)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
}
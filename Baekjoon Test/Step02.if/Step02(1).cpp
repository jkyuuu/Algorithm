#include <iostream>

using namespace std;

int main()
{
	cout << "두 수 비교하기" << endl;

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
}
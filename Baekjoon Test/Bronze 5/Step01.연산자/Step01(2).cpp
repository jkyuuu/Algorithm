#include <iostream>
#include <cstdlib> // atoi �Լ��� ����� ������� (char(ASCII) to integer : char ���� int������ �ٲٱ�)
#include <string> // (��� 2) string, stoi()�� ���� ���� �������

using namespace std;

int main()
{
	// Step01 ������ ���� 

	// ��� 1 (char)

	int A;
	char B[4];

	cin >> A;
	cin >> B;

	cout << A * (B[2] - '0') << endl;
	cout << A * (B[1] - '0') << endl;
	cout << A * (B[0] - '0') << endl;
	cout << A * atoi(B) << endl;

	// �ƽ�Ű�ڵ� �� '3'�� ���� �����̱� ������ 10���� ���������δ� ���� 51�̴�.
	// -'0' �� ���ִ� ���� ���� �츮�� ���ڷ� ����� ���ڰ� �ƴ� �츮�� ���� ���� �״���� ���� ���� ���� ���̴�.



	// ��� 2 (string)

	int A;
	string B;

	cin >> A;
	cin >> B;

	cout << A * (B[2] - '0') << endl;
	cout << A * (B[1] - '0') << endl;
	cout << A * (B[0] - '0') << endl;
	cout << A * stoi(B) << endl;


	// ��� 3 (���� ���)

	int A, B;

	cin >> A;
	cin >> B;

	cout << A * (B % 10) << endl;
	cout << A * ((B % 100) / 10) << endl;
	cout << A * (B / 100) << endl;
	cout << A * B << endl;
}
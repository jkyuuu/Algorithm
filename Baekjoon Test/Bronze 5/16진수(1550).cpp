#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	// 16���� �� �Է� �޾� 10������ ���
	char hexadecimal[7];

	cout << "16���� 6�ڸ����� �Է� : ";
	cin >> hexadecimal;

	int decimal = 0;
	int squared = 0;


	for (int i = strlen(hexadecimal) - 1; i >= 0; i--)
	{
		char hexChar = hexadecimal[i];

		if (hexChar >= 48 && hexChar <= 57)
		{
			decimal += (hexChar - 48) * pow(16, squared);
		}
		else if (hexChar >= 65 && hexChar <= 70)
		{
			decimal += (hexChar - (65 - 10)) * pow(16, squared);
		}
		else if (hexChar >= 97 && hexChar <= 102)
		{
			decimal += (hexChar - (97 - 10)) * pow(16, squared);
		}
		squared++;
	}

	cout << decimal << endl;
	return 0;
}

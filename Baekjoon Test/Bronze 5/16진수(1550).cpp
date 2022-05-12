#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	// 16진수 수 입력 받아 10진수로 출력
	char hexadecimal[7];

	cout << "16진수 6자리까지 입력 : ";
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

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "-----------------------" << endl;

    cout << "����ģ�� ��������" << endl;
    cout << "����ģ�� ��������" << endl;
    cout << "-----------------------" << endl;

    cout << "\\    /\\" << endl;
    cout << " )  ( ')" << endl;
    cout << "(  /  )" << endl;
    cout << " \\(__)|" << endl;
    cout << "-----------------------" << endl;

    cout << "|\\_/|" << endl;
    cout << "|q p|   /}" << endl;
    cout << "( 0 )\"\"\"\\" << endl;
    cout << "|\"\^\"\`    |" << endl;
    cout << "||_/=\\\\__|" << endl;
    cout << "-----------------------" << endl;

    int A;
    int B;
    int C;
    int D;

    cout << "A+B" << endl;
    cin >> A >> B;
    cout << A + B << endl;
    cout << "-----------------------" << endl;

    cout << "A-B" << endl;
    cin >> A >> B;
    cout << A - B << endl;
    cout << "-----------------------" << endl;

    cout << "A*B" << endl;
    cin >> A >> B;
    cout << A * B << endl;
    cout << "-----------------------" << endl;

    cout << "A/B" << endl;
    cin >> A >> B;
    cout.precision(10);
    cout << A / (double)B << endl;
    cout << "-----------------------" << endl;

    cout << "A+B / A-B / A*B / A/B / A%B" << endl;
    cin >> A >> B;
    cout << A + B << endl;
    cout << A - B << endl;
    cout << A * B << endl;
    cout << A / B << endl;
    cout << A % B << endl;
    cout << "-----------------------" << endl;


    cout << "(A+B)%C�� ((A%C) + (B%C))%C �� ������?" << endl;
    cout << "(A*B)%C�� ((A%C) �� (B%C))%C �� ������?" << endl;
    cin >> A >> B >> C;
    cout << (A + B) % C << endl;
    cout << ((A % C) + (B % C)) % C << endl;
    cout << (A * B) % C << endl;
    cout << ((A % C) * (B % C)) % C << endl;
    cout << "-----------------------" << endl;

    cout << "ABC * DEF" << endl;
    cin >> A;
    cin >> B >> C >> D;
    if (100 <= A <= 999 && 1 <= B <= 9 && 0 <= C,D <= 9)
    {
        cout << A * D << endl;
        cout << A * C * 10 << endl;
        cout << A * B * 100 << endl;
    }
    else
    {
        cout << "���Է�" << endl;
    }

}
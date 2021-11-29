#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "-----------------------" << endl;

    cout << "강한친구 대한육군" << endl;
    cout << "강한친구 대한육군" << endl;
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


    cout << "(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?" << endl;
    cout << "(A*B)%C는 ((A%C) × (B%C))%C 와 같을까?" << endl;
    cin >> A >> B >> C;
    cout << (A + B) % C << endl;
    cout << ((A % C) + (B % C)) % C << endl;
    cout << (A * B) % C << endl;
    cout << ((A % C) * (B % C)) % C << endl;
    cout << "-----------------------" << endl;

}
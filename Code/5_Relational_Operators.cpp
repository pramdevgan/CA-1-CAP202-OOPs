#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 9;
    cout << " 5 is equal to 9 = " << (a == b) << endl;
    cout << " 5 is not equal to 9 = " << (a != b) << endl;
    cout << " 5 is less than 9 = " << (a < b) << endl;
    cout << " 5 is greater than 9 = " << (a > b) << endl;
    cout << " 5 is not less than 9 = " << (a >= b) << endl;
    cout << " 5 is not greater than 9 = " << (a <= b) << endl;
    cout << " 5 is false = " << (!a) << endl;
}
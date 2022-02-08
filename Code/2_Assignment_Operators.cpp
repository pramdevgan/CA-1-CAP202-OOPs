#include <iostream>
using namespace std;
int main(){
    int num1 = 240;
    int num2 = 40;
        cout<< "= Output: "<<(num2 = num1)<<endl;
        cout<<"+= Output: "<<(num2 += num1)<<endl;
        cout<<"-= Output: "<<(num2 -= num1)<<endl;
        cout<<"*= Output: "<<(num2 *= num1)<<endl;
        cout<<"/= Output: "<<(num2 /= num1)<<endl;
        cout<<"%= Output: "<<(num2 %= num1)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main() {

    int a = 4;
    int b = 5;

    cout << "a&b is " << (a & b) << endl;
    cout << "a|b is " << (a | b) << endl;
    cout << "a^b is " << (a ^ b) << endl;
    cout << "~a is " << (~a) << endl;
    cout << "b<<1 is " << (b << 1) << endl;
    cout << "b>>1 is " << (b >> 1) << endl;

    int i = 7;
    cout << (++i) <<endl;
    cout << (i++) <<endl;
    cout << (--i) <<endl;
    cout << (i--) <<endl;
}
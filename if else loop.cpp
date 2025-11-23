#include<iostream>
using namespace std;
int main () {
   int a ;
    cin >> a ;
    if (a<0) {
        cout << "negative" << endl;
    }
    else if (a>0) {
        cout << "positive " << endl;
    }
    else {
        cout << "zero " << endl;
    }
       
       int n ;
       cin >> n ;
       if (n%2==0) {
        cout << "even" << endl;
       }
       else {
        cout << "odd" << endl;
       }
         
             int A , B ;
             cout << "enter the value of A " << endl;
             cin >> A ;
             cout << "enter the value of B " << endl;
             cin >> B ;

             if (A>B) {
              cout << "A is greater " << endl;
              }
             else if ( A<B ) {
                cout << "B is greater " << endl;
             }
             else {
              cout << " both are equal " << endl;
            }

            char ch;
            cin >> ch ;
            if ( ch>='a' && ch<='z') {
                cout << "lowercase " << endl;
            }
            else  if (ch>='A' && ch<='Z') {
                cout << "uppercase" << endl;
            }
            else if (ch>='0' && ch<='9') {
                cout << "digit" << endl;
            }
            
}
#include<iostream>
using namespace std;
int main () {
    int n ;
    cin >> n;
    int i = 1;
    while (i<=n){
        int j = 1;
        while (j<=i) {
        char ch = 'D'-i+j;
        cout << ch;
        j = j + 1;
    }
    cout << endl;
    i++;
 // we need to give n input as 4 in it as D=4 , if it was e then 5 , c then 3

    }
}
#include<iostream>
using namespace std;
int main() {
    //for loop
       /* 
       int n ;
       cin >> n ;
       cout << "THE VALUE OF n IS : " << n << endl;
       for (int i =1 ; i<=n ; i ++ ) {
        cout << i<< endl;
       }
     int m ;
     cin>> m;
        cout << "THE VALUE OF m IS : " << m << endl;
         for (int j = 4;  ;  ){
            while (j<=m) {
                cout << j  << endl;
                j++ ;
            }
         }
            */

            int n ;
            cin >> n;
            int sum = 0;
            for (int i= 1; i<=n ; i ++ ) {
                 sum = sum + i; }
                cout << sum << endl;
            
}
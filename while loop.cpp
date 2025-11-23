#include<iostream>
using namespace std;
int main() 
{
/*int m = 1;
int o;
cin >> o;
while (m<o) {
    cout << m << endl;
    m = m+1;
}

int i = 1;
int sum = 0;
int n;
cin >> n ;
while (i<=n) {
    sum = sum + i;
    i++;
}
 cout << "sum is " << sum <<endl;
 */
int i = 2;
int n ;
cin >> n;

while (i<n) {
    if (n%i==0) {
        cout << "not prime" << endl;
     }
    else {
        cout << "prime" << endl;
    }
     i++;
}

}
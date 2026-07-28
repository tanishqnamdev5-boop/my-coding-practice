#include <iostream>
using namespace std;

int main() {

int n;
cout << "Enter the number of terms: ";
cin >> n;
/* int a=2, d=4;
 for(int i=1; i<=n; i++){
    cout <<a<< " ";
    a+= d;
 }*/
 int a=2, r=2;
 for(int i=1; i<=n; i++){
    cout <<a<< " ";
      a*= r;
 }
    return 0;
}

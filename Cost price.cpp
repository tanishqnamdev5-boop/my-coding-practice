#include <iostream>
using namespace std;

int main() {
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;
    char $=7;
   int area=side*side;
    int cost = area*7;
    
    cout << area << endl;
    cout <<"The cost of fencing is :" << "$" << cost <<endl;

    return 0;
}

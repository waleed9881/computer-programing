//program for finding wether a number is positive or negative 
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter an integer: ");
    cin  >>  num;//user will enter an integer

    
    if (num > 0 ) 
    {
    cout <<    ("The number is positive.\n");
    }
    else
    {
        cout << ("The number is negative.\n");
    }

    return 0;
}
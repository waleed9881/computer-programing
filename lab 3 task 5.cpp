//program for finding wether the number is positive ,zero or negative 
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter an interger: ");
    cin  >>  num;//user will enter a number 

    
    if (num > 0  )
    {
    cout <<    ("The num is positive.\n");
    }
    else if (num < 0 )
    {
        cout << ("The number is negative.\n");}
    else 
	{
	    cout << ("The number is zero.\n");
    }

    return 0;
}
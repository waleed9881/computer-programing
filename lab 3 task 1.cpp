//program for comparing two numbers
#include <iostream>
using namespace std;
int main() {
    int num1;
	int num2;
    
    cout << ("Enter two numbers: ");
    
    cin  >>  num1;
    cin >> num2;

    
    if (num1 > num2 ) 
    {
        cout <<    ("The number is greater then other.\n");
    }
    if (num1 == num2)
    {
        cout << ("The numbers are equal.\n");
		}
    else 
	{
	    cout << ("The number is less then other number.\n");
    }

    return 0;
}
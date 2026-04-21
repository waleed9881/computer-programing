// Name: M. Waleed Javed
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0749
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;  
                // sum of integers only positive 

    cout << "Enter a positive integer: ";
    cin >> num;

    while(i <= num)      // while loop use
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}

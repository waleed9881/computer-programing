//program for finding a person is eligable for PM seat or not 
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter age: ");
    cin  >>  num;

    // Check if number is greater than 18 
    if (num > 18 ) 
    {
    cout <<    ("The person is eligable for PM seat.\n");
    }
    else
    {
        cout << ("The person is not eligable for PM seat.\n");
    }

    return 0;//program ended successfully
}
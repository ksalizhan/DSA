#include <iostream>
using namespace std;

int main() {
    int *ptr1;
    char *ptr2;
    
    // Finding size using sizeof()
    cout << sizeof(ptr1) << endl;
    cout << sizeof(ptr2) << endl;
    
    int val = 32;
    char letter = 'F';
    ptr1 = &val;
    ptr2 = &letter;
    
    cout << *ptr1;
    
    return 0;
}

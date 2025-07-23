#include <iostream>
using namespace std;

// Function prototypes
void swapByValue(int a, int b);              // call by value
void swapByPointer(int *a, int *b);          // call by reference using pointers
void swapByReference(int &a, int &b);        // call by reference using variables

int main() {

    int x = 10, y = 20;
    // Call by Value
    cout << "Before swapByValue:     x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After  swapByValue:     x = " << x << ", y = " << y << "\n\n";
    
    x = 10, y = 20;
    // Call by Reference (pointer)
    cout << "Before swapByPointer:   x = " << x << ", y = " << y << endl;
    swapByPointer(&x, &y);
    cout << "After  swapByPointer:   x = " << x << ", y = " << y << "\n\n";

    x = 10, y = 20;
    // Call by Reference (variable)
    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After  swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}

// swap by value: operates on copies, original x and y unchanged
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "  [Inside swapByValue]     a = " << a << ", b = " << b << endl;
}

// swap by pointer: operates on addresses, original x and y get swapped
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "  [Inside swapByPointer]   *a = " << *a << ", *b = " << *b << endl;
}

// swap by reference: operates on aliases, original x and y get swapped
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "  [Inside swapByReference] a = " << a << ", b = " << b << endl;
}

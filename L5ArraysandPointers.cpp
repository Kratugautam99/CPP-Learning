#include <iostream>
using namespace std;
int main() {
    // Pointers
    // 1. Address‐of (&) and indirection (*)
    int x = 42;
    int* ptr = &x;                // ptr holds the address of x
    cout << "x = " << x << endl;
    cout << "*ptr = " << *ptr << endl;

    // 2. Pointer to pointer (**)
    int** pptr = &ptr;            // pptr holds the address of ptr
    cout << "**pptr = " << **pptr << endl;
    
    // Arrays
    // 1. Static array of 5 ints
    int staticArr[5] = { 1, 2, 3, 4, 5 };

    // 2. Dynamic array (heap-allocated) of 5 ints
    int* dynArr = new int[5];
    for (int i = 0; i < 5; ++i) {
        dynArr[i] = (i + 1) * 10;  // Initializes to 10, 20, 30, 40, 50
    }

    // 3. Update elements
    staticArr[2] = 100;   // staticArr becomes {1, 2, 100, 4, 5}
    dynArr[3]   = 200;     // dynArr becomes {10, 20, 30, 200, 50}

    // 4. Pointer to the first element of the static array
    int* p = staticArr;

    cout << "Static array via pointer arithmetic:\n";
    cout << "Value at p   = " << *p       << "  Address = " << p     << '\n';
    cout << "Value at p+1 = " << *(p + 1) << "  Address = " << (p+1) << '\n';
    cout << "Value at p+2 = " << *(p + 2) << "  Address = " << (p+2) << '\n';
    cout << "Value at p+3 = " << *(p + 3) << "  Address = " << (p+3) << '\n';

    // 5. Repeat for the dynamic array
    int* q = dynArr;
    cout << "\nDynamic array via pointer arithmetic:\n";
    cout << "Value at q   = " << *q       << "  Address = " << q     << '\n';
    cout << "Value at q+1 = " << *(q + 1) << "  Address = " << (q+1) << '\n';
    cout << "Value at q+2 = " << *(q + 2) << "  Address = " << (q+2) << '\n';
    cout << "Value at q+3 = " << *(q + 3) << "  Address = " << (q+3) << '\n';

    // 6. Clean up heap memory
    delete[] dynArr;
    return 0;
}

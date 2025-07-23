#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "Arithmetic Operations:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Increment/Decrement
    cout << "\nIncrement/Decrement Operations:" << endl;
    int p = 5, q = 5;
    cout << "Pre-Increment (++p): " << ++p << endl;
    cout << "Post-Increment (q++): " << q++ << endl;
    cout << "q after post-increment: " << q << endl;
    int m = 5, n = 5;
    cout << "Pre-Decrement (--m): " << --m<< endl;
    cout << "Post-Decrement (n--): " << n-- << endl;
    cout << "n after post-decrement: " << n << endl;

    // Assignment Operators
    cout << "\nAssignment Operations:" << endl;
    int x = a; 
    x += b;    
    cout << "After x += b: " << x << endl;
    x -= b;
    cout << "After x -= b: " << x << endl;
    x *= b;
    cout << "After x *= b: " << x << endl;
    x /= b;
    cout << "After x /= b: " << x << endl;
    x %= b;
    cout << "After x %= b: " << x << endl;

    // Comparison Operators
    cout << "\nComparison Operations:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a < b: "  << (a < b) << endl;
    cout << "a > b: "  << (a > b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    
    // Logical Operators
    cout << "\nLogical Operations:" << endl;
    bool x1 = true, y1 = false;
    cout << "x1 && y1: " << (x1 && y1) << endl;
    cout << "x1 || y1: " << (x1 || y1) << endl;
    cout << "!x1: " << (!x1) << endl;
    return 0;
}

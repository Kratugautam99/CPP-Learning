#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int x = 10.9;
    double y = static_cast<double>(x); // Using static_cast for typecasting or (double)x or double(x) can be used as well.
    std::cout << "The value of y is: " << y << std::endl; 
    // Integer literal
    int i = 62;
    // Floating-point literal
    float f = 3.14f;// or 3.14F 
    // Boolean literal
    bool b = true;
    // Character literal
    char c = 'A';
    // String literal
    const char* s = "Hello, Kratu"; //const means constant and * means pointer
    // nullptr literal (since C++11)
    int* ptr = nullptr;
    // Hexadecimal and Octal literals
    int hex = 0xFF;     // 255 in decimal
    int oct = 075;      // 61 in decimal
     // Double literal
    double d = 3.1415926535;        
    // Long Double literal
    long double ld = 3.1415926535L;  
    // Reference to a literal
    int& ref = i; 
    cout << "i: " << i << ", f: " << f << ", b: " << b 
         << ", c: " << c << ", s: " << s << ", hex: " << hex << ", oct: " << oct << ", d: "<< d <<", ld: "<< ld <<", ref: "<<ref<<endl;
    cout << "without setw: "<< i <<endl;
    cout << "with    setw: "<<setw(4)<< i <<endl;
    return 0;
        }



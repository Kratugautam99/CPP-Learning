#include <iostream>
using namespace std;

// inline function
inline int square(int x) {
    return x * x;
}

// function with default arguments
int volume(int l = 1, int b = 1, int h = 1) {
    return l * b * h;
}

// function with constant argument
void printMessage(const string& msg) {
    cout << "Message: " << msg << endl;
}

// function overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// recursive function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "Inline square of 5 = " << square(5) << endl;

    cout << "Volume with no args = " << volume() << endl;
    cout << "Volume with 2 args = " << volume(2, 3) << endl;
    cout << "Volume with 3 args = " << volume(2, 3, 4) << endl;

    string txt = "Hello, Kratu!";
    printMessage(txt);

    cout << "Integer add: add(2, 3) = " << add(2, 3) << endl;
    cout << "Double add: add(2.5, 3.5) = " << add(2.5, 3.5) << endl;

    cout << "Factorial of 5 = " << factorial(5) << endl;

    return 0;
}

#include<iostream>
using namespace std;
int j = 0;
void printhello() {
    cout << "Hello, World! The Global \"j\" == " << j<< endl;
}
int main() {
    printhello();
    int j;
    float b = 9;
    char c = 'A';
    bool d = true;
    cout<< "Enter a value for j (local): ";
    cin >> j;
    cout << "Value of j(local): "<< j << " and Value of b: " << b << endl;
    std::cout << "\nSum of j and b: " << j + b;
    std::cout << "\nProduct of A and pi: " << c *3.14;
    cout << "\n c * d = " << c*d << " and c * false = "<<c*false<<endl;
    return 0;
}
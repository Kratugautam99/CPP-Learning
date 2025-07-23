#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    int ramGB;
    float price;

public:
    // 1. Default and Blank Constructor
    Laptop() {
        brand = "Unknown";
        ramGB = 0;
        price = 0.0;
        cout << "Default and Blank Constructor called.\n";
    }

    // 2. Parameterized Constructor
    Laptop(string b, int r, float p) {
        brand = b;
        ramGB = r;
        price = p;
        cout << "Parameterized Constructor called.\n";
    }

    // 3. Overloaded and Default Args Constructor 
    Laptop(string b) {
        brand = b;
        ramGB = 8;
        price = 49999.0;
        cout << "Overloaded and Default Args Constructor called.\n";
    }


    // 4. Dynamic Initialization Constructor
    Laptop(float budget) {
        cout << "Dynamic Initialization Constructor called.\n";
        if (budget < 30000) {
            brand = "Acer";
            ramGB = 4;
            price = budget;
        } else {
            brand = "Asus";
            ramGB = 16;
            price = budget;
        }
    }

    // 5. Copy Constructor
    Laptop(const Laptop& other) {
        brand = other.brand;
        ramGB = other.ramGB;
        price = other.price;
        cout << "Copy Constructor called.\n";
    }

    // 6. Destructor
    ~Laptop() {
        cout << "Destructor called for " << brand << "\n";
    }

    void display() const {
        cout << "Brand: " << brand << ", RAM: " << ramGB << "GB, Price: ₹" << price << "\n";
    }
};

int main() {
    Laptop l1;                          // Default constructor
    l1.display();
    Laptop l2("Dell", 16, 75000.0);     // Parameterized constructor
    l2.display();
    Laptop l3("HP");                    // Constructor with default arguments
    l3.display();
    Laptop l4(25000.0);                 // Dynamic initialization
    l4.display();
    Laptop l5 = l2;//or laptop l5(l2)   // Copy constructor
    l5.display();
    return 0;
}

#include <iostream>
using namespace std;

// 🔹 Abstract Base Class with Pure Virtual Function
class Shape {
public:
    virtual void draw() = 0; // Pure virtual
};

// 🔹 Derived Class implementing virtual function
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

// 🔹 Class with 'this' pointer usage
class Counter {
    int count;
public:
    Counter(int c) : count(c) {}
    void show() {
        cout << "Count is: " << this->count << endl;
    }
};

// 🔹 Class for demonstrating pointer to object and arrow operator
class Item {
public:
    void display() {
        cout << "Item displayed\n";
    }
};

// 🔹 Class for demonstrating compile-time polymorphism (function overloading)
class Printer {
public:
    void print(int x) {
        cout << "Printing int: " << x << endl;
    }
    void print(double x) {
        cout << "Printing double: " << x << endl;
    }
};

// 🔹 Class for runtime polymorphism (virtual function)
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    cout << "\n--- Pointer to Object & Arrow Operator ---\n";
    Item obj, *ptr = &obj;
    ptr->display(); // arrow operator

    cout << "\n--- Array of Objects Using Pointers ---\n";
    Counter* arr = new Counter[3]{ Counter(1), Counter(2), Counter(3) };
    for (int i = 0; i < 3; ++i)
        arr[i].show(); // dot operator since arr[i] is object

    cout << "\n--- 'this' Pointer ---\n";
    Counter c(42);
    c.show();

    cout << "\n--- Compile-Time Polymorphism ---\n";
    Printer p;
    p.print(10);
    p.print(3.14);

    cout << "\n--- Runtime Polymorphism ---\n";
    Animal* a = new Dog();
    a->sound(); // virtual function dispatch

    cout << "\n--- Abstract Base Class & Pure Virtual Function ---\n";
    Shape* s = new Circle();
    s->draw();

    delete[] arr;
    delete a;
    delete s;

    return 0;
}

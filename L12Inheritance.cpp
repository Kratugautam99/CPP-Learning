#include <iostream>
using namespace std;

// 🔹 Simple Inheritance
class Animal {
public:
    Animal() { cout << "Animal constructor\n"; }
    void eat() { cout << "Animal eats\n"; }
};

// 🔹 Multilevel Inheritance
class Mammal : public Animal {
public:
    Mammal() { cout << "Mammal constructor\n"; }
    void breathe() { cout << "Mammal breathes\n"; }
};

class Dog : public Mammal {
public:
    Dog() { cout << "Dog constructor\n"; }
    void bark() { cout << "Dog barks\n"; }
};

// 🔹 Multiple Inheritance
class Engine {
public:
    Engine() { cout << "Engine constructor\n"; }
    void start() { cout << "Engine starts\n"; }
};

class Wheels {
public:
    Wheels() { cout << "Wheels constructor\n"; }
    void roll() { cout << "Wheels roll\n"; }
};

class Car : public Engine, public Wheels {
public:
    Car() { cout << "Car constructor\n"; }
    void drive() { cout << "Car drives\n"; }
};

// 🔹 Hierarchical Inheritance
class Shape {
public:
    Shape() { cout << "Shape constructor\n"; }
    void draw() { cout << "Drawing shape\n"; }
};

class Circle : public Shape {
public:
    void radius() { cout << "Circle radius\n"; }
};

class Square : public Shape {
public:
    void side() { cout << "Square side\n"; }
};

// 🔹 Hybrid Inheritance + Virtual Base Class
class Person {
public:
    Person() { cout << "Person constructor\n"; }
    void identity() { cout << "I am a person\n"; }
};

class Student : virtual public Person {
public:
    void study() { cout << "I study\n"; }
};

class Employee : virtual public Person {
public:
    void work() { cout << "I work\n"; }
};

class Intern : public Student, public Employee {
public:
    void internRole() { cout << "I am an intern\n"; }
};

// 🔹 Ambiguity Resolution
class A {
public:
    void show() { cout << "Class A\n"; }
};

class B {
public:
    void show() { cout << "Class B\n"; }
};

class C : public A, public B {
public:
    void resolve() {
        A::show();  // Resolving ambiguity
        B::show();
    }
};

// 🔹 Constructor in Derived Class + Initialization List
class Base {
    int x;
public:
    Base(int val) : x(val) {
        cout << "Base initialized with " << x << "\n";
    }
};

class Derived : public Base {
    int y;
public:
    Derived(int a, int b) : Base(a), y(b) {
        cout << "Derived initialized with " << y << "\n";
    }
};

int main() {
    cout << "\n--- Simple & Multilevel Inheritance ---\n";
    Dog d;
    d.eat();
    d.breathe();
    d.bark();

    cout << "\n--- Multiple Inheritance ---\n";
    Car c;
    c.start();
    c.roll();
    c.drive();

    cout << "\n--- Hierarchical Inheritance ---\n";
    Circle cir;
    Square sq;
    cir.draw(); cir.radius();
    sq.draw(); sq.side();

    cout << "\n--- Hybrid Inheritance & Virtual Base ---\n";
    Intern i;
    i.identity(); i.study(); i.work(); i.internRole();

    cout << "\n--- Ambiguity Resolution ---\n";
    C obj;
    obj.resolve();

    cout << "\n--- Constructor & Initialization List ---\n";
    Derived d2(10, 20);

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

// enum example
enum Color { RED, GREEN, BLUE };

// struct example
struct Person {
    string name;
    int age;
};

// union example
union Data {
    int  i;
    float f;
    char  str[20];
};

// typedef example
typedef unsigned long ulong;

int main() {
    // using enum
    Color c = GREEN;
    cout << "Enum Color c = GREEN -> " << c << "\n\n";

    // using struct
    Person p = { "Alice", 30 };
    cout << "Struct Person p -> name: " << p.name
         << ", age: " << p.age << "\n";
    cout << "sizeof(Person) = " << sizeof(Person) << " bytes\n\n";

    // using union
    Data d;
    d.i = 42;
    cout << "Union Data d; d.i = 42 -> d.i = " << d.i << "\n";
    d.f = 3.14f; // note: d.i is now overwritten
    cout << "Then d.f = 3.14f -> d.f = " << d.f << "\n";
    strcpy(d.str, "Hi");
    cout << "Then d.str = \"Hi\" -> d.str = " << d.str << "\n";
    cout << "sizeof(Data) = " << sizeof(Data) << " bytes\n\n";

    // using typedef
    ulong bigNum = 100000UL;
    cout << "Typedef ulong -> bigNum = " << bigNum << "\n";

    return 0;
}


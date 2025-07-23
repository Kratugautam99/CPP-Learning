#include <iostream>
#include <string>
using namespace std;

// 🧠 Function Template with Overloading and Exact Match Priority
void show(int x) {
    cout << "Exact match: int = " << x << endl;
}

template <typename T>
void show(T x) {
    cout << "Template match: T = " << x << endl;
}

// 🧠 Function Template with Multiple Parameters and Default Arguments
template <typename T1, typename T2 = double>
void combine(T1 a, T2 b=5.6) {
    cout << "Combined: " << a << " and " << b << endl;
}

// 🧠 Class Template with Multiple Parameters and Default Arguments
template <typename T, typename U = string>
class Pair {
private:
    T first;
    U second;

public:
    Pair(T a, U b = "default") : first(a), second(b) {}

    // 🧠 Member Function Template
    template <typename V>
    void printWith(V extra);

    void display() const;
};

// 🧠 Function Definition with Scope Resolution
template <typename T, typename U>
void Pair<T, U>::display() const {
    cout << "Pair: [" << first << ", " << second << "]" << endl;
}

template <typename T, typename U>
template <typename V>
void Pair<T, U>::printWith(V extra) {
    cout << "Pair + Extra: [" << first << ", " << second << ", " << extra << "]" << endl;
}

// 🧪 Main Demonstration
int main() {
    // Exact match vs template overload
    show(42);         // Calls exact match
    show(3.14);       // Calls template

    // Function template with default argument
    combine("Hello", 2.5);  // Uses both T1 and T2
    combine(100);           // Uses default T2 = double

    // Class template with default parameter
    Pair<int> p1(10);       // Uses default U = string
    p1.display();
    p1.printWith("Extra");

    Pair<float, string> p2(3.14f, "Pi");
    p2.display();
    p2.printWith(2025);

    return 0;
}

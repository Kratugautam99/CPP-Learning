#include <iostream>
using namespace std;

// 🔮 Forward declaration
class B;

// 🧑‍🤝‍🧑 Friend function (non-member function accessing private members)
class A {
private:
    int aVal;

public:
    A(int val) : aVal(val) {}

    // friend function declaration
    friend void showA(const A &obj);
    friend class B;               // 🤝 Friend class
};

void showA(const A &obj) {
    cout << "Friend function accessing A.aVal = " << obj.aVal << endl;
}

// 🧑‍🤝‍🧑 Friend class: B can access A's private members
class B {
public:
    void revealA(const A &obj) {
        cout << "Friend class B accessing A.aVal = " << obj.aVal << endl;
    }

    void showSelf() {
        cout << "Class B doing regular work\n";
    }

    // 🧑‍🤝‍🧑 Member friend function: grants access to C's private members
    void accessC(class C &cObj);  // needs forward declaration of C
};

// 🔮 Forward declaration was used above for C
class C {
private:
    int secret = 99;

    // Member function of B declared as a friend
    friend void B::accessC(C &cObj);
};

void B::accessC(C &cObj) {
    cout << "Member function of B accessing C.secret = " << cObj.secret << endl;
}

int main() {
    A aObj(42);
    B bObj;
    C cObj;

    showA(aObj);        // friend function
    bObj.revealA(aObj); // friend class
    bObj.accessC(cObj); // member friend function

    return 0;
}

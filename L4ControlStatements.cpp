#include <iostream>
using namespace std;

// Function using for loop
void forLoop() {
    for (int i = 0; i < 3; i++) {
        if (i == 1) {
            cout << "Skipping iteration when i is 1" << endl;
            i++; // Skip the rest of the loop body
            continue; // Continue to the next iteration
        }
        cout << "For Loop iteration: " << i << endl;
    }
}

// Function using while loop
void whileLoop() {
    int i = 0;
    while (i < 3) {
        if (i == 1) {
            cout << "Skipping iteration when i is 1" << endl;
            i++; // Skip the rest of the loop body
            continue; // Continue to the next iteration
        }
        cout << "While Loop iteration: " << i << endl;
        i++;
    }
}

// Function using do-while loop
void doWhileLoop() {
    int i = 0;
    do {
        if (i == 1) {
            cout << "Skipping iteration when i is 1" << endl;
            i++; // Skip the rest of the loop body
            continue; // Continue to the next iteration
        }
        cout << "Do-While Loop iteration: " << i << endl;
        i++;
    } while (i < 3);
}

int main() {
    int num;
    cout << "Enter a number (0-2): ";
    cin >> num;

    // if-elseif-else example
    if (num == 0) {
        cout << "Number is zero" << endl;
    } else if (num == 1) {
        cout << "Number is one" << endl;
    } else {
        cout << "Number is something else" << endl;
    }

    // switch-case using colon blocks
    switch (num) {
        case 0:
            cout << "Switch with colon: Zero" << endl;
            break;
        case 1:
            cout << "Switch with colon: One" << endl;
            break;
        default:
            cout << "Switch with colon: Default" << endl;
    }

    // switch-case using lambda-like arrow syntax (C++ alternative pattern)
    switch (num) {
        case 0: {
            [](){ cout << "Switch with -> style: Zero" << endl; }();
            break;
        }
        case 1: {
            [](){ cout << "Switch with -> style: One" << endl; }();
            break;
        }
        default: {
            [](){ cout << "Switch with -> style: Default" << endl; }();
        }
    }

    // Loop function calls
    forLoop();
    whileLoop();
    doWhileLoop();

    return 0;
}

#include <iostream>
using namespace std;

class Student {
private:
    int id;
    int marks[3];  // array for marks

    // Nested member function: called inside another member
    void printMarks() {
        cout << "Marks: ";
        for (int i = 0; i < 3; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

public:
    static int totalStudents;  // static data member

    Student() {
        id = 0;
        for (int i = 0; i < 3; ++i)
            marks[i] = 0;
        totalStudents++;
    }

    void setDetails(int i, int m1, int m2, int m3) {
        id = i;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void display() {
        cout << "ID: " << id << endl;
        printMarks();  // Calling nested function
    }

    // Passing object as argument
    void compareAverage(Student other) {
        int sum1 = marks[0] + marks[1] + marks[2];
        int sum2 = other.marks[0] + other.marks[1] + other.marks[2];
        cout << "Average comparison: ";
        if (sum1 == sum2)
            cout << "Same average\n";
        else
            cout << ((sum1 > sum2) ? "Current student has higher average\n"
                                   : "Other student has higher average\n");
    }
};

// Initialize static member
int Student::totalStudents = 0;

int main() {
    // Array of objects
    Student sArr[2];

    sArr[0].setDetails(101, 70, 80, 90);
    sArr[1].setDetails(102, 60, 75, 85);

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 2; ++i)
        sArr[i].display();

    cout << "\n--- Comparing Students ---\n";
    sArr[0].compareAverage(sArr[1]);

    cout << "\nTotal Students Created: " << Student::totalStudents << endl;

    return 0;
}

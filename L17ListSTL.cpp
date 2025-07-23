#include <iostream>
#include <list>
using namespace std;

// 🔍 Display the list
void display(list<int> &lst) {
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // ✅ Empty list creation
    list<int> list1;

    // ✅ Adding elements using push_back
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(12);
    cout << "\nInitial list1: ";
    display(list1);

    // ✅ Pre-sized list and assigning via iterator
    list<int> list2(3);  // 3 elements (default initialized)
    list<int>::iterator it = list2.begin();
    *it = 45; it++;
    *it = 6;  it++;
    *it = 9;
    cout << "\nPre-filled list2: ";
    display(list2);

    // ✅ Using pop_back and pop_front
    list1.pop_back(); // removes 12
    cout << "\nAfter pop_back list1: ";
    display(list1);

    list1.pop_front(); // removes 5
    cout << "\nAfter pop_front list1: ";
    display(list1);

    // ✅ Removing specific element (all occurrences)
    list1.push_back(9); // Add another 9 for demo
    list1.remove(9);    // Removes both 9s
    cout << "\nAfter remove(9) list1: ";
    display(list1);

    // ✅ Sorting the list
    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(2);
    cout << "\nBefore sort list3: ";
    display(list1);
    list1.sort();
    cout << "After sort list3: ";
    display(list1);

    return 0;
}

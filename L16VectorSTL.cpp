#include <iostream>
#include <vector>
using namespace std;

// 📦 Display vector contents
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    // 🧠 Basic vector syntax
    vector<int> vec1;                   // zero-length integer vector

    // 🧠 Dynamic input using push_back()
    int element, size;
    cout << "Enter size of vector: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "Enter element: ";
        cin >> element;
        vec1.push_back(element);
    }
    cout << "\nInitial vector: ";
    display(vec1);

    // 🔙 pop_back() removes last element
    vec1.pop_back();
    cout << "\nAfter pop_back(): ";
    display(vec1);

    // 🔧 Inserting with iterator
    vector<int>::iterator iter = vec1.begin(); // points to first element
    vec1.insert(iter+1, 2, 566);
    cout << "\nAfter inserting 566 at beginning+1{iter+1}(2 times): ";
    display(vec1);

    // 🔂 Different types of initialization
    vector<char> vec2(4);               // 4-element char vector
    vector<char> vec3(vec2);            // copied from vec2
    vector<int> vec4(6, 3);             // six 3's

    cout << "\nInitialized vector vec4 (6 copies of 3): ";
    for (int x : vec4) cout << x << " ";
    cout << endl;

    return 0;
}

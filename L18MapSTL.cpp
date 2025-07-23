#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 🔹 Creating an associative map
    map<string, int> marksMap;

    // 🔹 Inserting key-value pairs using index notation
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    // 🔹 Inserting multiple pairs using .insert()
    marksMap.insert({ {"Rohan", 89}, {"Akshat", 46} });

    // 🔍 Iterating and displaying key-value pairs
    cout << "\n📖 Marks of Students:\n";
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++) {
        cout << iter->first << " : " << iter->second << endl;
    }

    return 0;
}

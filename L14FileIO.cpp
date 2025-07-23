#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;

    // 🔹 Writing to the file using ofstream
    ofstream outFile;
    outFile.open("L14FileIO.txt"); // Open file for writing
    if (!outFile.is_open()) {
        cerr << "Error opening file for writing.\n";
        return 1;
    }

    outFile << "Hello, Kratu!\n";
    outFile << "This is a C++ file I/O demo.\n";
    outFile << "Reading and writing in the same program.\n";
    outFile.close(); // ✅ Close after writing

    // 🔹 Reading from the file using ifstream
    ifstream inFile;
    inFile.open("L14FileIO.txt"); // Open file for reading
    if (!inFile.is_open()) {
        cerr << "Error opening file for reading.\n";
        return 1;
    }

    cout << "\n📖 Contents of 'L14FileIO.txt':\n";
    while (!inFile.eof()) {
        getline(inFile, line);
        if (inFile.fail()) break; // Handle read failure
        cout << line << endl;
    }

    inFile.close(); // ✅ Close after reading
    return 0;
}

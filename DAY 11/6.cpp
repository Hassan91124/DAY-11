#include <iostream>

using namespace std;

// Function to reverse a string
void reverseString(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string greeting = "Hello, World!";
    cout << "Reversed string: ";
    reverseString(greeting);
    
    return 0;
}

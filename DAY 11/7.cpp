#include <iostream>

using namespace std;

// Function to check if a substring exists
bool containsSubstring(string str, string substring) {
    for (int i = 0; i <= str.length() - substring.length(); i++) {
        bool found = true;
        for (int j = 0; j < substring.length(); j++) {
            if (str[i + j] != substring[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}

int main() {
    string greeting = "Hello, World!";
    string search = "World";
    
    bool result = containsSubstring(greeting, search);
    
    if (result) {
        cout << "Substring '" << search << "' found in the string." << endl;
    } else {
        cout << "Substring '" << search << "' not found in the string." << endl;
    }
    
    return 0;
}

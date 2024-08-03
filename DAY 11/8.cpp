#include <iostream>

using namespace std;

// Function to convert a string to uppercase
void toUpperCase(string& str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() {
    string greeting = "Hello, World!";
    toUpperCase(greeting);
    
    cout << "Uppercase string: " << greeting << endl;
    
    return 0;
}

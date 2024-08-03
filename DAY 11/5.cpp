#include <iostream>

using namespace std;

int main() {
    string greeting = "Hello, World!";
    
    // Accessing the first and last characters
    char firstChar = greeting[0];
    char lastChar = greeting[greeting.length() - 1];
    
    cout << "First character: " << firstChar << endl;
    cout << "Last character: " << lastChar << endl;
    
    return 0;
}

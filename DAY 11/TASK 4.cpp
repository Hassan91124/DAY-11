#include <iostream>

using namespace std;

// Function to calculate the length of a string
int getLength(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    string greeting = "Hello, World!";
    
    int length = getLength(greeting);
    cout << "Length of the string: " << length << endl;
    
    return 0;
}

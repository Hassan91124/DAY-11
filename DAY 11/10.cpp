#include <iostream>

using namespace std;

int main() {
    cout << "Enter a full sentence: ";
    string sentence;
    // Use getline to read a full line of input
    getline(cin, sentence);

    cout << "You entered: " << sentence << endl;

    return 0;
}

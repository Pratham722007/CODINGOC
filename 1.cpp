#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a lowercase character." << endl;
    else
        cout << ch << " is not a lowercase character." << endl;

    return 0;
}

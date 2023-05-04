#include <iostream>
#include <string>

using std::cout;    using std::cin;
using std::endl;
using std::string;

int main() {
    const int pads = 2;

    cout << "input your name : ";
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int row = 2 * pads + 2 + 1;
    //const int col = greeting.size() + 2 * pads + 2;
    const string::size_type col = greeting.size() + 2 * pads + 2;

    for (int i = 0; i < row; ++i) {
        for (string::size_type j = 0; j < col;) {
            if (i == row / 2 && j == 1 + pads) {
                cout << greeting;
                j = j + greeting.size();
            } else {
                if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
                ++j;
            }
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        char ch = 'A' + row - 1;

        // Print characters
        for (int i = 1; i <= row; i++) {
            cout << ch;
        }

        cout << endl;
    }
}

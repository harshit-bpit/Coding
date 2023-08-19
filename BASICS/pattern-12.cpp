#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char ch = 'A';

    for (int row = 1; row <= n; row++) {
        // Print characters
        for (int i = 1; i <= row; i++) {
            cout << ch;
            ch++;
        }

        cout << endl;
    }
}
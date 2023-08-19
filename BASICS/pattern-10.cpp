#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        int num = row;
        // Print spaces
        for (int spaces = 1; spaces <= n - row; spaces++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int i = 1; i <= row; i++) {
            cout << num;
            num++;
        }

        // Print decreasing numbers
        num -= 2;
        for (int i = 1; i < row; i++) {
            cout << num;
            num--;
        }

        cout << endl;
    }
}

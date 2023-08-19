#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    for (int row = 1; row <= n; row++) {
        for (int spaces = 1; spaces <= n - row; spaces++) {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++) {
            cout << num;
            num++;
            if (col < row) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

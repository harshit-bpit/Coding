#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2];
    int matrix2[2][2];

    // Taking input for matrix1
    cout << "Enter values for Matrix 1 (2x2):\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Enter the value for (" << i+1 << ", " << j+1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Taking input for matrix2
    cout << "Enter values for Matrix 2 (2x2):\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Enter the value (" << i+1 << ", " << j+1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    // We need a result matrix for product calculation
    int result[2][2];

    // Multiply matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display result
    cout << "Matrix 1:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix 2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix multiplication result:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

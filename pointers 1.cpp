#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    int c = 0; 

    cout << "Enter the number of rows (max 3) : ";
    cin >> rows;
    cout << "Enter the number of columns (max 3) : ";
    cin >> columns;

    double** b = new double*[rows];
    for (int i = 0; i < rows; i++) {
        b[i] = new double[columns]; 
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
             b[i][j] = ++c; 
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        if (b[i] != nullptr) {
            delete[] b[i];
        }
    }
    if (b != nullptr) {
        delete[] b;
    }

    return 0;
}

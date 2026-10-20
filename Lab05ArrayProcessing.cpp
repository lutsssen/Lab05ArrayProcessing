/**************************************
*Автор: Луцаев Владислав Николаевич   *
*Лабораторная: Обработка массивов     *
*Группа: ПИ-261                       *
*Вариант: 14                          *
**************************************/

#include <iostream>

using namespace std;

int main() {
    const int maxSize = 100;
    int matrix[maxSize][maxSize];
    int rows, columns;
    int maxSum, minSum;
    int maxRow, minRow;
    int zero = 0;
    int startOfCounting = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter elements of matrix:" << endl;

    for (int i = zero; i < rows; ++i) {
        for (int j = zero; j < columns; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;

    for (int i = zero; i < rows; ++i) {
        for (int j = zero; j < columns; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    maxSum = 0;
    minSum = 0;
    maxRow = 0;
    minRow = 0;

    for (int j = zero; j < columns; ++j) {
        maxSum += matrix[zero][j];
        minSum += matrix[zero][j];
    }

    for (int i = startOfCounting; i < rows; ++i) {
        int currentSum = zero;

        for (int j = zero; j < columns; ++j) {
            currentSum += matrix[i][j];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxRow = i;
        }

        if (currentSum < minSum) {
            minSum = currentSum;
            minRow = i;
        }
    }

    cout << "Row with max sum:" << endl;

    for (int j = zero; j < columns; j++) {
        cout << matrix[maxRow][j] << "\t";
    }

    cout << endl;
    cout << "Number of row: " << maxRow + 1 << endl;
    cout << "Summary of elements: " << maxSum << endl;

    cout << endl;
    cout << "Row with min sum:" << endl;

    for (int j = 0; j < columns; j++) {
        cout << matrix[minRow][j] << "\t";
    }

    cout << endl;
    cout << "Number of row: " << minRow + 1 << endl;
    cout << "Summary of elements: " << minSum << endl;

    return 0;
}
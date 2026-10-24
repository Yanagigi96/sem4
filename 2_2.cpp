#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Введите строки и столбцы: ";
    cin >> r >> c;

    int a[50][50];
    cout << "Введите элементы:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Матрица:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << a[i][j] << " ";
        cout << "\n";
    }

    int b[50][50], sum[50][50];
    cout << "Введите вторую матрицу:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Сумма матриц:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << sum[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

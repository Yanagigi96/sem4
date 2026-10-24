#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;

    int arr[100];
    cout << "Введите элементы:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Сумма: " << sum << "\n";
    cout << "Среднее: " << (double)sum / n << "\n";

    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }
    cout << "Максимум: " << mx << ", минимум: " << mn << "\n";

    int c[5];
    cout << "Введите 5 элементов для c:\n";
    for (int i = 0; i < 5; i++) cin >> c[i];

    int sumSq = 0;
    for (int i = 0; i < 5; i++) sumSq += c[i] * c[i];
    cout << "Сумма квадратов: " << sumSq << "\n";

    int c7[7];
    int A, B;
    cout << "Введите 7 элементов:\n";
    for (int i = 0; i < 7; i++) cin >> c7[i];
    cout << "Введите A и B: ";
    cin >> A >> B;

    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (c7[i] >= A && c7[i] <= B) count++;
    }
    cout << "Попадает в [A, B]: " << count << "\n";

    return 0;
}

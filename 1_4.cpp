#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Сколько чисел введёте? ";
    cin >> N;

    int neg = 0, pos = 0, zero = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x < 0) neg++;
        else if (x > 0) pos++;
        else zero++;
    }
    cout << "Отрицательных: " << neg << "\n";
    cout << "Положительных: " << pos << "\n";
    cout << "Нулей: " << zero << "\n";

    int arr[10];
    cout << "Введите 10 чисел:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] > 15) arr[i] = 15;
    }
    cout << "После замены:\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

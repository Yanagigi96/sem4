#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Адреса через &arr[i]:\n";
    for (int i = 0; i < 5; i++)
        cout << &arr[i] << "\n";

    cout << "Адреса через ptr + i:\n";
    for (int i = 0; i < 5; i++)
        cout << (ptr + i) << "\n";

    int arr2[5];
    cout << "Введите 5 чисел:\n";
    for (int i = 0; i < 5; i++)
        cin >> *(arr2 + i);

    cout << "Вывод через *(arr2 + i):\n";
    for (int i = 0; i < 5; i++)
        cout << *(arr2 + i) << " ";
    cout << "\n";

    return 0;
}

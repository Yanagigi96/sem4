#include <iostream>
using namespace std;

int main() {
    cout << "1..100 (while):\n";
    int i = 1;
    while (i <= 100) {
        cout << i << "\n";
        i++;
    }

    cout << "1..100 (for):\n";
    for (int i = 1; i <= 100; i++) {
        cout << i << "\n";
    }

    cout << "11..33 (while):\n";
    i = 11;
    while (i <= 33) {
        cout << i << "\n";
        i++;
    }

    cout << "11..33 (for):\n";
    for (int i = 11; i <= 33; i++) {
        cout << i << "\n";
    }

    cout << "Чётные 0..100 (while):\n";
    i = 0;
    while (i <= 100) {
        cout << i << "\n";
        i += 2;
    }

    cout << "Чётные 0..100 (for):\n";
    for (int i = 0; i <= 100; i += 2) {
        cout << i << "\n";
    }

    int sum = 0;
    i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << "Сумма 1..100 (while): " << sum << "\n";

    sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Сумма 1..100 (for): " << sum << "\n";

    return 0;
}

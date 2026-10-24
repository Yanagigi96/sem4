#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 10; i <= 99; i++) {
        sum += i;
    }
    cout << "Сумма двузначных: " << sum << "\n";

    sum = 0;
    int i = 1;
    while (i <= 200) {
        if (i % 2 != 0) sum += i;
        i++;
    }
    cout << "Сумма нечётных 1..200: " << sum << "\n";

    sum = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0 || i % 7 == 0) sum += i;
    }
    cout << "Сумма чисел 1..50, делящихся на 5 или 7: " << sum << "\n";

    cout << "Числа 20..50, делятся на 3, но не на 5:\n";
    for (int i = 20; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << "\n";
        }
    }

    return 0;
}

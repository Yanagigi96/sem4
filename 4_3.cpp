#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {4, 7, 2, 9, 1, 8, 6};

    int sum = 0;
    for (int x : numbers) sum += x;
    cout << "Сумма: " << sum << "\n";

    cout << "Среднее: " << (double)sum / numbers.size() << "\n";

    int mx = numbers[0], mn = numbers[0];
    for (int x : numbers) {
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }
    cout << "Максимум: " << mx << ", минимум: " << mn << "\n";

    for (int i = 0; i < (int)numbers.size(); ) {
        if (numbers[i] % 2 == 0) {
            numbers.erase(numbers.begin() + i);
        } else {
            i++;
        }
    }

    cout << "Без чётных: ";
    for (int x : numbers) cout << x << " ";
    cout << "\n";

    return 0;
}

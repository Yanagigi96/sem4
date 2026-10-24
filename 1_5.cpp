#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    cout << "Через индекс:\n";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    cout << "Через диапазон:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}

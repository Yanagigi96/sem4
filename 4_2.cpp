#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    v.push_back(6);
    v.push_back(7);

    cout << "v[0] = " << v.at(0) << "\n";
    cout << "v[2] = " << v.at(2) << "\n";
    cout << "v[4] = " << v.at(4) << "\n";

    v.at(1) = 100;
    v.at(4) = 500;

    v.pop_back();

    cout << "Вектор после изменений: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    vector<int> w = {2, 3, 5, 7};
    cout << "size = " << w.size() << "\n";
    cout << "front = " << w.front() << "\n";
    cout << "back = " << w.back() << "\n";
    cout << "empty = " << (w.empty() ? "true" : "false") << "\n";
    cout << "capacity = " << w.capacity() << "\n";

    return 0;
}

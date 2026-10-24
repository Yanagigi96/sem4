#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);

    cout << "num: ";
    for (int x : num) cout << x << " ";
    cout << "\n";

    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 {6, 7, 8, 9, 10};
    vector<int> v3(5, 12);

    cout << "v1: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    cout << "\n";

    cout << "v3: ";
    for (int x : v3) cout << x << " ";
    cout << "\n";

    return 0;
}

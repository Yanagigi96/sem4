#include <iostream>
using namespace std;

int main() {
    int var1 = 3, var2 = 24, var3 = 17;
    cout << "Адрес var1: " << &var1 << "\n";
    cout << "Адрес var2: " << &var2 << "\n";
    cout << "Адрес var3: " << &var3 << "\n";

    int var = 10;
    int* point_var = &var;

    cout << "var = " << var << "\n";
    cout << "&var = " << &var << "\n";
    cout << "point_var = " << point_var << "\n";
    cout << "*point_var = " << *point_var << "\n";

    *point_var = 16;
    cout << "После *point_var = 16: var = " << var << "\n";

    return 0;
}

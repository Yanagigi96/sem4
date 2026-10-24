#include <iostream>
using namespace std;

int main() {
    int var = 5;

    int* point_var = &var;

    point_var = &var;

    *point_var = var;

    cout << "var = " << var << "\n";
    cout << "*point_var = " << *point_var << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int test[2][3][2];
    int val = 1;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 2; k++)
                test[i][j][k] = val++;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 2; k++)
                cout << "test[" << i << "][" << j << "][" << k << "] = "
                     << test[i][j][k] << "\n";

    return 0;
}

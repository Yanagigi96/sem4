#include <iostream>
using namespace std;

int main() {
    cout << "Дюймы -> см:\n";
    for (int inch = 1; inch <= 20; inch++) {
        cout << inch << " дюйм = " << inch * 2.5 << " см\n";
    }

    double course;
    cout << "Введите курс евро: ";
    cin >> course;

    cout << "Евро -> рубли:\n";
    for (int euro = 5; euro <= 25; euro++) {
        cout << euro << " евро = " << euro * course << " руб.\n";
    }

    return 0;
}


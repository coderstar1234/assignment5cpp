#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    if (M % 3 == 0 && M % 5 == 0) {
        cout << "Good Number\n";
    } else if (M % 3 == 0) {
        cout << "Bad Number\n";
    } else if (M % 5 == 0) {
        cout << "Poor Number\n";
    } else {
        cout << "-1\n";
    }

    // Reverse the digits of M
    int reversed = 0;
    while (M > 0) {
        reversed = reversed * 10 + M % 10;
        M /= 10;
    }
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}

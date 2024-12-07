#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "  ";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(3) << i;
    }
    cout << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << setw(2) << i << " ";
        for (int j = 1; j <= 10; ++j) {
            cout << setw(3) << i * j;
        }
        cout << endl;
    }

    return 0;
}
    

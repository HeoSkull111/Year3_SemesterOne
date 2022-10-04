#include <iostream>
using namespace std;

int main() {
    //random number generator
    int n;
    cout << "Nhập n: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand%100;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
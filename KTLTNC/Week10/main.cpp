#include <iostream>

using namespace std;
//Tháp hà nội, n là số đĩa, A là cột đầu, B là cột trung gian, C là cột cuối
void ThapHaNoi(int n, char A, char B, char C) {
    if (n == 1)
        cout << "Chuyen dia 1 tu cot " << A << " sang cot " << C << endl;
    else
    {
        ThapHaNoi(n - 1, A, C, B);
        cout << "Chuyen dia " << n << " tu cot " << A << " sang cot " << C << endl;
        ThapHaNoi(n - 1, B, A, C);
    }
}
int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    ThapHaNoi(n, 'A', 'B', 'C');
    return 0;
}


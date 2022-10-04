#include <iostream>
using namespace std;

int main() {
    //Nhap da thuc va xuat da thuc
    int n;
    cout << "Nhap bac cua da thuc: ";
    cin >> n;
    int a[n];
    for (int i = 0; i <= n; i++) {
        cout << "Nhap he so cua x^" << i << ": ";
        cin >> a[i];
    }
    cout << "Da thuc vua nhap la: ";
    for (int i = n; i >= 0; i--) {
        if (a[i] != 0) {
            if (i == 0) {
                cout << a[i];
            } else if (i == 1) {
            	if (a[i-1]==0) {
            		if (a[i]==1) {
            			cout << "x";
					} else cout << a[i] << "x";
				} else cout << a[i] << "x + ";
            } else if (a[i]==1) {
              	cout << "x^" << i << " + ";  
            } else cout << a[i] << "x^" << i << " + ";
        }
    }
    return 0;
}

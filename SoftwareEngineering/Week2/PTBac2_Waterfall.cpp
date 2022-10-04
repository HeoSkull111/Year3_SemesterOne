/*Requirement
    Nếu a =0 
        Nếu b = 0
            Nếu c = 0
                Phương trình có vô số nghiệm
            Ngược lại nếu c !=0
                Phương trình vô nghiệm
        Ngược lại nếu b != 0
            Phương trình có nghiệm duy nhất x = -c/b
                Ngược lại
                    Phương trình có 2 nghiệm phân biệt
                        x1 = (-b + sqrt(delta))/2a
                        x2 = (-b - sqrt(delta))/2a
*/
#include <iostream>
#include <math.h>
using namespace std;

void Calculator(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "Phuong trinh vo so nghiem";
            else cout << "Phuong trinh vo nghiem";
        } else cout << "Phuong trinh co nghiem x = " << -c / b;
    } else{
        float delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "Phuong trinh vo nghiem";
        else if (delta == 0)
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a);
        else cout << "Phuong trinh co 2 nghiem phan biet: " << endl 
                  << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl 
                  << "x2 = " << (-b - sqrt(delta)) / (2 * a);
    }
}
int main() {
    float a, b, c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;
    Calculator(a, b, c);
    return 0;
}
#include <iostream>
using namespace std;



void Nhap(float &a, float &b, float &c, float &d) {
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;
    cout << "Nhap he so d: ";
    cin >> d;
}
void GiaiPTBac3(float a, float b, float c, float d) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                if (d == 0) {
                    cout << "Phuong trinh co vo so nghiem";
                } else {
                    cout << "Phuong trinh vo nghiem";
                }
            } else {
                cout << "Phuong trinh co nghiem duy nhat: " << -d / c;
            }
        } else {
            float delta = c * c - 4 * b * d;
            if (delta < 0) {
                cout << "Phuong trinh vo nghiem";
            } else if (delta == 0) {
                cout << "Phuong trinh co nghiem kep: " << -c / (2 * b);
            } else {
                cout << "Phuong trinh co 2 nghiem phan biet: " << (-c + sqrt(delta)) / (2 * b) << " va " << (-c - sqrt(delta)) / (2 * b);
            }
        }
    } else {
        float delta = b * b - 3 * a * c;
        float delta1 = 2 * b * b * b - 9 * a * b * c + 27 * a * a * d;
        if (delta1 == 0) {
            cout << "Phuong trinh co nghiem kep: " << -b / (3 * a);
        } else {
            float x1 = (-b + sqrt(delta1)) / (3 * a);
            float x2 = (-b - sqrt(delta1)) / (3 * a);
            cout << "Phuong trinh co 3 nghiem phan biet: " << x1 << ", " << x2 << " va " << -b / (3 * a);
        }
    }
}

int main() {
    float a, b, c,d;
    Nhap(a, b, c, d);
    GiaiPTBac3(a, b, c, d);
    return 0;
}   

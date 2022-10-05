#include <iostream>
#include <math.h>
# define pi 3.14159265358979323846 /* pi */
using namespace std;
//Nhập hệ số và giải phương trình bậc 3
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
//Giải phương trình bậc 3
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
                cout << "Phuong trinh co 2 nghiem phan biet: " << (-c + sqrt(delta)) / (2 * b) << " - " << (-c - sqrt(delta)) / (2 * b);
            }
        }
    } else {
        float delta = b * b - 3 * a * c;
        float k = (-2 * b * b * b + 9 * a * b * c - 27 * a * a * d)/2*sqrt(fabs(delta*delta*delta));
        if (delta == 0) {
            
        } else if (delta < 0) {

        } else {
            if (fabs(k) <=1) {
                float x = acos(k)/3;
                float y = (2*pi)/3;
                float x1 = (2*sqrt(delta)*cos(x)-b) / 3*a;
                float x2 = (2*sqrt(delta)*cos(x-y)-b) / 3*a;
                float x3 = (2*sqrt(delta)*cos(x+y)-b) / 3*a;
                cout << "Phuong trinh co 3 nghiem phan biet: " << x1 << " - " << x2 << " - " << x3;
            } else {
                float x = ((sqrt(delta)*fabs(k))/(3*a*k))*(cbrt(fabs(k)+sqrt(k*k -1))+cbrt(fabs(k)-sqrt(k*k -1))) - (b/(3*a));
            }
        }
    }
}

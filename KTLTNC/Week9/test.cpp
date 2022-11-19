#include <iostream>
using namespace std;

/*Nhập ngày tháng năm
Tìm thứ ngày đó
Tìm số ngày kể từ 1/1/1
Tìm năm âm lịch tương ứng với ngày tháng năm vừa nhập*/

void TimThuvaSoNgay(int ngay, int thang, int nam) {
    int thu = 0;
    int soNgay = 0;
    int ngayTrongThang[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) {
        ngayTrongThang[1] = 29;
    }
    for (int i = 1; i < nam; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            thu += 366;
        } else {
            thu += 365;
        }
    }
    for (int i = 1; i < thang; i++) {
        thu += ngayTrongThang[i - 1];
    }
    thu += ngay;
    soNgay = thu;
    thu %= 7;
    cout << "So ngay tu 1/1/1 den ngay " << ngay << "/" << thang << "/" << nam << " la: " << soNgay << " ngay" << endl;
    cout << ngay << "/" << thang << "/" << nam << " la: ";
    switch (thu) {
        case 0:
            cout << "Chu nhat";
            break;
        case 1:
            cout << "Thu hai";
            break;
        case 2:
            cout << "Thu ba";
            break;
        case 3:
            cout << "Thu tu";
            break;
        case 4:
            cout << "Thu nam";
            break;
        case 5:
            cout << "Thu sau";
            break;
        case 6:
            cout << "Thu bay";
            break;
    }
    cout << endl;
}   
void TimNamAmLich(int ngay,int thang, int nam) {
    int can = nam % 10;
    int chi = nam % 12;
    cout <<"Nam am lich tuong ung voi nam " << nam << " la: ";
    switch (can) {
        case 0:
            cout << "Canh ";
            break;
        case 1:
            cout << "Tan ";
            break;
        case 2:
            cout << "Nham ";
            break;
        case 3:
            cout << "Quy ";
            break;
        case 4:
            cout << "Giap ";
            break;
        case 5:
            cout << "At ";
            break;
        case 6:
            cout << "Binh ";
            break;
        case 7:
            cout << "Dinh ";
            break;
        case 8:
            cout << "Mau ";
            break;
        case 9:
            cout << "Ky ";
            break;
    }
    switch (chi) {
        case 0:
            cout << "Than";
            break;
        case 1:
            cout << "Dau";
            break;
        case 2:
            cout << "Tuat";
            break;
        case 3:
            cout << "Hoi";
            break;
        case 4:
            cout << "Ti";
            break;
        case 5:
            cout << "Suu";
            break;
        case 6:
            cout << "Dan";
            break;
        case 7:
            cout << "Mao";
            break;
        case 8:
            cout << "Thin";
            break;
        case 9:
            cout << "Ty";
            break;
        case 10:
            cout << "Ngo";
            break;
        case 11:
            cout << "Mui";
            break;
    }
}
int main() {
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    TimThuvaSoNgay(ngay, thang, nam);
    TimNamAmLich(ngay, thang, nam);
    return 0;
}
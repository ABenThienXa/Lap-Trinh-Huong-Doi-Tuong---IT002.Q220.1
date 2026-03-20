#include<iostream>
#include<algorithm>

using namespace std;

struct date
{
    int day, month, year;
};

void nhap(date &a)
{
    cout << "Nhap ngay:\n";
    cin >> a.day;
    cout << "Nhap thang:\n";
    cin >> a.month;
    cout << "Nhap nam:\n";
    cin >> a.year;
}

void xuat(date a)
{
    cout << "Ngay: " << a.day << endl;
    cout << "Thang: " << a.month << endl;
    cout << "Nam: " << a.year << endl;
}

void nextday(date &a)
{
    a.day++;
    //kiem tra cho thang 2 va cac thang co 30 ngay
    if(a.month == 2) { 
        if ((a.year % 4 == 0 && a.year % 100 != 0) || (a.year % 400 == 0)) {//kiem tra nam nhuan
            if (a.day > 29) {
                a.day = 1;
                a.month++;
            }
        } else {
            if (a.day > 28) {
                a.day = 1;
                a.month++;
            }
        }
    } else if (a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11) { //cac thang co 30 ngay
        if (a.day > 30) {
            a.day = 1;
            a.month++;
        }
    }else {
         if (a.day > 31) {  //cac thang co 31 ngay
            a.day = 1;
            a.month++;
        }
    }
    if (a.month > 12) {
        a.month = 1;
        a.year++;
    }   
}
int main() {
    date a;
    nhap(a);
    nextday(a);
    cout << "Ngay ke tiep:\n";
    xuat(a);
    return 0;
}
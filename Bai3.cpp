#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

PhanSo rutGon(PhanSo p) {
    int g = gcd(p.tu, p.mau);
    p.tu /= g;
    p.mau /= g;
    if (p.mau < 0) {
        p.tu = -p.tu;
        p.mau = -p.mau;
    }
    return p;
}

PhanSo cong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}

PhanSo tru(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}

PhanSo nhan(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}

PhanSo chia(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    return rutGon(kq);
}

void xuat(PhanSo p) {
    cout << p.tu << "/" << p.mau;
}

void nhap(PhanSo &p) {
    cout << "Nhap tu so: ";
    cin >> p.tu;
    do {
        cout << "Nhap mau so: ";
        cin >> p.mau;
        if (p.mau == 0) {
            cout << "Mau so phai khac 0. Vui long nhap lai." << endl;
        }
    } while (p.mau == 0);
}
int main() {
    PhanSo p1, p2;
    
    cout << "Nhap phan so thu nhat:\n";
    nhap(p1);
    
    cout << "Nhap phan so thu hai:\n";
    nhap(p2);
    
    cout << "\nKet qua:\n";
    cout << "Tong: "; xuat(cong(p1, p2)); cout << endl;
    cout << "Hieu: "; xuat(tru(p1, p2)); cout << endl;
    cout << "Tich: "; xuat(nhan(p1, p2)); cout << endl;
    cout << "Thuong: "; xuat(chia(p1, p2)); cout << endl;
    
    return 0;
}
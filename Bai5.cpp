#include<iostream>
#include<algorithm>

using namespace std;
struct hocsinh{
    string ten;
    double diemtoan, diemvan;
};

void nhap(hocsinh &a){
    cout << "Nhap ten hoc sinh: ";
    getline(cin, a.ten);
    cout << "Nhap diem toan: ";
    cin >> a.diemtoan;
    cout << "Nhap diem van: ";
    cin >> a.diemvan;
}

double avg(hocsinh a){
    return (a.diemtoan + a.diemvan) / 2;
}

int main(){
    hocsinh a;
    nhap(a);
    cout << "Hoc sinh " << a.ten << " co diem trung binh hai mon Toan va Van la: " << avg(a) << endl;
    return 0;
}
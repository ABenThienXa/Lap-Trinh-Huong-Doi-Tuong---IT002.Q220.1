#include<iostream>
#include<algorithm>

using namespace std;

struct phanso{
    int tu;
    int mau;
};

void nhap(phanso &p){
    cout<<"Nhap tu so: ";
    cin>>p.tu;
    do{
        cout<<"Nhap mau so: ";
        cin>>p.mau;
        if(p.mau==0){
            cout<<"Mau so phai khac 0. Vui long nhap lai."<<endl;
        }
    }while(p.mau==0);
}

void xuat(phanso p){
    cout<<p.tu<<"/"<<p.mau;
}

void rutgon(phanso &p){
    int a=__gcd(p.tu,p.mau);
    p.tu/=a;
    p.mau/=a;
    if(p.mau<0){
        p.tu=-p.tu;
        p.mau=-p.mau;
    }
}
int main(){
    phanso p;
    nhap(p);
    cout<<"Nhap phan so: ";
    xuat(p);
    rutgon(p);
    cout<<"\nPhan so sau khi rut gon: ";
    xuat(p);
}
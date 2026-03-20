#include<iostream>
#include<algorithm>

using namespace std;

struct phanso
{
    int tuso;
    int mauso;
};

void nhap(phanso &p){
    cout<<"Nhap tu so: ";
    cin>>p. tuso;
    do{
        cout<<"Nhap mau so: ";
        cin>>p.mauso;
        if(p.mauso==0){
            cout<<"Mau so phai khac 0. Vui long nhap lai."<<endl;
        }
    }while(p.mauso==0);
}

void xuat(phanso p){
    cout<<p.tuso<<"/"<<p.mauso;
}

phanso sosanh(phanso p1, phanso p2)
{
    int a = p1.tuso * p2.mauso;
    int b = p2.tuso * p1.mauso;
    if (a > b)
        return p1; // p1 lớn hơn p2
    else
        return p2; // p1 nhỏ hơn p2
}

int main(){
    phanso p1, p2;
    cout<<"Nhap phan so thu nhat: \n";
    nhap(p1);
    cout<<"Nhap phan so thu hai: \n";
    nhap(p2);
    
    phanso kq=sosanh(p1, p2);
    cout<<"Phan so lon hon la: ";
    xuat(kq);

    return 0;
    
}
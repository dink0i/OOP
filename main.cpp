#include<iostream>
#include<string.h>
using namespace std;

class sach
{
    private:
    string ma_sach;
    string ten_sach;
    string the_loai;
    string tac_gia;
    int don_gia;
    int so_luong;
    public:
    sach()
    {
        ma_sach="noID";
        ten_sach="unName";
        the_loai="noType";
        tac_gia="noAuthor";
        don_gia=0;
        so_luong=0;
    }
    void nhap_ten_sach(string ten_sach)
    {
        this->ten_sach=ten_sach;
    }
    string lay_ten_sach()
    {
        return ten_sach;
    }
    void nhap_ma_sach(string ma_sach)
    {
        this->ma_sach=ma_sach;
    }
    string lay_ma_sach()
    {
        return ma_sach;
    }void nhap_the_loai(string the_loai)
    {
        this->the_loai=the_loai;
    }
    string lay_the_loai()
    {
        return the_loai;
    }
    void nhap_tac_gia(string tac_gia)
    {
        this->tac_gia=tac_gia;
    }
    string lay_tac_gia()
    {
        return tac_gia;
    }
    void nhap_don_gia(int don_gia)
    {
        this->don_gia=don_gia;
    }
    int lay_don_gia()
    {
        return don_gia;
    }
    void nhap_so_luong(int so_luong)
    {
        this->so_luong=so_luong;
    }
    int lay_so_luong()
    {
        return so_luong;
    }
    
    void display()
    {
        cout<<"-------------"<<endl;
        cout<<"Ma sach: ";
        cout<<lay_ma_sach()<<endl;
        cout<<"Ten sach: ";
        cout<<lay_ten_sach()<<endl;
        cout<<"The loai: ";
        cout<<lay_the_loai()<<endl;
        cout<<"Tac gia: ";
        cout<<lay_tac_gia()<<endl;
        cout<<"Don gia: ";
        cout<<lay_don_gia()<<endl;
        cout<<"So luong: ";
        cout<<lay_so_luong()<<endl;
        cout<<"-------------"<<endl;
    }
};

class kho_sach:public sach
{
    private:
    sach a;
    public:
    kho_sach() :sach()
    {
    }
    void nhap_sach()
    {
        string z;
        int y;
        cout<<"nhap ma sach:"; getline(cin,z);
        a.nhap_ma_sach(z);
        cout<<"nhap ten sach:"; getline(cin,z);
        a.nhap_ten_sach(z);
        cout<<"nhap the loai: ";getline(cin,z);
        a.nhap_the_loai(z);
        cout<<"nhap tac gia: ";getline(cin,z);
        a.nhap_tac_gia(z);
        cout<<"nhap don gia: ";cin>>y;
        a.nhap_don_gia(y);
        cout<<"nhap so luong: ";cin>>y;
        a.nhap_so_luong(y);  
    }   
    void display()
    {
        a.display();
    }

};

int main()
{
    int x=0;
    kho_sach a[100];
    a[x].nhap_sach();
    a[x].display();
    return 0;
}
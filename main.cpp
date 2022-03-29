#include<iostream>
#include<vector>
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
    void nhap_ten_sach()
    {
        cin>>ten_sach;
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
    
    void display()
    {
        cout<<ma_sach<<endl;
        cout<<ten_sach<<endl;
        cout<<the_loai<<endl;
        cout<<tac_gia<<endl;
        cout<<don_gia<<endl;
    }
};

class kho_sach:public sach
{
    private:
    vector<sach> a;
    int so_luong;
    public:
    kho_sach() :sach()
    {
       so_luong=0; 
    }
    void nhap_sach()
    {
        int n;
        cout<<"Nhap so luong sach:"; cin>>n;
        so_luong += n;
        for(int i=so_luong - n; i<so_luong; i++ )
        {
            cout<<"--------------";
            int s=1;
            cout<<s<<endl;
            cout<<"nhap ten sach:";
            a[i].nhap_ten_sach();   
        }
    }
    void display()
    {
        sach::display();
        cout<<so_luong<<endl;
    }

};

int main()
{
    kho_sach a;
    a.nhap_sach();
    a.display();
    return 0;
}
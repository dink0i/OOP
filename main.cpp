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

class kho_sach : public sach //kho sách kế thừa từ sách
{
private:
    sach a;
public:
    kho_sach() : sach()
    {

    }
    void nhap_sach()
    {
        string z;
        int y;
        cout<<"Nhap ma sach:"; 
        fflush(stdin);
        getline(cin,z);
        a.nhap_ma_sach(z);

        // cout<<"Nhap ten sach:";
        // fflush(stdin);
        // getline(cin,z);
        // a.nhap_ten_sach(z);

        // cout<<"Nhap the loai: ";
        // fflush(stdin);
        // getline(cin,z);
        // a.nhap_the_loai(z);

        // cout<<"Nhap tac gia: ";
        // fflush(stdin);
        // getline(cin,z);
        // a.nhap_tac_gia(z);

        // cout<<"Nhap don gia: ";
        // fflush(stdin);
        // cin>>y;
        // a.nhap_don_gia(y);

        // cout<<"Nhap so luong: ";
        // fflush(stdin);
        // cin>>y;
        // a.nhap_so_luong(y);  
    }

    friend void tim_sach(kho_sach x);  

    void display()
    {
        a.display();
    }

};
string ma_sach_tim;
void tim_sach(kho_sach x)
{
    // string ma_sach_tim="noID"; //mã sách tạm
    // cout<<"Nhap ma sach can tim: ";
    // fflush(stdin);
    // getline(cin,ma_sach_tim); //nhập mã sách tạm
    if(ma_sach_tim == x.a.lay_ma_sach()) 
    {
        x.a.display();
    }
    else
    {
        cout<<"Sach trong kho da het hoac khong ton tai!\n";
    }
}

int main()
{
    int dem = 0;
    kho_sach kS[100];
    while(true){
        cout << "1. Nhap sach" << endl;
        cout << "2. Hien thi toan bo sach" << endl;
        cout << "3. Tim sach trong kho" << endl;
        cout << ">Chon: ";
        int key; cin >> key;
        switch(key){
            case 1:
                kS[dem].nhap_sach();
                dem++;
                break;
            case 2:
                for(int i = 0; i < dem ; i++)
                {
                    cout << "\nSTT: " << i+1 << endl;
                    kS[i].display();
                }
                break;
            case 3:
                string ma_sach_tim="noID"; //mã sách tạm
                cout << "Nhap ma sach can tim: " << endl;
                fflush(stdin);
                getline(cin,ma_sach_tim); //nhập mã sách tạm
                for(int i = 0; i < dem ; i++)
                {
                    tim_sach(kS[i]);
                }
        }
    }
    // int x=0;
    // kho_sach a[100];
    // a[x].nhap_sach();
    // tim_sach(a[x]);
    return 0;
}
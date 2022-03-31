#include<iostream>
#include<string.h>
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
class kho_sach
{
    private:
    sach s[100];
    public:
    kho_sach() 
    {}

    void nhap_sach(int &so_loai_sach)
    {
        cout<<"---------------------"<<endl;
        string ID;
        cout<<"Nhap ma sach: "; fflush(stdin);
        getline(cin,ID);
        int k=0;
        for(int i=0; i<so_loai_sach;i++)
        {
            if(ID==s[i].lay_ma_sach())
            {
                cout<<"Sach nay da co san, chi can nhap them so luong!"<<endl;
                int n;
                cout<<"Nhap them so luong: "; fflush(stdin);
                cin>>n;
                s[i].nhap_so_luong(n + s[i].lay_so_luong());
                k++;
                cout<<"---------------------"<<endl;
                break;
            }
        }
        if(k==0)
        {
            so_loai_sach++;
            int i=so_loai_sach-1;
            string z;
            int y;
            s[i].nhap_ma_sach(ID);
            fflush(stdin);
            cout<<"nhap ten sach:"; getline(cin,z);
            s[i].nhap_ten_sach(z);
            fflush(stdin);
            cout<<"nhap the loai: ";getline(cin,z);
            s[i].nhap_the_loai(z);
            fflush(stdin);
            cout<<"nhap tac gia: ";getline(cin,z);
            s[i].nhap_tac_gia(z);
            fflush(stdin);
            cout<<"nhap don gia: ";cin>>y;
            s[i].nhap_don_gia(y);
            fflush(stdin);
            cout<<"nhap so luong: ";cin>>y;
            s[i].nhap_so_luong(y); 
            cout<<"---------------------"<<endl;
            }
    } 

    void tim_sach(int so_loai_sach)
    {
        cout<<"---------------------"<<endl;
        string ID;
        cout<<"Nhap ma sach: "; fflush(stdin);
        getline(cin,ID);
        int k=0;
        for(int i=0; i<so_loai_sach;i++)
        {
            if(ID==s[i].lay_ma_sach())
            {
                cout<<"Thong tin sach can tim la:"<<endl;
                s[i].display();
                k++;
                break;
            }
        }
        if(k==0)
        {
            cout<<"Khong tim thay thong tin sach!"<<endl;
        }
        cout<<"---------------------"<<endl;
    }

    void display(int so_loai_sach)
    {
        for(int i=0; i<so_loai_sach;i++)
        {
            s[i].display();
        }
    }

};

class hoa_don :public sach
{
    private:
    int so_luong_ban;
    string ten_khach_hang;
    double so_dien_thoai;
    public:
    hoa_don():sach()
    {
    }
};

int main()
{
    int so_loai_sach=0;
    kho_sach a;
    cout<<"---------------------"<<endl;
    cout<<"--CHUONG TRINH QUAN LY NHA SACH--"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Option:"<<endl;
    cout<<"1. Nhap them sach vao kho"<<endl;
    cout<<"2. Hien thi ra toan bo danh sach cac loai sach"<<endl;
    cout<<"3. Tim thong tin sach"<<endl;
    cout<<"---------------------"<<endl;
    while(1)
    {
        int option;
        cout<<"Option: ";
        cin>>option;
        while(option>3 || option<0)
        {
            cout<<"Vui long lua chon lai option!"<<endl;
            cout<<"Option: ";
            cin>>option;
        }
        switch (option)
        {
            case 1:
            {
               a.nhap_sach(so_loai_sach);
                break;
            }
            case 2:
            {
                a.display(so_loai_sach);
                break;
            }
            case 3:
            {
                a.tim_sach(so_loai_sach);
                break;
            }
            case 0:
            {
                return 0;
                break;
            }
            
        }
    }
    return 0;
}
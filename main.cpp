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
    }
    
    void nhap_the_loai(string the_loai)
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

class sach_trong_kho:public sach
{
private:

public:

    string lay_ma_sach()
    {
        return sach::lay_ma_sach();
    }

    void nhap_sach_moi(string ma_sach_moi)
    {
        string str_tmp;
        int num_tmp;

        sach::nhap_ma_sach(ma_sach_moi);
        fflush(stdin);
        cout<<"nhap ten sach:"; getline(cin,str_tmp);
        sach::nhap_ten_sach(str_tmp);

        fflush(stdin);
        cout<<"nhap the loai: ";getline(cin,str_tmp);
        sach::nhap_the_loai(str_tmp);

        fflush(stdin);
        cout<<"nhap tac gia: ";getline(cin,str_tmp);
        sach::nhap_tac_gia(str_tmp);

        fflush(stdin);
        cout<<"nhap don gia: ";cin>>num_tmp;
        sach::nhap_don_gia(num_tmp);

        fflush(stdin);
        cout<<"nhap so luong: ";cin>>num_tmp;
        sach::nhap_so_luong(num_tmp);

        cout<<"---------------------"<<endl; 
    }

    void them_sach()
    {
        cout<<"Sach nay da co san, chi can nhap them so luong!"<<endl;
        int n;
        cout<<"Nhap them so luong: "; fflush(stdin);
        cin>>n;
        sach::nhap_so_luong(n + sach::lay_so_luong());
    }

    void display()
    {
        sach::display();
    }

};

void hien_thi_sach(sach_trong_kho x, string ma_sach_tim)
{
    {
        cout<<"---------------------"<<endl;
        cout<<"Sach can tim la:"<<endl;
        x.display();
        cout<<"---------------------"<<endl;
    }
}

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


class All_Kho_Sach
{
private:
    vector<sach_trong_kho> toan_bo_sach_trong_kho;
public:
    void Nhap_Xuat_Tim_Sach()
    {
        int option;
        while(true)
        {
            cout<<"CHUONG TRINH QUAN LY NHA SACH"<<endl;
            cout<<"---------------------"<<endl;
            cout<<"Option:"<<endl;
            cout<<"1. Nhap them sach vao kho"<<endl;
            cout<<"2. Hien thi ra toan bo danh sach cac loai sach"<<endl;
            cout<<"3. Tim thong tin sach"<<endl;
            cout<<"---------------------"<<endl;
            cout<<"Option: ";
            cin>>option;

            if(option == 1)
            {

                sach_trong_kho x;
                cout << "\n\n\t\tNhap them sach vao kho";
                string ID;
                cout<<"Nhap ma sach: "; fflush(stdin);
                getline(cin,ID);
                int k=0;
                for(int i=0; i<toan_bo_sach_trong_kho.size();i++)
                {
                    if(ID==x.lay_ma_sach())
                    {
                        x.them_sach();
                        toan_bo_sach_trong_kho.push_back(x);
                        break;
                    }
                }
                if(k==0)
                {
                    x.nhap_sach_moi(ID);
                    toan_bo_sach_trong_kho.push_back(x);
                }
                break;
            }

        }
    }
    

};
int main()
{
    int so_loai_sach=0;
    sach_trong_kho a[100];
    cout<<"CHUONG TRINH QUAN LY NHA SACH"<<endl;
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
        while(option>3 || option<1)
        {
            cout<<"Vui long lua chon lai option!"<<endl;
            cout<<"Option: ";
            cin>>option;
        }
        switch (option)
        {
            case 1:
            {
                string ID;
                cout<<"Nhap ma sach: "; fflush(stdin);
                getline(cin,ID);
                int k=0;
                for(int i=0; i<so_loai_sach;i++)
                {
                    if(ID==a[i].lay_ma_sach())
                    {
                        a[i].them_sach();
                        k++;
                        break;
                    }
                }
                if(k==0)
                {
                    so_loai_sach++;
                    a[so_loai_sach-1].nhap_sach_moi(ID);
                }
                
                break;
            }
            case 2:
            {
                for(int i=0; i<so_loai_sach;i++)
                {
                    a[i].display();
                }
                break;
            }
            case 3:
            {
                int k=0;
                string ma_sach_tim;
                fflush(stdin);
                cout<<"Nhap ma sach can tim:"; getline(cin,ma_sach_tim);
                for(int i=0; i<so_loai_sach;i++)
                {
                    if(ma_sach_tim == a[i].lay_ma_sach())
                    {
                        hien_thi_sach(a[i], ma_sach_tim);
                        break;
                    }
                    k++;
                }
                if(k==so_loai_sach)
                {
                    cout<<"Khong tim thay thong tin sach!"<<endl;
                }
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
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
class kho_sach
{
    protected:
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

class khach_hang
{
    protected:
    string ten_khach_hang = "unName";
    double so_dien_thoai = 0;
    int so_loai_sach_mua = 0;
    public:
    sach t[100];
    void nhap_ten_khach_hang(string ten_khach_hang)
    {
        this->ten_khach_hang=ten_khach_hang;
    }
    string lay_ten_khach_hang()
    {
        return ten_khach_hang;
    }
    void nhap_so_dien_thoai(double so_dien_thoai)
    {
        this->so_dien_thoai=so_dien_thoai;
    }
    double lay_so_dien_thoai()
    {
        return so_dien_thoai;
    }
    void nhap_so_loai_sach_mua(int so_loai_sach_mua)
    {
        this->so_loai_sach_mua=so_loai_sach_mua;
    }
    int lay_so_loai_sach_mua()
    {
        return so_loai_sach_mua;
    }
};

class hoa_don :public kho_sach
{
    private:
    khach_hang k[100];
    public:
    hoa_don():kho_sach()
    {
    }

    void nhap_sach_vao_kho(int &so_loai_sach)
    {
        kho_sach::nhap_sach(so_loai_sach);
    }

    void tim_sach_trong_kho(int so_loai_sach)
    {
        kho_sach::tim_sach(so_loai_sach);
    }

    void hien_thi_sach(int so_loai_sach)
    {
        kho_sach::display(so_loai_sach);
    }

    void xuat_hoa_don(int so_loai_sach, int &so_khach_hang)
    {
        cout<<"---------------------"<<endl;
        so_khach_hang ++;
        int so_loai_sach_mua = 0;
        cout<<"Nhap thong tin khach hang"<<endl;
        string x;
        double y;
        fflush(stdin);
        cout<<"Ten khach hang: "; getline(cin,x);
        k[so_khach_hang -1].nhap_ten_khach_hang(x);
        cout<<"So dien thoai khach hang: "; cin >> y;
        k[so_khach_hang -1].nhap_so_dien_thoai(y);
        cout<<"Chung toi hien co "<<so_loai_sach<<" loai sach"<<endl;
        cout<<"Ban muon mua bao nhieu loai sach? "; cin >> so_loai_sach_mua;
        while(so_loai_sach_mua>so_loai_sach)
        {
            cout<<"Chung toi hien co "<<so_loai_sach<<" loai sach"<<endl;
            cout<<"So loai sach ban muon mua lon hon so loai sach chung toi co"<<endl;
            cout<<"Ban co muon tra cuu cac loai sach chung toi hien co hay tim kiem thong tin loai sach nao khong?"<<endl;
            cout<<"Neu co, an phim 1, tro ve man hinh chinh va lua chon option 2 hoac 3."<<endl;
            cout<<"Neu khong, an phim so bat ki"<<endl;
            int temp; cin>>temp;
            if(temp == 1)
            {
                return;
            }
            else 
            {
                cout<<"Chung toi hien co "<<so_loai_sach<<" loai sach"<<endl;
                cout<<"Vui long nhap lai so loai sach can mua"; cin >> so_loai_sach_mua;
            }
        }
        k[so_khach_hang-1].nhap_so_loai_sach_mua(so_loai_sach_mua);
        for(int i=0; i<so_loai_sach_mua; i++)
        {
            int c = 0;
            string x;
            
            while(c==0)
            {
                cout<<"Sach thu "<<i+1<<endl;
                cout<<"Nhap ma sach: ";fflush(stdin); getline(cin,x);
                for(int p=0; p<so_loai_sach; p++)
                {
                    if(x == s[p].lay_ma_sach())
                    {
                        
                        k[so_khach_hang-1].t[i].nhap_ten_sach(s[p].lay_ten_sach());
                        k[so_khach_hang-1].t[i].nhap_tac_gia(s[p].lay_tac_gia());
                        k[so_khach_hang-1].t[i].nhap_don_gia(s[p].lay_don_gia());
                        k[so_khach_hang-1].t[i].nhap_so_luong(s[p].lay_so_luong());
                        int n;
                        cout<<"Thong tin sach: "<<endl;
                        cout<<"Ten sach: "<<k[so_khach_hang -1].t[i].lay_ten_sach()<<endl;
                        cout<<"Tac gia: "<<k[so_khach_hang -1].t[i].lay_tac_gia()<<endl;
                        cout<<"Don gia: "<<k[so_khach_hang -1].t[i].lay_don_gia()<<endl;
                        cout<<"So luong sach con trong kho: "<<k[so_khach_hang -1].t[i].lay_so_luong()<<endl;
                        if(s[p].lay_so_luong()==0)
                        {
                            break;
                        }
                        cout<<"Nhap so luong can mua: "; cin>>n;
                        while(n>s[p].lay_so_luong())
                        {
                            cout<<"So luong sach ban can mua vuot qua so luong sach trong kho, vui long chon lai"<<endl;
                            cout<<"Nhap so luong can mua: "; cin>>n;
                        }
                        k[so_khach_hang-1].t[i].nhap_so_luong(n);
                        s[p].nhap_so_luong(s[p].lay_so_luong()-n);
                        c++;
                        break;
                    }
                }
                if(c==0)
                {
                    cout<<"Loai sach ma ban muon mua khong co, vui long chon loai sach khac."<<endl;
                    cout<<"Neu ban muon chon loai sach khac ma khong giam so luong can mua, nhan phim 1"<<endl;
                    cout<<"Neu ban muon giam so luong sach can mua di 1 loai, an phim so bat ki"<<endl;
                    int n; cin>>n;
                    if(n != 1)  so_loai_sach_mua--;
                    else break;
                }
            }

        }
        cout<<"---------------------"<<endl;
        cout<<"Hoa don thanh toan:"<<endl;
        cout<<"Khach hang: "<<k[so_khach_hang-1].lay_ten_khach_hang()<<endl;
        cout<<"---------------------"<<endl;
        int tong_tien=0;
        for(int i=0; i<so_loai_sach_mua;i++)
        {
            cout<<"-----Sach thu "<<i+1<<"-----"<<endl;
            cout<<k[so_khach_hang-1].t[i].lay_ten_sach()<<" --- So luong: "<<k[so_khach_hang-1].t[i].lay_so_luong()<<endl;
            int tien = k[so_khach_hang-1].t[i].lay_so_luong() * k[so_khach_hang-1].t[i].lay_don_gia();
            tong_tien += tien;
        }
        cout<<"---------------------"<<endl;
        cout<<"Tong thanh toan: "<<tong_tien<<endl;
        cout<<"---------------------"<<endl;
        
    }

    void tim_hoa_don_theo_sdt(int so_khach_hang)
    {
        double sdt;
        cout<<"Nhap so dien thoai khach hang can tra cuu hoa don: "<<endl;
        cin>>sdt;
        int f=0;
        for(int i=0; i<so_khach_hang; i++)
        {
            if(sdt==k[i].lay_so_dien_thoai())
            {
                int tong_tien=0;
                cout<<"---------------------"<<endl;
                cout<<"Hoa don thanh toan:"<<endl;
                cout<<"Khach hang: "<<k[i].lay_ten_khach_hang()<<endl;
                cout<<"---------------------"<<endl;
                for(int j=0; j<k[i].lay_so_loai_sach_mua();j++)
                {
                    cout<<"-----Sach thu "<<j+1<<"-----"<<endl;
                cout<<k[i].t[j].lay_ten_sach()<<" --- So luong: "<<k[i].t[j].lay_so_luong()<<endl;
                int tien = k[i].t[j].lay_so_luong() * k[i].t[j].lay_don_gia();
                tong_tien += tien;
                }
                if(tong_tien == 0) continue;
                cout<<"---------------------"<<endl;
                cout<<"Tong thanh toan: "<<tong_tien<<endl;
                cout<<"---------------------"<<endl;
                f++;
            }
        }
        if(f==0)
        {
            cout<<"Khong tim thay thong tin khach hang theo so dien thoai tren!"<<endl;
        }
    }

};

int main()
{
    int so_loai_sach=0;
    int so_khach_hang=0;
    hoa_don a;
    cout<<"---------------------"<<endl;
    cout<<"CHUONG TRINH QUAN LY NHA SACH"<<endl;
    while(1)
    {
        cout<<"---------------------"<<endl;
        cout<<"Option:"<<endl;
        cout<<"1. Nhap them sach vao kho"<<endl;
        cout<<"2. Hien thi ra toan bo danh sach cac loai sach"<<endl;
        cout<<"3. Tim thong tin sach"<<endl;
        cout<<"4. Ban sach va xuat hoa don"<<endl;
        cout<<"5. Tim lich su hoa don khach hang theo so dien thoai"<<endl;
        cout<<"---------------------"<<endl;
        int option;
        cout<<"Option: ";
        cin>>option;
        while(option>5 || option<0)
        {
            cout<<"Vui long lua chon lai option!"<<endl;
            cout<<"Option: ";
            cin>>option;
        }
        switch (option)
        {
            case 1:
            {
               a.nhap_sach_vao_kho(so_loai_sach);
                break;
            }
            case 2:
            {
                a.hien_thi_sach(so_loai_sach);
                break;
            }
            case 3:
            {
                a.tim_sach_trong_kho(so_loai_sach);
                break;
            }
            case 4:
            {
                a.xuat_hoa_don(so_loai_sach, so_khach_hang);
                break;
            }
            case 5:
            {
                a.tim_hoa_don_theo_sdt(so_khach_hang);
                break;
            }
            case 0:
            {
                goto end;
                break;
            }
            
        }
    }
    end:
    return 0;
}






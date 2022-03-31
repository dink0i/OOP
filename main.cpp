#include<iostream>
#include<string>
#include<vector>
using namespace std;

class kho_sach
{
protected:
    string ma_sach;
    string ten_sach;
    string the_loai;
    string tac_gia;
    int don_gia;
    int so_luong;
public:
    kho_sach()
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
        cout<< lay_ma_sach() << "\t\t\t" << lay_ten_sach()<< "\t\t\t" 
            << lay_the_loai()<< "\t\t\t" << lay_tac_gia()<< "\t\t\t" 
            << lay_don_gia()<< "\t\t\t" << lay_so_luong() << endl;
    }
};



class hoa_don : public kho_sach
{
private:
    int so_luong_kH_mua = 0;
    string ten_khach_hang = "unKH_Name";
    string so_dien_thoai = "noNKH_Phone";
public:
    void nhap_so_luong_kH_mua(int so_luong_kH_mua)
    {
        this->so_luong_kH_mua = so_luong_kH_mua;
    }
    int lay_so_luong_kH_mua()
    {
        return so_luong_kH_mua;
    }

    void nhap_ten_khach_hang(string ten_khac_hang)
    {
        this->ten_khach_hang = ten_khac_hang;
    }
    string lay_ten_khach_hang()
    {
        return ten_khach_hang;
    }

    void nhap_so_dien_thoai_kH(string so_dien_thoai)
    {
        this->so_dien_thoai = so_dien_thoai;
    }
    string lay_so_dien_thoai_kH()
    {
        return so_dien_thoai;
    }

    void nhap_ma_sach_kH_mua(string ma_sach_kH_mua)
    {
        kho_sach::nhap_ma_sach(ma_sach_kH_mua);
    }
    string lay_ma_sach_kH_mua()
    {
        return kho_sach::lay_ma_sach();
    }

    void find_don_gia_kH_mua(int don_gia_kH_mua)
    {
        kho_sach::nhap_don_gia(don_gia_kH_mua);
    }

    int lay_don_gia_kH_mua()
    {
        return kho_sach::lay_don_gia();
    }

    void nhap_thong_tin_kH()
    {
        string str_tmp;
        int num_tmp;

        cout << "Nhap ten KH: ";
        fflush(stdin);
        getline(cin, str_tmp);
        nhap_ten_khach_hang(str_tmp);

        cout << "Nhap SDT KH: ";
        fflush(stdin);
        getline(cin, str_tmp);
        nhap_so_dien_thoai_kH(str_tmp);
    }

    void nhap_thong_tin_sach_kH_mua()
    {
        string str_tmp;
        int num_tmp;

        cout << "Nhap ma sach KH mua: ";
        fflush(stdin);
        getline(cin, str_tmp);
        nhap_ma_sach_kH_mua(str_tmp);

        cout << "Nhap so luong sach KH mua: ";
        fflush(stdin);
        cin >> num_tmp;
        nhap_so_luong_kH_mua(num_tmp);
    }


    void display_hoa_don()
    {
        cout<< lay_ten_khach_hang() << "\t\t\t" << lay_so_dien_thoai_kH()<< "\t\t\t" 
            << lay_ma_sach_kH_mua()<< "\t\t\t" << lay_don_gia_kH_mua() << "\t\t\t" 
            << lay_so_luong_kH_mua() << "\t\t\t" << lay_don_gia_kH_mua()*lay_so_luong_kH_mua() << endl;
    }

};

int main()
{
    int so_loai_sach = 0;
    int so_hoa_don = 0;
    kho_sach s[100];
    hoa_don hd[100];
    while(1)
    {
        cout << endl << endl;
        cout<<"###############################################################################"<<endl;
        cout<<"#                       CHUONG TRINH QUAN LY NHA SACH                         #"<<endl;
        cout<<"#                       -----------------------------                         #"<<endl;
        cout<<"# - Option List:                                                              #"<<endl;
        cout<<"# + 1. Nhap them sach vao kho                                                 #"<<endl;
        cout<<"# + 2. Hien thi ra toan bo danh sach cac loai sach                            #"<<endl;
        cout<<"# + 3. Tim thong tin sach                                                     #"<<endl;
        cout<<"# + 4. Ban sach va xuat hoa don                                               #"<<endl;
        cout<<"# + 5. Ban sach va xuat hoa don                                               #"<<endl;
        cout<<"# + 6. Ban sach va xuat hoa don                                               #"<<endl;
        cout<<"###############################################################################"<<endl;

        int option;
        cout<<">Your Option: ";
        cin>>option;
        while(option<1 || option>4)
        {
            cout<<"Vui long lua chon lai option!"<<endl;
            break;
        }

        switch (option)
        {
            case 1:
            {
                cout<<"1. Nhap them sach vao kho:"<<endl;
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
                    // cout<<"nhap ten sach:"; getline(cin,z);
                    // s[i].nhap_ten_sach(z);
                    // fflush(stdin);
                    // cout<<"nhap the loai: ";getline(cin,z);
                    // s[i].nhap_the_loai(z);
                    // fflush(stdin);
                    // cout<<"nhap tac gia: ";getline(cin,z);
                    // s[i].nhap_tac_gia(z);
                    // fflush(stdin);
                    cout<<"nhap don gia: ";cin>>y;
                    s[i].nhap_don_gia(y);
                    fflush(stdin);
                    cout<<"nhap so luong: ";cin>>y;
                    s[i].nhap_so_luong(y); 
                    // cout<<"---------------------"<<endl;
                }
                break;
            }

            case 2:
            {
                cout<<"\n\nDANH SACH THONG TIN CAC SACH TRONG KHO:"<<endl;
                cout<<"\n\nMa sach\t\t\tTen Sach\t\t\tThe Loai\t\t\tTac Gia\t\t\tDon Gia\t\t\tSo Luong" << endl;
                for(int i=0; i<so_loai_sach;i++)
                s[i].display();
                break;
            }
                    
            case 3:
            {
                cout<<"---------------------"<<endl;
                string ID;
                cout<<">Nhap ma sach muon tra cuu: "; fflush(stdin);
                getline(cin,ID);
                int k=0;
                for(int i=0; i<so_loai_sach;i++)
                {
                    if(ID==s[i].lay_ma_sach())
                    {
                        cout<<"Thong tin sach can tim:"<<endl;
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
                break;
            }
            case 4:
            {
                int tmp = 0;
                int so_loai_sach_kH_mua = 0;
                cout << "Nhap so loai sach can mua: ";
                cin >> so_loai_sach_kH_mua;
                hd[so_hoa_don].nhap_thong_tin_kH();

                if(so_loai_sach_kH_mua > 1) //neu tai do khac hang mua nhieu loai sach
                {
                    for(int j = so_hoa_don; j < so_hoa_don + so_loai_sach_kH_mua; j++)
                    {
                        hd[j].nhap_ten_khach_hang(hd[so_hoa_don].lay_ten_khach_hang()); //thì tt khach hang
                        hd[j].nhap_so_dien_thoai_kH(hd[so_hoa_don].lay_so_dien_thoai_kH()); //va so dien thoai se duoc lay 1 lan cho n-1 sach con lai
                        hd[j].nhap_thong_tin_sach_kH_mua(); //nhap tt tung sach kh muon mua
                        for(int i = 0; i < so_loai_sach; i++)
                        {
                            if(hd[j].lay_ma_sach_kH_mua() == s[i].lay_ma_sach()) //ma sach can ban bang ma sach trong kho
                            {
                                tmp++;
                                while(hd[j].lay_so_luong_kH_mua() > s[i].lay_so_luong()) //neu so luong sach nhap vao > so luong sach co trong kho
                                {
                                    cout << "\nSo luong sach " << s[i].lay_ten_sach() << " trong kho khong du!" << endl; 
                                    cout << "SL con: " << s[i].lay_so_luong() << endl;
                                    cout << "Vui long lua chon:" << endl;
                                    cout << "1. Mua so luong toi da co the" << endl;
                                    cout << "2. Mua so luong tuy chon " << endl;
                                    int option_hoa_don;
                                    cout << ">Nhap lua chon: ";
                                    cin >> option_hoa_don;
                                    if(option_hoa_don == 1) //mua het sach trong kho
                                    {
                                        hd[j].nhap_so_luong_kH_mua(s[i].lay_so_luong());
                                    }
                                    if(option_hoa_don == 2) //mua 1 so luong nao do trong kho
                                    {
                                        int so_luong_mua_tmp;
                                        cout << ">Nhap lai so luong mua: ";
                                        cin >> so_luong_mua_tmp;
                                        hd[j].nhap_so_luong_kH_mua(so_luong_mua_tmp);

                                    }
                                }
                                s[i].nhap_so_luong(s[i].lay_so_luong()-hd[j].lay_so_luong_kH_mua()); //giam so luong trong kho sach
                                hd[j].find_don_gia_kH_mua(s[i].lay_don_gia()); //lay gia sach dua vao hoa don
                                //so_hoa_don++; //so hoa don tang len
                            }
                            
                        }
                        if (tmp == 0) cout << "\nMa sach " << hd[j].lay_ma_sach_kH_mua() << "kho khong tim thay!" << endl; //neu khong tim thay sach
                        tmp = 0;
                    }

                    cout<<"\n\n==HOA DON=="<<endl;
                    cout<<"\n\nTen KH\t\t\tSDT KH\t\t\tMa Sach\t\t\tDon Gia\t\t\tSo Luong\t\t\tThanh Tien" << endl;
                    for(int j = so_hoa_don; j < so_hoa_don + so_loai_sach_kH_mua; j++)
                    {
                        hd[j].display_hoa_don(); //in hoa don ra
                    }
                    so_hoa_don+=so_loai_sach_kH_mua;

                }
                
                else if(so_loai_sach_kH_mua == 1)
                {
                    // hd[so_hoa_don].nhap_thong_tin_sach_ban(); //nhap thong tin sach ban [tai ham hoa_don ke thua nha_sach]
                    for(int i = 0; i < so_loai_sach; i++)
                    {
                        if(hd[so_hoa_don].lay_ma_sach_kH_mua() == s[i].lay_ma_sach()) //ma sach can ban bang ma sach trong kho
                        {
                            tmp++;
                            while(hd[so_hoa_don].lay_so_luong_kH_mua() > s[i].lay_so_luong()) //neu so luong sach nhap vao > so luong sach co trong kho
                            {
                                cout << "\nSo luong sach " << s[i].lay_ten_sach() << " trong kho khong du!" << endl; 
                                cout << "SL con: " << s[i].lay_so_luong() << endl;
                                cout << "Vui long lua chon:" << endl;
                                cout << "1. Mua so luong toi da co the" << endl;
                                cout << "2. Mua so luong tuy chon " << endl;
                                int option_hoa_don;
                                cout << ">Nhap lua chon: ";
                                cin >> option_hoa_don;
                                if(option_hoa_don == 1) //mua het sach trong kho
                                {
                                    hd[so_hoa_don].nhap_so_luong_kH_mua(s[i].lay_so_luong());
                                }
                                if(option_hoa_don == 2) //mua 1 so luong nao do trong kho
                                {
                                    int so_luong_mua_tmp;
                                    cout << ">Nhap lai so luong mua: ";
                                    cin >> so_luong_mua_tmp;
                                    hd[so_hoa_don].nhap_so_luong_kH_mua(so_luong_mua_tmp);

                                }
                            }
                            s[i].nhap_so_luong(s[i].lay_so_luong()-hd[so_hoa_don].lay_so_luong_kH_mua()); //giam so luong trong kho sach
                            hd[so_hoa_don].find_don_gia_kH_mua(s[i].lay_don_gia()); //lay gia sach dua vao hoa don

                            cout<<"\n\n==HOA DON=="<<endl;
                            cout<<"\n\nTen KH\t\t\tSDT KH\t\t\tMa Sach\t\t\tDon Gia\t\t\tSo Luong\t\t\tThanh Tien" << endl;
                            hd[so_hoa_don].display_hoa_don(); //in hoa don ra
                            so_hoa_don++; //so hoa don tang len
                            break;
                        }
                    }
                    if (tmp == 0) cout << "\nSach trong kho khong tim thay!" << endl; //neu khong tim thay sach 
                }
                else
                {
                    break;
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
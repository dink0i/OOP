#pragma once
#include<iostream>
#include<string.h>
using namespace std;
#include"sach.cpp"

class kho_sach : public sach //kho sách kế thừa từ sách trong sach.cpp
{
private:

public:
    void nhap_sach()
    {
        string str_temp;
        int num_temp;

        cout<<"Nhap ma sach:"; 
        fflush(stdin);
        getline(cin,str_temp);
        sach::nhap_ma_sach(str_temp);

        cout<<"Nhap ten sach:";
        fflush(stdin);
        getline(cin,str_temp);
        sach::nhap_ten_sach(str_temp);

        cout<<"Nhap the loai: ";
        fflush(stdin);
        getline(cin,str_temp);
        sach::nhap_the_loai(str_temp);

        cout<<"Nhap tac gia: ";
        fflush(stdin);
        getline(cin,str_temp);
        sach::nhap_tac_gia(str_temp);

        cout<<"Nhap don gia: ";
        fflush(stdin);
        cin>>num_temp;
        sach::nhap_don_gia(num_temp);

        cout<<"Nhap so luong: ";
        fflush(stdin);
        cin>>num_temp;
        sach::nhap_so_luong(num_temp);  
    }

    void hien_thi()
    {
        sach::hien_thi();
    }

    // string ma_sach_tim;
    void TimSach(string ma_sach_tim)
    {
        if(ma_sach_tim == sach::lay_ma_sach())
        {
            sach::hien_thi();
        }
        else
        {
            cout<<"Sach trong kho da het hoac khong ton tai!\n";
        }
    }
};
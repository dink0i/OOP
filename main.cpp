/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class EnterBook{
private:
	string book_name;
	string book_code;
	string book_author;
	string book_type;
	int book_amount;
	int book_cost;
public:
	
	EnterBook(){
	}
	EnterBooks(){
		cout << "\n>  Nhap ten sach: ";
		fflush(stdin);
		getline(cin, this->book_name);	//nhap
		
		cout << "\n>  Nhap ma sach: ";
		fflush(stdin);
		getline(cin, this->book_code);	//nhap
			
		cout << ">  Nhap tac gia: ";
		fflush(stdin);
		getline(cin, this->book_author);
		
		cout << ">  Nhap the loai: ";
		fflush(stdin);
		getline(cin, this->book_type);	
			
		cout << ">  Nhap so luong: ";
		fflush(stdin);
		cin >> this->book_amount;
		
		cout << ">  Nhap gia sach: ";
		fflush(stdin);
		cin >> this->book_cost;
	}
	PrintNewEnterBook(){
		cout << this->book_name 	<< "\t\t\t" <<	this->book_code 	<< "\t\t\t" << 
				this->book_author 	<< "\t\t\t" << 	this->book_type 	<< "\t\t\t"<<
				this->book_amount 	<<"\t\t\t" 	<< 	this->book_amount 	<< "\n";
		fstream FileInSachNhap;
		FileInSachNhap.open("FileInSachNhap.txt", ios::out|ios::app);
		FileInSachNhap << "\n" + book_name + "\t\t\t";
		FileInSachNhap << book_code + "\t\t\t";
		FileInSachNhap << book_author + "\t\t\t";
		FileInSachNhap << book_type + "\t\t\t";
		FileInSachNhap << book_amount + "\t\t\t";
		FileInSachNhap << book_cost;
	}
	InTongCacSach(){
		
	}
};


int main(){
	while(true){
		cout << "=====================================================================================================\n";
		cout << "======PHAN MEM QUAN LY NHA SACH======\n";
		cout << "======************MENU*********======\n";
		cout << "1. NHAP SACH MOI:\n";
		
		int key;
		cout << ">> CHON: ";
		cin >> key;
		int num_book_name = 0;
		switch(key){
			case 1:
				system("cls");
				EnterBook a[num_book_name];
				a[num_book_name].EnterBooks();
				system("cls");
				cout << "===DANH SACH CAC SACH DA NHAP===\n";
				cout << "Ten sach\t\t\tTac gia\t\t\tThe loai\t\t\tSo luong\n";
				a[num_book_name].PrintNewEnterBook();
				num_book_name++;
				break;
		}
	}
	return 0;
}
/*
int main(){
	while(true){
		cout << "=====================================================================================================\n";
		cout << "======PHAN MEM QUAN LY NHA SACH======\n";
		cout << "======************MENU*********======\n";
		cout << "1. NHAP SACH MOI:\n";
		
		int key;
		cout << ">> CHON: ";
		cin >> key;
		int num_book_name = 0;
		switch(key){
			case 1:
				system("cls");
//				int num_book_name = 0;
//				cout << "> Nhap so luong ten sach can nhap: ";
//				cin >> num_book_name;
//				system("cls");
				EnterBook a[num_book_name];
//				for(int i = 0; i < num_book_name; i++){
//				cout << ">> NHAP THONG TIN TEN SACH THU " << i + 1;
				a[num_book_name].EnterBooks();
				system("cls");
//				}
				cout << "===DANH SACH CAC SACH DA NHAP===\n";
				cout << "Ten sach\t\t\tTac gia\t\t\tThe loai\t\t\tSo luong\n";
				for(int i = 0; i < num_book_name; i++) 
					a[i].PrintNewEnterBook();
				break;
		}
	}
	return 0;
//	cout << "===DANH SACH CAC SACH DA NHAP===\n";
	
}

*/

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

    friend void tim_sach(kho_sach x);  

    void display()
    {
        a.display();
    }

};

void tim_sach(kho_sach x)
{
    string ma_sach_1="noID";
    cout<<"Nhap ma sach can tim: ";
    fflush(stdin);
    getline(cin,ma_sach_1);
    if(ma_sach_1 == x.a.lay_ma_sach())
    {
        x.a.display();
    }
    else
    {
        cout<<"Hello world!";
    }
}

int main()
{
    int x=0;
    kho_sach a[100];
    a[x].nhap_sach();
    tim_sach(a[x]);
    return 0;
}
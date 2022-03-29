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



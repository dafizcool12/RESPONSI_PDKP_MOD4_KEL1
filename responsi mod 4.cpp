#include <iostream>

using namespace std;

class desc{
	public:
	void tulis_kel(){
		cout << "kelompok 1" << endl;
	}
	void headerfooter(){
		cout << "================================" << endl;
	}
	string input_nama(string nama){
		return nama;
	}
};

string tambah(string s){
	for(int i=0;i<s.length();i++){
		s[i]=s[i]+1;
		if(s[i]==123||s[i]==91){
			s[i]=s[i]-26;
		}
		else if(s[i]==33){
			s[i]=s[i]-1;
		}
	}
	return s;
}
void headerfooter2(){
	cout << "++++============__===========++++" << endl;
}

int main(){
	//nama anggota
	string name[4];
	name[0]="Afrizal Eka Purnama";
	name[1]="Daffa Abhyasa Santoso";
	name[2]="Muhammad Rafi Anggaraksa";
	name[3]="Muhammad Roshiyful Kaamil";

	desc obj;
	
	//tulis desc
	cout << "nama-nama anggota kelompok kami" << endl;
	obj.headerfooter();
	obj.tulis_kel();
	//print anggota
	for(int i=1;i<=4;i++){
		cout << i << ". " << obj.input_nama(name[i-1])<<endl;
	}
	obj.headerfooter();
	
	//encrypt
	cout << endl;
	cout << "nama-nama setelah di-enkripsikan :"<<endl;
	cout << endl;
	
	headerfooter2();
	obj.tulis_kel();
	//qsjmu bmhhpub
	for(int i=0;i<4;i++){
		cout << i+1 <<". " << tambah(name[i]) << endl;
	}
	headerfooter2();
}

#include <iostream>
using namespace std;
//fungsi utama
int main(){

	//cout<<"Halo nama saya Roy \a";
	
	//.............Input..................//
	
//	string nama_variable;
//	cin>>nama_variable;
//	cout<<"nama saya"<<endl;
//	cout<<nama_variable;
//
//  getline(cin,nama_variable);
//	cout<<nama_variable;

    //variabel
	string Nama;
    string NPM;
    string Kelas;
    
    //input
    cout<<"Masukkan Nama Anda = ";
    getline(cin,Nama);
	cout<<"Masukkan NPM Anda = ";
    cin>>NPM;
    cout<<"Masukkan Kelas Anda = ";
    cin>>Kelas;
    
    //output
    cout<<"Nama saya adalah "<<Nama<<" dengan NPM "<<NPM<<" dan berada di Kelas "<<Kelas;
	return 0;
}		

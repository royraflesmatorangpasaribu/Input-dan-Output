#include <iostream>
using namespace std;
int main(){
	//cout<<"Halo nama saya Roy \a";
	
	//.............Input..................//
	
//	string nama_variable;
//	cin>>nama_variable;
//	cout<<"nama saya"<<endl;
//	cout<<nama_variable;
//
//    getline(cin,nama_variable);
//	cout<<nama_variable;

    string Nama;
    string NPM;
    string Kelas;
    cout<<"Masukkan Nama Anda = ";
    getline(cin,Nama);
	cout<<"Masukkan NPM Anda = ";
    cin>>NPM;
    cout<<"Masukkan Kelas Anda = ";
    cin>>Kelas;
    
    cout<<"Nama saya adalah "<<Nama<<" dengan NPM "<<NPM<<" dan berada di Kelas "<<Kelas;
	return 0;
}		

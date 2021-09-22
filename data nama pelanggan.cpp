#include <iostream>
using namespace std;

int main(){
	string nama_pelanggan, alamat_rumah, email_pelanggan, nomor_telepon;
	
	//.....input....
	
	cout<<"Masukkan Data Pelanggan Toko Sembako"<<endl;
	cout<<"Nama Pelanggan	= ";
	getline(cin,nama_pelanggan);
	cout<<"Alamat Rumah	= ";
	getline(cin,alamat_rumah);
	cout<<"Email Pelanggan	= ";
	cin>>email_pelanggan;
	cout<<"Nomor Telepon	= ";
	cin>>nomor_telepon;
	cout<<endl;
	
	//......output.....
	
	cout<<"Berikut Data Pelanggan Toko Sembako"<<endl;
	cout<<"Nama Pelanggan	= "<<nama_pelanggan<<endl;
	cout<<"Alamat Rumah	= "<<alamat_rumah<<endl;
	cout<<"Email Pelanggan	= "<<email_pelanggan<<endl;
	cout<<"Nomor Telepon	= "<<nomor_telepon;
	
	return 0;
}

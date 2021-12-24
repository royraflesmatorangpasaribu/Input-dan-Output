#include <iostream>
//library memanggil waktu
#include <ctime>  
using namespace std;
int main() {
   time_t now = time(0);
   char* dt = ctime(&now);
   
   cout<<"================================================="<<endl;
   cout<<"|        Menampilkan Tanggal dan Waktu          |"<<endl;
   cout<<"|                 by royrafmp                   |"<<endl;		
   cout<<"=================================================";
   cout<<"\nWaktu Sekarang : " << dt;

}

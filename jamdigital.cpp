#include <iostream>
//library untuk menggunakan ctime
#include <ctime> 
using namespace std;
int main() {
  	 //rumus waktu
   	 time_t now = time(0);
  	 char* dt = ctime(&now);
	
   	cout<<dt ;
	//karena menggunakan fungsi main()
	return 0;
}

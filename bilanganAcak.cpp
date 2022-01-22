#include <iostream>
#include <stdlib.h>
using namespace std;

//dibuat pada 21 Januari 2022

//minimal terdapat satu fungsi 
int main(){
    //deklarasi variabel
    int acak1, acak2, acak3, acak4, acak5;
    acak1 = rand();
    acak2 = rand();
    acak3 = rand();
    acak4 = rand();
    acak5 = rand();
    
    //output
    cout << "Bilangan Acak 1 = " << acak1 << endl;
    cout << "Bilangan Acak 2 = " << acak2 << endl;
    cout << "Bilangan Acak 3 = " << acak3 << endl;
    cout << "Bilangan Acak 4 = " << acak4 << endl;
    cout << "Bilangan Acak 5 = " << acak5 << endl;
    
    //karena menggunakan fungsi main()
    return 0;
}

/**************************
Nama : Stefanus Julianto
Tanggal : 27 Mei 2017
Program membalik 1 kata
**************************/
#include <iostream>
#include <string.h>

using namespace std;

char kata[99];

string balik(char kata[]){
    char temp[99]={""};
    for(int i=0;i<strlen(kata);i++){
        temp[i] = kata[strlen(kata)-i-1];
    }
    return temp;
}

main(){
    string atak;
    cout << "Masukkan kata        : "; cin >> kata;
    atak = balik(kata);
    cout << "Kata setelah dibalik : " << atak << endl;
    cout << "=====================================" << endl;
}

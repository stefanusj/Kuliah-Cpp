/*********************************************
Nama : Stefanus Julianto
Tanggal : 27 Mei 2017
Program mencari kuadrat berdigit 1 sampai 9
*********************************************/
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

bool cek(char angkak[]){
    bool angka[10] = {false};
    for(int i=0;i<strlen(angkak);i++){
        if(angkak[i]=='1') angka[1] = true;
        if(angkak[i]=='2') angka[2] = true;
        if(angkak[i]=='3') angka[3] = true;
        if(angkak[i]=='4') angka[4] = true;
        if(angkak[i]=='5') angka[5] = true;
        if(angkak[i]=='6') angka[6] = true;
        if(angkak[i]=='7') angka[7] = true;
        if(angkak[i]=='8') angka[8] = true;
        if(angkak[i]=='9') angka[9] = true;
    }
    if(!angka[1]||!angka[2]||!angka[3]||!angka[4]||!angka[5]
       ||!angka[6]||!angka[7]||!angka[8]||!angka[9]) return false; else return true;
}
main(){
    char temp[33];
    cout << "Kuadrat berdigit 1-9 mulai dari 0 hingga 40000" << endl;
    for(int i=0;i<=40000;i++){
        itoa(i*i,temp,10);
        if(cek(temp)) cout << i << endl;
    }
}

/********************************
Nama : Stefanus Julianto
Tanggal : 27 Mei 2017
Program mengetahui kalender jawa
*********************************/
#include <iostream>

using namespace std;

string pasaran(int hariTemu){
    string kJawa[]={"kliwon","legi","pahing","pon","wage"};
    return kJawa[hariTemu%5];
}
string jawa(int tgl, string bulan, int tahun){
    int modTahun = tahun%20;
    int hariTemu;
    int januari[]={0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,0,0,0};
    int februari[]={1,2,2,2,2,3,3,3,3,4,4,4,4,0,0,0,0,1,1,1};
    int maret[]={0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    int april[]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,0,0,0,0};
    int mei[]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,0,0,0,0};
    int juni[]={2,2,2,2,3,3,3,3,4,4,4,4,0,0,0,0,1,1,1,1};
    int juli[]={2,2,2,2,3,3,3,3,4,4,4,4,0,0,0,0,1,1,1,1};
    int agustus[]={3,3,3,3,4,4,4,4,0,0,0,0,1,1,1,1,2,2,2,2};
    int september[]={4,4,4,4,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3};
    int oktober[]={4,4,4,4,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3};
    int november[]={0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    int desember[]={0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    if(bulan == "januari")          hariTemu = januari[modTahun];
    else if(bulan == "februari")    hariTemu = februari[modTahun];
    else if(bulan == "maret")       hariTemu = maret[modTahun];
    else if(bulan == "april")       hariTemu = april[modTahun];
    else if(bulan == "mei")         hariTemu = mei[modTahun];
    else if(bulan == "juni")        hariTemu = juni[modTahun];
    else if(bulan == "juli")        hariTemu = juli[modTahun];
    else if(bulan == "agustus")     hariTemu = agustus[modTahun];
    else if(bulan == "september")   hariTemu = september[modTahun];
    else if(bulan == "oktober")     hariTemu = oktober[modTahun];
    else if(bulan == "november")    hariTemu = november[modTahun];
    else if(bulan == "desember")    hariTemu = desember[modTahun];
    hariTemu+=tgl;
    return pasaran(hariTemu);
}
main(){
    int tgl,tahun;
    string bulan;
    cout << "Masukkan tanggal    : "; cin >> tgl;
    cout << "Masukkan nama bulan : "; cin >> bulan;
    cout << "Masukkan tahun      : "; cin >> tahun;
    cout << "Hari Jawa : " << jawa(tgl,bulan,tahun) << endl;
    cout << "=============================" << endl;
}

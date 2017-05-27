/*****************************
Nama : Stefanus Julianto
Tanggal 27 Mei 2017
Program menampilkan permutasi
*****************************/
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    char huruf[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n;
    cout << "Masukkan jumlah huruf : "; cin >> n;
    cout << "Permutasi : " << endl;
    do {
        for(int i=0;i<n;i++)
            cout << huruf[i] << ' ';
        cout << endl;
    } while ( next_permutation(huruf,huruf+n) );
    cout << "==============" << endl;
}

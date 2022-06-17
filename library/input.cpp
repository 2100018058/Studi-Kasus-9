#include "base.h"
using namespace std;

void BaseProject::input(){
    cout << "Masukkan jumlah Judul  : "; cin >> jumlah_judul;
    cout << "===========================" <<endl;
    for(int i = 1; i <= jumlah_judul; i++){
        cout << "Masukkan Jenis Buku    : "; cin >> book[i].jenis;
        cout << "Masukkan Judul Buku    : "; cin >> book[i].judul;
        cout << "Masukkan Nama Penulis  : "; cin >> book[i].nama;
        cout << "===========================" <<endl;
    }
    cout<<"Data buku Array 1D: "<<endl;
    for (int i = 1; i <= jumlah_judul; i++){
        cout << book[i].jenis << " " << book[i].judul << " " << book[i].nama <<endl;
    }
    cout<<endl;
}
#include <iostream>
using namespace std;

struct buku{
    string jenis;
    string judul;
    string nama; 
};

class BaseProject{ 
    public :
        void input();
        void proses();
        void output();
        
    private :
        buku book[15];
        buku bok[15][15];
        int jumlah_judul;
};
void BaseProject::input(){
    cout << "Masukkan jumlah Judul  : "; cin >> jumlah_judul;
    getchar();
    cout << "===========================" <<endl;
    for(int i = 1; i <= jumlah_judul; i++){
        cout << "Masukkan Jenis Buku    : "; getline(cin,book[i].jenis);
        cout << "Masukkan Judul Buku    : "; getline(cin,book[i].judul);
        cout << "Masukkan Penulis Buku  : "; getline(cin,book[i].nama);
        cout << "===========================" <<endl;
    }
    cout<<"Data buku Array 1D: "<<endl;
    for (int i = 1; i <= jumlah_judul; i++){
        cout << book[i].jenis << " " << book[i].judul << " " << book[i].nama <<endl;
    }
    cout<<endl;
}
void BaseProject::proses(){
    for(int i = 1; i <= jumlah_judul; i++){
        for(int k = 1; k <= jumlah_judul; k++){
            for(int l = 1; l <= jumlah_judul; l++){
                bok[k][l] = book[i];
                i++;
            }
        }
    }
}
void BaseProject::output(){
  cout << "Data buku Array 2D"<<endl;
  	cout << "========================================================================"<<endl;
	cout << "|   Jenis Buku   |   Judul     |    Penulis   |"<<endl;
	cout << "========================================================================"<<endl;
    for(int k = 1; k <= jumlah_judul; k++){
        for(int l = 1; l <= jumlah_judul; l++){
            cout <<"\t\t"<< bok[k][l].jenis<<" ";
            cout <<"\t\t"<< bok[k][l].judul <<" ";
            cout <<"\t\t"<< bok[k][l].nama <<" ";
            cout <<"\t\t"<< endl;
        }
    }
}
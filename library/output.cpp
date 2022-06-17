#include "base.h"
using namespace std;

void BaseProject::output(){
  cout << "Data buku Array 2D"<<endl;
  	cout << "========================================================================"<<endl;
	cout << "|   Jenis Buku   |   Judul     |    Penulis   |"<<endl;
	cout << "========================================================================"<<endl;
    for(int k = 1; k <= jumlah_judul; k++){
      cout << " " << book[a].jenis << "\t\t";
        for(int l = 1; l <= jumlah_judul; l++){
            cout <<"\t\t"<< bok[k][l].jenis<<" ";
            cout <<"\t\t"<< bok[k][l].judul <<" ";
            cout <<"\t\t"<< bok[k][l].nama <<" ";
            cout <<"\t\t"<< endl;
        }
    }
}
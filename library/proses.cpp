#include "base.h"
using namespace std;

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
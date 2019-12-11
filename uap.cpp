#include <iostream>
#include "queue.h"
#include "barang.h"
using namespace std;

void cari () {
	string name;
	int count = 0;
	cout<<"Masukkan Nama Yang Akan Dicari: ";
	cin>>name;
   	for (int i = 1; i < 12; i++) {
      	if (name == nama[i]) {
        	cout<<"Nama: "<<nama[i]<<" Ditemukan"<<endl;
			count++;
     	} 
   	
  	} if (count == 0) {
     		cout<<"Nama Tidak Ada~"<<endl;
  		}
}

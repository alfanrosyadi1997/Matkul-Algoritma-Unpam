#include <iostream>
using namespace std;

int main(){

    int jumlahbarang, hargabarang, diskon, totalbayar;
    
    cout<<"Masukan Jumlah Barang :";
    cin>>jumlahbarang;
    cout<<"Masukan Harga Barang :";
    cin>>hargabarang;
    
    hargabarang = hargabarang * jumlahbarang;
    
	if(jumlahbarang >= 100){
   		diskon = hargabarang * 0.15;
		totalbayar = hargabarang - diskon;     
    }else{
        diskon = hargabarang *0.05;
        totalbayar = hargabarang - diskon;
    }
  
   cout<<"--------------------------"<<endl;
   cout<<"Jumlah Barang ="<<jumlahbarang<<endl;
   cout<<"Total Harga Barang ="<<hargabarang<<endl;
   cout<<"Total Diskon ="<<diskon<<endl;
   cout<<"Total Bayar ="<<totalbayar<<endl;
   
   return 0;
   
}

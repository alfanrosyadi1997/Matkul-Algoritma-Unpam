#include <iostream>
using namespace std;
int main() {
	
	cout<<"PROGRAM BILANGAN TERBESAR, TERKECIL DAN RATA - RATA"<<endl;
	int terkecil, terbesar, ratarata, bil1, bil2, bil3;
	cout<<"\nMasukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	cout<<"Masukan Bilangan ke-3 : ";
	cin>>bil3;
	
	terbesar=bil1;
	
	if (bil2 > terbesar){
		terbesar=bil2;
	}
	if (bil3 > terbesar){
		terbesar=bil3;
	}
	
	terkecil=bil1;
	
	if (bil2 < terkecil){
		terkecil=bil2;
	}
	if (bil3 < terkecil){
		terkecil=bil3;
	}
	
	ratarata = (bil1 + bil2 + bil3)/3;
	
	cout<<"Nilai Terbesar adalah "<<terbesar<<endl;
    cout<<"\nNilai Terkecil adalah "<<terkecil<<endl;
	cout<<"\nNilai Rata - Rata adalah "<<ratarata<<endl;
	
	return 0;	
}

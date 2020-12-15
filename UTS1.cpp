#include <iostream>
// Alfan Rosyadi - 201011401072
using namespace std;

int main()

{
	int nilai;
	
	cout<<"Masukan Nilai = ";
    cin>>nilai;
    
        if (nilai >= 0 && nilai < 30)
		cout<<"Nilai Rendah";
	
		else if (nilai >= 30 && nilai < 60)
		cout<<"Nilai Sedang";
	
		else if (nilai >= 60 && nilai <= 100)
		cout<<"Nilai Tinggi";
		
		else 
		cout<<"Masukan Nilai dari 0 - 100";
   return 0;	
}

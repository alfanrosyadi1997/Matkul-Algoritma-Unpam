#include <iostream>
// Alfan Rosyadi - 201011401072
using namespace std;

int main(){
	
    int p, l, t, luas, volume;
    
    cout<<"Masukan Panjang =";
    cin>>p;
    cout<<"Masukan Lebar =";
    cin>>l;
    cout<<"Masukan Tinggi =";
    cin>>t;
    
    luas = (2*p*l) + (2*p*t) + (2*l*t);
    volume = p * l * t;
    
    cout<<"==========HASIL==========";
    cout<<"\nLuas Balok = "<<luas<<endl;
    cout<<"Volume Balok = "<<volume<<endl;
    
    return 0;   
}

#include <iostream>
// Alfan Rosyadi - 201011401072
using namespace std;

int main(){
	
    int bilangan;
    
    cout<<"MASUKAN Bilangan :";
    cin>>bilangan;
    

    if(bilangan % 2 == 0)
        cout<<"Bilangan Genap";
    else
        cout<<"Bilangan Ganjil";
    
    return 0;
    
}

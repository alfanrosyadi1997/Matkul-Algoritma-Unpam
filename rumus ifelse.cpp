#include <iostream>
using namespace std;

int main(){
	
    int bilangan;
    
    cout<<"MASUKAN Bilangan :";
    cin>>bilangan;
    

    if(bilangan > 10){	
    	bilangan = bilangan + 10;
        cout<<"Menjadi ="<< bilangan << endl;
    }
	else if (bilangan <= 10){
		bilangan = bilangan + 5;
        cout<<"Menjadi ="<< bilangan << endl;
	}
	else {	
	}
    	 
    return 0;
	  
}

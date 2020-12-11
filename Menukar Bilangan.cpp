#include <stdio.h> 
#include <iostream> 

using namespace std; 

int main()    
{
	cout<<"PROGRAM MENUKAR BILANGAN"<<endl;
	int x, y;  
	cout <<"Masukan Nilai X ="; cin >> x;   
	cout <<"Masukan Nilai Y ="; cin >> y;   
	
	x = x + y;   
	y = x - y;   
	x = x - y;   
	
	cout <<"Nilai X =" << x <<endl;  
	cout <<"Nilai Y =" << y <<endl;  
	
	return 0;
}

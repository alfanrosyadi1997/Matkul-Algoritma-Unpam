#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()

{

 int angka, pangkat, hasil; 

 cout<<"Input Angka : ";cin>>angka; 
 cout<<"Input Pangkat : ";cin>>pangkat; 
 hasil = pow(angka, pangkat); 
 cout<<angka<<" pangkat "<<pangkat<<endl; 
 cout<<"hasil = "<<hasil; 
 getch();

}

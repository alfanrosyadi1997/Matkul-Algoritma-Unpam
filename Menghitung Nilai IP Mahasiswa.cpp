#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	char nm1,nm2,nm3,nm4,nm5,nm6,nm7,nm8;
	int nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7,nilai8;
	float TN,TK,ip;
	
	cout<<"Menghitung IP\n";
	
	cout<<"1. Kalkulus | SKS = 4 | Nilai = ";cin>>nm1;
		if(nm1=='A') {nilai1=4;} else if(nm1=='B') {nilai1=3;} else if(nm1=='C') {nilai1=2;} else if(nm1=='D') {nilai1=1;} else if(nm1=='E') {nilai1=0;}
	
	cout<<"2. Fisika Dasar | SKS = 3 | Nilai = ";cin>>nm2;
		if(nm2=='A') {nilai2=4;} else if(nm2=='B') {nilai2=3;} else if(nm2=='C') {nilai2=2;} else if(nm2=='D') {nilai2=1;} else if(nm2=='E') {nilai2=0;}
	
	cout<<"3. PTI | SKS = 2 | Nilai = ";cin>>nm3;
		if(nm3=='A') {nilai3=4;} else if(nm3=='B') {nilai3=3;} else if(nm3=='C') {nilai3=2;} else if(nm3=='D') {nilai3=1;} else if(nm3=='E') {nilai3=0;}
	
	cout<<"4. Sistem Digital | SKS = 2 | Nilai = ";cin>>nm4;
		if(nm4=='A') {nilai4=4;} else if(nm4=='B') {nilai4=3;} else if(nm4=='C') {nilai4=2;} else if(nm4=='D') {nilai4=1;} else if(nm4=='E') {nilai4=0;}
	
	cout<<"5. PSO | SKS = 2 | Nilai = ";cin>>nm5;
		if(nm5=='A') {nilai5=4;} else if(nm5=='B') {nilai5=3;} else if(nm5=='C') {nilai5=2;} else if(nm5=='D') {nilai5=1;} else if(nm5=='E') {nilai5=0;}
	
	cout<<"6. Logika Matematika | SKS = 2 | Nilai = ";cin>>nm6;
		if(nm6=='A') {nilai6=4;} else if(nm6=='B') {nilai6=3;} else if(nm6=='C') {nilai6=2;} else if(nm6=='D') {nilai6=1;} else if(nm6=='E') {nilai6=0;}
	
	cout<<"7. Bahasa Inggris | SKS = 2 | Nilai = ";cin>>nm7;
		if(nm7=='A') {nilai7=4;} else if(nm7=='B') {nilai7=3;} else if(nm7=='C') {nilai7=2;} else if(nm7=='D') {nilai7=1;} else if(nm7=='E') {nilai7=0;}
	
	cout<<"8. Agama | SKS = 2 | Nilai = ";cin>>nm8;
		if(nm8=='A') {nilai8=4;} else if(nm8=='B') {nilai8=3;} else if(nm8=='C') {nilai8=2;} else if(nm8=='D') {nilai8=1;} else if(nm8=='E') {nilai8=0;}
		
	TN = (nilai1*4) + (nilai2*3) + (nilai3*2) + (nilai4*2) + (nilai5*2) + (nilai6*2) + (nilai7*2) + (nilai8*2);
	TK = 4 + 3 + 2 + 2 + 2 + 2 + 2 + 2;
	ip = TN/TK;
	printf("Nilai IP = %.2f",ip);
	
	return 0;
}

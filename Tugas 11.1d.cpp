#include<iostream>
//Alfan Rosyadi 
using namespace std;

int main()
{
	int  I, J, T;
		for(I=0; I<=4; I+=2)
			{
				for(J=1; J<=8; J+=3)
					{
					T = T + J;
					}
					cout<<T<<""<<endl;
			}
	return 0;
}


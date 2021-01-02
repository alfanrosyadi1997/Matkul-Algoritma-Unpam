//Alfan Rosyadi 
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int I, J, N;
	N=1;
		
		for(I=1; I<=5; I++)
		{
			for(J=I; J<=5; J++)
			{
				printf("%3i",N);
				N=N+1;
			}
		printf("\n");
		}
return 0;
}



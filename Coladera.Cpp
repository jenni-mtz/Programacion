#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void Llenar(int ve[], int n);
void Coladera(int ve[], int n);
void Mostrar(int ve[], int n);

int main()
{
	int ve[1000];
	Llenar(ve,1000);
	Coladera(ve,1000);
	Mostrar(ve, 1000);
	
}
void Llenar(int ve[], int n)
{
	for(int i=0; i<n; i++)
	{
		ve[i]=1;
	}
}
void Coladera(int ve[], int n)
{
	for(int i=2; i<n; i++)
	{
		if(ve[i]==1)
		{
	 	   for(int u=i+1; u<n; u++)
		
		
		      if(u%i==0)
		      {
			      ve[u]=0;
		      }
	   }
	}
}

void Mostrar (int ve[], int n)
{
	for(int i=0;i<n; i++)
	{
		if(ve[i]==1)
		cout<<i<<endl;
	}
	
}



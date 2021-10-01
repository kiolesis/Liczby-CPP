#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

main()
{
	srand(time(0));
	int tab[50],s=0,max=0,t=0;
	for(int i=0;i<50;i++)tab[i]=rand()%101;
	for(int i=0;i<50;i++)cout<<tab[i]<<" ";
	for(int i=0;i<50;i++)s=tab[i]+s;
	cout<<endl<<"Suma wynosi "<<s;
	for(int i=0;i<50;i++)
	{
		if(max<tab[i])max=tab[i];
	}
	cout<<endl<<"Najwieksza liczba to "<<max;
	for(int i=0;i<=47;i++)
	{
		if(tab[i]<tab[i+i] && tab[i+1]<tab[i+2])
		t++;
	}
  
	if(t>0)cout<<endl<<"Wyraz posiada "<<t<<" rosnacych trojek";
	else cout<<endl<<"Wyraz nie posiada rosnacych trojek";
}

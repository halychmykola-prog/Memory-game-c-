#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <unistd.h>

using namespace std;

int main()
{
    srand(time(0));
	int dimension=0;
	
	dimension=rand()%4+4;
	const int DIM=dimension;
	char vector[DIM][DIM];
    bool solved[7][7];
	
	//fill solved
	for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            solved[i][j] = false;
        }
    }
    
    //alfabeto
    char helpletter='A';
    char simbol[49];
    
    for(int i=0;i<49;i++)
    {
    	simbol[i]=helpletter;
    	helpletter++;
	}
	
	//calcolo totale
	int total=dimension*dimension;
	int zeroRow=-1,zeroCol=-1;
	
	if(total%2==1)
	{
		zeroRow=rand()%dimension;
		zeroCol=rand()%dimension;
		vector[zeroRow][zeroCol]='0';
		total=total-1;
	}
	
	//inizializza con #
	for(int i=0;i<dimension;i++)
    	for(int j=0;j<dimension;j++)
    	    if(!(i==zeroRow && j==zeroCol))
    	        vector[i][j]='#';
	
	
	
	//riempie coppie
	int pairs=total/2;
	int placed=0;
	
	while(placed<pairs)
	{
		int r1=rand()%dimension;
		int c1=rand()%dimension;
		int r2=rand()%dimension;
		int c2=rand()%dimension;
		
		if(vector[r1][c1]=='#' && vector[r2][c2]=='#' && !(r1==r2 && c1==c2))
		{
			vector[r1][c1]=simbol[placed];
			vector[r2][c2]=simbol[placed];
			placed++;
		}
	}
	
	//gioco
	int attempts=0;
	int found=0;
	
	while(found<total)
	{
		//clear screen 
		cout<<"\033[2J\033[H";
		
		//stampa campo nascosto
		for(int i=0;i<dimension;i++)
		{
			for(int j=0;j<dimension;j++)
			{
				if(solved[i][j])
					cout<<vector[i][j]<<" ";
				else
					cout<<"* ";
			}
			cout<<endl;
		}
		
		int r1,c1,r2,c2;
		
		cout<<"Inserisci riga e colonna prima tessera: ";
		cin>>r1>>c1;
		cout<<"Inserisci riga e colonna seconda tessera: ";
		cin>>r2>>c2;
		
		if(r1<0||r1>=dimension||c1<0||c1>=dimension||
		   r2<0||r2>=dimension||c2<0||c2>=dimension)
		{
			cout<<"Coordinate non valide"<<endl;
			sleep(1);
			continue;
		}
		
		if(solved[r1][c1]||solved[r2][c2])
		{
			cout<<"Tessera gia scoperta"<<endl;
			sleep(1);
			continue;
		}
		
		attempts++;
		
		//clear screen 
		cout<<"\033[2J\033[H";
		
		//mostra selezione
		for(int i=0;i<dimension;i++)
		{
			for(int j=0;j<dimension;j++)
			{
				if((i==r1 && j==c1)||(i==r2 && j==c2)||solved[i][j])
					cout<<vector[i][j]<<" ";
				else
					cout<<"* ";
			}
			cout<<endl;
		}
		
		//controllo match
		if(vector[r1][c1]==vector[r2][c2])
		{
			solved[r1][c1]=true;
			solved[r2][c2]=true;
			found+=2;
			sleep(1);
		}
		else
		{
			sleep(2);
		}
	}
	
	//clear finale
	cout<<"\033[2J\033[H";
	cout<<"Gioco finito!"<<endl;
	cout<<"Tentativi effettuati: "<<attempts<<endl;

    return 0;
}

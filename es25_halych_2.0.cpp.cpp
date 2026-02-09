#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    
    
    //declared vector
	srand(time(0));
	int dimension=0;
	
	dimension=rand()%4+4;
	const int DIM=dimension;
	char vector[DIM][DIM];
    bool solved[7][7];
	
	
	
	
	
	//fill vector and help stuff
	
	
	for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            solved[i][j] = false;
        }
    }
    
    
    //creazione vettore alfabeto
    char helpletter='A';
    char simbol[24];
    
    for(int i=0;i<24;i++)
    {
    	simbol[i]=helpletter;
    	helpletter++;
	}
	
	//controllo stampa alfabet
	int check=0;
	cout<<"Vuoi stampare alfabet? ";
	cin>>check;
	if(check==0)
	{
		return 0;
	}
	
	for(int i=0;i<24;i++)
	{
		cout<<"Simbol["<<i<<"]="<<simbol[i]<<endl;
	}
	cout<<"Vuoi continuare? ";
	cin>>check;
	if(check==0)
	{
		return 0;
	}
	
	
	
	//check for dispari
	
	int total=dimension*dimension;
	if((dimension*dimension)%2==1)
	{
		vector[dimension-1][dimension-1]='0';
		total=total-1;
		
	}
	
	
    
    //help cycle for check
    
    for(int i=0;i<dimension;i++)
    	for(int j=0;j<dimension;j++)
    	{
    	    if (vector[i][j] != '0')
                vector[i][j] = '#';
    		cout<<"Vector["<<i<<"]["<<j<<"]="<<vector[i][j]<<endl;
    		
		}
		
		
		
	//riempire vector con alfabeto
	
	int row=0,column=0;
	
	
	cout<<"inizia riempire"<<endl;
	for(int i=0;i<total;i++)
	{
		
		row=rand()%dimension;
		column=rand()%dimension;
		
		if(vector[row][column]=='#')
		{
			vector[row][column]=simbol[i];
		}
		else
		{
		    i--;
		}
		
		cout<<endl;
		

	}
	
	
	//stampa tabella
	cout<<"inizia stampare tabella"<<endl;
	cout<<endl<<endl<<endl<<endl<<endl;
	
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<dimension;j++)
		{
			cout<<vector[i][j];
		}
		
		
		cout<<endl;
		
	}
		
		
	
	
	
	
	
	
    
   
    
    
    
    
    

    
    
    
    
    
    

    return 0;
}
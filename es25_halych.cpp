#include <iostream>
#include <stdlib.h>
#include <ctime>










using namespace std;

int main()
{
	srand(time(0));
	int row, column;
	
	row=rand()%12+4;
	column=rand()%12+4;
	int vector[row][column];
	
    for(int i=0;i<row;i++)
    	for(int j=0;i<column;i++)
    	{
    		vector[i][j]=rand()%4+4;
    		cout<<"Vector["<<i<<"]["<<j<<"]="<<vector[i][j]<<endl;
    		
		}
    
    for(int i=0;i<row;i++)
    {
    	cout<<vector[row];
	}
    
    
    
    

    return 0;
}

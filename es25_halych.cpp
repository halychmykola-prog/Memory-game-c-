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
	char vector[dimension][dimension];
	
	char matrix[7][7];
    bool solved[7][7];
	
	
	
	
	
	//fill vector and help stuff
	
	for(int i=0;i<n;i++) 
	{
        for(int j=0;j<n;j++)
        {
            solved[i][j]=false;
        }
    }
    
    char temp[49];
    int index = 0;
    char lettera = 'A';
    
    
    //help cycle for check
    for(int i=0;i<dimension;i++)
    	for(int j=0;j<dimension;i++)
    	{
    		vector[i][j]=1;                  
    		cout<<"Vector["<<i<<"]["<<j<<"]="<<vector[i][j]<<endl;
    		
		}
		
	
	
    
    // dispari case
    if (tot % 2 == 1) {
        temp[index++] = '0';
    }
    
  
    
    
   
    
    
    
    
    

    
    
    
    
    
    

    return 0;
}
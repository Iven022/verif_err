#include <iostream>
using namespace std;

int byteArray(int x[],int size)
{
	int even = 0;
	int temp = 0;

	for(int i=0; i < size ; i++)
	{
		if (x[i] == 1)
		{
			even += 1 ;
		}

	}

	int y[size] ;	
	if (even % 2 == 0)
	{
		y[0] = 0 ;
		for(int i=1; i <= size ; i++)
		{
			y[i] = x[i-1] ;
		}
	}
	else
	{
		y[0] = 1 ;
		for(int i=1; i <= size ; i++)
		{
			y[i] = x[i-1] ;
		}
	}

	for(int i=0; i <= size ; i++)
	{
		cout << y[i] << " " ;
	}


	
}	


int main()
{
	int b_array[5] = {1,1,0,0,0} ;
	int arrsize = sizeof(b_array)/sizeof(b_array[0]);
	byteArray(b_array,arrsize) ;
}

#include <iostream>
#include <math.h>

using namespace std;

int main(){	
    int num = 0, i, x, high, LargestPrime[high], count, result; 
	
	do
	{
		cout<<"Enter a number: ";
		cin>>num;
		
		if(num < 0)
		{
			do
			{
			cout<<"Invalid input, enter another number: ";
			cin>>num;
			}while(num < 0);
		}
		
		if(count = 0)
		{
			high = num;
		}
		else
		{
			if(num > high && num != 0)
				high = num;
		}
		count++;
	}while(num != 0);
	
	for(i = num; i < high; i++)
	{
		count = 0;
		for(x = 2; x < i; x++)
		{
			if(high%x == 0 )
			{
				count++;
				break;
			}
		}
		if(count == 0)
		{
			cout<<"\nThe Largest Prime Number is: "<<high;
			break;
		}	
	}	
	return 0; 
}

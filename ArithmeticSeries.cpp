#include <iostream>
#include <math.h>

using namespace std;

int ArithmeticSeries(); 
int result;

int main()
{
	ArithmeticSeries(); 
	cout<<"Sum of Arithmetic Series: "<<result<<endl;
	
	return 0;	
}

int ArithmeticSeries(){
	int a, d, n;
	int i;
	
	cout<<"Enter first term: ";
	cin>>a;
	
	cout<<"Common Difference: "; 
	cin>>d;
	
	cout<<"Number of terms: ";
	cin>>n;
	
	if (n <= 0)
	{
		do
		{
			cout<<"Invalid number of terms, enter another value:  ";
			cin>>n;	
		}while (n <= 0);
	}
	
	result = 0;
	for (i = 0;i < n;i++) 
	{
		result = result + a;
		a = a + d;
	}
    return result;
}


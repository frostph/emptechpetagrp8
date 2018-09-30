#include <iostream>

using namespace std;

int main(){
	int a, d, n, i, x, z, result;
	
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
	
	for (i = 1; x <= n; x++) 
	{
		z = a + (i - 1) * d ;
		cout<<z;
		i++;
		if(x<n){
			cout<<',';
		}
		result += z;
	}	
	
	cout<<"\nSum of Arithmetic Series: "<<result<<endl;
	return 0;
}

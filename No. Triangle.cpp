#include<iostream>
using namespace std;

main()
{
	int i, j, sp, n;
	cout<<"Enter value of n = ";
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j>n-i)
			cout<<j%10<<" ";
			else
			cout<<"  ";
		}
		for(j=n; j>n-i; j--)
		cout<<j%10<<" ";
		
	cout<<endl;
	}
}


















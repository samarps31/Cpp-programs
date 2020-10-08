#include<iostream>
using namespace std;

main()
{
	int i,j,sp,n;
	
	do
	{
		cout<<"Enter no. of rows = ";
		cin>>n;
		
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=i; j++)
			cout<<"*";
			
			cout<<endl;		    
		}
		cout<<endl;
		cout<<"If you want to print another pattern enter 1 otherwise 0 :";
	    cin>>sp;
	    cout<<endl;
		if(sp==0)
	    cout<<endl<<"Goodbye !"<<endl<<"Take care...";
	    
	    if(sp!=1 && sp!=0)
	    {
		    cout<<"Sorry my friend you choosed the wrong option :(";
	        cout<<endl<<"I have to go..."<<endl<<"Goodbye !";
	        cout<<endl<<endl<<"      O       O"<<endl;
	        cout<<"\t  |"<<endl<<"\t  "<<endl;
	        cout<<"\t* * *"<<endl;
	        cout<<"\t\b\b *     *";
	    }
	}while(sp==1);
}














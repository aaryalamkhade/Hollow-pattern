#include<iostream>
using namespace std;

int main()
{   int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int k=n;k>i;k--)
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)
		{
			if(i==0 || i==n)
			{
				cout<<"*";
			}
		
		}    
		if(!(i==0 || i==n)){
			
		        cout<<"*";
				for(int l=0;l<n-2;l++)
				{
					cout<<" ";
				}
				cout<<"*";}
			cout<<endl;
		}
	}


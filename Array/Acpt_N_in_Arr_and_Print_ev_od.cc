#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[n],even[n],odd[n],ev=0,od=0;
	cout<<"This program is about to take lake of numbers and print \"even\" and \"odd\" seperatly"<<endl;
	cout<<"Enter the length of an array : ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter the number at "<<i+1<<" position : ";
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			even[i]=arr[i];
			ev++;
		}
		else
		{
			odd[i]=arr[i];
			od++;
		}
	}
	if(n>0)
	{
		if(ev=0)
		{
			cout<<"You have not enter any enven number😊️"<<endl;
		}
		else if(ev==1)
		{
			cout<<"The entered even number is : <<even[n]"<<endl;
		}
		else if(ev>1)
		{
			cout<<"The entered even numbers are :- "<<endl;
			for(i=0; i<n; i++)
			{
				cout<<even[i]<<"\t";
			}
		}
		else if(od=0)
		{
			cout<<"You have not enter any odd number😊️"<<endl;
		}
		else if(od==1)
		{
			cout<<"The entered odd number is : <<odd[n]"<<endl;
		}
		else
		{
			cout<<"The entered odd numbers are :- "<<endl;
			for(i=0; i<n; i++)
			{
				cout<<odd[i]<<"\t";
			}
		}
	}
	else
	{
		cout<<"Thug Life 🤩️🤩️🤩️\n";
	}
	return 0;
}

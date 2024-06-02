
#include<iostream>
using namespace std;
int main()
{
	int i,n,ev=0,od=0;
	cout<<"\nThis program is about to take lake of numbers and print \"even\" and \"odd\" seperatly\n"<<endl;
	cout<<"Enter the length of an array : ";
	cin>>n;
	int arr[n],even[n],odd[n],assign;
	for(i=0; i<n; i++)
	{
		cout<<"Enter the number at "<<i+1<<" position : ";
		cin>>arr[i];
		assign=arr[i];
		if(assign%2==0)
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
	cout<<"\n";
	cout<<"\n";
	//fflush();
	//system("clear");
	if(n>0)
	{
		if(ev==0)
		{
			cout<<"There is no any enven number😊️"<<endl;
		}
		/*else if(ev==1)
		{
			cout<<"The entered even number is : "<<even[i]<<endl;
		}*/
		else if(ev>0)
		{
			if(ev==1)
				cout<<"The entered even number is : ";
			else
				cout<<"The entered even numbers are :- "<<endl;
				for(i=0; i<ev; i++)
				{
					cout<<even[i]<<"\t";
				}
			cout<<"\n";
		}
		if(od==0)
		{
			cout<<"There is no any odd number😊️"<<endl;
		}
		/*else if(od==1)
		{
			cout<<"The entered odd number is : "<<odd[n]<<endl;
		}*/
		else
		{
			if(od==1)
				cout<<"The entered odd number is : ";
			else
				cout<<"The entered odd numbers are :- "<<endl;
			for(i=0; i<od; i++)
			{
				cout<<odd[i]<<"\t";
			}
			cout<<"\n";
		}
	}
	else
	{
		cout<<"Thug Life 🤩️🤩️🤩️\n";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the length of an array : ";
	cin>>n;
	float arr[n];
	for(i=0; i<n; i++)
	{
		cout<<"Enter number in "<<i+1<<" index : ";
		cin>>arr[i];
	}
	system("clear");
	cout<<"You have entered the length of the array is : "<<n<<endl;
	cout<<"The entered numbers are :- "<<endl;
	for( i=0; i<n; i++)
	//for( ; i!=0; i--)There is a problem
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	return 0;
}

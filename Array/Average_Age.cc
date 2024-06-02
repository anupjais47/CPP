#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j;
	for(j=0; j<3; j++)
	{
		cout<<"Enter "<<j+1<< " Person age : ";
		cin>>arr[j];
	}
	for(j=0; j<10; j++)
	{
		i+=arr[j];
	}
	cout<<"The average age = "<<i<<endl;
	return 0;
}

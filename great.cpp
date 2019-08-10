#include<iostream>

using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	int ar[n],max=0;
	cout<<"enter values"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]>max)
			max=ar[i];
	}
	cout<<"maximum value"<<max<<endl;
	return 0;
}
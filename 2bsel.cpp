#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int k,n;
	cout<<"Enter a number\n";
	cin>>k;
	cout<<"Enter the array size \n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	clock_t start,end,t;
	start=clock();
	for(int i=0;i<k;i++)
	{
		int mpos=i;
		int max=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
				mpos=j;
			}
				
		}
		a[mpos]=a[i];
		a[i]=max;
	}
	for(int i=0;i<k;i++)
		cout<<a[i]<<endl;
	end=clock();
	t = end-start;
	cout<<"\nRuntime is: "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
	return 0;
}
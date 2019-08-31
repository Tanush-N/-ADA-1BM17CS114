#include<iostream>
#include<time.h>
using namespace std;
int count=0;
int main()
{
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	clock_t start,end,t;
	start=clock();
	for(int i=0;i<n;i++)
	{
		int mpos=i;
		int min=a[i];
		for(int j=i+1;j<n;j++)
		{
			count++;
			if(a[j]<min)
			{
				min=a[j];
				mpos=j;
			}
				
		}
		a[mpos]=a[i];
		a[i]=min;
	}
	end=clock();
	cout<<"Sorted array is:\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"No of comparisons: "<<count<<"\n";
	t = end-start;
	cout<<"\nTime taken "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
}


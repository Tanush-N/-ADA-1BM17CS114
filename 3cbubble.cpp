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
		for(int j=0;j<n-i-1;j++)
		{
			count++;
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
				
		}
		
	}
	
	end=clock();
	cout<<"Sorted elements are\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"No. of comparisons: "<<count<<endl;
	t = end-start;
	cout<<"\nTime taken "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
}


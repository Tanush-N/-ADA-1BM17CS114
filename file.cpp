#include<iostream>
#include<fstream>
 using namespace std;
 int main()
 {
	 ofstream myfile;
	 myfile.open("num.txt");
	 cout<<"enter test case"<<endl;
	 int t;
	 cin>>t;
	 for(int i=0;i<t;i++)
	 {
		 int n,k;
		 cout<<"enter value of n and k";
		 cin>>n>>k;
		 int a[n];
		 int x=-1;
		 cout<<"enter values"<<endl;
		 for(int j=0;j<n;j++)
		 {
			 cin>>a[j];
			 myfile<<a[j];
			 if(k==a[j])
			 {
				 x=1;
			 }
		 }
		 cout<<x<<endl;
	 }
	 myfile.close();
	 return 0;
 }
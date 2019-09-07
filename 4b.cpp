#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
void dfs(int v,int visited[],int adj[][10],int n)
{
	visited[v]=1;
	for(int i=1;i<=n;i++)
	{
		if(adj[v-1][i-1]==1 && visited[i]==0)
		{
			//cout<<v<<" -> "<<i<<endl;
			dfs(i,visited,adj,n);
		}
	}
}
int main()
{
	int visited[10]={0};
	int n;
	cout<<"enter length of array"<<endl;
	cin>>n;
	int adj[10][10]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	int c=0;
	visited[0]=1;
	auto start=high_resolution_clock::now();
	dfs(1,visited,adj,n);
	c++;
	for(int i=0;i<n;i++)
	{
		if(visited[i]==1)
		{
			dfs(i,visited,adj,n);
			c++;
		}
	}
	//dfs(1,visited,adj,n);
	cout<<c;
	auto stop=high_resolution_clock::now();
	return 0;
}
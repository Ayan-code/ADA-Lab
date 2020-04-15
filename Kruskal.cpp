#include<iostream>
using namespace std;

int parent[9];

int find(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}

int main()
{
	int cost[9][9],n,a,b,ne=1;
	int u,v,min,mincost=0;
	cout<<"Enter total vertices:";
	cin>>n;
	cout<<"Enter the cost adacency matrix:\n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>cost[i][j];
			if(cost[i][j]==0)
			    cost[i][j]=9999;
	    }
    }
    cout<<"Edges of MST:\n";
    while(ne<n)
    {
    	for(int i=1,min=999;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			cout<<(ne++)<<" edge ("<<a<<","<<b<<") = "<<min<<"\n";
			mincost+=min;
	    }
	    cost[a][b]=cost[b][a]=999;
	}
	cout<<"\nMinimum Cost:"<<mincost;
	return 0;
    
}

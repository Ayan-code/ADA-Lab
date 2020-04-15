#include<iostream>
using namespace std;

#define max 999

int ans[max];

int change(int coins[], int size,  int value)
{
    int i,count = 0;

    for(i = 0; i < size; i++)
    {
        while(value >= coins[i])
        {
            value -= coins[i];
            ans[count] = coins[i];
            count++;
        }
        if(value == 0)
            break;
    }
    return count;
}

int main()
{
	int coins[]={50,25,20,10,5,2,1};
	int val;
	cout<<"Enter the value:";
	cin>>val;
	int size=sizeof(coins)/sizeof(coins[0]);
	int mincoin=change(coins,size,val);
	cout<<"Total coins needed:"<<mincoin<<"\n";
	cout<<"Coins are:";
	for(int i=0;i<mincoin;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,x,c,i,j,count,flag = 0;
	while(flag == 0)
	{
	
		cout<<"enter A and B";
		cin>>a>>b;
		x = a-b;
		
		try
		{
			if(x!=0)
			{
				int m = 5/x;
				cout<<m;
				flag = 1;
			}
			else
			{
				throw x;
			}
		}
		catch(int y)
		{
			cout<<"creating indeterminate form enter another no.";
			flag = 0;
		}
	}
}

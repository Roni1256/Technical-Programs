#include<iostream>
using namespace std;
int main(){
	int value;
	cout<<"Enter Value:";
	cin>>value;
	int count=value*2-1;
	for(int i=1;i<=count;i++)
	{
			for(int j=1;j<=count;j++)
		{
			if(i==j || j==count-i+1)
			{
				cout<<"*";
			}
			else
				cout<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}

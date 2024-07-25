#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter Number:";
	cin>>n1>>n2>>n3;
	if(n1+1==n2 && n2+1==n3)
		cout<<"True!"<<n1<<"\t"<<n2<<"\t"<<n3;
	else
		cout<<"false!";
	return 0;
}


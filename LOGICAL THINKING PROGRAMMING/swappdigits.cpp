#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int number, firstDigit, lastDigit, count, a, b, SwapNum;
	
	cout << "\nPlease Enter Any Number to find First and Last Digit =  ";
	cin >> number;
	
	count = log10(number);
	cout<<"\n\t Count [log10]---"<<count<<endl;  	
  	firstDigit = number / pow(10, count);
  	cout<<"\n\t First Digit---"<<firstDigit<<endl;
  	lastDigit = number % 10;
  	cout<<"\n\t Last Digit---"<<lastDigit<<endl;
  	
  	a = firstDigit * (pow(10, count));
  	cout<<"\n\t A value---"<<a<<endl;
  	b = number % a;
  	cout<<"\n\t B value---"<<b<<endl;

  	number = b / 10;
  	cout<<"\n\t Number---"<<number<<endl;

  	
  	SwapNum = lastDigit * (pow(10, count)) + (number * 10 + firstDigit);
  	cout<<"\n\t Swapped Number---"<<SwapNum<<endl;

  	
	cout << "\nThe First Digit in a Given Number    = " <<firstDigit; 
	cout << "\nThe Last Digit in a Given Number     = " << lastDigit; 
	cout << "\nAfter Swapping First and Last Digit  = " << SwapNum; 	
 	return 0;
}

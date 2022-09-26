#include<iostream>
using namespace std;
bool harshad(int n)
{
	int s=0;
	int temp;
	for(temp=n;temp>0;temp/=10)
	{
		s+=temp%10;
	}
	return (n%s == 0);
}

int main()
{
	int flag=1;
	char i;
	cout<<"enter the a number: ";
	cin>>i;
	if(isdigit(i))
	{
		int i;
	if(harshad(i))
	{
		cout<<"given number is harshad number";
	}
	else
	{
		cout<<"given number is not a harshad number";
	}
    }
    else
    {
    	cout<<"enter a valid input";
	}
}

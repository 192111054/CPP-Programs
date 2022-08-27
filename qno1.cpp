#include<iostream>
using namespace std;
class sample
{
    public:
    int a,b,c;
    void getdata();
    void putdata();
};
void sample::getdata()
{
    cout<<"enter the values for a and b and c:\n";
    cin>>a>>b>>c;
}
void sample::putdata()
{
	cout<<"the values of a and b and c is:\n"<<a<<"\t"<<b<<"\t"<<c;
}
int main()
{
	sample s;
	s.getdata();
	s.putdata();
	return 0;
}

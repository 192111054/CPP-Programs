#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			cout<<"default constructor invoked"<<endl;
		}
};
int main(void)
{
	employee e1;
	employee e2;
	return 0;
}

#include<iostream>
using namespace std;
enum Gigantic
{
	SMALL = 10,
	GIGANTIC = 300000000000
};
void ReadValue(const int& num)
{
	cout<<num<<endl;
}

int main(void)
{
	int n = 1;
	ReadValue(n);
	cout<<Gigantic(2)<<endl;
}

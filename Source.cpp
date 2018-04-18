#include<iostream>

using namespace std;

float a=0.65, b=0.6;

int main()
{ 
	if (a-b == 0.05)
	{
		cout << "a-b=" << a - b << "=0.05\tsame";
	}
	else
	{
		cout<< "a-b=" << a - b << "!=0.05\tdifferent";
	}

	system("pause");
	return 0;
}
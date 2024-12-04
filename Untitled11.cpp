#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int a , b , c;
	
	cout<<"Please enter the first number:"<<endl;
	cin>>a;
	cout<<"Please enter the second number:"<<endl;
	cin>>b;
	cout<<"Please enter the third number:"<<endl;
	cin>>c;
	
	if ( a <= b )
		if ( a <= c )
		{
			cout<<"the smallest is:"<<a;
		}
		else
		{
			cout<<"the smallest is:"<<c;
		}
	else
		if ( b <= c )
		{
			cout<<"the smallest is:"<<b;
		}
		else
		{
			cout<<"the smallest is:"<<c;
		}
}

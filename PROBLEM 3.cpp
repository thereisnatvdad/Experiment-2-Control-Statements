#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x, y;
	float V;
	const float z = 2.50;
	
	cout << "Please enter value of x: " ;
	cin >> x;
	cout << "Please enter value of y: " ;
	cin >> y;
	
	if (x==1 && y<5 && y>1)
	{
		cout << setw(10) << fixed;
		cout << setprecision(2) << fixed;
		cout << "V=xyz : V = " << x*y*z;
	}
	else if (x==1 && y>=5)
	{
		cout << setw(10) << fixed;
		cout << setprecision(2) << fixed;
		cout << "V=x+(y/z) : V =  " << x+(y/z);
	}
	else if (x==2 && y<=5)
	{
		cout << setw(10) << fixed;
		cout << setprecision(2) << fixed;
		cout << "V=|(x-y)/z| : V = " << abs((x-y)/z);
	}
	else if (x==2 && y>5)
	{
		cout << setw(10) << fixed;
		cout << setprecision(2) << fixed;
		cout << "V=x-sqrt(y+z) : V = " << x-sqrt(y+z);
	}
	else
	{
		cout << setw(10) << fixed;
		cout << setprecision(2) << fixed;
		cout << "V=x+y+z : V = " << x+y+z;
	}
	_getch();
	return 0;
}

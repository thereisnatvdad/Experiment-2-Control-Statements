#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int packageA, packageB, packageC, hours;
	char package;
	
	packageA = 995;
	packageB = 1495;
	packageC = 1995;
	
	cout << "What package did you purchased (A, B, C)? " << endl;
	cin >> package; 
	cout << "How long did you consume it, in hours? " << endl;
	cin >> hours;
	
	switch (package)
	{
		case 'a':
		case 'A':
			if (hours<=10)
			{
				cout << "Your total monthly bill is: Php " << packageA << endl;	
			}
			else
			{
				cout << "Your total monthly bill is: Php " << packageA + ((hours-10)*20) << endl;
			}
			break;
			
		case 'b':
		case 'B':
			if (hours<=20)
			{
				cout << "Your total monthly bill is: Php " << packageB << endl;
			}
			else
			{
				cout << "Your total monthly bill is: Php " << packageB + ((hours-20)*10) << endl;
			}
			break;
			
		case 'c':
		case 'C':
			cout << "Your total monthly bill is: Php " << packageC << endl;
			break;
			
		default:
			cout << "Your package is invalid." << endl;
		}
		_getch();
		return 0;
	}

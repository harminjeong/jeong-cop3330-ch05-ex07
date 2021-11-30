#include "std_lib_facilities.h"	

double a,b,c;
int main()
{
	cout << "Enter three numbers a b c: ";

	while (cin>>a>>b>>c) {
		if(a==0) {
			if (b==0)
				cout << "No root\n";
			else
				cout << "x = " << -c/b << '\n';
		}
		else if (b==0) {
			double ca = -c/a;
			if (ca == 0)
				cout << "x==0\n";
			else if (ca < 0)
				cout << "No real roots\n";
			else
				cout << "Two real roots: " << sqrt(ca) << " and " << -sqrt(ca) << '\n';
		}
		else {
			double sq = b*b-4*a*c;
			if (sq==0)
				cout << "One real root: " << -b/(2*a) << '\n';
			else if (sq<0)
				cout << "No real roots\n";
			else
				cout << "Two real roots: " << (-b+sqrt(sq))/(2*a) << " and " << (-b-sqrt(sq))/(2*a) << '\n';
		}

		cout << "Enter three numbers for a b c: ";
	}
}

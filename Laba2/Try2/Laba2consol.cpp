#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	double x,d,b,s,f,z,y,c,i;
	int k;
	cout << "Vvedite z "; cin >> z;
	if (z<0)
	 {
		 x=z*z-z;}
	 else
		 {
		 x=pow(z,3);
		 }
	cout << "Vvedite d "; cin >> d;
	cout << "Vvedite c "; cin >> c;
	cout << "Viberi fynkciy: 1 - 2x, 2 - x^2, 3 - x/3 "; cin >> k;
	switch(k)
	{
	case 1: f=(x*2); break;
	case 2: f=pow(x,2); break;
	case 3: f=(x/3); break;
	default: cout << "Fynkcia ne vibrana"; getch (); return 1;
	}
	 
	 i=c*f+d*d+x*x;
	 b=modf(i,&s);
	 y=pow(sin(s),3);
	 cout << y;
	 getch();
			return 0;
}

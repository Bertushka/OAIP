#pragma hdrstop
#pragma argsused

#ifdef _WIN32
  #include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
 using namespace std;
int _tmain(int argc, _TCHAR* argv[])

{    double x,y,z,b,d,c;
	cout <<"vvedite z" "\n";
	cin >> z;
	cout << "vvedite d" "\n";
	cin >> d;
	if (z<0)
	{
	x=sqrt(z)-z;
	}
	if (z>=0)
	{
	x=pow(z,3);
	}
	b=modf(x,&c);
	y=pow(sin(c+sqrt(d)+sqrt(x)),3);
	cout << y ;
	getch();
	return 0;
}

#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#include <iostream>
#include <conio.h>
#include <math.h>
double x,y,z,c,arccos1,arccos2,arccos3,arctg,otv,b,arccos4,arccos;

#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <stdio.h>
using namespace std ;


int _tmain(int argc, _TCHAR* argv[])
{

b=2;
x=0.1722;
y=6.33;
z=3.25*10e-4;
c=abs(x-y);
arccos1=x+3*c+pow(x,b);
arccos2=c*z+pow(x,b);
arccos3=acos(x);
arccos4=arccos1/arccos2;
arccos=arccos4*acos(x)/4;
otv=5*atan(x)-arccos;
  cout << otv ;
 getch();
	return 0;
}

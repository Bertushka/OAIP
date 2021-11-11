#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{ double a,b,h,x,s,y,val,k,mod,n;
const double p=3.1415926535;
   cout << "vvedite a,b,h,n" << "\n";
   cin >> a >> b >> h >> n;
   cout << "\n " << setw(2) << "x=" << setw(16) << "Y(x)=" << setw(20) << "S(x)=" << setw(22) << "|Y(x)-S(x)|=" << endl;
s=0;
y=0;
for (x=a; x<=b; x+=h)
{
for (k=1; k<=n; k+=1) {
s+=(pow(x,k)*cos(k*p/3))/k;
y=-1*0.5*log((1-2*x*cos(p/3)+pow(x,2)));
}
mod=fabs(y-s);
cout << "\n" << setw(3) << x << " " << setw(15) << y << " " << setw (20) << s << " " << setw(18) << mod << endl;
s=0;
y=0;
}
getch();
return 0;
}

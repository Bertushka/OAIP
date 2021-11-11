#pragma hdrstop
#pragma argsused
#include <iostream>
#include <conio.h>
#include <stdlib.h>
double a,b,c;

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
 cout<< "VVedite a:"  ;
 cin>>a;
 cout<< "VVedite b:" ;
 cin>>b;
 c=a*b;

 cout<< "c=" <<c;
  getch();
	return 0;
}

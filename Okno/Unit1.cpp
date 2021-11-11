//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#include <iostream>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (Form1-> Color != clLime)
	Form1 -> Color = clLime;
	else
	(Form1) -> Color = clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 double x,y,z,b,d,c;
	std::cout <<"vvedite z" "\n";
	std::cin >> z;
	std::cout << "vvedite d" "\n";
	std::cin >> d;
	if (z<0)
	{
	x=pow(z,2)-z;
	}
	if (z>=0)
	{
	x=pow(z,3);
	}
	b=modf(x,&c);
	y=pow(sin(c+sqrt(d)+sqrt(x)),3);
	std::cout << y ;
 Memo1->Lines->Add(FloatToStr(y));
 Form1 -> Caption ="Ready";
}
//---------------------------------------------------------------------------
//--------------------------------------------------------------------------





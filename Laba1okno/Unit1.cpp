//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <conio.h>

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
Memo1->Clear();
double x,y,z,c,arccos1,arccos2,arccos3,arctg,otv,b,arccos4,arccos;
x=StrToFloat(Edit1->Text);
y=StrToFloat(Edit2->Text);
z=StrToFloat(Edit3->Text);

b=2;
c=abs(x-y);
arccos1=x+3*c+pow(x,b);
arccos2=c*z+pow(x,b);
arccos3=acos(x);
arccos4=arccos1/arccos2;
arccos=arccos4*acos(x)/4;
otv=5*atan(x)-arccos;
 Memo1->Lines->Add(FloatToStr(otv));
 getch();
}
//---------------------------------------------------------------------------

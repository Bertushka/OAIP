//---------------------------------------------------------------------------

#include <vcl.h>
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
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Memo1->Clear();
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
double c,d,x,y,z,a,b,f;
c=StrToFloat(Edit1->Text);
d=StrToFloat(Edit2->Text);
z=StrToFloat(Edit3->Text);
if(z<0)
x=pow(z,2)-z;
else x=pow(z,3);
switch(RadioGroup1->ItemIndex)
{
	case 0: f=2*x; break;
	case 1: f=pow(x,2); break;
	case 2: f=x/3; break;
	}
y = pow(sin(c*f+sqrt(d)+sqrt(x)),3);
if (z<0) {
switch(RadioGroup1->ItemIndex)
{
	case 0: Memo1->Lines->Add("f=2x, z<0, y="  + FloatToStr(y)); break;
	case 1: Memo1->Lines->Add("f=x^2, z<0, y="  + FloatToStr(y)); break;
	case 2: Memo1->Lines->Add("f=x/3, z<0, y="  + FloatToStr(y)); break;
	}
}
if (z>=0) {
switch(RadioGroup1->ItemIndex)
{
	case 0: Memo1->Lines->Add("f=2x, z>=0, y="  + FloatToStr(y)); break;
	case 1: Memo1->Lines->Add("f=x^2, z>=0, y="  + FloatToStr(y)); break;
	case 2: Memo1->Lines->Add("f=x/3, z>=0, y="  + FloatToStr(y)); break;
	}
}
}
//---------------------------------------------------------------------------

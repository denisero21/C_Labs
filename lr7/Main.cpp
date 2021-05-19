//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Main.h"
#include "Employee.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

list List;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->Memo1->Lines->Clear();
	Form1->ComboBox2->Items->Add("Name");
	Form1->ComboBox2->Items->Add("Birthday");
	Form1->ComboBox2->Items->Add("Passport");
	Form1->ComboBox2->Items->Add("Insurance");
	Form1->ComboBox2->Items->Add("Education");
	Form1->ComboBox2->Items->Add("Post");
	Form1->ComboBox2->Items->Add("Salary");
    Form1->ComboBox2->Items->Add("Hiring");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddClick(TObject *Sender)
{
	emp New(Name1->Text, DateToStr(Birthday1->Date), Passport1->Text, Insurance1->Text, Education1->Text, Post1->Text, StrToInt(Salary1->Text), DateToStr(Hiring1->Date), Notes1->Text);
	List.AddNode(New);
	Memo1->Lines->Add("Name: " + Name1->Text);
	Memo1->Lines->Add("Birthday: " + DateToStr(Birthday1->Date));
	Memo1->Lines->Add("Passport: " + Passport1->Text);
	Memo1->Lines->Add("Insurance: " + Insurance1->Text);
	Memo1->Lines->Add("Education: " + Education1->Text);
	Memo1->Lines->Add("Post: " + Post1->Text);
	Memo1->Lines->Add("Salary: " + Salary1->Text);
	Memo1->Lines->Add("Hiring: " + DateToStr(Hiring1->Date));
	Memo1->Lines->Add("Notes: " + Notes1->Text);
	Memo1->Lines->Add("");
	ComboBox3->Items->Add(Name1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DeleteFillsClick(TObject *Sender)
{
	Name1->Clear();
	Passport1->Clear();
	Insurance1->Clear();
	Education1->Clear();
	Post1->Clear();
	Salary1->Clear();
	Notes1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DisplayClick(TObject *Sender)
{
	List.GetNode(Memo1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ElderClick(TObject *Sender)
{
    List.Elder(ComboBox1, Memo1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int x = ComboBox2->ItemIndex;

	switch(x)
	{
		case 0: List.FindName(FindAll, Memo1); break;
		case 1: List.FindBirthday(FindAll, Memo1); break;
		case 2: List.FindPassport(FindAll, Memo1); break;
		case 3: List.FindInsurance(FindAll, Memo1); break;
		case 4: List.FindEducation(FindAll, Memo1); break;
		case 5: List.FindPost(FindAll, Memo1); break;
		case 6: List.FindSalary(FindAll, Memo1); break;
		case 7: List.FindHiring(FindAll, Memo1); break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DelEmpClick(TObject *Sender)
{
	List.DeleteElement(ComboBox3, Memo1);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DeleteClick(TObject *Sender)
{
	List.DeleteElement(ComboBox1, Memo1);
}
//---------------------------------------------------------------------------


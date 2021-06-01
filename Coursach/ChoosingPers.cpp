//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ChoosingPers.h"
#include "Main.h"
//#include "Pet.h"
#include "App.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TChoosingForm *ChoosingForm;
//---------------------------------------------------------------------------
__fastcall TChoosingForm::TChoosingForm(TComponent* Owner)
	: TForm(Owner)
{
	TPicture *Picture = new TPicture();
	Picture->RegisterFileFormat("gif", "gif", __classid(TGIFImage));
	delete Picture;

    ((TGIFImage*)(Image1->Picture->Graphic))->Animate = true;
	((TGIFImage*)(Image1->Picture->Graphic))->AnimationSpeed= 100;

	((TGIFImage*)(Image2->Picture->Graphic))->Animate = true;
	((TGIFImage*)(Image2->Picture->Graphic))->AnimationSpeed= 100;

	((TGIFImage*)(Image3->Picture->Graphic))->Animate = true;
	((TGIFImage*)(Image3->Picture->Graphic))->AnimationSpeed= 100;

	((TGIFImage*)(Image4->Picture->Graphic))->Animate = true;
	((TGIFImage*)(Image4->Picture->Graphic))->AnimationSpeed= 125;

	Memo1->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TChoosingForm::CancelClick(TObject *Sender)
{
	MainForm->Show();
	ChoosingForm->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TChoosingForm::Image1Click(TObject *Sender)
{
	Pet Person("Rick");
	Person.Save(FileSaveDialog1, Memo1);
	Memo1->Lines->SaveToFile("temp.txt");

	a = true;
	AppForm->TimerOn(this->a);

	ChoosingForm->Hide();
	AppForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TChoosingForm::Image2Click(TObject *Sender)
{
	Pet Person("Morty");
	Person.Save(FileSaveDialog1, Memo1);
	Memo1->Lines->SaveToFile("temp.txt");

	a = true;
	AppForm->TimerOn(this->a);

	ChoosingForm->Hide();
	AppForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TChoosingForm::Image3Click(TObject *Sender)
{
	Pet Person("Summer");
	Person.Save(FileSaveDialog1, Memo1);
	Memo1->Lines->SaveToFile("temp.txt");

	a = true;
	AppForm->TimerOn(this->a);

	ChoosingForm->Hide();
	AppForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TChoosingForm::Image4Click(TObject *Sender)
{
	Pet Person("Jerry");
	Person.Save(FileSaveDialog1, Memo1);
	Memo1->Lines->SaveToFile("temp.txt");

    a = true;
	AppForm->TimerOn(this->a);

	ChoosingForm->Hide();
	AppForm->Show();
}
//---------------------------------------------------------------------------


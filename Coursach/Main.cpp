//---------------------------------------------------------------------------

#include <vcl.h>
#include<conio.h>
#pragma hdrstop
#include "SaveUpload.h"
#include "Main.h"
#include "Options.h"
#include "ChoosingPers.h"
#include "GameMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
	TPicture *Picture = new TPicture();
	Picture->RegisterFileFormat("gif", "gif", __classid(TGIFImage));
	delete Picture;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::QuitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::NewClick(TObject *Sender)
{
	ChoosingForm->Show();
    MainForm->Hide();
}
//---------------------------------------------------------------------------



void __fastcall TMainForm::UploadClick(TObject *Sender)
{
	SaveUploadForm->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::OptionsClick(TObject *Sender)
{
	OptionsForm->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::Button1Click(TObject *Sender)
{
	GameMenuForm->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------


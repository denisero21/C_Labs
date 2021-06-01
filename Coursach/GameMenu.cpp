//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameMenu.h"
#include "Options.h"
#include "Main.h"
#include "SaveUpload.h"
#include "App.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGameMenuForm *GameMenuForm;
//---------------------------------------------------------------------------
__fastcall TGameMenuForm::TGameMenuForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGameMenuForm::CancelClick(TObject *Sender)
{
	this->SaveS = false;
	SaveUploadForm->Bool(this->SaveS);
	this->SU = false;
	SaveUploadForm->ShowBool2(this->SU);
	MainForm->Show();
    GameMenuForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TGameMenuForm::OptionsClick(TObject *Sender)
{
	Opt = true;
	OptionsForm->ShowBool(this->Opt);
	OptionsForm->Show();
	GameMenuForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TGameMenuForm::SaveClick(TObject *Sender)
{
	this->SaveS = true;
	this->SU = true;
    SaveUploadForm->ShowBool2(this->SU);
	SaveUploadForm->ShowBool1(this->SaveS);
	GameMenuForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TGameMenuForm::ContinueClick(TObject *Sender)
{
	GameMenuForm->Hide();
    AppForm->Show();
}
//---------------------------------------------------------------------------


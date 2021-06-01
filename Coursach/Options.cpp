//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameMenu.h"
#include "Options.h"
#include "Main.h"
#include "App.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TOptionsForm *OptionsForm;
//---------------------------------------------------------------------------
__fastcall TOptionsForm::TOptionsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOptionsForm::CancelClick(TObject *Sender)
{
	if(!this->Opt)
	{
		MainForm->Show();
		OptionsForm->Hide();
	}
	else
	{
		GameMenuForm->Show();
		OptionsForm->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::EasyClick(TObject *Sender)
{
	Text->Caption = "Current difficulty: easy";
	lvl = 1;
	AppForm->Level(this->lvl);
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::NormalClick(TObject *Sender)
{
	Text->Caption = "Current difficulty: normal";
	lvl = 2;
	AppForm->Level(this->lvl);
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::HardClick(TObject *Sender)
{
	Text->Caption = "Current difficulty: hard";
	lvl = 3;
	AppForm->Level(this->lvl);
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::ExtremeClick(TObject *Sender)
{
    Text->Caption = "Current difficulty: EXTREME\n YOU ARE CRAZY!!!";
	lvl = 4;
	AppForm->Level(this->lvl);
}
//---------------------------------------------------------------------------


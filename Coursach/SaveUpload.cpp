//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SaveUpload.h"
#include "Main.h"
//#include "Pet.h"
#include "GameMenu.h"
#include "App.h"
Pet Person1;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSaveUploadForm *SaveUploadForm;
bool c;
bool z = false;
//---------------------------------------------------------------------------
__fastcall TSaveUploadForm::TSaveUploadForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSaveUploadForm::CancelClick(TObject *Sender)
{
	if(!this->SU)
	{
		MainForm->Show();
		SaveUploadForm->Hide();
	}
	else
	{
		GameMenuForm->Show();
		SaveUploadForm->Hide();
    }
}
//---------------------------------------------------------------------------
void __fastcall TSaveUploadForm::Slot1Click(TObject *Sender)
{
	if(this->SaveS)
	{
		TFileStream *tfile = new TFileStream("temp.txt",fmOpenReadWrite);
		Person1.Upload(FileOpenDialog1, tfile);
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("Save1.txt");
		ShowMessage("The game was saved.");
	}
	else
	{
		TFileStream *tfile = new TFileStream("Save1.txt",fmOpenReadWrite);
		c = Person1.Upload(FileOpenDialog1, tfile);
			if(c)
			{
				z = true;
				ShowMessage("The game was uploaded.");
				ShowMessage(Person1.GName() + "\nHealth: " + Person1.GHealth() + "\nHunger: " + Person1.GHunger() + "\nMood: " + Person1.GMood() + "\nSleep: " + Person1.GSleep());
			}
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("temp.txt");

		if(z)
		{
			SaveUploadForm->Hide();
			AppForm->Show();
		}
        this->a = true;
		AppForm->TimerOn(this->a);
	}
}
//---------------------------------------------------------------------------

void __fastcall TSaveUploadForm::Slot2Click(TObject *Sender)
{
	if(this->SaveS)
	{
		TFileStream *tfile = new TFileStream("temp.txt",fmOpenReadWrite);
		Person1.Upload(FileOpenDialog1, tfile);
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("Save2.txt");
		ShowMessage("The game was saved.");
	}
	else
	{
		TFileStream *tfile = new TFileStream("Save2.txt",fmOpenReadWrite);
		c = Person1.Upload(FileOpenDialog1, tfile);
			if(c)
			{
				z = true;
				ShowMessage("The game was uploaded.");
				ShowMessage(Person1.GName() + "\nHealth: " + Person1.GHealth() + "\nHunger: " + Person1.GHunger() + "\nMood: " + Person1.GMood() + "\nSleep: " + Person1.GSleep());
			}
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("temp.txt");

		if(z)
		{
			SaveUploadForm->Hide();
			AppForm->Show();
		}
        this->a = true;
		AppForm->TimerOn(this->a);
	}
}
//---------------------------------------------------------------------------

void __fastcall TSaveUploadForm::Slot3Click(TObject *Sender)
{
    if(this->SaveS)
	{
		TFileStream *tfile = new TFileStream("temp.txt",fmOpenReadWrite);
		Person1.Upload(FileOpenDialog1, tfile);
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("Save3.txt");
		ShowMessage("The game was saved.");
	}
	else
	{
		TFileStream *tfile = new TFileStream("Save3.txt",fmOpenReadWrite);
		c = Person1.Upload(FileOpenDialog1, tfile);
			if(c)
			{
				z = true;
				ShowMessage("The game was uploaded.");
				ShowMessage(Person1.GName() + "\nHealth: " + Person1.GHealth() + "\nHunger: " + Person1.GHunger() + "\nMood: " + Person1.GMood() + "\nSleep: " + Person1.GSleep());
			}
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("temp.txt");

		if(z)
		{
			SaveUploadForm->Hide();
			AppForm->Show();
		}
        this->a = true;
		AppForm->TimerOn(this->a);
	}
}
//---------------------------------------------------------------------------

void __fastcall TSaveUploadForm::Slot4Click(TObject *Sender)
{
    if(this->SaveS)
	{
		TFileStream *tfile = new TFileStream("temp.txt",fmOpenReadWrite);
		Person1.Upload(FileOpenDialog1, tfile);
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("Save4.txt");
		ShowMessage("The game was saved.");
	}
	else
	{
		TFileStream *tfile = new TFileStream("Save4.txt",fmOpenReadWrite);
		c = Person1.Upload(FileOpenDialog1, tfile);
			if(c)
			{
				z = true;
				ShowMessage("The game was uploaded.");
				ShowMessage(Person1.GName() + "\nHealth: " + Person1.GHealth() + "\nHunger: " + Person1.GHunger() + "\nMood: " + Person1.GMood() + "\nSleep: " + Person1.GSleep());
			}
		Person1.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("temp.txt");

		if(z)
		{
			SaveUploadForm->Hide();
			AppForm->Show();
		}
		this->a = true;
		AppForm->TimerOn(this->a);
	}
}
//---------------------------------------------------------------------------


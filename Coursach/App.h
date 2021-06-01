//---------------------------------------------------------------------------

#ifndef AppH
#define AppH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include "Pet.h"
//---------------------------------------------------------------------------
class TAppForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *A;
	TButton *S;
	TButton *D;
	TButton *F;
	TButton *G;
	TImage *Health;
	TImage *Mood;
	TImage *Hunger;
	TFileOpenDialog *FileOpenDialog1;
	TLabel *MoodLabel;
	TLabel *HungerLabel;
	TImage *Sleep;
	TLabel *SleepLabel;
	TLabel *Info;
	TButton *Refresh;
	TFileSaveDialog *FileSaveDialog1;
	TMemo *Memo1;
	TTimer *Timer1;
	TTimer *Timer2;
	TTimer *Timer3;
	TTimer *Timer4;
	TTimer *Timer5;
	TTimer *Timer6;
	TTimer *Timer7;
	TImage *Image2;
	TTimer *Timer8;
	TLabel *HealthLabel;
	TTimer *Timer9;
	void __fastcall AClick(TObject *Sender);
	void __fastcall GClick(TObject *Sender);
	void __fastcall SClick(TObject *Sender);
	void __fastcall DClick(TObject *Sender);
	void __fastcall FClick(TObject *Sender);
	void __fastcall RefreshClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall Timer4Timer(TObject *Sender);
	void __fastcall Timer5Timer(TObject *Sender);
	void __fastcall Timer6Timer(TObject *Sender);
	void __fastcall Timer7Timer(TObject *Sender);
	void __fastcall Timer8Timer(TObject *Sender);
	void __fastcall Timer9Timer(TObject *Sender);
private:
bool b;	// User declarations
int lvl = 2;
public:		// User declarations1
	bool TimerOn(bool a)
	{
		this->b = a;
		return b;
	}

	void Work(Pet Personn)
	{
		HungerLabel->Caption = IntToStr(Personn.GHunger());
		MoodLabel->Caption = IntToStr(Personn.GMood());
		SleepLabel->Caption = IntToStr(Personn.GSleep());
		HealthLabel->Caption = IntToStr(Personn.GHealth());
		Personn.Save(FileSaveDialog1,  Memo1);
		Memo1->Lines->SaveToFile("temp.txt");
	}

	void Off()
	{
		A->Hide();
		S->Hide();
		D->Hide();
		F->Hide();
		HealthLabel->Hide();
		HungerLabel->Hide();
		MoodLabel->Hide();
		SleepLabel->Hide();
		Info->Caption = "Menu(G)";
	}

	int Level(int lvl)
	{
		this->lvl = lvl;
		return lvl;
	}

	void CheckLevel()
	{
		if(Level(lvl) == 1) Timer8->Interval = 13000;
		else if(Level(lvl) == 2) Timer8->Interval = 9000;
		else if(Level(lvl) == 3) Timer8->Interval = 5000;
        else if(Level(lvl) == 4) Timer8->Interval = 1000;
    }
	__fastcall TAppForm(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TAppForm *AppForm;
//---------------------------------------------------------------------------
#endif

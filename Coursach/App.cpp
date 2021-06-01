//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include<windows.h>

#include "App.h"
//#include "Pet.h"  (in .h)
#include "Main.h"
#include "GameMenu.h"
#include <chrono>
#include <thread>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAppForm *AppForm;
Pet Personn;
bool R = false;
bool M = false;
bool Su = false;
bool J = false;
bool Mu = M;
bool q = false;
int i = 0;

void Animation(TImage*Image1)
{
	((TGIFImage*)(Image1->Picture->Graphic))->Animate = true;
	((TGIFImage*)(Image1->Picture->Graphic))->AnimationSpeed= 100;
}

bool Check(TImage*Image1)
{
	if(Personn.CheckHealth())
	{
		ShowMessage("The " + Personn.GName() + " is dead.");
		if(M)Image1->Picture->LoadFromFile("MortyLeave1.gif");
		else if(R)Image1->Picture->LoadFromFile("RickDead.gif");
		else if(Su)Image1->Picture->LoadFromFile("SummerGone.gif");
		else if(J)Image1->Picture->LoadFromFile("JerryDead.gif");
		Animation(Image1);
		return true;
	}
	if(Personn.CheckHunger())
	{
		ShowMessage("The " + Personn.GName() + " is dead.");
		if(M)Image1->Picture->LoadFromFile("MortyLeave1.gif");
		else if(R)Image1->Picture->LoadFromFile("RickDead.gif");
		else if(Su)Image1->Picture->LoadFromFile("SummerGone.gif");
		else if(J)Image1->Picture->LoadFromFile("JerryDead.gif");
		Animation(Image1);
		return true;
	}
	if(Personn.CheckMood())
	{
		ShowMessage("The " + Personn.GName() + " gone.");
		if(M)Image1->Picture->LoadFromFile("MortyLeave1.gif");
		else if(R)Image1->Picture->LoadFromFile("RickGone.gif");
		else if(Su)Image1->Picture->LoadFromFile("SummerGone3.gif");
		else if(J)Image1->Picture->LoadFromFile("JerryDepressing.gif");
		Animation(Image1);
		return true;
	}
	if(Personn.CheckSleep())
	{
		ShowMessage("The " + Personn.GName() + " gone.");
		if(M)Image1->Picture->LoadFromFile("MortyLeave1.gif");
		else if(R)Image1->Picture->LoadFromFile("RickGone.gif");
		else if(Su)Image1->Picture->LoadFromFile("SummerGone3.gif");
		else if(J)Image1->Picture->LoadFromFile("JerryGone1.gif");
		Animation(Image1);
		return true;
	}
	return false;
}

//--------------------------Image1-------------------------------------------------
__fastcall TAppForm::TAppForm(TComponent* Owner)
	: TForm(Owner)
{
	Memo1->Hide();
	Info->Caption = "To feed(A) To chear up(D)\nTo heal(S) To sleep(F)\n Menu(G)";

	TPicture *Picture = new TPicture();
	Picture->RegisterFileFormat("gif", "gif", __classid(TGIFImage));
	delete Picture;

	TFileStream *tfile = new TFileStream("temp.txt",fmOpenReadWrite);
	Personn.Upload(FileOpenDialog1, tfile);

	HungerLabel->Color = clBlack;

    HungerLabel->Caption = IntToStr(Personn.GHunger());
	MoodLabel->Caption = IntToStr(Personn.GMood());
	SleepLabel->Caption = IntToStr(Personn.GSleep());
	HealthLabel->Caption = IntToStr(Personn.GHealth());

	if(!Personn.GName().Compare("Rick"))
		R = true;
	else if(!Personn.GName().Compare("Morty"))
		M = true;
	else if(!Personn.GName().Compare("Summer"))
		Su = true;
	else if(!Personn.GName().Compare("Jerry"))
		J = true;

	if(R)
	{
		Image1->Picture->LoadFromFile("RickMain.gif");
		Animation(Image1);
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerMain.gif");
		Animation(Image1);
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortyMain.gif");
		Animation(Image1);
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerryMain.gif");
		Animation(Image1);
	}
}
//---------------------------------------------------------------------------
void __fastcall TAppForm::AClick(TObject *Sender)
{
	if(i >= 1)
	{
		i = 0;
		if(Check(Image1)){Off();}
		else
		{
			Personn.ToFeed();
			if(Check(Image1)){Off();}
			else
			{
				Timer6->Enabled = true;
				Work(Personn);
			}

		}
	}
	else ShowMessage("Too much clicks! Click slower please.");

}
//---------------------------------------------------------------------------

void __fastcall TAppForm::GClick(TObject *Sender)
{
	AppForm->Hide();
	GameMenuForm->Show();
	A->Show();
	S->Show();
	D->Show();
	F->Show();
	HealthLabel->Show();
	HungerLabel->Show();
	MoodLabel->Show();
	SleepLabel->Show();
	Info->Caption = "To feed(A) To chear up(D)\nTo heal(S) To sleep(F)\n Menu(G)";
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::SClick(TObject *Sender)
{
	if(i >= 1)
	{
		i = 0;
		if(Check(Image1))
		{
			Off();
			Timer8->Enabled = false;
		}
		else
		{
			Personn.ToHeal();
			if(Check(Image1)){Off();}
			else
			{
				Timer7->Enabled = true;
				Work(Personn);
			}
		}
	}
	else ShowMessage("Too much clicks! Click slower please.");
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::DClick(TObject *Sender)
{
	if(i >= 1)
	{
		i = 0;
		if(Check(Image1))
		{
			Off();
			Timer8->Enabled = false;
		}
		else
		{

			Personn.ToCheerUp();
            if(Check(Image1)){Off();}
			else
			{
				Work(Personn);
				Timer4->Enabled  = true;
			}
		}
	}
	else ShowMessage("Too much clicks! Click slower please.");
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::FClick(TObject *Sender)
{
	if(i >= 1)
	{
		i = 0;
		if(Check(Image1))
		{
			Off();
			Timer8->Enabled = false;
		}
		else
		{
			Personn.ToSleep();
			if(Check(Image1)){Off();}
			else
			{
				Timer1->Enabled = true;
				Work(Personn);
			}
		}
	}
	else ShowMessage("Too much clicks! Click slower please.");
}
//---------------------------------------------------------------------------



void __fastcall TAppForm::RefreshClick(TObject *Sender)
{
	if(b)Timer8->Enabled = true;
    CheckLevel();
	R = false;
	M = false;
	Su = false;
	J = false;

    TFileStream *tfile = new TFileStream("temp.txt",fmOpenReadWrite);
	Personn.Upload(FileOpenDialog1, tfile);

    HungerLabel->Caption = IntToStr(Personn.GHunger());
	MoodLabel->Caption = IntToStr(Personn.GMood());
	SleepLabel->Caption = IntToStr(Personn.GSleep());
	HealthLabel->Caption = IntToStr(Personn.GHealth());

	if(!Personn.GName().Compare("Rick"))
		R = true;
	else if(!Personn.GName().Compare("Morty"))
		M = true;
	else if(!Personn.GName().Compare("Summer"))
		Su = true;
	else if(!Personn.GName().Compare("Jerry"))
		J = true;

	if(R)
	{
		Image1->Picture->LoadFromFile("RickMain.gif");
		Animation(Image1);
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerMain.gif");
		Animation(Image1);
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortyMain.gif");
		Animation(Image1);
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerryMain.gif");
		Animation(Image1);
	}
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer1Timer(TObject *Sender)
{
	if(R)
		{
			Image1->Picture->LoadFromFile("RickSleep.png");
		}
		else if(Su)
		{
			Image1->Picture->LoadFromFile("SummerSleep.gif");
			Animation(Image1);
		}
		else if(M)
		{
			Image1->Picture->LoadFromFile("MortySleep.jpg");
			//std::this_thread::sleep_for(std::chrono::seconds(2));
		}
		else if(J)
		{
			Image1->Picture->LoadFromFile("JerrySleep.gif");
			Animation(Image1);
		}

	Timer2->Enabled = true;
	Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer2Timer(TObject *Sender)
{
	if(R)
	{
		Image1->Picture->LoadFromFile("MortyGone1.gif");
		Animation(Image1);
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerDream2.gif");
		Animation(Image1);
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortyDream.gif");
		Animation(Image1);
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerrySleep.jpg");
	}
	Timer3->Enabled = true;
    Timer2->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer3Timer(TObject *Sender)
{
	if(R)
	{
		Image1->Picture->LoadFromFile("RickMain.gif");
		Animation(Image1);
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerMain.gif");
		Animation(Image1);
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortySleep.jpg");
		Timer5->Enabled = true;
		//std::this_thread::sleep_for(std::chrono::seconds(2));
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerryMain.gif");
		Animation(Image1);
	}
	Timer3->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer4Timer(TObject *Sender)
{
    if(R)
	{
		Image1->Picture->LoadFromFile("RickDance.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerChill.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortyBit.gif");
		Animation(Image1);
		Timer5->Enabled = true;
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerryDream3.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
    Timer4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer5Timer(TObject *Sender)
{
	Image1->Picture->LoadFromFile("MortyMain.gif");
	Animation(Image1);
	Timer5->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer6Timer(TObject *Sender)
{
    if(R)
	{
		Image1->Picture->LoadFromFile("RickFood.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortyFood.gif");
		Animation(Image1);
        Timer5->Enabled = true;
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerFood.jpg");
		Timer3->Enabled = true;
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerryFood.png");
		Timer3->Enabled = true;
	}
	Timer6->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer7Timer(TObject *Sender)
{
    if(R)
	{
		Image1->Picture->LoadFromFile("RickHeal.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
	else if(Su)
	{
		Image1->Picture->LoadFromFile("SummerHeal.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
	else if(M)
	{
		Image1->Picture->LoadFromFile("MortyHeal.gif");
		Animation(Image1);
		Timer5->Enabled = true;
	}
	else if(J)
	{
		Image1->Picture->LoadFromFile("JerryHeal.gif");
		Animation(Image1);
		Timer3->Enabled = true;
	}
    Timer7->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer8Timer(TObject *Sender)
{
    CheckLevel();
	if(Check(Image1))
	{
		Off();
		Timer8->Enabled = false;
	}
	else
	{

		Personn.StatsDown();
		Work(Personn);

		if(Personn.GMood() >= 60)
			Mood->Picture->LoadFromFile("MoodUp1.png");
		else if(Personn.GMood() < 60 && Personn.GMood() >= 20)
			Mood->Picture->LoadFromFile("MoodNormal1.png");
		else Mood->Picture->LoadFromFile("MoodDown1.png");

		if(Check(Image1))
		{
			Off();
			Timer8->Enabled = false;
		}
	}

}
//---------------------------------------------------------------------------

void __fastcall TAppForm::Timer9Timer(TObject *Sender)
{
	i++;
}
//---------------------------------------------------------------------------


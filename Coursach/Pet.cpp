//---------------------------------------------------------------------------

#pragma hdrstop

#include "Pet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Pet :: ToFeed()
{
	if (Hunger == 100)
		return;

	Hunger += 6;
	Mood -= rand() % 5 + 1;
	Sleep -= rand() % 5 + 1;

    if (Hunger > 100)
		Hunger = 100;
}

void Pet :: ToHeal()
{
	if (Health == 100)
		return;

	Health += 6;
	Hunger -= rand() % 5 + 1;

    if (Health > 100)
		Health = 100;
}

void Pet :: ToCheerUp()
{
	if (Mood == 100)
		return;

	Mood += 6;
	Hunger -= rand() % 5 + 1;
	Sleep -= rand() % 5 + 1;

	int Chance = rand() % 5 + 1;
	if(Chance == 1)
		Health -= rand() % 5 + 1;

    if (Mood > 100)
		Mood = 100;
}

void Pet :: ToSleep()
{
	if (Sleep == 100)
		return;

	Sleep += 6;
	Hunger -= rand() % 5 + 1;
	Mood += rand() % 4 + 1;

    if (Sleep > 100)
		Sleep = 100;
}

bool Pet :: Upload(TFileOpenDialog*FileOpenDialog, TFileStream *tfile)
{
		TStringList *ts = new TStringList();

		ts -> LoadFromStream(tfile);

		if(ts->Strings[0] == "0")
		{
			ShowMessage("There is no saved games.");
			delete ts;
			delete tfile;
			return false;
		}
		else if(ts->Strings[0] == "1")
		{
			Name = ts->Strings[1];
			Health = StrToInt(ts->Strings[2]);
			Hunger = StrToInt(ts->Strings[3]);
			Mood = StrToInt(ts->Strings[4]);
			Sleep = StrToInt(ts->Strings[5]);
			//ShowMessage("The game was uploaded.");
			delete ts;
            delete tfile;
            return true;
		}
}

void Pet :: Save(TFileSaveDialog*FileSaveDialog, TMemo*Memo)
{
	Memo->Lines->Clear();
	Memo->Lines->Add("1");
	Memo->Lines->Add(Name);
	Memo->Lines->Add(IntToStr(Health));
	Memo->Lines->Add(IntToStr(Hunger));
	Memo->Lines->Add(IntToStr(Mood));
	Memo->Lines->Add(IntToStr(Sleep));
}

bool Pet :: CheckSave(TFileOpenDialog*FileOpenDialog, TFileStream *tfile)
{
    TStringList *ts = new TStringList();

	ts -> LoadFromStream(tfile);

	if(ts->Strings[0] == "1")
	{
        delete tfile;
		delete ts;
		return true;
	}
	else
	{
        delete tfile;
		delete ts;
		return false;
    }
}

bool Pet :: CheckHealth()
{
	if(Health <= 0)
		return true;
	else
		return false;
}

bool Pet :: CheckHunger()
{
	if(Hunger <= 0)
		return true;
	else
		return false;
}

bool Pet :: CheckMood()
{
	if(Mood <= 0)
		return true;
	else
		return false;
}

bool Pet :: CheckSleep()
{
	if(Sleep <= 0)
		return true;
	else
		return false;
}

void Pet :: StatsDown()
{
	int Chance = rand() % 2 + 1;
	if(Chance == 1)
		Health -= rand() % 7 + 3;

	Chance = rand() % 2 + 1;
	if(Chance == 1)
		Mood -= rand() % 7 + 3;

	Chance = rand() % 2 + 1;
	if(Chance == 1)
		Hunger -= rand() % 7 + 3;

	Chance = rand() % 2 + 1;
	if(Chance == 1)
		Sleep -= rand() % 7 + 3;
}

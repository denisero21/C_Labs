//---------------------------------------------------------------------------

#ifndef PetH
#define PetH
#include<vcl.h>
//---------------------------------------------------------------------------
#endif

class Pet
{
	private:

		UnicodeString Name;
		int Health;
		int Hunger;
		int Mood;
		int Sleep;

	public:

		Pet(UnicodeString name)
		{
			this->Name = name;
			this->Health = 100;
			this->Hunger = 100;
			this->Mood = 100;
			this->Sleep = 100;
		}

		Pet(){}

		void ToFeed();

		void ToHeal();

		void ToCheerUp();

		void ToSleep();

		UnicodeString GName(){ return Name;}

		int GHealth(){return Health;}

		int GHunger(){ return Hunger;}

		int GMood(){ return Mood;}

		int GSleep(){ return Sleep;}

		bool Upload(TFileOpenDialog*FileOpenDialog, TFileStream *tfile);

		bool CheckSave(TFileOpenDialog*FileOpenDialog, TFileStream *tfile);

		void Save(TFileSaveDialog*FileSaveDialog, TMemo*Memo);

		bool CheckHealth();

		bool CheckHunger();

		bool CheckMood();

		bool CheckSleep();

		void StatsDown();

};
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("SaveUpload.cpp", SaveUploadForm);
USEFORM("Options.cpp", OptionsForm);
USEFORM("App.cpp", AppForm);
USEFORM("ChoosingPers.cpp", ChoosingForm);
USEFORM("GameMenu.cpp", GameMenuForm);
USEFORM("Main.cpp", MainForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("TabletDark");
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TSaveUploadForm), &SaveUploadForm);
		Application->CreateForm(__classid(TAppForm), &AppForm);
		Application->CreateForm(__classid(TOptionsForm), &OptionsForm);
		Application->CreateForm(__classid(TChoosingForm), &ChoosingForm);
		Application->CreateForm(__classid(TGameMenuForm), &GameMenuForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------

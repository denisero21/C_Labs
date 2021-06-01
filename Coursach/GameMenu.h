//---------------------------------------------------------------------------

#ifndef GameMenuH
#define GameMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TGameMenuForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *Cancel;
	TButton *Options;
	TButton *Save;
	TButton *Continue;
	TFileSaveDialog *FileSaveDialog1;
	TLabel *Label1;
	void __fastcall CancelClick(TObject *Sender);
	void __fastcall OptionsClick(TObject *Sender);
	void __fastcall SaveClick(TObject *Sender);
	void __fastcall ContinueClick(TObject *Sender);
private:	// User declarations
	bool Opt;
	bool SaveS;
	bool SU;
public:		// User declarations
	__fastcall TGameMenuForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGameMenuForm *GameMenuForm;
//---------------------------------------------------------------------------
#endif

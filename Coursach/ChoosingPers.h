//---------------------------------------------------------------------------

#ifndef ChoosingPersH
#define ChoosingPersH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.GIFImg.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TChoosingForm : public TForm
{
__published:	// IDE-managed Components
	TImage *BackGr;
	TButton *Cancel;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TStaticText *StaticText1;
	TStaticText *StaticText2;
	TStaticText *StaticText3;
	TStaticText *StaticText4;
	TStaticText *StaticText5;
	TMemo *Memo1;
	TFileSaveDialog *FileSaveDialog1;
	void __fastcall CancelClick(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
private:
bool a;	// User declarations
public:		// User declarations
	__fastcall TChoosingForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TChoosingForm *ChoosingForm;
//---------------------------------------------------------------------------
#endif

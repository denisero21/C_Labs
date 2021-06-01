//---------------------------------------------------------------------------

#ifndef OptionsH
#define OptionsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TOptionsForm : public TForm
{
__published:	// IDE-managed Components
	TImage *OptionsImage;
	TButton *Cancel;
	TLabel *Label1;
	TButton *Easy;
	TButton *Normal;
	TButton *Hard;
	TButton *Extreme;
	TLabel *Text;
	void __fastcall CancelClick(TObject *Sender);
	void __fastcall EasyClick(TObject *Sender);
	void __fastcall NormalClick(TObject *Sender);
	void __fastcall HardClick(TObject *Sender);
	void __fastcall ExtremeClick(TObject *Sender);
private:	// User declarations
	bool Opt;
    int lvl;
public:		// User declarations
	__fastcall TOptionsForm(TComponent* Owner);
	bool ShowBool(bool Opt)
	{
		this->Opt = Opt;
		return Opt;
	}
};
//---------------------------------------------------------------------------
extern PACKAGE TOptionsForm *OptionsForm;
//---------------------------------------------------------------------------
#endif

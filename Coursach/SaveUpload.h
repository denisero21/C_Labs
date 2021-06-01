//---------------------------------------------------------------------------

#ifndef SaveUploadH
#define SaveUploadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TSaveUploadForm : public TForm
{
__published:	// IDE-managed Components
	TImage *SaveUploadImage;
	TButton *Slot1;
	TButton *Slot2;
	TButton *Slot3;
	TButton *Slot4;
	TButton *Cancel;
	TFileOpenDialog *FileOpenDialog1;
	TFileSaveDialog *FileSaveDialog1;
	TMemo *Memo1;
	void __fastcall CancelClick(TObject *Sender);
	void __fastcall Slot1Click(TObject *Sender);
	void __fastcall Slot2Click(TObject *Sender);
	void __fastcall Slot3Click(TObject *Sender);
	void __fastcall Slot4Click(TObject *Sender);
private:	// User declarations
	bool SU;
	bool SaveS;
    bool a;
public:		// User declarations
	__fastcall TSaveUploadForm(TComponent* Owner);
	void ShowBool2(bool SU)
	{
		this->SU = SU;
	}

	void ShowBool1(bool SaveS)
	{
		this->SaveS = SaveS;
		this->Show();
	}

	void Bool(bool SaveS)
	{
		this->SaveS = SaveS;
    }
};
//---------------------------------------------------------------------------
extern PACKAGE TSaveUploadForm *SaveUploadForm;
//---------------------------------------------------------------------------
#endif

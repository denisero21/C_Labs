//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Name1;
	TEdit *Passport1;
	TEdit *Insurance1;
	TEdit *Education1;
	TEdit *Post1;
	TEdit *Salary1;
	TEdit *Notes1;
	TDateTimePicker *Birthday1;
	TDateTimePicker *Hiring1;
	TLabel *Name;
	TLabel *Label2;
	TLabel *Passport;
	TLabel *Insurance;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TMemo *Memo1;
	TComboBox *ComboBox1;
	TButton *Add;
	TButton *Elder;
	TStaticText *StaticText1;
	TButton *Delete;
	TButton *DeleteFills;
	TButton *Display;
	TComboBox *ComboBox2;
	TEdit *FindAll;
	TButton *Button1;
	TStaticText *StaticText2;
	TStaticText *StaticText3;
	TComboBox *ComboBox3;
	TStaticText *StaticText4;
	TButton *DelEmp;
	void __fastcall DeleteFillsClick(TObject *Sender);
	void __fastcall DisplayClick(TObject *Sender);
	void __fastcall AddClick(TObject *Sender);
	void __fastcall ElderClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall DelEmpClick(TObject *Sender);
	void __fastcall DeleteClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

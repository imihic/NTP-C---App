﻿//---------------------------------------------------------------------------

#ifndef NewPollFormH
#define NewPollFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <stdlib.h>
#include <vector>
//---------------------------------------------------------------------------
class TFormNovaAnketa : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TEdit *edtNaslov;
    TComboBox *cmbBrojPitanja;
    TLabel *Label2;
    TRadioGroup *RadioGroup1;
    TEdit *edtPitanje1;
    TLabel *Label3;
    TEdit *edtPitanje2;
    TLabel *lblPitanje2;
    TEdit *edtPitanje3;
    TLabel *lblPitanje3;
    TEdit *edtPitanje4;
    TLabel *lblPitanje4;
    TEdit *edtPitanje5;
    TLabel *lblPitanje5;
    TButton *Button2;
    void __fastcall cmbBrojPitanjaSelect(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TFormNovaAnketa(TComponent* Owner);
    UnicodeString naslovAnkete = "";
    int brojPitanja = 1;
    bool slobodanOdgovor = false;
    bool ljestvicaOdgovor = false;
    bool daNeOdgovor = false;
    std::vector<UnicodeString> pitanja;
    UnicodeString pitanje1 = "";
    UnicodeString pitanje2 = "";
    UnicodeString pitanje3 = "";
    UnicodeString pitanje4 = "";
    UnicodeString pitanje5 = "";
};
//---------------------------------------------------------------------------
extern PACKAGE TFormNovaAnketa *FormNovaAnketa;
//---------------------------------------------------------------------------
#endif

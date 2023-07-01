﻿//---------------------------------------------------------------------------

#ifndef SettingsH
#define SettingsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TSettingsForm : public TForm
{
__published:	// IDE-managed Components
    TComboBox *cbxVclStyles;
    TGroupBox *grpAnimation;
    TLabel *lblAnimationDelay;
    TLabel *lblAnimationStep;
    TCheckBox *chkUseAnimation;
    TTrackBar *trkAnimationDelay;
    TTrackBar *trkAnimationStep;
    TRadioGroup *RadioGroup1;
    TRadioGroup *grpDisplayMode;
    TRadioGroup *grpPlacement;
    TLabel *lblVclStyle;
    TLabel *Label1;
    TLabel *Label2;
    TButton *Button1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall cbxVclStylesChange(TObject *Sender);
    void __fastcall trkAnimationDelayChange(TObject *Sender);
    void __fastcall trkAnimationStepChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TSettingsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
#endif

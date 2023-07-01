//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Settings.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
__fastcall TSettingsForm::TSettingsForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TSettingsForm::FormCreate(TObject *Sender)
{
     for (int i = 0; i < TStyleManager::StyleNames.Length; i++)
         cbxVclStyles->Items->Add(TStyleManager::StyleNames[i]);

     cbxVclStyles->ItemIndex = cbxVclStyles->Items->IndexOf(TStyleManager::ActiveStyle->Name);
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::cbxVclStylesChange(TObject *Sender)
{
     TStyleManager::SetStyle(cbxVclStyles->Text);
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::trkAnimationDelayChange(TObject *Sender)
{
     int delay = trkAnimationDelay->Position * 5;
     lblAnimationDelay->Caption = "Animation Delay (" + IntToStr(delay) + ")";
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::trkAnimationStepChange(TObject *Sender)
{
     int step = trkAnimationStep->Position * 5;
     lblAnimationStep->Caption = "Animation Step (" + IntToStr(step) + ")";
}
//---------------------------------------------------------------------------



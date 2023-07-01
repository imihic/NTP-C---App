//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
__fastcall TRegistrationForm::TRegistrationForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegistrationForm::Button1Click(TObject *Sender)
{


     ADOTable1->Append();
     ADOTable1->FieldByName("NAZIV")->AsString = Edit1->Text;
     ADOTable1->FieldByName("LOZINKA")->AsString = Edit2->Text;
     ADOTable1->FieldByName("ADRESA")->AsString = Edit3->Text;
     ADOTable1->FieldByName("GRAD")->AsString = Edit4->Text;
     ADOTable1->FieldByName("DRZAVA")->AsString = Edit5->Text;
     ADOTable1->FieldByName("DATUM_REGISTRACIJE")->AsDateTime = Now();
     ADOTable1->Post();
     ModalResult = mrOk;
}
//---------------------------------------------------------------------------

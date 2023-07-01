//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include <memory>
#include <registry.hpp>

#include "LoginForm.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormLogin *FormLogin;
//---------------------------------------------------------------------------
__fastcall TFormLogin::TFormLogin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormLogin::Button1Click(TObject *Sender)
{
	// if username and password are correct, open main form
    TLocateOptions Opts;
    Opts.Clear();
    Opts << loPartialKey;
    Variant locvalues[2];
    locvalues[0] = Variant(edtUsername->Text);
    locvalues[1] = Variant(Edit1->Text);
    if(ADOTable1->Locate("NAZIV;LOZINKA", VarArrayOf(locvalues, 1), Opts) == true) {
        ADOTable1->Edit();
        ADOTable1->FieldByName("LOGIRAN")->AsBoolean = true;
        ADOTable1->Post();

        TRegistry *Reg = new TRegistry;
        Reg->RootKey = HKEY_CURRENT_USER;
        UnicodeString key = "Software\\C++Builder\\eBankingProject";

        if(Reg->OpenKey(key, true)) {
            Reg->WriteString("user", edtUsername->Text);
            Reg->WriteDateTime("lastLogin", Now());
        }

        if(ADOTable1->FieldByName("ADMIN")->AsBoolean == true) {
            Reg->WriteBool("admin", true);
            Reg->CloseKey();
        } else {
            Reg->WriteBool("admin", false);
            Reg->CloseKey();
        }
        ModalResult = mrOk;
    } else{
        ModalResult = mrAbort;
    }

}
//---------------------------------------------------------------------------

void __fastcall TFormLogin::Button2Click(TObject *Sender)
{
     //otvori formu za zahtjev za registraciju
     std::unique_ptr<TRegistrationForm> RegisterForm(new TRegistrationForm(NULL));

     if(RegisterForm->ShowModal() == mrOk) {
     ShowMessage("Korisnik je uspješno poslao zahtjev za registraciju!");
     RegistrationDataLabel->Caption = ("Napravili ste zahtjev za registraciju sa sljedećim podatcima!\n\n Korisničko ime: " + RegisterForm->Edit1->Text
                                    +
                                      "\nAdresa: " + RegisterForm->Edit3->Text
                                    +
                                      "\nGrad: " + RegisterForm->Edit4->Text
                                    +
                                      "\nDržava: " + RegisterForm->Edit5->Text
                                    +
                                      "\n\nMolimo pričekajte dok administrator potvrdi vaš korisnički račun.")
                                      ;
     RegistrationDataLabel->Show();
     }

}
//---------------------------------------------------------------------------


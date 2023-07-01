//---------------------------------------------------------------------------

#include <nalozi.h>
#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <stdlib.h>

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TNaloziForm *NaloziForm;
//---------------------------------------------------------------------------
__fastcall TNaloziForm::TNaloziForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TNaloziForm::edtRacunPrimateljaExit(TObject *Sender)
{
   //std::wstring text = edtRacunPrimatelja->Text;
    STARTUPINFO si;
    PROCESS_INFORMATION pi; // The function returns this
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    //CONST wchar_t* commandLine = TEXT(text);
    //dohvati komponentu
    std::wstring txtEdit = edtRacunPrimatelja->Text.w_str();
    std::wstring arg0 = L"C:\\Users\\imihic\\Documents\\Embarcadero\\Studio\\Projects\\IBANValidator\\Win32\\Debug\\Project2.exe ";
    std::wstring args = arg0 + txtEdit;

    const wchar_t* commandLine = args.c_str();
    // Start the child process.
    if (!CreateProcess(
        L"C:\\Users\\imihic\\Documents\\Embarcadero\\Studio\\Projects\\IBANValidator\\Win32\\Debug\\Project2.exe",      // app path
        (LPWSTR)commandLine,     // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory
        &si,            // Pointer to STARTUPINFO structure
        &pi)           // Pointer to PROCESS_INFORMATION structure
        )
    {
        printf("CreateProcess failed (%ld).\n", GetLastError());
        throw std::exception("Could not create child process");
    }
    else
    {
        std::cout << "[          ] Successfully launched child process" << std::endl;
    }
}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::CategoryButtons1Categories0Items1Click(TObject *Sender)

{
     if(PanelUnosPojedinacnogNaloga->Visible){
         PanelUnosPojedinacnogNaloga->Hide();
         PanelSkupnoUcitavanje->Show();
     }

}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::CategoryButtons1Categories0Items0Click(TObject *Sender)

{
    if(!PanelUnosPojedinacnogNaloga->Visible){
         PanelSkupnoUcitavanje->Hide();
         PanelUnosPojedinacnogNaloga->Show();
     }
}
//---------------------------------------------------------------------------



void __fastcall TNaloziForm::Button3Click(TObject *Sender)
{
     if(FileOpenDialog1->Execute()){
          if(FileExists(FileOpenDialog1->FileName)){
               if(true){
                   XMLDocument1->FileName = FileOpenDialog1->FileName;
                   _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
                   _di_IXMLnalogTypeList sviObicniNalozi = sviNalozi->Get_nalog();

                   ListView1->Items->Clear();
                   for(int i = 0; i < sviObicniNalozi->Count; i++){

                           ListView1->Items->Add();
                           ListView1->Items->Item[i]->Caption = i + 1;
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->primatelj);
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->adresaPrimatelja);
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->mjestoPrimatelja);
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->drzavaPrimatelja);
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->racunPrimatelja);
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->iznos);
                           ListView1->Items->Item[i]->SubItems->Add("HRK");
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->pozivNaBroj);
                           ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->svrhaDoznake);
                   }

                   _di_IXMLnalogUJPTypeList sviUJPNalozi = sviNalozi->Get_nalogUJP();

                   ListView2->Items->Clear();
                   for(int i = 0; i < sviUJPNalozi->Count; i++){

                           ListView2->Items->Add();
                           ListView2->Items->Item[i]->Caption = i + 1;
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->primatelj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->adresaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->mjestoPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->drzavaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->racunPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->iznos);
                           ListView2->Items->Item[i]->SubItems->Add("HRK");
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->vrstaPrihoda);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->sifraOpcine);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->pozivNaBroj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->svrhaDoznake);
                   }

               } else {
                   MessageDlg("Datoteka" + ExtractFileName(FileOpenDialog1->FileName) + " ne postoji!", mtInformation, TMsgDlgButtons() << mbOK, 0);
               }
          }
     }
}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::btnDodajNoviObicniNalogClick(TObject *Sender)
{
     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogTypeList sviObicniNalozi = sviNalozi->Get_nalog();
     _di_IXMLnalogType nalogObicni = sviObicniNalozi->Add();



     nalogObicni->primatelj = InputBox(L"Primatelj",
		 L"Upišite naziv primatelja:", L"");
     nalogObicni->adresaPrimatelja= InputBox(L"Adresa",
		 L"Upišite adresu primatelja:", L"");
     nalogObicni->mjestoPrimatelja= InputBox(L"Primatelj",
		 L"Upišite mjesto primatelja:", L"");
     nalogObicni->drzavaPrimatelja= InputBox(L"Primatelj",
		 L"Upišite državu primatelja:", L"");
     nalogObicni->racunPrimatelja= InputBox(L"Primatelj",
		 L"Upišite račun primatelja:", L"");
     nalogObicni->iznos= InputBox(L"Iznos",
		 L"Upišite željeni iznos u kunama:", L"");
     nalogObicni->pozivNaBroj= InputBox(L"Poziv na broj",
		 L"Molimo upišite poziv na broj:", L"");
     nalogObicni->svrhaDoznake= InputBox(L"Svrha doznake",
		 L"Upišite svrhu doznake:", L"");;
     XMLDocument1->SaveToFile(XMLDocument1->FileName);
     ListView1->Items->Clear();
                 for(int i = 0; i < sviObicniNalozi->Count; i++){
                 ListView1->Items->Add();
                 ListView1->Items->Item[i]->Caption = i + 1;
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->primatelj);
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->adresaPrimatelja);
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->mjestoPrimatelja);
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->drzavaPrimatelja);
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->racunPrimatelja);
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->iznos);
                 ListView1->Items->Item[i]->SubItems->Add("HRK");
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->pozivNaBroj);
                 ListView1->Items->Item[i]->SubItems->Add(sviObicniNalozi->Get_Item(i)->svrhaDoznake);
                 }
}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::btnObrisiOdabraneObicneNalogeClick(TObject *Sender)
{
     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogTypeList sviObicniNalozi = sviNalozi->Get_nalog();
     sviObicniNalozi->Delete(ListView1->ItemIndex);
     XMLDocument1->SaveToFile(XMLDocument1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::btnObrisiSveNalogeClick(TObject *Sender)
{
     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogTypeList sviObicniNalozi = sviNalozi->Get_nalog();

     sviObicniNalozi->Clear();
     XMLDocument1->SaveToFile(XMLDocument1->FileName);
}
//---------------------------------------------------------------------------



void __fastcall TNaloziForm::btnObrisiOdabraneUJPNalogeClick(TObject *Sender)
{

     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogUJPTypeList sviUJPNalozi = sviNalozi->Get_nalogUJP();
     // Prvo spremi inicijalnu vrijednost sviUJPNalozi->Count u varijablu
     // Brisanjem se Count ažurira, pa nećemo pravilno iterirati
     int count = sviUJPNalozi->Count;



     for(int i = 0; i < count; i++){
             if(ListView2->Items->Item[i]->Checked){
                   sviUJPNalozi->Delete(i);
             }

     }
     XMLDocument1->SaveToFile(XMLDocument1->FileName);
     ListView2->Items->Clear();
             for(int i = 0; i < sviUJPNalozi->Count; i++){
                           ListView2->Items->Add();
                           ListView2->Items->Item[i]->Caption = i + 1;
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->primatelj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->adresaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->mjestoPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->drzavaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->racunPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->iznos);
                           ListView2->Items->Item[i]->SubItems->Add("HRK");
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->vrstaPrihoda);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->sifraOpcine);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->pozivNaBroj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->svrhaDoznake);
             }

}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::btnDodajNoviUJPNalogClick(TObject *Sender)
{
     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogUJPTypeList sviUJPNalozi = sviNalozi->Get_nalogUJP();
     _di_IXMLnalogUJPType nalogUJP = sviUJPNalozi->Add();



     nalogUJP->primatelj = InputBox(L"Primatelj",
		 L"Upišite naziv primatelja:", L"");
     nalogUJP->adresaPrimatelja= InputBox(L"Adresa",
		 L"Upišite adresu primatelja:", L"");
     nalogUJP->mjestoPrimatelja= InputBox(L"Primatelj",
		 L"Upišite mjesto primatelja:", L"");
     nalogUJP->drzavaPrimatelja= InputBox(L"Primatelj",
		 L"Upišite državu primatelja:", L"");
     nalogUJP->racunPrimatelja= InputBox(L"Primatelj",
		 L"Upišite račun primatelja:", L"");
     nalogUJP->iznos= InputBox(L"Iznos",
		 L"Upišite željeni iznos u kunama:", L"");
     nalogUJP->iznos= InputBox(L"Vrsta prihoda",
		 L"Upišite vrstu prihoda:", L"");
     nalogUJP->iznos= InputBox(L"Šifra općine",
		 L"Upišite šifru općine:", L"");
     nalogUJP->pozivNaBroj= InputBox(L"Poziv na broj",
		 L"Molimo upišite poziv na broj:", L"");
     nalogUJP->svrhaDoznake= InputBox(L"Svrha doznake",
		 L"Upišite svrhu doznake:", L"");;
     XMLDocument1->SaveToFile(XMLDocument1->FileName);
     ListView2->Items->Clear();
             for(int i = 0; i < sviUJPNalozi->Count; i++){
                           ListView2->Items->Add();
                           ListView2->Items->Item[i]->Caption = i + 1;
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->primatelj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->adresaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->mjestoPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->drzavaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->racunPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->iznos);
                           ListView2->Items->Item[i]->SubItems->Add("HRK");
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->vrstaPrihoda);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->sifraOpcine);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->pozivNaBroj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->svrhaDoznake);
             }
}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::btnObrisiSveUJPNalogeClick(TObject *Sender)
{
     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogUJPTypeList sviUJPNalozi = sviNalozi->Get_nalogUJP();

     sviUJPNalozi->Clear();
     XMLDocument1->SaveToFile(XMLDocument1->FileName);
     ListView2->Items->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TNaloziForm::btnAzurirajOdabraniUJPNalogClick(TObject *Sender)
{
     if(ListView2->ItemIndex == -1){
           return;
     }

     _di_IXMLnaloziType sviNalozi = Getnalozi(XMLDocument1);
     _di_IXMLnalogUJPTypeList sviUJPNalozi = sviNalozi->Get_nalogUJP();
     _di_IXMLnalogUJPType nalogUJP = sviUJPNalozi->Get_Item(ListView2->ItemIndex);

     nalogUJP->primatelj = InputBox(L"Primatelj",
		 L"Upišite naziv primatelja:", L"");
     nalogUJP->adresaPrimatelja= InputBox(L"Adresa",
		 L"Upišite adresu primatelja:", L"");
     nalogUJP->mjestoPrimatelja= InputBox(L"Primatelj",
		 L"Upišite mjesto primatelja:", L"");
     nalogUJP->drzavaPrimatelja= InputBox(L"Primatelj",
		 L"Upišite državu primatelja:", L"");
     nalogUJP->racunPrimatelja= InputBox(L"Primatelj",
		 L"Upišite račun primatelja:", L"");
     nalogUJP->iznos= InputBox(L"Iznos",
		 L"Upišite željeni iznos u kunama:", L"");
     nalogUJP->iznos= InputBox(L"Vrsta prihoda",
		 L"Upišite vrstu prihoda:", L"");
     nalogUJP->iznos= InputBox(L"Šifra općine",
		 L"Upišite šifru općine:", L"");
     nalogUJP->pozivNaBroj= InputBox(L"Poziv na broj",
		 L"Molimo upišite poziv na broj:", L"");
     nalogUJP->svrhaDoznake= InputBox(L"Svrha doznake",
		 L"Upišite svrhu doznake:", L"");;
     XMLDocument1->SaveToFile(XMLDocument1->FileName);

     ListView2->Items->Clear();
                   for(int i = 0; i < sviUJPNalozi->Count; i++){

                           ListView2->Items->Add();
                           ListView2->Items->Item[i]->Caption = i + 1;
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->primatelj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->adresaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->mjestoPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->drzavaPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->racunPrimatelja);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->iznos);
                           ListView2->Items->Item[i]->SubItems->Add("HRK");
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->vrstaPrihoda);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->sifraOpcine);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->pozivNaBroj);
                           ListView2->Items->Item[i]->SubItems->Add(sviUJPNalozi->Get_Item(i)->svrhaDoznake);
                   }
}
//---------------------------------------------------------------------------


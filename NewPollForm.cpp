//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NewPollForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormNovaAnketa *FormNovaAnketa;
//---------------------------------------------------------------------------
__fastcall TFormNovaAnketa::TFormNovaAnketa(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormNovaAnketa::cmbBrojPitanjaSelect(TObject *Sender)
{
        brojPitanja = StrToInt(cmbBrojPitanja->Text);

        switch(brojPitanja) {
            case 2:
                 lblPitanje2->Visible = true;
                 edtPitanje2->Visible = true;
                 break;
            case 3:
                 lblPitanje2->Visible = true;
                 edtPitanje2->Visible = true;
                 lblPitanje3->Visible = true;
                 edtPitanje3->Visible = true;
                 break;
            case 4:
                 lblPitanje2->Visible = true;
                 edtPitanje2->Visible = true;
                 lblPitanje3->Visible = true;
                 edtPitanje3->Visible = true;
                 lblPitanje4->Visible = true;
                 edtPitanje4->Visible = true;
                 break;
            case 5:
                 lblPitanje2->Visible = true;
                 edtPitanje2->Visible = true;
                 lblPitanje3->Visible = true;
                 edtPitanje3->Visible = true;
                 lblPitanje4->Visible = true;
                 edtPitanje4->Visible = true;
                 lblPitanje5->Visible = true;
                 edtPitanje5->Visible = true;
                 break;
        }
}
//---------------------------------------------------------------------------
void __fastcall TFormNovaAnketa::Button2Click(TObject *Sender)
{
     naslovAnkete = edtNaslov->Text;


     if(RadioGroup1->ItemIndex == 0){
            slobodanOdgovor = true;
     } else if( RadioGroup1->ItemIndex == 1){
            ljestvicaOdgovor = true;
     } else if (RadioGroup1->ItemIndex == 2 ) {
            daNeOdgovor = true;
     }

     pitanja.push_back(edtPitanje1->Text);
     pitanja.push_back(edtPitanje2->Text);
     pitanja.push_back(edtPitanje3->Text);
     pitanja.push_back(edtPitanje4->Text);
     pitanja.push_back(edtPitanje5->Text);


     pitanje1 = edtPitanje1->Text;
     pitanje2 = edtPitanje2->Text;
     pitanje3 = edtPitanje3->Text;
     pitanje4 = edtPitanje4->Text;
     pitanje5 = edtPitanje5->Text;

     ModalResult = mrOk;
}
//---------------------------------------------------------------------------

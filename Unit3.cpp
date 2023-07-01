//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPocetnaForm *PocetnaForm;
//---------------------------------------------------------------------------
__fastcall TPocetnaForm::TPocetnaForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPocetnaForm::FormActivate(TObject *Sender)
{

       MainForm->Label1->Caption = "asd";
}
//---------------------------------------------------------------------------



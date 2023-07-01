﻿//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.CategoryButtons.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Dialogs.hpp>
#include "NewPollForm.h"
//---------------------------------------------------------------------------
class TAnketeAdminForm : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label11;
    TListView *ListView1;
    TCategoryButtons *CategoryButtons1;
    TPanel *Panel1;
    TVirtualImageList *VirtualImageList1;
    TImageCollection *ImageCollection1;
    TADOConnection *ADOConnection1;
    TADOTable *tKorisnici;
    TPanel *Panel2;
    TLabel *Label2;
    TButton *Button3;
    TFileOpenDialog *FileOpenDialog1;
    TLabel *Label3;
    TButton *btnKreirajNovuAnketu;
    TButton *btnAzurirajOznacenuAnketu;
    TButton *btnObrisiOznacenuAnketu;
    TButton *btnObrisiSveAnkete;
    TListView *ListView2;
    TButton *Button1;
    TTaskDialog *PonudeniOdgovoriDialog;
    TListView *ListView3;
    TLabel *Label5;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnAzurirajOznacenuAnketuClick(TObject *Sender);
    void __fastcall btnKreirajNovuAnketuClick(TObject *Sender);
    void __fastcall btnObrisiOznacenuAnketuClick(TObject *Sender);
    void __fastcall btnObrisiSveAnketeClick(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items0Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAnketeAdminForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAnketeAdminForm *AnketeAdminForm;
//---------------------------------------------------------------------------
#endif

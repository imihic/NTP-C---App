//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.CategoryButtons.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TNaloziForm : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TButton *Button1;
    TButton *Button2;
    TEdit *edtPrimatelj;
    TLabel *Label2;
    TEdit *edtAdresaPrimatelja;
    TLabel *Label3;
    TEdit *Edit3;
    TLabel *Label4;
    TEdit *Edit4;
    TLabel *Label5;
    TLabel *Label6;
    TEdit *edtRacunPrimatelja;
    TLabel *Label7;
    TEdit *edtIznos;
    TLabel *Label8;
    TEdit *edtPozivNaBroj;
    TLabel *Label9;
    TDBLookupComboBox *DBLookupComboBox1;
    TLabel *Label10;
    TDBComboBox *DBComboBox1;
    TADOConnection *ADOConnection1;
    TADOTable *tRacuni;
    TDataSource *dRacuni;
    TADOTable *tKorisnik;
    TDataSource *dKorisnik;
    TImageCollection *ImageCollection1;
    TVirtualImageList *VirtualImageList1;
    TCategoryButtons *CategoryButtons1;
    TPanel *PanelUnosPojedinacnogNaloga;
    TPanel *PanelSkupnoUcitavanje;
    TListView *ListView1;
    TListView *ListView2;
    TLabel *Label11;
    TLabel *Label12;
    TButton *Button3;
    TButton *btnDodajNoviObicniNalog;
    TButton *btnAzurirajOdabraniObicniNalog;
    TButton *btnObrisiOdabraneObicneNaloge;
    TButton *btnObrisiSveNaloge;
    TButton *btnPosaljiOdabraneNaloge;
    TButton *btnDodajNoviUJPNalog;
    TButton *btnAzurirajOdabraniUJPNalog;
    TButton *btnObrisiOdabraneUJPNaloge;
    TButton *btnObrisiSveUJPNaloge;
    TButton *btnPosaljiOdabraneUJPNaloge;
    TButton *Button16;
    TFileOpenDialog *FileOpenDialog1;
    TXMLDocument *XMLDocument1;
    void __fastcall edtRacunPrimateljaExit(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items1Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items0Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall btnDodajNoviObicniNalogClick(TObject *Sender);
    void __fastcall btnObrisiOdabraneObicneNalogeClick(TObject *Sender);
    void __fastcall btnObrisiSveNalogeClick(TObject *Sender);
    void __fastcall btnObrisiOdabraneUJPNalogeClick(TObject *Sender);
    void __fastcall btnDodajNoviUJPNalogClick(TObject *Sender);
    void __fastcall btnObrisiSveUJPNalogeClick(TObject *Sender);
    void __fastcall btnAzurirajOdabraniUJPNalogClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TNaloziForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNaloziForm *NaloziForm;
//---------------------------------------------------------------------------
#endif

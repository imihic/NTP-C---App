//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TPrimateljiForm : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label11;
    TButton *btnDodajNoviObicniNalog;
    TButton *btnAzurirajOdabraniObicniNalog;
    TButton *btnObrisiOdabraneObicneNaloge;
    TButton *btnObrisiSveNaloge;
    TListView *ListView1;
    TButton *Button3;
    TLabel *Label1;
    TFileOpenDialog *FileOpenDialog1;
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall btnDodajNoviObicniNalogClick(TObject *Sender);
    void __fastcall btnObrisiOdabraneObicneNalogeClick(TObject *Sender);
    void __fastcall btnAzurirajOdabraniObicniNalogClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TPrimateljiForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrimateljiForm *PrimateljiForm;
//---------------------------------------------------------------------------
#endif

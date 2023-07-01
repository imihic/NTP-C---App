//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TPocetnaForm : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label;
    void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TPocetnaForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPocetnaForm *PocetnaForm;
//---------------------------------------------------------------------------
#endif

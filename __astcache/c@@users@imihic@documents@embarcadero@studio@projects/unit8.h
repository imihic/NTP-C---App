﻿//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "ALDSAudioIn.hpp"
#include "Mitov.Types.hpp"
//---------------------------------------------------------------------------
class TPodrskaForm : public TForm
{
__published:	// IDE-managed Components
    TButton *Button1;
	TButton *Button2;
    TButton *Button3;
    TButton *Button4;
	TLabel *Label2;
	TIdTCPClient *IdTCPClient1;
	TMemo *Memo1;
	TEdit *Edit1;
	TTimer *Timer1;
	void __fastcall IdTCPClient1Connected(TObject *Sender);
	void __fastcall checkForResponse(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TPodrskaForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPodrskaForm *PodrskaForm;
//---------------------------------------------------------------------------
#endif


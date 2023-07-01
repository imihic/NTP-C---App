// ---------------------------------------------------------------------------

#ifndef HomeH
#define HomeH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPServer.hpp>
#include <IdContext.hpp>
#include <Vcl.ExtCtrls.hpp>

// ---------------------------------------------------------------------------
class TSocketServer : public TForm {
__published: // IDE-managed Components
	TListView *ListView1;
	TListView *ListView2;
	TCheckBox *CheckBox1;
	TLabel *Label11;
	TLabel *Label1;
	TButton *Button1;
	TListView *ListView3;
	TLabel *Label2;
	TButton *Button2;
	TFDPhysMySQLDriverLink *FDPhysMySQLDriverLink1;
	TFDConnection *FDConnection1;
	TFDTable *FDTable1;
	TFDStoredProc *FDStoredProc1;
	TIdTCPServer *IdTCPServer1;
	TTimer *Timer1;

	void __fastcall getData(TObject *Sender);
	void __fastcall IdTCPServer1Execute(TIdContext *AContext);

private: // User declarations
public: // User declarations
	__fastcall TSocketServer(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TSocketServer *SocketServer;
// ---------------------------------------------------------------------------
#endif

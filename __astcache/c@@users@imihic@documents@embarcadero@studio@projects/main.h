//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Vcl.CategoryButtons.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.VirtualImage.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TImage *Image1;
    TPanel *Panel2;
    TSplitView *SplitView1;
    TSplitter *Splitter1;
    TCategoryButtons *CategoryButtons1;
    TImage *Image2;
    TPanel *Panel4;
    TLabel *Label1;
    TPanel *Panel3;
    TImageCollection *ImageCollection1;
    TVirtualImageList *VirtualImageList1;
    TVirtualImage *VirtualImage1;
    TCategoryButtons *CategoryButtons2;
    void __fastcall Image1Click(TObject *Sender);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items0Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items8Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items1Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items11Click(TObject *Sender);
    void __fastcall CategoryButtons1Categories0Items2Click(TObject *Sender);
        void __fastcall CategoryButtons1Categories0Items10Click(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall CategoryButtons2Categories0Items7Click(TObject *Sender);
    void __fastcall CategoryButtons2Categories0Items1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif

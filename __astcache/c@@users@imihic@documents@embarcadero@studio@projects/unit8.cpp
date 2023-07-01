﻿// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit8.h"
#include "Korisnik.h"
#include <System.Threading.hpp>

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPodrskaForm *PodrskaForm;
CRITICAL_SECTION criticalSection;

// ---------------------------------------------------------------------------
__fastcall TPodrskaForm::TPodrskaForm(TComponent* Owner) : TForm(Owner) {

}
// ---------------------------------------------------------------------------

void __fastcall TPodrskaForm::IdTCPClient1Connected(TObject *Sender) {
	IdTCPClient1->Socket->WriteLn("username: '" + Korisnik::GetInstance().getUserName() + "' connected!");
}

// ---------------------------------------------------------------------------




void __fastcall TPodrskaForm::checkForResponse(TObject *Sender)
{
		_di_ITask task = TTask::Create([&]() {

			//if(IdTCPClient1->Socket->InputBufferIsEmpty()) {
				//if(IdTCPClient1->Socket->CheckForDataOnSource(1)){
					UnicodeString response = IdTCPClient1->Socket->ReadLn();
					TThread::Synchronize(TThread::CurrentThread, [&](){
						Memo1->Lines->Add(response);
					});

				//}

			//}
		});
		task->Start();
		//moramo sinkronizirati worker thread s main threadom


}
//---------------------------------------------------------------------------

void __fastcall TPodrskaForm::FormShow(TObject *Sender)
{
	Timer1->Enabled = true;
	IdTCPClient1->Connect();
}
//---------------------------------------------------------------------------

void __fastcall TPodrskaForm::FormCreate(TObject *Sender)
{
	//InitializeCriticalSection(&criticalSection);
}
//---------------------------------------------------------------------------

void __fastcall TPodrskaForm::FormDestroy(TObject *Sender)
{
	//DeleteCriticalSection(&criticalSection);
}
//---------------------------------------------------------------------------


void __fastcall TPodrskaForm::Button1Click(TObject *Sender)
{
    _di_ITask task = TTask::Create([&]() {

			//if(IdTCPClient1->Socket->InputBufferIsEmpty()) {
				//if(IdTCPClient1->Socket->CheckForDataOnSource(1)){
					IdTCPClient1->Socket->WriteLn(Edit1->Text);
					TThread::Synchronize(TThread::CurrentThread, [&](){
						Memo1->Lines->Add(Edit1->Text);
					});

				//}

			//}
	});
	task->Start();

}
//---------------------------------------------------------------------------



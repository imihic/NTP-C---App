//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include <memory>
#include <System.JSON.readers.hpp>
#include <System.JSON.builders.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrimateljiForm *PrimateljiForm;
//---------------------------------------------------------------------------
__fastcall TPrimateljiForm::TPrimateljiForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPrimateljiForm::Button3Click(TObject *Sender)
{
     if(FileOpenDialog1->Execute()){

          if(FileExists(FileOpenDialog1->FileName)){


          //ucitaj json
          std::unique_ptr<TStringStream> jsonStream(new TStringStream);
          jsonStream->LoadFromFile(FileOpenDialog1->FileName);
          UnicodeString jsonDoc = jsonStream ->DataString;

          //kreiraj objekt koji predstavlja cijeli fajl
          std::unique_ptr<TStringReader> stringReader(new TStringReader(jsonDoc));
          std::unique_ptr<TJsonTextReader> jsonCitac(new TJsonTextReader (stringReader.get()));

          int count = 0;

          while(jsonCitac->Read()){
              UnicodeString token = jsonCitac->Value.ToString();

              if(token == "naziv") {
                  ListView1->Items->Add();
                  jsonCitac->Read();
                  ListView1->Items->Item[count]->Caption = count + 1;
                  ListView1->Items->Item[count]->SubItems->Add(jsonCitac->Value.ToString());
              }
              else if(token == "adresa" || token == "mjesto" || token == "drzava" || token == "racun" || token == "telefon"){
                  jsonCitac->Read();
                  ListView1->Items->Item[count]->SubItems->Add(jsonCitac->Value.ToString());
              }
              else if(token == "email") {
                  jsonCitac->Read();
                  ListView1->Items->Item[count]->SubItems->Add(jsonCitac->Value.ToString());
                  count++;
              }

          }

          }
          else {
               MessageDlg("Datoteka" + ExtractFileName(FileOpenDialog1->FileName) + " ne postoji!", mtInformation, TMsgDlgButtons() << mbOK, 0);
          }
     }
}
      


void __fastcall TPrimateljiForm::btnDodajNoviObicniNalogClick(TObject *Sender)
{

     ListView1->Items->Add();
     int last = ListView1->Items->Count-1;

     ListView1->Items->Item[last]->Caption = last + 1;
     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite naziv primatelja:", L""));
     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite adresu primatelja:", L""));
     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite mjesto primatelja:", L""));
     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite drzavu primatelja:", L""));
     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite racun primatelja:", L""));
     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite telefon primatelja:", L""));

     ListView1->Items->Item[last]->SubItems->Add(InputBox(L"Novi primatelj",
		 L"Upišite e-mail adresu primatelja:", L""));

     UnicodeString json;
     json = "{\n";
     json += "\"primatelji\": {\n";
     json += "\"popis\": [\n";
     for(int i = 0; i <ListView1->Items->Count; i++) {
     json +=
     "{\n"
		  "\"naziv\": \"" + ListView1->Items->Item[i]->SubItems->Strings[0] +"\",\n" +
          "\"adresa\": \"" + ListView1->Items->Item[i]->SubItems->Strings[1] +"\",\n" +
          "\"mjesto\": \"" + ListView1->Items->Item[i]->SubItems->Strings[2] +"\",\n" +
          "\"drzava\": \"" + ListView1->Items->Item[i]->SubItems->Strings[3] +"\",\n" +
          "\"racun\": \"" + ListView1->Items->Item[i]->SubItems->Strings[4] +"\",\n" +
          "\"telefon\": \"" + ListView1->Items->Item[i]->SubItems->Strings[5] +"\",\n" +
          "\"email\": \"" + ListView1->Items->Item[i]->SubItems->Strings[6] +"\",\n" +
	 "}\n";
     json += (i != last) ? ",\n" : "\n";
     }
     json += "]\n";
     json += "}\n";
     json += "}";

     //json = ((TJSONObject*)TJSONObject::ParseJSONValue(json))->Format(2);
     std::unique_ptr<TStringStream> ss(new TStringStream);
     ss->WriteString(json);
     ss->SaveToFile(FileOpenDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TPrimateljiForm::btnObrisiOdabraneObicneNalogeClick(TObject *Sender)

{
     ListView1->DeleteSelected();
     int last = ListView1->Items->Count-1;
     UnicodeString json;
     json = "{\n";
     json += "\"primatelji\": {\n";
     json += "\"popis\": [\n";
     for(int i = 0; i <ListView1->Items->Count; i++) {
     json +=
     "{\n"
		  "\"naziv\": \"" + ListView1->Items->Item[i]->SubItems->Strings[0] +"\",\n" +
          "\"adresa\": \"" + ListView1->Items->Item[i]->SubItems->Strings[1] +"\",\n" +
          "\"mjesto\": \"" + ListView1->Items->Item[i]->SubItems->Strings[2] +"\",\n" +
          "\"drzava\": \"" + ListView1->Items->Item[i]->SubItems->Strings[3] +"\",\n" +
          "\"racun\": \"" + ListView1->Items->Item[i]->SubItems->Strings[4] +"\",\n" +
          "\"telefon\": \"" + ListView1->Items->Item[i]->SubItems->Strings[5] +"\",\n" +
          "\"email\": \"" + ListView1->Items->Item[i]->SubItems->Strings[6] +"\",\n" +
	 "}\n";
     json += (i != last) ? ",\n" : "\n";
     }
     json += "]\n";
     json += "}\n";
     json += "}";

     //json = ((TJSONObject*)TJSONObject::ParseJSONValue(json))->Format(2);
     std::unique_ptr<TStringStream> ss(new TStringStream);
     ss->WriteString(json);
     ss->SaveToFile(FileOpenDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TPrimateljiForm::btnAzurirajOdabraniObicniNalogClick(TObject *Sender)

{    int last = ListView1->Items->Count-1;

     if(ListView1->ItemIndex == -1){
           return;
     }

     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[0] = (InputBox(L"Novi primatelj",
		 L"Upišite naziv primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[0]));
     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[1] = (InputBox(L"Novi primatelj",
		 L"Upišite adresu primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[1]));
     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[2] = (InputBox(L"Novi primatelj",
		 L"Upišite mjesto primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[2]));
     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[3] = (InputBox(L"Novi primatelj",
		 L"Upišite drzavu primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[3]));
     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[4] = (InputBox(L"Novi primatelj",
		 L"Upišite racun primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[4]));
     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[5] = (InputBox(L"Novi primatelj",
		 L"Upišite telefon primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[5]));
     ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[6] = (InputBox(L"Novi primatelj",
		 L"Upišite e-mail adresu primatelja:", ListView1->Items->Item[ListView1->ItemIndex]->SubItems->Strings[6]));


     UnicodeString json;
     json = "{\n";
     json += "\"primatelji\": {\n";
     json += "\"popis\": [\n";
     for(int i = 0; i <ListView1->Items->Count; i++) {
     json +=
     "{\n"
		  "\"naziv\": \"" + ListView1->Items->Item[i]->SubItems->Strings[0] +"\",\n" +
          "\"adresa\": \"" + ListView1->Items->Item[i]->SubItems->Strings[1] +"\",\n" +
          "\"mjesto\": \"" + ListView1->Items->Item[i]->SubItems->Strings[2] +"\",\n" +
          "\"drzava\": \"" + ListView1->Items->Item[i]->SubItems->Strings[3] +"\",\n" +
          "\"racun\": \"" + ListView1->Items->Item[i]->SubItems->Strings[4] +"\",\n" +
          "\"telefon\": \"" + ListView1->Items->Item[i]->SubItems->Strings[5] +"\",\n" +
          "\"email\": \"" + ListView1->Items->Item[i]->SubItems->Strings[6] +"\",\n" +
	 "}\n";
     json += (i != last) ? ",\n" : "\n";
     }
     json += "]\n";
     json += "}\n";
     json += "}";

     //json = ((TJSONObject*)TJSONObject::ParseJSONValue(json))->Format(2);
     std::unique_ptr<TStringStream> ss(new TStringStream);
     ss->WriteString(json);
     ss->SaveToFile(FileOpenDialog1->FileName);
}
//---------------------------------------------------------------------------


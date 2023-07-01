﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "AnketaBinaryFile.h"
#include <array>
#include <wchar.h>
#include <vector>
#include <algorithm>
//---------------------------------------------------------------------------
#pragma package(smart_init)


class Header {
    public:
           wchar_t naziv[26];
           float verzija;
           wchar_t autor[26];

           Header() {
               wcsncpy(naziv, L"anketa", 26);
               wcsncpy(autor, L"imihic206", 26);
               verzija = 1.0;
           }

};

class Pitanje {
    public:
           wchar_t pitanje[255];
		   int slobodanOdgovor;
		   int ljestvicaOdgovor;
		   int daNeOdgovor;

           Pitanje() = default;



		   /*
		   Pitanje(wchar_t* _pitanje, wchar_t* _slobodanOdgovor, wchar_t* _ljestvicaOdgovor, wchar_t* _daNeOdgovor){

                wcsncpy(pitanje, _pitanje, 255);
				wcsncpy(slobodanOdgovor, _slobodanOdgovor, 2);
				wcsncpy(ljestvicaOdgovor, _ljestvicaOdgovor, 2);
				wcsncpy(daNeOdgovor, _daNeOdgovor, 2);
		   }     */

           Pitanje(wchar_t* _pitanje, bool _slobodanOdgovor, bool _ljestvicaOdgovor, bool _daNeOdgovor){

                wcsncpy(pitanje, _pitanje, 255);

				if(_slobodanOdgovor){
					slobodanOdgovor=1;
                } else {
					slobodanOdgovor=0;
                }

                if(_ljestvicaOdgovor){
					ljestvicaOdgovor=1;
                } else {
					ljestvicaOdgovor=0;
                }

                if(_daNeOdgovor){
					daNeOdgovor=1;
                } else {
					daNeOdgovor=0;
                }

           }



};

class Anketa {
	  public:
			int redniBroj;
           wchar_t nazivAnkete[60];
           Pitanje pitanja[5];

		   Anketa() = default;

		   bool operator==(const Anketa& a1) const { return redniBroj== a1.redniBroj;}

		   // parameterized constructor
		   Anketa(const Anketa& a1){
			   this->redniBroj = a1.redniBroj;
			   wcsncpy(nazivAnkete, a1.nazivAnkete, 26);
               for(int i = 0; i < 5; i++){
                       pitanja[i] = a1.pitanja[i];
               }
           }


		   Anketa(wchar_t* _naziv, int redniBroj, Pitanje _pitanja[5]) {
			   this->redniBroj = redniBroj;
			   wcsncpy(nazivAnkete, _naziv, 60);
               for(int i = 0; i < 5; i++){
                       pitanja[i] = _pitanja[i];
               }

           }

		   Anketa(wchar_t* _naziv, int redniBroj, const std::array<Pitanje, 5> &_pitanja) {
			   this->redniBroj = redniBroj;
			   wcsncpy(nazivAnkete, _naziv, 60);
               for (int j = 0; j < _pitanja.size(); j++ ){
                   pitanja[j] = _pitanja[j];
               }
		   }
};




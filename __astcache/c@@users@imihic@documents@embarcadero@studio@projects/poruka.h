//---------------------------------------------------------------------------

#ifndef PorukaH
#define PorukaH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>


class Poruka {

	private:


	public:
    UnicodeString sifraAkcije;
	UnicodeString korisnik;
	UnicodeString sadrzaj;
	TMemoryStream datoteka;
	bool korisnikSaljeDatoteku;
	//Poruka(UnicodeString _kor, UnicodeString _sadrzaj);
	//Poruka(UnicodeString _kor, TMemoryStream _file);

};



//---------------------------------------------------------------------------

#pragma hdrstop

#include "PairInfoContext.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <IdContext.hpp>

class PairInfoContext: public TIdContext {

	private:
		UnicodeString korisnikId;
		UnicodeString rjesavateljId;
		bool uspjesnoUpareni;

	public:
		void setKorisnikId(UnicodeString id) {
			this->korisnikId = id;
		}
		UnicodeString getKorisnikId() {
			return this->korisnikId;
		}
		void setRjesavateljId(UnicodeString id) {
			this->korisnikId = id;
		}
		UnicodeString getRjesavateljId() {
			return this->korisnikId;
		}

		bool checkUspjesnoUpareni(){
			if(!this->korisnikId.isEmpty()){
				if(!this->rjesavateljId.isEmpty()){
					return true;
				}
			}
			return false;
		}

		void upariKorisnikaSRjesavateljem() {

		}

};
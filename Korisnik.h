// ---------------------------------------------------------------------------
#include <vcl.h>
#ifndef KorisnikH
#define KorisnikH
// ---------------------------------------------------------------------------
#endif

// Singleton
class Korisnik {

	private:
		Korisnik() = default;
        UnicodeString userName;
		TDateTime loginTime;
		boolean isAdmin;
	public:


		static Korisnik& GetInstance() {
			static Korisnik instance;
			return instance;
		}
		// Reci kompajleru da makne kopirni konstruktor
		Korisnik(const Korisnik&) = delete;
		// i konstruktor pridruzivanja
		Korisnik(Korisnik&&) = delete;
		// i operatore za kopiranje i pridruzivanje
		Korisnik& operator=(const Korisnik&) = delete;
		Korisnik& operator=(Korisnik&&) = delete;

		UnicodeString getUserName();
		void setUserName(UnicodeString username);
		TDateTime getLoginTime();
		void setLoginTime(TDateTime time);
		bool getIsAdmin();
		void setIsAdmin(bool boolean);
};

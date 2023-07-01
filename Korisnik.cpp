//---------------------------------------------------------------------------

#pragma hdrstop

#include "Korisnik.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

UnicodeString Korisnik::getUserName() {
    return userName;
}

void Korisnik::setUserName(UnicodeString username) {
    userName = username;
}

TDateTime Korisnik::getLoginTime() {
    return loginTime;
}

void Korisnik::setLoginTime(TDateTime time) {
    loginTime = time;
}

bool Korisnik::getIsAdmin() {
    return isAdmin;
}

void Korisnik::setIsAdmin(bool boolean) {
    isAdmin = boolean;
}


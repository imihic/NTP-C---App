//---------------------------------------------------------------------------

#ifndef utilH
#define utilH
//---------------------------------------------------------------------------
#endif
#include <iostream>
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
using namespace std;


class FormUtil
{
 public:
  static bool CheckOpened(string name);

 private:
  // Disallow creating an instance of this object
  CheckOpened() {}
};
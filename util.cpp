//---------------------------------------------------------------------------

#pragma hdrstop

#include "util.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


private bool CheckOpened(string name)
{
    Applic

    FormCollection fc = Application.OpenForms;

    foreach (Form frm in fc)
    {
        if (frm.Text == name)
        {
            return true;
        }
    }
    return false;
}
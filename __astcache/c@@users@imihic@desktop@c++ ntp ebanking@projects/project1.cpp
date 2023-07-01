//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include <memory>
#include <LoginForm.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit5.cpp", NaloziForm);
USEFORM("Unit3.cpp", PocetnaForm);
USEFORM("Settings.cpp", SettingsForm);
USEFORM("Unit6.cpp", RegistrationForm);
USEFORM("Unit9.cpp", AnketeAdminForm);
USEFORM("Unit8.cpp", PodrskaForm);
USEFORM("Unit7.cpp", PrimateljiForm);
USEFORM("LoginForm.cpp", FormLogin);
USEFORM("Main.cpp", MainForm);
USEFORM("NewPollForm.cpp", FormNovaAnketa);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		std::unique_ptr<TFormLogin> FormLogin(new TFormLogin(NULL));
		if(FormLogin->ShowModal() == mrOk) {
			TStyleManager::TrySetStyle("Cobalt XEMedia");
            Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TPocetnaForm), &PocetnaForm);
		Application->CreateForm(__classid(TSettingsForm), &SettingsForm);
		Application->CreateForm(__classid(TNaloziForm), &NaloziForm);
		Application->CreateForm(__classid(TPrimateljiForm), &PrimateljiForm);
		Application->CreateForm(__classid(TPodrskaForm), &PodrskaForm);
		Application->CreateForm(__classid(TAnketeAdminForm), &AnketeAdminForm);
		Application->Run();
		} else {
			ShowMessage("Login data is incorrect");
		}
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------

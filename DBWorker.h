//---------------------------------------------------------------------------

#ifndef DBWorkerH
#define DBWorkerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class DBWorkerThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall DBWorkerThread(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif

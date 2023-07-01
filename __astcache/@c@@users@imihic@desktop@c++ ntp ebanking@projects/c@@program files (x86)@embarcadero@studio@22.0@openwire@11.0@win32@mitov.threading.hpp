// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Threading.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_ThreadingHPP
#define Mitov_ThreadingHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Mitov.Attributes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <Mitov.Containers.List.hpp>
#include <System.SysUtils.hpp>
#include <Mitov.Containers.Common.hpp>
#include <Mitov.Elements.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Rtti.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mitov
{
namespace Threading
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBasicInterfacedObject;
__interface DELPHIINTERFACE IThread;
typedef  ::System::DelphiInterface<IThread> _di_IThread;
class DELPHICLASS TBasicThread;
class DELPHICLASS TRepeatThread;
class DELPHICLASS TPeriodicThread;
template<typename T> __interface DELPHIINTERFACE ILPVariableAcces__1;
#ifdef __clang__
template<typename T> using _di_ILPVariableAcces__1 =  ::System::DelphiInterface<ILPVariableAcces__1<T>>;
#endif
class DELPHICLASS TLockAccess;
__interface DELPHIINTERFACE IBasicSynchronizationObject;
typedef  ::System::DelphiInterface<IBasicSynchronizationObject> _di_IBasicSynchronizationObject;
__interface DELPHIINTERFACE ICriticalSection;
typedef  ::System::DelphiInterface<ICriticalSection> _di_ICriticalSection;
class DELPHICLASS TCriticalSection;
__interface DELPHIINTERFACE ICriticalSectionLock;
typedef  ::System::DelphiInterface<ICriticalSectionLock> _di_ICriticalSectionLock;
class DELPHICLASS TCriticalSectionLock;
__interface DELPHIINTERFACE IEvent;
typedef  ::System::DelphiInterface<IEvent> _di_IEvent;
class DELPHICLASS TEvent;
__interface DELPHIINTERFACE IMutex;
typedef  ::System::DelphiInterface<IMutex> _di_IMutex;
class DELPHICLASS TMutex;
__interface DELPHIINTERFACE ISemaphore;
typedef  ::System::DelphiInterface<ISemaphore> _di_ISemaphore;
class DELPHICLASS TSemaphore;
__interface DELPHIINTERFACE ILockSection;
typedef  ::System::DelphiInterface<ILockSection> _di_ILockSection;
class DELPHICLASS TLockSection;
__interface DELPHIINTERFACE IBasicLock;
typedef  ::System::DelphiInterface<IBasicLock> _di_IBasicLock;
class DELPHICLASS TBasicLock;
class DELPHICLASS TLock;
template<typename T> struct TLockedVariable__1;
__interface DELPHIINTERFACE IProcessingThread;
typedef  ::System::DelphiInterface<IProcessingThread> _di_IProcessingThread;
class DELPHICLASS TProcessingThread;
__interface DELPHIINTERFACE IAnimationClockThread;
typedef  ::System::DelphiInterface<IAnimationClockThread> _di_IAnimationClockThread;
__interface DELPHIINTERFACE IProcArrayList;
typedef  ::System::DelphiInterface<IProcArrayList> _di_IProcArrayList;
class DELPHICLASS TProcArrayList;
class DELPHICLASS TAnimationClock;
__interface DELPHIINTERFACE IMainThreadExecute;
typedef  ::System::DelphiInterface<IMainThreadExecute> _di_IMainThreadExecute;
class DELPHICLASS TMainThreadExecute;
__interface DELPHIINTERFACE IHiddenWindowThread;
typedef  ::System::DelphiInterface<IHiddenWindowThread> _di_IHiddenWindowThread;
class DELPHICLASS THiddenWindowThread;
__interface DELPHIINTERFACE IExecution;
typedef  ::System::DelphiInterface<IExecution> _di_IExecution;
__interface DELPHIINTERFACE IExecutionTask;
typedef  ::System::DelphiInterface<IExecutionTask> _di_IExecutionTask;
__interface DELPHIINTERFACE IExecutor;
typedef  ::System::DelphiInterface<IExecutor> _di_IExecutor;
class DELPHICLASS TDirectExecutor;
class DELPHICLASS TBasicThreadExecutor;
__interface DELPHIINTERFACE IThreadExecutor;
typedef  ::System::DelphiInterface<IThreadExecutor> _di_IThreadExecutor;
__interface DELPHIINTERFACE IThreadPoolExecutor;
typedef  ::System::DelphiInterface<IThreadPoolExecutor> _di_IThreadPoolExecutor;
class DELPHICLASS TThreadPoolExecutor;
class DELPHICLASS TThreadExecutor;
class DELPHICLASS TExecutionTask;
class DELPHICLASS TSimpleReadLockSection;
class DELPHICLASS TSimpleLockSection;
class DELPHICLASS TSimpleWriteLockSection;
class DELPHICLASS TSimpleStopLockSection;
class DELPHICLASS TSimpleUnlockSection;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicInterfacedObject : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	__classmethod virtual void __fastcall InitDefaults(TBasicInterfacedObject* AInstance);
	__classmethod virtual void __fastcall BeforeDestroyDefaults(TBasicInterfacedObject* AInstance);
	__classmethod virtual void __fastcall DestroyDefaults(TBasicInterfacedObject* AInstance);
	
public:
	virtual void __fastcall BeforeDestruction();
	__fastcall TBasicInterfacedObject();
	__fastcall virtual ~TBasicInterfacedObject();
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C4DF89CB-D188-4B4B-923B-1E0428EDFDE5}") IThread  : public  ::System::IInterface 
{
	virtual void __fastcall Terminate() = 0 ;
	virtual bool __fastcall IsTerminated() = 0 ;
	virtual TBasicThread* __fastcall GetInstance() = 0 ;
	virtual unsigned __fastcall WaitFor() = 0 ;
	virtual  ::System::Classes::TThreadPriority __fastcall GetPriority() = 0 ;
	virtual void __fastcall SetPriority( ::System::Classes::TThreadPriority AValue) = 0 ;
	__property  ::System::Classes::TThreadPriority Priority = {read=GetPriority, write=SetPriority};
};

class PASCALIMPLEMENTATION TBasicThread : public  ::System::Classes::TThread
{
	typedef  ::System::Classes::TThread inherited;
	
protected:
	 ::System::UnicodeString FName;
	int FRefCount;
	void __fastcall SetName();
	HIDESBASE virtual void __fastcall Terminate();
	virtual bool __fastcall IsTerminated();
	virtual void __fastcall Execute();
	virtual void __fastcall IntExecute();
	virtual void __fastcall ExecuteLoop();
	HIDESBASE  ::System::Classes::TThreadPriority __fastcall GetPriority();
	HIDESBASE void __fastcall SetPriority( ::System::Classes::TThreadPriority AValue);
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	__classmethod virtual void __fastcall InitDefaults( ::System::TObject* AOwner, TBasicThread* AInstance);
	TBasicThread* __fastcall GetInstance();
	
public:
	__classmethod unsigned __stdcall GetCurrentThreadId();
	__property Terminated;
	__property  ::System::UnicodeString Name = {read=FName};
	virtual void __fastcall BeforeDestruction();
	__fastcall TBasicThread(const  ::System::UnicodeString AName);
	__fastcall TBasicThread( ::System::Classes::TComponent* AComponent, const  ::System::UnicodeString ANameSuffix);
	__fastcall virtual ~TBasicThread();
private:
	void *__IThread;	// IThread 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C4DF89CB-D188-4B4B-923B-1E0428EDFDE5}
	operator _di_IThread()
	{
		_di_IThread intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IThread*(void) { return (IThread*)&__IThread; }
	#endif
	
};


class PASCALIMPLEMENTATION TRepeatThread : public TBasicThread
{
	typedef TBasicThread inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1<TBasicThread*> > FProcThread;
	 ::System::Sysutils::_di_TProc FProcTerminate;
	virtual void __fastcall ExecuteLoop();
	virtual void __fastcall Terminate();
	
public:
	__fastcall TRepeatThread(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TBasicThread*> > AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
	__fastcall TRepeatThread(const  ::System::UnicodeString AName, const  ::System::Sysutils::_di_TProc AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
	__fastcall TRepeatThread( ::System::Classes::TComponent* AComponent, const  ::System::UnicodeString ANameSuffix, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TBasicThread*> > AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
	__fastcall TRepeatThread( ::System::Classes::TComponent* AComponent, const  ::System::UnicodeString ANameSuffix, const  ::System::Sysutils::_di_TProc AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
public:
	/* TBasicThread.Destroy */ inline __fastcall virtual ~TRepeatThread() { }
	
};


class PASCALIMPLEMENTATION TPeriodicThread : public TBasicThread
{
	typedef TBasicThread inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1<TBasicThread*> > FProcThread;
	 ::System::Sysutils::_di_TProc FProcTerminate;
	_di_IEvent FEvent;
	int FPeriod;
	virtual void __fastcall ExecuteLoop();
	virtual void __fastcall Terminate();
	
public:
	__fastcall TPeriodicThread(const  ::System::UnicodeString AName, int APeriod, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TBasicThread*> > AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
	__fastcall TPeriodicThread(const  ::System::UnicodeString AName, int APeriod, const  ::System::Sysutils::_di_TProc AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
	__fastcall TPeriodicThread( ::System::Classes::TComponent* AComponent, const  ::System::UnicodeString ANameSuffix, int APeriod, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TBasicThread*> > AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
	__fastcall TPeriodicThread( ::System::Classes::TComponent* AComponent, const  ::System::UnicodeString ANameSuffix, int APeriod, const  ::System::Sysutils::_di_TProc AProc, const  ::System::Sysutils::_di_TProc AOnTerminate)/* overload */;
public:
	/* TBasicThread.Destroy */ inline __fastcall virtual ~TPeriodicThread() { }
	
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface  INTERFACE_UUID("{CA86A0E5-8458-4ACD-962D-8B8B09807BD0}") ILPVariableAcces__1  : public  ::System::IInterface 
{
	virtual void __fastcall SetValue(T AValue) = 0 ;
	virtual T __fastcall GetValue() = 0 ;
	__property T Value = {read=GetValue, write=SetValue};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockAccess : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
	
protected:
	__interface DELPHIINTERFACE TProcStd;
	typedef  ::System::DelphiInterface<TProcStd> _di_TProcStd;
	__interface TProcStd  : public  ::System::IInterface 
	{
		virtual void __stdcall Invoke() = 0 ;
	};
	
	template<typename TResult> __interface DELPHIINTERFACE TFuncStd__1;
	#ifdef __clang__
	template<typename TResult> using _di_TFuncStd__1 =  ::System::DelphiInterface<TFuncStd__1<TResult>>;
	#endif
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	template<typename TResult> __interface TFuncStd__1  : public  ::System::IInterface 
	{
		virtual TResult __stdcall Invoke() = 0 ;
	};
	
	
public:
	void __stdcall Execute(const _di_TProcStd ALambda)/* overload */;
	void __stdcall ExecuteLeave(const _di_TProcStd ALambda)/* overload */;
	template<typename T> T __stdcall Execute(const  ::System::DelphiInterface<TFuncStd__1<T> > ALambda)/* overload */;
	template<typename T> T __stdcall ExecuteLeave(const  ::System::DelphiInterface<TFuncStd__1<T> > ALambda)/* overload */;
	void __fastcall Execute(const  ::System::Sysutils::_di_TProc ALambda)/* overload */;
	void __fastcall ExecuteLeave(const  ::System::Sysutils::_di_TProc ALambda)/* overload */;
	template<typename T> T __fastcall Execute(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1<T> > ALambda)/* overload */;
	template<typename T> T __fastcall ExecuteLeave(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1<T> > ALambda)/* overload */;
	template<typename T> void __fastcall Setter(T &AMember, T AValue);
	template<typename T> T __fastcall Getter(T &AMember);
	template<typename T> T __fastcall GetterSet(T &AMember, T AValue);
	void __fastcall ExecuteAssigned( ::System::Sysutils::_di_TProc &AProc);
	
protected:
	virtual void __stdcall Enter() = 0 ;
	virtual void __stdcall Leave() = 0 ;
	TLockAccess* __stdcall Access();
public:
	/* TObject.Create */ inline __fastcall TLockAccess() :  ::System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TLockAccess() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{93EC8A36-C5E6-462E-A2B1-2B11B5086200}") IBasicSynchronizationObject  : public  ::System::IInterface 
{
	virtual NativeUInt __fastcall GetHandle() = 0 ;
};

__interface  INTERFACE_UUID("{AEF7D6F7-D75D-4321-A1CC-3D883EE547C7}") ICriticalSection  : public IBasicSynchronizationObject 
{
	virtual void __stdcall Enter() = 0 ;
	virtual void __stdcall Leave() = 0 ;
	virtual TLockAccess* __stdcall Access() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCriticalSection : public TLockAccess
{
	typedef TLockAccess inherited;
	
protected:
	_RTL_CRITICAL_SECTION FSection;
	
public:
	__fastcall TCriticalSection();
	__fastcall virtual ~TCriticalSection();
	virtual void __stdcall Enter();
	virtual void __stdcall Leave();
	NativeUInt __fastcall GetHandle();
private:
	void *__ICriticalSection;	// ICriticalSection 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AEF7D6F7-D75D-4321-A1CC-3D883EE547C7}
	operator _di_ICriticalSection()
	{
		_di_ICriticalSection intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICriticalSection*(void) { return (ICriticalSection*)&__ICriticalSection; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{6DFB975B-32D5-4980-9D7D-9ECFB2779682}") ICriticalSectionLock  : public  ::System::IInterface 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCriticalSectionLock : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
private:
	_di_ICriticalSection FSection;
	
public:
	__fastcall TCriticalSectionLock(const _di_ICriticalSection ASection);
	__fastcall virtual ~TCriticalSectionLock();
private:
	void *__ICriticalSectionLock;	// ICriticalSectionLock 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DFB975B-32D5-4980-9D7D-9ECFB2779682}
	operator _di_ICriticalSectionLock()
	{
		_di_ICriticalSectionLock intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICriticalSectionLock*(void) { return (ICriticalSectionLock*)&__ICriticalSectionLock; }
	#endif
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TEventResetMode : unsigned char { ermAutomatic, ermManual };

__interface  INTERFACE_UUID("{2264AD8B-1C4D-44E9-993B-3ED39C33ACDC}") IEvent  : public IBasicSynchronizationObject 
{
	virtual void __stdcall Signal() = 0 ;
	virtual void __stdcall Reset() = 0 ;
	virtual void __stdcall SetState(bool AValue) = 0 ;
	virtual bool __stdcall WaitFor(unsigned ATimeout = (unsigned)(0xffffffff)) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEvent : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	NativeUInt FHandle;
	
public:
	__fastcall TEvent(const  ::System::UnicodeString AName, TEventResetMode AResetMode, bool AInitialState)/* overload */;
	__fastcall TEvent(TEventResetMode AResetMode, bool AInitialState)/* overload */;
	__fastcall TEvent(const  ::System::UnicodeString AName, bool AInitialState)/* overload */;
	__fastcall TEvent(bool AInitialState)/* overload */;
	__fastcall TEvent()/* overload */;
	__fastcall virtual ~TEvent();
	void __stdcall Signal();
	void __stdcall Reset();
	void __stdcall SetState(bool AValue);
	bool __stdcall WaitFor(unsigned ATimeout = (unsigned)(0xffffffff));
	NativeUInt __fastcall GetHandle();
private:
	void *__IEvent;	// IEvent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {2264AD8B-1C4D-44E9-993B-3ED39C33ACDC}
	operator _di_IEvent()
	{
		_di_IEvent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEvent*(void) { return (IEvent*)&__IEvent; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BB70B42E-C495-4CE6-BBEA-076864F121B5}") IMutex  : public IBasicSynchronizationObject 
{
	virtual bool __stdcall MutexAcquire(unsigned AMilliseconds = (unsigned)(0xffffffff)) = 0 ;
	virtual bool __stdcall MutexRelease() = 0 ;
	virtual TMutex* __stdcall Access() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMutex : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
	
protected:
	__interface DELPHIINTERFACE TProcStd;
	typedef  ::System::DelphiInterface<TProcStd> _di_TProcStd;
	__interface TProcStd  : public  ::System::IInterface 
	{
		virtual void __stdcall Invoke() = 0 ;
	};
	
	template<typename TResult> __interface DELPHIINTERFACE TFuncStd__1;
	#ifdef __clang__
	template<typename TResult> using _di_TFuncStd__1 =  ::System::DelphiInterface<TFuncStd__1<TResult>>;
	#endif
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	template<typename TResult> __interface TFuncStd__1  : public  ::System::IInterface 
	{
		virtual TResult __stdcall Invoke() = 0 ;
	};
	
	
private:
	NativeUInt FHandle;
	
protected:
	TMutex* __stdcall Access();
	
public:
	void __stdcall Execute(const _di_TProcStd ALambda, unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff))/* overload */;
	bool __stdcall ExecuteLeave(const _di_TProcStd ALambda, unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff))/* overload */;
	template<typename T> T __stdcall Execute(const  ::System::DelphiInterface<TFuncStd__1<T> > ALambda, unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff))/* overload */;
	void __fastcall Execute(const  ::System::Sysutils::_di_TProc ALambda, unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff))/* overload */;
	bool __fastcall ExecuteLeave(const  ::System::Sysutils::_di_TProc ALambda, unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff))/* overload */;
	template<typename T> T __fastcall Execute(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1<T> > ALambda, unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff))/* overload */;
	__fastcall TMutex(const  ::System::UnicodeString AName, bool AInitialOwner)/* overload */;
	__fastcall TMutex(bool AInitialOwner)/* overload */;
	__fastcall TMutex()/* overload */;
	__fastcall virtual ~TMutex();
	bool __stdcall MutexAcquire(unsigned ATimeoutMilliseconds = (unsigned)(0xffffffff));
	bool __stdcall MutexRelease();
	NativeUInt __fastcall GetHandle();
private:
	void *__IMutex;	// IMutex 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BB70B42E-C495-4CE6-BBEA-076864F121B5}
	operator _di_IMutex()
	{
		_di_IMutex intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMutex*(void) { return (IMutex*)&__IMutex; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{AC8BEB70-91E5-4278-9325-9B34A16A25E5}") ISemaphore  : public IBasicSynchronizationObject 
{
	virtual bool __stdcall Increment(int ACount = 0x1) = 0 ;
	virtual bool __stdcall Decrement(unsigned AMilliseconds = (unsigned)(0xffffffff)) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSemaphore : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
private:
	NativeUInt FHandle;
	
public:
	__fastcall TSemaphore(int AInitialCount, int AMaximumCount);
	__fastcall virtual ~TSemaphore();
	bool __stdcall Increment(int ACount = 0x1);
	bool __stdcall Decrement(unsigned AMilliseconds = (unsigned)(0xffffffff));
	NativeUInt __fastcall GetHandle();
private:
	void *__ISemaphore;	// ISemaphore 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AC8BEB70-91E5-4278-9325-9B34A16A25E5}
	operator _di_ISemaphore()
	{
		_di_ISemaphore intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISemaphore*(void) { return (ISemaphore*)&__ISemaphore; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{01621A5C-9936-4BEB-BF6F-5D6754E65786}") ILockSection  : public  ::System::IInterface 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockSection : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TLockSection() :  ::System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TLockSection() { }
	
private:
	void *__ILockSection;	// ILockSection 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {01621A5C-9936-4BEB-BF6F-5D6754E65786}
	operator _di_ILockSection()
	{
		_di_ILockSection intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockSection*(void) { return (ILockSection*)&__ILockSection; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{66C8D1BF-FA12-48E8-B0C9-60A652FA80D9}") IBasicLock  : public  ::System::IInterface 
{
	virtual TBasicLock* __fastcall GetInstance() = 0 ;
	virtual _di_ILockSection __fastcall ReadLock() = 0 ;
	virtual _di_ILockSection __fastcall WriteLock() = 0 ;
	virtual _di_ILockSection __fastcall StopLock() = 0 ;
	virtual _di_ILockSection __fastcall UnlockAll() = 0 ;
	virtual _di_ILockSection __fastcall UnlockAllLockInOrder(const _di_IBasicLock AFirstLock) = 0 ;
	virtual void __fastcall ExecuteRead(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall ExecuteWrite(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall ExecuteStop(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall ExecuteUnlockAll(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall ExecuteUnlockAllLockInOrder(const _di_IBasicLock AFirstLock, const  ::System::Sysutils::_di_TProc AProc) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicLock : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
public:
	virtual TBasicLock* __fastcall GetInstance();
	virtual _di_ILockSection __fastcall ReadLock() = 0 ;
	virtual _di_ILockSection __fastcall WriteLock() = 0 ;
	virtual _di_ILockSection __fastcall StopLock() = 0 ;
	virtual _di_ILockSection __fastcall UnlockAll() = 0 ;
	virtual _di_ILockSection __fastcall UnlockAllLockInOrder(const _di_IBasicLock AFirstLock) = 0 ;
	void __fastcall ExecuteRead(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall ExecuteWrite(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall ExecuteStop(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall ExecuteUnlockAll(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall ExecuteUnlockAllLockInOrder(const _di_IBasicLock AFirstLock, const  ::System::Sysutils::_di_TProc AProc);
	__classmethod _di_IBasicLock __fastcall Create();
	__fastcall TBasicLock();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicLock() { }
	
private:
	void *__IBasicLock;	// IBasicLock 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {66C8D1BF-FA12-48E8-B0C9-60A652FA80D9}
	operator _di_IBasicLock()
	{
		_di_IBasicLock intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IBasicLock*(void) { return (IBasicLock*)&__IBasicLock; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLock : public TBasicLock
{
	typedef TBasicLock inherited;
	
protected:
	_di_ICriticalSection FIntLockSection;
	int FCountStopLocks;
	int FCountStopLocksOwner;
	int FCountLocks;
	int FInStopCount;
	unsigned FOwningThread;
	_di_IMutex FLockMutex;
	bool __stdcall BeginRead(unsigned ATimeOut);
	bool __stdcall BeginWrite(unsigned ATimeOut);
	void __stdcall EndRead();
	void __stdcall EndWrite();
	void __stdcall BeginStop();
	void __stdcall EndStop();
	void __stdcall IntLock();
	void __stdcall IntUnlock();
	void __fastcall IntBeginWrite(int ACount, int ACountOther);
	
public:
	virtual _di_ILockSection __fastcall ReadLock();
	virtual _di_ILockSection __fastcall WriteLock();
	virtual _di_ILockSection __fastcall StopLock();
	virtual _di_ILockSection __fastcall UnlockAll();
	virtual _di_ILockSection __fastcall UnlockAllLockInOrder(const _di_IBasicLock AFirstLock);
	__classmethod _di_IBasicLock __fastcall Create();
	__fastcall TLock();
	__fastcall virtual ~TLock();
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TLockedVariable__1
{
	
private:
	typedef T *PValue;
	
	class DELPHICLASS TVariableAcces;
	#pragma pack(push,4)
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	class PASCALIMPLEMENTATION TVariableAcces : public  ::System::TInterfacedObject
	{
		typedef  ::System::TInterfacedObject inherited;
		
	protected:
		typename TLockedVariable__1<T>::PValue FValue;
		_di_ICriticalSection FSection;
		void __fastcall SetValue(T AValue);
		T __fastcall GetValue();
		
	public:
		__fastcall TVariableAcces(TLockedVariable__1<T>::PValue AValue, const _di_ICriticalSection ASection);
		__fastcall virtual ~TVariableAcces();
private:
		void *__ILPVariableAcces__1;	// ILPVariableAcces__1<T> 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {CA86A0E5-8458-4ACD-962D-8B8B09807BD0}
		operator  ::System::DelphiInterface<ILPVariableAcces__1<T> >()
		{
			 ::System::DelphiInterface<ILPVariableAcces__1<T> > intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator ILPVariableAcces__1<T>*(void) { return (ILPVariableAcces__1<T>*)&__ILPVariableAcces__1; }
		#endif
		
	};
	
	#pragma pack(pop)
	
	__interface DELPHIINTERFACE TAccessFunc;
	typedef  ::System::DelphiInterface<TAccessFunc> _di_TAccessFunc;
	// Template declaration generated by Delphi parameterized types is
	// used only for accessing Delphi variables and fields.
	// Don't instantiate with new type parameters in user code.
	__interface TAccessFunc  : public  ::System::IInterface 
	{
		virtual void __fastcall Invoke(T &AValue) = 0 ;
	};
	
	
private:
	T FValue;
	_di_ICriticalSection FSection;
	void __fastcall CheckSection();
	void __fastcall SetValueProp(T AValue);
	T __fastcall GetValue();
	
public:
	void __fastcall InitSet(T AValue);
	void __fastcall Init();
	 ::System::DelphiInterface<ILPVariableAcces__1<T> > __fastcall GetAccess();
	void __fastcall Execute(const _di_TAccessFunc AFunc);
	bool __fastcall SetValue(T AValue);
	__fastcall operator T();
	__property T Value = {read=GetValue, write=SetValueProp};
};


__interface  INTERFACE_UUID("{7E2064E0-20B9-4FC2-A680-0170FEADE6E0}") IProcessingThread  : public IThread 
{
	virtual  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > __stdcall Process(const  ::System::Sysutils::_di_TProc AOnExecute, bool AProcessFirst = false) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > __stdcall Process(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > AOnExecute, bool AProcessFirst = false) = 0 /* overload */;
	virtual void __stdcall ProcessBlocking(const  ::System::Sysutils::_di_TProc AOnExecute, bool AProcessFirst = false) = 0 /* overload */;
	virtual void __stdcall ProcessBlocking(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > AOnExecute, bool AProcessFirst = false) = 0 /* overload */;
	virtual void __stdcall AbortBlocking() = 0 ;
	virtual void __stdcall Cancel(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > AOnExecute) = 0 ;
	virtual void __stdcall Clear() = 0 ;
	virtual int __stdcall GetCountWaiting() = 0 ;
	__property int CountWaiting = {read=GetCountWaiting};
};

class PASCALIMPLEMENTATION TProcessingThread : public TBasicThread
{
	typedef TBasicThread inherited;
	
	
protected:
	__interface DELPHIINTERFACE IProcLinkedList;
	typedef  ::System::DelphiInterface<IProcLinkedList> _di_IProcLinkedList;
	__interface  INTERFACE_UUID("{3BBABDAD-EC2E-4179-8864-8B440F4086C3}") IProcLinkedList  : public  ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > > 
	{
		
	};
	
	class DELPHICLASS TProcLinkedList;
	#pragma pack(push,4)
	class PASCALIMPLEMENTATION TProcLinkedList : public  ::Mitov::Containers::List::TLinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > >
	{
		typedef  ::Mitov::Containers::List::TLinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > > inherited;
		
	public:
		/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc<Mitov_Threading_TBasicThread,System_Boolean>>.Create */ inline __fastcall TProcLinkedList() :  ::Mitov::Containers::List::TLinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > >() { }
		/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc<Mitov_Threading_TBasicThread,System_Boolean>>.CreateEnumerator */ inline __fastcall TProcLinkedList( ::System::Generics::Collections::TEnumerator__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > >* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > >(AEnumerator) { }
		/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc<Mitov_Threading_TBasicThread,System_Boolean>>.CreateEnumerator */ inline __fastcall TProcLinkedList(const  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > > > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > >(AEnumerator) { }
		/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc<Mitov_Threading_TBasicThread,System_Boolean>>.CreateCopy */ inline __fastcall TProcLinkedList(const  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > > > AOther) :  ::Mitov::Containers::List::TLinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > >(AOther) { }
		/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc<Mitov_Threading_TBasicThread,System_Boolean>>.Destroy */ inline __fastcall virtual ~TProcLinkedList() { }
		
private:
		void *__TProcessingThread_IProcLinkedList;	// TProcessingThread::IProcLinkedList 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {3BBABDAD-EC2E-4179-8864-8B440F4086C3}
		operator TProcessingThread::_di_IProcLinkedList()
		{
			TProcessingThread::_di_IProcLinkedList intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator TProcessingThread::IProcLinkedList*(void) { return (TProcessingThread::IProcLinkedList*)&__TProcessingThread_IProcLinkedList; }
		#endif
		
	};
	
	#pragma pack(pop)
	
	
protected:
	_di_ICriticalSection FSection;
	_di_IProcLinkedList FOnProcessList;
	_di_IEvent FEvent;
	_di_IEvent FExecutedEvent;
	 ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > FInExecution;
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IProcessingThread> > FOnEmpty;
	_di_ICriticalSection FBlockingEventsSection;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<_di_IEvent> > FBlockingEvents;
	virtual void __fastcall ExecuteLoop();
	
public:
	virtual  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > __stdcall Process(const  ::System::Sysutils::_di_TProc AOnExecute, bool AProcessFirst = false)/* overload */;
	virtual  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > __stdcall Process(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > AOnExecute, bool AProcessFirst = false)/* overload */;
	void __stdcall ProcessBlocking(const  ::System::Sysutils::_di_TProc AOnExecute, bool AProcessFirst = false)/* overload */;
	void __stdcall ProcessBlocking(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > AOnExecute, bool AProcessFirst = false)/* overload */;
	void __stdcall AbortBlocking();
	void __stdcall Cancel(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > AOnExecute);
	void __stdcall Clear();
	int __stdcall GetCountWaiting();
	virtual void __fastcall Terminate();
	__fastcall TProcessingThread(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IProcessingThread> > AOnEmpty);
	__fastcall TProcessingThread( ::System::Classes::TComponent* AOwner, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IProcessingThread> > AOnEmpty);
	__fastcall TProcessingThread( ::System::Classes::TComponent* AOwner, const  ::System::UnicodeString ANameSuffix, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IProcessingThread> > AOnEmpty);
	__fastcall virtual ~TProcessingThread();
private:
	void *__IProcessingThread;	// IProcessingThread 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7E2064E0-20B9-4FC2-A680-0170FEADE6E0}
	operator _di_IProcessingThread()
	{
		_di_IProcessingThread intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IProcessingThread*(void) { return (IProcessingThread*)&__IProcessingThread; }
	#endif
	
};


__interface  INTERFACE_UUID("{1A408228-3520-4D98-8344-CDC28FC44963}") IAnimationClockThread  : public IThread 
{
	virtual void __fastcall Stop() = 0 ;
	virtual void __fastcall Start() = 0 ;
};

__interface  INTERFACE_UUID("{A36C0447-A3C2-4BE4-8273-5F16374ACC31}") IProcArrayList  : public  ::Mitov::Containers::List::IArrayList__1< ::System::Sysutils::_di_TProc> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TProcArrayList : public  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc>
{
	typedef  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<System_SysUtils_TProc>.Create */ inline __fastcall TProcArrayList() :  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc>() { }
	/* {Mitov_Containers_List}TArrayList<System_SysUtils_TProc>.CreateEnumerator */ inline __fastcall TProcArrayList( ::System::Generics::Collections::TEnumerator__1< ::System::Sysutils::_di_TProc>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<System_SysUtils_TProc>.CreateEnumerator */ inline __fastcall TProcArrayList(const  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::Sysutils::_di_TProc> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<System_SysUtils_TProc>.CreateCopy */ inline __fastcall TProcArrayList(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::Sysutils::_di_TProc> > AOther) :  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<System_SysUtils_TProc>.CreateArray */ inline __fastcall TProcArrayList(const  ::System::Sysutils::_di_TProc *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1< ::System::Sysutils::_di_TProc>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<System_SysUtils_TProc>.Destroy */ inline __fastcall virtual ~TProcArrayList() { }
	
private:
	void *__IProcArrayList;	// IProcArrayList 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A36C0447-A3C2-4BE4-8273-5F16374ACC31}
	operator _di_IProcArrayList()
	{
		_di_IProcArrayList intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IProcArrayList*(void) { return (IProcArrayList*)&__IProcArrayList; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAnimationClock : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
protected:
	static _di_IEvent FEnabledEvent;
	static _di_IProcArrayList FList;
	static _di_ICriticalSection FCriticalSection;
	static _di_IThread FClockThread;
	__classmethod void __fastcall Init();
	__classmethod void __fastcall Close();
	__classmethod void __fastcall Clock();
	
public:
	__classmethod  ::System::Sysutils::_di_TProc __fastcall Subscribe(const  ::System::Sysutils::_di_TProc ACallback);
	__classmethod bool __fastcall Unsubscribe( ::System::Sysutils::_di_TProc &AHandle);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall TAnimationClock() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAnimationClock() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{DE850B82-7625-4911-B21A-24B30E6FADB4}") IMainThreadExecute  : public  ::System::IInterface 
{
	virtual void __fastcall Execute(bool AForcePost, const  ::System::Sysutils::_di_TProc AOnExecute, bool AIgnoreMultiple = false) = 0 /* overload */;
	virtual void __fastcall Execute( ::System::TObject* AObject, bool AForcePost, const  ::System::Sysutils::_di_TProc AOnExecute, bool AIgnoreMultiple = false) = 0 /* overload */;
	virtual void __fastcall Clear( ::System::TObject* AObject = ( ::System::TObject*)(0x0)) = 0 ;
	virtual void __fastcall ClearMainThread( ::System::TObject* AObject = ( ::System::TObject*)(0x0)) = 0 ;
	virtual void __fastcall SyncNotify() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMainThreadExecute : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	_di_ICriticalSection FSection;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::Mitov::Elements::TRecTuple__2< ::System::TObject*, ::System::Sysutils::_di_TProc> > > FOnNotifyList;
	bool FSignaled;
	void __fastcall SyncNotify();
	
public:
	void __fastcall Execute(bool AForcePost, const  ::System::Sysutils::_di_TProc AOnExecute, bool AIgnoreMultiple = false)/* overload */;
	void __fastcall Execute( ::System::TObject* AObject, bool AForcePost, const  ::System::Sysutils::_di_TProc AOnExecute, bool AIgnoreMultiple = false)/* overload */;
	void __fastcall Clear( ::System::TObject* AObject = ( ::System::TObject*)(0x0));
	void __fastcall ClearMainThread( ::System::TObject* AObject = ( ::System::TObject*)(0x0));
	__fastcall TMainThreadExecute();
	__fastcall virtual ~TMainThreadExecute();
private:
	void *__IMainThreadExecute;	// IMainThreadExecute 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE850B82-7625-4911-B21A-24B30E6FADB4}
	operator _di_IMainThreadExecute()
	{
		_di_IMainThreadExecute intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMainThreadExecute*(void) { return (IMainThreadExecute*)&__IMainThreadExecute; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F3BDA387-500B-458E-A182-BF936A7FCEA8}") IHiddenWindowThread  : public IThread 
{
	virtual NativeUInt __fastcall GetWindowHandle() = 0 ;
	virtual _di_IEvent __fastcall GetWindowReady() = 0 ;
	virtual void __stdcall Process(const  ::System::Sysutils::_di_TProc AOnExecute) = 0 ;
	__property NativeUInt WindowHandle = {read=GetWindowHandle};
	__property _di_IEvent WindowReady = {read=GetWindowReady};
};

class PASCALIMPLEMENTATION THiddenWindowThread : public TBasicThread
{
	typedef TBasicThread inherited;
	
protected:
	NativeUInt FHiddenWnd;
	_di_ICriticalSection FSection;
	_di_IProcArrayList FOnNotifyList;
	_di_IEvent FCompleted;
	_di_IEvent FWindowReady;
	NativeUInt __fastcall GetWindowHandle();
	_di_IEvent __fastcall GetWindowReady();
	void __fastcall WndProc( ::Winapi::Messages::TMessage &AMessage);
	virtual void __fastcall IntExecute();
	
public:
	void __stdcall Process(const  ::System::Sysutils::_di_TProc AOnExecute);
	__fastcall THiddenWindowThread( ::System::Classes::TComponent* AOwner, const  ::System::UnicodeString ANameSuffix);
	__fastcall THiddenWindowThread(const  ::System::UnicodeString AName);
	__fastcall virtual ~THiddenWindowThread();
private:
	void *__IHiddenWindowThread;	// IHiddenWindowThread 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F3BDA387-500B-458E-A182-BF936A7FCEA8}
	operator _di_IHiddenWindowThread()
	{
		_di_IHiddenWindowThread intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IHiddenWindowThread*(void) { return (IHiddenWindowThread*)&__IHiddenWindowThread; }
	#endif
	
};


__interface  INTERFACE_UUID("{7D85AB74-7FD7-49F7-84A1-B1FC7FD8C6F9}") IExecution  : public  ::System::IInterface 
{
	virtual void __fastcall WaitFor() = 0 ;
	virtual void __fastcall Terminate() = 0 ;
	virtual bool __fastcall IsTerminated() = 0 ;
};

__interface  INTERFACE_UUID("{CC441C1D-7C8C-4282-8031-97203344E941}") IExecutionTask  : public IExecution 
{
	virtual void __fastcall Add(const _di_IExecution AExecution) = 0 ;
};

__interface  INTERFACE_UUID("{7CDCD677-AA4A-40D3-953D-5E975886BB45}") IExecutor  : public  ::System::IInterface 
{
	virtual _di_IExecution __fastcall Execute(const  ::System::Sysutils::_di_TProc AExecuteLambda) = 0 /* overload */;
	virtual _di_IExecution __fastcall Execute(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDirectExecutor : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
	
protected:
	class DELPHICLASS TExecution;
	class PASCALIMPLEMENTATION TExecution : public  ::System::TInterfacedObject
	{
		typedef  ::System::TInterfacedObject inherited;
		
	protected:
		void __fastcall WaitFor();
		void __fastcall Terminate();
		bool __fastcall IsTerminated();
	public:
		/* TObject.Create */ inline __fastcall TExecution() :  ::System::TInterfacedObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TExecution() { }
		
private:
		void *__IExecution;	// IExecution 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {7D85AB74-7FD7-49F7-84A1-B1FC7FD8C6F9}
		operator _di_IExecution()
		{
			_di_IExecution intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator IExecution*(void) { return (IExecution*)&__IExecution; }
		#endif
		
	};
	
	
	
protected:
	_di_IExecution __fastcall Execute(const  ::System::Sysutils::_di_TProc AExecuteLambda)/* overload */;
	_di_IExecution __fastcall Execute(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TDirectExecutor() :  ::System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDirectExecutor() { }
	
private:
	void *__IExecutor;	// IExecutor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7CDCD677-AA4A-40D3-953D-5E975886BB45}
	operator _di_IExecutor()
	{
		_di_IExecutor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IExecutor*(void) { return (IExecutor*)&__IExecutor; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicThreadExecutor : public TBasicInterfacedObject
{
	typedef TBasicInterfacedObject inherited;
	
protected:
	 ::System::Classes::TComponent* FOwner;
	virtual _di_IExecution __fastcall Execute(const  ::System::Sysutils::_di_TProc AExecuteLambda) = 0 /* overload */;
	virtual _di_IExecution __fastcall Execute(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda) = 0 /* overload */;
	
public:
	__fastcall TBasicThreadExecutor( ::System::Classes::TComponent* AOwner);
	__fastcall TBasicThreadExecutor();
public:
	/* TBasicInterfacedObject.Destroy */ inline __fastcall virtual ~TBasicThreadExecutor() { }
	
private:
	void *__IExecutor;	// IExecutor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7CDCD677-AA4A-40D3-953D-5E975886BB45}
	operator _di_IExecutor()
	{
		_di_IExecutor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IExecutor*(void) { return (IExecutor*)&__IExecutor; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{66A2464E-419D-43D8-BEA6-1DC9EF11A815}") IThreadExecutor  : public IExecutor 
{
	virtual void __fastcall SetPriority( ::System::Classes::TThreadPriority AValue) = 0 ;
};

__interface  INTERFACE_UUID("{D98CA820-AA2F-4BA0-859C-DDEEB1200F7F}") IThreadPoolExecutor  : public IThreadExecutor 
{
	virtual _di_IThreadPoolExecutor __fastcall SetCount(unsigned AValue) = 0 ;
	virtual _di_IThreadPoolExecutor __fastcall SetGroupSize(unsigned AValue) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TThreadPoolExecutor : public TBasicThreadExecutor
{
	typedef TBasicThreadExecutor inherited;
	
	
protected:
	__interface DELPHIINTERFACE IExecutionExt;
	typedef  ::System::DelphiInterface<IExecutionExt> _di_IExecutionExt;
	__interface  INTERFACE_UUID("{96226BF2-21D0-4A09-B33A-8B065B5FC492}") IExecutionExt  : public IExecution 
	{
		virtual void __fastcall SetThread(const _di_IProcessingThread AThread) = 0 ;
	};
	
	class DELPHICLASS TExecution;
	class PASCALIMPLEMENTATION TExecution : public  ::System::TInterfacedObject
	{
		typedef  ::System::TInterfacedObject inherited;
		
	protected:
		_di_IEvent FCompletedEvent;
		 ::System::Sysutils::_di_TProc FLambda;
		 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > FLambdaSelf;
		 ::System::DelphiInterface< ::System::Sysutils::TProc__2<TBasicThread*,bool> > FThreadLambda;
		_di_IProcessingThread FThread;
		TThreadPoolExecutor* FOwner;
		bool FTerminated;
		void __fastcall WaitFor();
		void __fastcall Terminate();
		bool __fastcall IsTerminated();
		
	public:
		void __fastcall SetThread(const _di_IProcessingThread AThread);
		__fastcall TExecution(TThreadPoolExecutor* AOwner, const  ::System::Sysutils::_di_TProc AExecuteLambda)/* overload */;
		__fastcall TExecution(TThreadPoolExecutor* AOwner, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda)/* overload */;
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TExecution() { }
		
private:
		void *__TThreadPoolExecutor_IExecutionExt;	// TThreadPoolExecutor::IExecutionExt 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {7D85AB74-7FD7-49F7-84A1-B1FC7FD8C6F9}
		operator _di_IExecution()
		{
			_di_IExecution intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator IExecution*(void) { return (IExecution*)&__TThreadPoolExecutor_IExecutionExt; }
		#endif
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {96226BF2-21D0-4A09-B33A-8B065B5FC492}
		operator TThreadPoolExecutor::_di_IExecutionExt()
		{
			TThreadPoolExecutor::_di_IExecutionExt intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator TThreadPoolExecutor::IExecutionExt*(void) { return (TThreadPoolExecutor::IExecutionExt*)&__TThreadPoolExecutor_IExecutionExt; }
		#endif
		
	};
	
	
	__interface DELPHIINTERFACE IProcessingThreadLinkedList;
	typedef  ::System::DelphiInterface<IProcessingThreadLinkedList> _di_IProcessingThreadLinkedList;
	__interface  INTERFACE_UUID("{07D8EA73-2584-4863-9A8F-65A34CAFA99C}") IProcessingThreadLinkedList  : public  ::Mitov::Containers::List::ILinkedList__1<_di_IProcessingThread> 
	{
		
	};
	
	class DELPHICLASS TNotifyThreadLinkedList;
	class PASCALIMPLEMENTATION TNotifyThreadLinkedList : public  ::Mitov::Containers::List::TLinkedList__1<_di_IProcessingThread>
	{
		typedef  ::Mitov::Containers::List::TLinkedList__1<_di_IProcessingThread> inherited;
		
	public:
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_IProcessingThread>.Create */ inline __fastcall TNotifyThreadLinkedList() :  ::Mitov::Containers::List::TLinkedList__1<_di_IProcessingThread>() { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_IProcessingThread>.CreateEnumerator */ inline __fastcall TNotifyThreadLinkedList( ::System::Generics::Collections::TEnumerator__1<_di_IProcessingThread>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1<_di_IProcessingThread>(AEnumerator) { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_IProcessingThread>.CreateEnumerator */ inline __fastcall TNotifyThreadLinkedList(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IProcessingThread> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1<_di_IProcessingThread>(AEnumerator) { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_IProcessingThread>.CreateCopy */ inline __fastcall TNotifyThreadLinkedList(const  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<_di_IProcessingThread> > AOther) :  ::Mitov::Containers::List::TLinkedList__1<_di_IProcessingThread>(AOther) { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_IProcessingThread>.Destroy */ inline __fastcall virtual ~TNotifyThreadLinkedList() { }
		
private:
		void *__TThreadPoolExecutor_IProcessingThreadLinkedList;	// TThreadPoolExecutor::IProcessingThreadLinkedList 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {07D8EA73-2584-4863-9A8F-65A34CAFA99C}
		operator TThreadPoolExecutor::_di_IProcessingThreadLinkedList()
		{
			TThreadPoolExecutor::_di_IProcessingThreadLinkedList intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator TThreadPoolExecutor::IProcessingThreadLinkedList*(void) { return (TThreadPoolExecutor::IProcessingThreadLinkedList*)&__TThreadPoolExecutor_IProcessingThreadLinkedList; }
		#endif
		
	};
	
	
	__interface DELPHIINTERFACE IExecutionExtLinkedList;
	typedef  ::System::DelphiInterface<IExecutionExtLinkedList> _di_IExecutionExtLinkedList;
	__interface  INTERFACE_UUID("{1071A0E7-F91A-4084-BE29-DC4FC952A6C9}") IExecutionExtLinkedList  : public  ::Mitov::Containers::List::ILinkedList__1<TThreadPoolExecutor::_di_IExecutionExt> 
	{
		
	};
	
	class DELPHICLASS TExecutionExtLinkedList;
	class PASCALIMPLEMENTATION TExecutionExtLinkedList : public  ::Mitov::Containers::List::TLinkedList__1<TThreadPoolExecutor::_di_IExecutionExt>
	{
		typedef  ::Mitov::Containers::List::TLinkedList__1<TThreadPoolExecutor::_di_IExecutionExt> inherited;
		
	public:
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_TThreadPoolExecutor_IExecutionExt>.Create */ inline __fastcall TExecutionExtLinkedList() :  ::Mitov::Containers::List::TLinkedList__1<TThreadPoolExecutor::_di_IExecutionExt>() { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_TThreadPoolExecutor_IExecutionExt>.CreateEnumerator */ inline __fastcall TExecutionExtLinkedList( ::System::Generics::Collections::TEnumerator__1<TThreadPoolExecutor::_di_IExecutionExt>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1<TThreadPoolExecutor::_di_IExecutionExt>(AEnumerator) { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_TThreadPoolExecutor_IExecutionExt>.CreateEnumerator */ inline __fastcall TExecutionExtLinkedList(const  ::System::DelphiInterface< ::System::IEnumerator__1<TThreadPoolExecutor::_di_IExecutionExt> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1<TThreadPoolExecutor::_di_IExecutionExt>(AEnumerator) { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_TThreadPoolExecutor_IExecutionExt>.CreateCopy */ inline __fastcall TExecutionExtLinkedList(const  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<TThreadPoolExecutor::_di_IExecutionExt> > AOther) :  ::Mitov::Containers::List::TLinkedList__1<TThreadPoolExecutor::_di_IExecutionExt>(AOther) { }
		/* {Mitov_Containers_List}TLinkedList<Mitov_Threading_TThreadPoolExecutor_IExecutionExt>.Destroy */ inline __fastcall virtual ~TExecutionExtLinkedList() { }
		
private:
		void *__TThreadPoolExecutor_IExecutionExtLinkedList;	// TThreadPoolExecutor::IExecutionExtLinkedList 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {1071A0E7-F91A-4084-BE29-DC4FC952A6C9}
		operator TThreadPoolExecutor::_di_IExecutionExtLinkedList()
		{
			TThreadPoolExecutor::_di_IExecutionExtLinkedList intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator TThreadPoolExecutor::IExecutionExtLinkedList*(void) { return (TThreadPoolExecutor::IExecutionExtLinkedList*)&__TThreadPoolExecutor_IExecutionExtLinkedList; }
		#endif
		
	};
	
	
	
protected:
	int FCount;
	unsigned FGroupSize;
	 ::System::Classes::TThreadPriority FPriority;
	
protected:
	_di_ICriticalSection FLock;
	_di_IProcessingThreadLinkedList FThreads;
	_di_IExecutionExtLinkedList FTasks;
	void __fastcall ProcessQueue();
	void __fastcall RemoveTask(const _di_IExecutionExt ATask);
	void __fastcall SetPriority( ::System::Classes::TThreadPriority AValue);
	virtual _di_IExecution __fastcall Execute(const  ::System::Sysutils::_di_TProc AExecuteLambda)/* overload */;
	virtual _di_IExecution __fastcall Execute(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda)/* overload */;
	
public:
	_di_IThreadPoolExecutor __fastcall SetCount(unsigned AValue);
	_di_IThreadPoolExecutor __fastcall SetGroupSize(unsigned AValue);
	__fastcall virtual ~TThreadPoolExecutor();
public:
	/* TBasicThreadExecutor.CreateComponent */ inline __fastcall TThreadPoolExecutor( ::System::Classes::TComponent* AOwner) : TBasicThreadExecutor(AOwner) { }
	/* TBasicThreadExecutor.Create */ inline __fastcall TThreadPoolExecutor() : TBasicThreadExecutor() { }
	
private:
	void *__IThreadPoolExecutor;	// IThreadPoolExecutor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D98CA820-AA2F-4BA0-859C-DDEEB1200F7F}
	operator _di_IThreadPoolExecutor()
	{
		_di_IThreadPoolExecutor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IThreadPoolExecutor*(void) { return (IThreadPoolExecutor*)&__IThreadPoolExecutor; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TThreadExecutor : public TBasicThreadExecutor
{
	typedef TBasicThreadExecutor inherited;
	
	
protected:
	class DELPHICLASS TExecution;
	class PASCALIMPLEMENTATION TExecution : public  ::System::TInterfacedObject
	{
		typedef  ::System::TInterfacedObject inherited;
		
	protected:
		_di_IEvent FCompletedEvent;
		_di_IProcessingThread FThread;
		void __fastcall WaitFor();
		void __fastcall Terminate();
		bool __fastcall IsTerminated();
		
	public:
		__fastcall TExecution(TThreadExecutor* AOwner, const  ::System::Sysutils::_di_TProc AExecuteLambda)/* overload */;
		__fastcall TExecution(TThreadExecutor* AOwner, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda)/* overload */;
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TExecution() { }
		
private:
		void *__IExecution;	// IExecution 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {7D85AB74-7FD7-49F7-84A1-B1FC7FD8C6F9}
		operator _di_IExecution()
		{
			_di_IExecution intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator IExecution*(void) { return (IExecution*)&__IExecution; }
		#endif
		
	};
	
	
	
protected:
	 ::System::Classes::TThreadPriority FPriority;
	void __fastcall SetPriority( ::System::Classes::TThreadPriority AValue);
	virtual _di_IExecution __fastcall Execute(const  ::System::Sysutils::_di_TProc AExecuteLambda)/* overload */;
	virtual _di_IExecution __fastcall Execute(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IExecution> > AExecuteLambda)/* overload */;
public:
	/* TBasicThreadExecutor.CreateComponent */ inline __fastcall TThreadExecutor( ::System::Classes::TComponent* AOwner) : TBasicThreadExecutor(AOwner) { }
	/* TBasicThreadExecutor.Create */ inline __fastcall TThreadExecutor() : TBasicThreadExecutor() { }
	
public:
	/* TBasicInterfacedObject.Destroy */ inline __fastcall virtual ~TThreadExecutor() { }
	
private:
	void *__IThreadExecutor;	// IThreadExecutor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {66A2464E-419D-43D8-BEA6-1DC9EF11A815}
	operator _di_IThreadExecutor()
	{
		_di_IThreadExecutor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IThreadExecutor*(void) { return (IThreadExecutor*)&__IThreadExecutor; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExecutionTask : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<_di_IExecution> > FExecutions;
	bool FTerminated;
	void __fastcall Add(const _di_IExecution AExecution);
	void __fastcall WaitFor();
	void __fastcall Terminate();
	bool __fastcall IsTerminated();
	
public:
	__fastcall TExecutionTask();
	__fastcall virtual ~TExecutionTask();
private:
	void *__IExecutionTask;	// IExecutionTask 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7D85AB74-7FD7-49F7-84A1-B1FC7FD8C6F9}
	operator _di_IExecution()
	{
		_di_IExecution intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IExecution*(void) { return (IExecution*)&__IExecutionTask; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CC441C1D-7C8C-4282-8031-97203344E941}
	operator _di_IExecutionTask()
	{
		_di_IExecutionTask intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IExecutionTask*(void) { return (IExecutionTask*)&__IExecutionTask; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSimpleReadLockSection : public TLockSection
{
	typedef TLockSection inherited;
	
protected:
	_di_IBasicLock FOwnerIntf;
	TLock* FOwner;
	_di_ILockSection FUnlockSection;
	bool FLocked;
	
public:
	__fastcall TSimpleReadLockSection(const _di_IBasicLock AOwner, const _di_IBasicLock ASlaveLock);
	__fastcall virtual ~TSimpleReadLockSection();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSimpleLockSection : public TLockSection
{
	typedef TLockSection inherited;
	
protected:
	_di_IBasicLock FOwnerIntf;
	TLock* FOwner;
	
public:
	__fastcall TSimpleLockSection(const _di_IBasicLock AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSimpleLockSection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSimpleWriteLockSection : public TSimpleLockSection
{
	typedef TSimpleLockSection inherited;
	
protected:
	_di_ILockSection FUnlockSection;
	bool FLocked;
	
public:
	__fastcall TSimpleWriteLockSection(const _di_IBasicLock AOwner, const _di_IBasicLock ASlaveLock);
	__fastcall virtual ~TSimpleWriteLockSection();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSimpleStopLockSection : public TSimpleLockSection
{
	typedef TSimpleLockSection inherited;
	
public:
	__fastcall TSimpleStopLockSection(const _di_IBasicLock AOwner);
	__fastcall virtual ~TSimpleStopLockSection();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSimpleUnlockSection : public TSimpleLockSection
{
	typedef TSimpleLockSection inherited;
	
protected:
	int FCountLocks;
	int FCountOtherLocks;
	_di_IBasicLock FFirstLockIntf;
	
public:
	__fastcall TSimpleUnlockSection(const _di_IBasicLock AOwner, const _di_IBasicLock AFirstLock);
	__fastcall virtual ~TSimpleUnlockSection();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE unsigned __fastcall GetMainThreadID(void);
extern DELPHI_PACKAGE void __fastcall MainThreadExecute( ::System::TObject* AObject, bool AForcePost, const  ::System::Sysutils::_di_TProc AOnExecute, bool AIgnoreMultiple = false)/* overload */;
extern DELPHI_PACKAGE void __fastcall ProcessMainThreadExecuteQueue( ::System::TObject* AObject);
extern DELPHI_PACKAGE void __fastcall ProcessMainThreadExecuteQueueAll(void);
extern DELPHI_PACKAGE void __fastcall DeinitializationSection(void);
}	/* namespace Threading */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_ThreadingHPP

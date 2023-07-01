// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Elements.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_ElementsHPP
#define Mitov_ElementsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Character.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Mitov.Containers.List.hpp>
#include <Mitov.Containers.Common.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mitov
{
namespace Elements
{
//-- forward type declarations -----------------------------------------------
template<typename T> __interface DELPHIINTERFACE IInstanceInterface__1;
#ifdef __clang__
template<typename T> using _di_IInstanceInterface__1 =  ::System::DelphiInterface<IInstanceInterface__1<T>>;
#endif
template<typename T> class DELPHICLASS TInstanceInterface__1;
template<typename T> __interface DELPHIINTERFACE IReferenceInterface__1;
#ifdef __clang__
template<typename T> using _di_IReferenceInterface__1 =  ::System::DelphiInterface<IReferenceInterface__1<T>>;
#endif
template<typename T> class DELPHICLASS TReferenceInterface__1;
template<typename T> struct TReference__1;
struct TMultiProc;
template<typename T> struct TMultiProc__1;
template<typename T1, typename T2> struct TMultiProc__2;
template<typename T1, typename T2, typename T3> struct TMultiProc__3;
template<typename T1, typename T2, typename T3, typename T4> struct TMultiProc__4;
template<typename T> struct TConstMultiProc__1;
template<typename T1, typename T2> struct TConstMultiProc__2;
template<typename T1, typename T2, typename T3> struct TConstMultiProc__3;
template<typename T1, typename T2, typename T3, typename T4> struct TConstMultiProc__4;
template<typename T1, typename T2> __interface DELPHIINTERFACE ITuple__2;
#ifdef __clang__
template<typename T1, typename T2> using _di_ITuple__2 =  ::System::DelphiInterface<ITuple__2<T1, T2>>;
#endif
template<typename T1, typename T2> class DELPHICLASS TTuple__2;
template<typename T1, typename T2, typename T3> __interface DELPHIINTERFACE ITuple__3;
#ifdef __clang__
template<typename T1, typename T2, typename T3> using _di_ITuple__3 =  ::System::DelphiInterface<ITuple__3<T1, T2, T3>>;
#endif
template<typename T1, typename T2, typename T3> class DELPHICLASS TTuple__3;
template<typename T1, typename T2, typename T3, typename T4> __interface DELPHIINTERFACE ITuple__4;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4> using _di_ITuple__4 =  ::System::DelphiInterface<ITuple__4<T1, T2, T3, T4>>;
#endif
template<typename T1, typename T2, typename T3, typename T4> class DELPHICLASS TTuple__4;
template<typename T1, typename T2, typename T3, typename T4, typename T5> __interface DELPHIINTERFACE ITuple__5;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5> using _di_ITuple__5 =  ::System::DelphiInterface<ITuple__5<T1, T2, T3, T4, T5>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5> class DELPHICLASS TTuple__5;
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> __interface DELPHIINTERFACE ITuple__6;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> using _di_ITuple__6 =  ::System::DelphiInterface<ITuple__6<T1, T2, T3, T4, T5, T6>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class DELPHICLASS TTuple__6;
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> __interface DELPHIINTERFACE ITuple__7;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> using _di_ITuple__7 =  ::System::DelphiInterface<ITuple__7<T1, T2, T3, T4, T5, T6, T7>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class DELPHICLASS TTuple__7;
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> __interface DELPHIINTERFACE ITuple__8;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> using _di_ITuple__8 =  ::System::DelphiInterface<ITuple__8<T1, T2, T3, T4, T5, T6, T7, TRest>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> class DELPHICLASS TTuple__8;
template<typename T1, typename T2> struct TRecTuple__2;
template<typename T1, typename T2, typename T3> struct TRecTuple__3;
template<typename T1, typename T2, typename T3, typename T4> struct TRecTuple__4;
template<typename T1, typename T2, typename T3, typename T4, typename T5> struct TRecTuple__5;
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct TRecTuple__6;
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct TRecTuple__7;
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> struct TRecTuple__8;
template<typename T> __interface DELPHIINTERFACE ISmartPointer__1;
#ifdef __clang__
template<typename T> using _di_ISmartPointer__1 =  ::System::DelphiInterface<ISmartPointer__1<T>>;
#endif
template<typename T> class DELPHICLASS TSmartPointer__1;
class DELPHICLASS TSmartPointer;
template<typename T1, typename T2, typename T3, typename T4, typename T5> __interface DELPHIINTERFACE TProc__5;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5> using _di_TProc__5 =  ::System::DelphiInterface<TProc__5<T1, T2, T3, T4, T5>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> __interface DELPHIINTERFACE TFunc__6;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> using _di_TFunc__6 =  ::System::DelphiInterface<TFunc__6<T1, T2, T3, T4, T5, TResult>>;
#endif
template<typename TItem> class DELPHICLASS Delegate__1;
template<typename T> struct TWeakHolder__1;
template<typename T> struct TWeakInterfaceHolder__1;
class DELPHICLASS TCompare;
struct TPersistentHelper /* Helper for class ' ::System::Classes::TPersistent*' */;
//-- type declarations -------------------------------------------------------
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IInstanceInterface__1  : public  ::System::IInterface 
{
	virtual T __fastcall GetInstance() = 0 ;
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TInstanceInterface__1 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T __fastcall GetInstance();
public:
	/* TObject.Create */ inline __fastcall TInstanceInterface__1() :  ::System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TInstanceInterface__1() { }
	
private:
	void *__IInstanceInterface__1;	// IInstanceInterface__1<T> 
	
public:
	operator IInstanceInterface__1<T>*(void) { return (IInstanceInterface__1<T>*)&__IInstanceInterface__1; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IReferenceInterface__1  : public  ::System::IInterface 
{
	virtual T __fastcall GetValue() = 0 ;
	virtual void __fastcall SetValue(const T AValue) = 0 ;
	__property T Value = {read=GetValue, write=SetValue};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TReferenceInterface__1 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T FValue;
	T __fastcall GetValue();
	void __fastcall SetValue(const T AValue);
	
public:
	__fastcall TReferenceInterface__1(T AValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TReferenceInterface__1() { }
	
private:
	void *__IReferenceInterface__1;	// IReferenceInterface__1<T> 
	
public:
	operator IReferenceInterface__1<T>*(void) { return (IReferenceInterface__1<T>*)&__IReferenceInterface__1; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TReference__1
{
	
public:
	typedef T *_1;
	
	
public:
	_1 Pointer;
	__fastcall operator TReference__1<T>();
	__fastcall operator T();
};


struct DECLSPEC_DRECORD TMultiProc
{
	
private:
	typedef  ::System::Sysutils::_di_TProc TNotifyProc;
	
	
private:
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::Sysutils::_di_TProc> > > > FList;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::Sysutils::_di_TProc> > __fastcall GetNotifyList();
	
public:
	void __fastcall Notify();
	void __fastcall Clear();
	 ::System::Sysutils::_di_TProc __fastcall Add(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall Remove(const  ::System::Sysutils::_di_TProc AProc)/* overload */;
	void __fastcall Remove(const TMultiProc AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TMultiProc(TMultiProc &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::Sysutils::_di_TProc> > NotifyList = {read=GetNotifyList};
	TMultiProc() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TMultiProc__1
{
private:
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > > > > > FList;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > > > __fastcall GetNotifyList();
	
public:
	void __fastcall Notify(const T Arg1);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > __fastcall Add(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	void __fastcall Remove(const TMultiProc__1<T> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TMultiProc__1(TMultiProc__1<T> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > > > NotifyList = {read=GetNotifyList};
	TMultiProc__1() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> struct DECLSPEC_DRECORD TMultiProc__2
{
private:
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<T1,T2> > > > __fastcall GetNotifyList();
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<T1,T2> > > > > > FList;
	
public:
	void __fastcall Notify(const T1 Arg1, const T2 Arg2);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::System::Sysutils::TProc__2<T1,T2> > __fastcall Add(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<T1,T2> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::System::Sysutils::TProc__2<T1,T2> > AProc)/* overload */;
	void __fastcall Remove(const TMultiProc__2<T1,T2> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TMultiProc__2(TMultiProc__2<T1,T2> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__2<T1,T2> > > > NotifyList = {read=GetNotifyList};
	TMultiProc__2() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> struct DECLSPEC_DRECORD TMultiProc__3
{
private:
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__3<T1,T2,T3> > > > __fastcall GetNotifyList();
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__3<T1,T2,T3> > > > > > FList;
	
public:
	void __fastcall Notify(const T1 Arg1, const T2 Arg2, const T3 Arg3);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::System::Sysutils::TProc__3<T1,T2,T3> > __fastcall Add(const  ::System::DelphiInterface< ::System::Sysutils::TProc__3<T1,T2,T3> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::System::Sysutils::TProc__3<T1,T2,T3> > AProc)/* overload */;
	void __fastcall Remove(const TMultiProc__3<T1,T2,T3> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TMultiProc__3(TMultiProc__3<T1,T2,T3> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__3<T1,T2,T3> > > > NotifyList = {read=GetNotifyList};
	TMultiProc__3() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> struct DECLSPEC_DRECORD TMultiProc__4
{
private:
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__4<T1,T2,T3,T4> > > > > > FList;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__4<T1,T2,T3,T4> > > > __fastcall GetNotifyList();
	
public:
	void __fastcall Notify(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::System::Sysutils::TProc__4<T1,T2,T3,T4> > __fastcall Add(const  ::System::DelphiInterface< ::System::Sysutils::TProc__4<T1,T2,T3,T4> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::System::Sysutils::TProc__4<T1,T2,T3,T4> > AProc)/* overload */;
	void __fastcall Remove(const TMultiProc__4<T1,T2,T3,T4> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TMultiProc__4(TMultiProc__4<T1,T2,T3,T4> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__4<T1,T2,T3,T4> > > > NotifyList = {read=GetNotifyList};
	TMultiProc__4() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TConstMultiProc__1
{
private:
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > > > > > FList;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > > > __fastcall GetNotifyList();
	
public:
	void __fastcall Notify(const T Arg1);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > __fastcall Add(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AProc)/* overload */;
	void __fastcall Remove(const TConstMultiProc__1<T> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TConstMultiProc__1(TConstMultiProc__1<T> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > > > NotifyList = {read=GetNotifyList};
	TConstMultiProc__1() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> struct DECLSPEC_DRECORD TConstMultiProc__2
{
private:
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<T1,T2> > > > __fastcall GetNotifyList();
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<T1,T2> > > > > > FList;
	
public:
	void __fastcall Notify(const T1 Arg1, const T2 Arg2);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<T1,T2> > __fastcall Add(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<T1,T2> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<T1,T2> > AProc)/* overload */;
	void __fastcall Remove(const TConstMultiProc__2<T1,T2> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TConstMultiProc__2(TConstMultiProc__2<T1,T2> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<T1,T2> > > > NotifyList = {read=GetNotifyList};
	TConstMultiProc__2() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> struct DECLSPEC_DRECORD TConstMultiProc__3
{
private:
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__3<T1,T2,T3> > > > __fastcall GetNotifyList();
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__3<T1,T2,T3> > > > > > FList;
	
public:
	void __fastcall Notify(const T1 Arg1, const T2 Arg2, const T3 Arg3);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__3<T1,T2,T3> > __fastcall Add(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__3<T1,T2,T3> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__3<T1,T2,T3> > AProc)/* overload */;
	void __fastcall Remove(const TConstMultiProc__3<T1,T2,T3> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TConstMultiProc__3(TConstMultiProc__3<T1,T2,T3> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__3<T1,T2,T3> > > > NotifyList = {read=GetNotifyList};
	TConstMultiProc__3() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> struct DECLSPEC_DRECORD TConstMultiProc__4
{
private:
	 ::System::DelphiInterface<IReferenceInterface__1< ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4<T1,T2,T3,T4> > > > > > FList;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4<T1,T2,T3,T4> > > > __fastcall GetNotifyList();
	
public:
	void __fastcall Notify(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4);
	void __fastcall Clear();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4<T1,T2,T3,T4> > __fastcall Add(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4<T1,T2,T3,T4> > AProc);
	void __fastcall Remove(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4<T1,T2,T3,T4> > AProc)/* overload */;
	void __fastcall Remove(const TConstMultiProc__4<T1,T2,T3,T4> AProc)/* overload */;
	bool __fastcall Assigned();
	__fastcall TConstMultiProc__4(TConstMultiProc__4<T1,T2,T3,T4> &AOther);
	__property  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4<T1,T2,T3,T4> > > > NotifyList = {read=GetNotifyList};
	TConstMultiProc__4() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> __interface ITuple__2  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual  ::System::DelphiInterface<ITuple__2<T1,T2> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__2<T1,T2> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> class PASCALIMPLEMENTATION TTuple__2 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	
public:
	 ::System::DelphiInterface<ITuple__2<T1,T2> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__2<T1,T2> > __fastcall Get2(/* out */ T2 &AValue);
	__fastcall TTuple__2(const T1 AItem1, const T2 AItem2);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__2() { }
	
private:
	void *__ITuple__2;	// ITuple__2<T1,T2> 
	
public:
	operator ITuple__2<T1,T2>*(void) { return (ITuple__2<T1,T2>*)&__ITuple__2; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> __interface ITuple__3  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual T3 __fastcall GetItem3() = 0 ;
	virtual  ::System::DelphiInterface<ITuple__3<T1,T2,T3> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__3<T1,T2,T3> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__3<T1,T2,T3> > __fastcall Get3(/* out */ T3 &AValue) = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
	__property T3 Item3 = {read=GetItem3};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> class PASCALIMPLEMENTATION TTuple__3 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T3 FItem3;
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	T3 __fastcall GetItem3();
	
public:
	 ::System::DelphiInterface<ITuple__3<T1,T2,T3> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__3<T1,T2,T3> > __fastcall Get2(/* out */ T2 &AValue);
	 ::System::DelphiInterface<ITuple__3<T1,T2,T3> > __fastcall Get3(/* out */ T3 &AValue);
	__fastcall TTuple__3(const T1 AItem1, const T2 AItem2, const T3 AItem3);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__3() { }
	
private:
	void *__ITuple__3;	// ITuple__3<T1,T2,T3> 
	
public:
	operator ITuple__3<T1,T2,T3>*(void) { return (ITuple__3<T1,T2,T3>*)&__ITuple__3; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> __interface ITuple__4  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual T3 __fastcall GetItem3() = 0 ;
	virtual T4 __fastcall GetItem4() = 0 ;
	virtual  ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get3(/* out */ T3 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get4(/* out */ T4 &AValue) = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
	__property T3 Item3 = {read=GetItem3};
	__property T4 Item4 = {read=GetItem4};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> class PASCALIMPLEMENTATION TTuple__4 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T3 FItem3;
	T4 FItem4;
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	T3 __fastcall GetItem3();
	T4 __fastcall GetItem4();
	
public:
	 ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get2(/* out */ T2 &AValue);
	 ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get3(/* out */ T3 &AValue);
	 ::System::DelphiInterface<ITuple__4<T1,T2,T3,T4> > __fastcall Get4(/* out */ T4 &AValue);
	__fastcall TTuple__4(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__4() { }
	
private:
	void *__ITuple__4;	// ITuple__4<T1,T2,T3,T4> 
	
public:
	operator ITuple__4<T1,T2,T3,T4>*(void) { return (ITuple__4<T1,T2,T3,T4>*)&__ITuple__4; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5> __interface ITuple__5  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual T3 __fastcall GetItem3() = 0 ;
	virtual T4 __fastcall GetItem4() = 0 ;
	virtual T5 __fastcall GetItem5() = 0 ;
	virtual  ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get3(/* out */ T3 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get4(/* out */ T4 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get5(/* out */ T5 &AValue) = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
	__property T3 Item3 = {read=GetItem3};
	__property T4 Item4 = {read=GetItem4};
	__property T5 Item5 = {read=GetItem5};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5> class PASCALIMPLEMENTATION TTuple__5 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T3 FItem3;
	T4 FItem4;
	T5 FItem5;
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	T3 __fastcall GetItem3();
	T4 __fastcall GetItem4();
	T5 __fastcall GetItem5();
	
public:
	 ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get2(/* out */ T2 &AValue);
	 ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get3(/* out */ T3 &AValue);
	 ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get4(/* out */ T4 &AValue);
	 ::System::DelphiInterface<ITuple__5<T1,T2,T3,T4,T5> > __fastcall Get5(/* out */ T5 &AValue);
	__fastcall TTuple__5(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__5() { }
	
private:
	void *__ITuple__5;	// ITuple__5<T1,T2,T3,T4,T5> 
	
public:
	operator ITuple__5<T1,T2,T3,T4,T5>*(void) { return (ITuple__5<T1,T2,T3,T4,T5>*)&__ITuple__5; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> __interface ITuple__6  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual T3 __fastcall GetItem3() = 0 ;
	virtual T4 __fastcall GetItem4() = 0 ;
	virtual T5 __fastcall GetItem5() = 0 ;
	virtual T6 __fastcall GetItem6() = 0 ;
	virtual  ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get3(/* out */ T3 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get4(/* out */ T4 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get5(/* out */ T5 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get6(/* out */ T6 &AValue) = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
	__property T3 Item3 = {read=GetItem3};
	__property T4 Item4 = {read=GetItem4};
	__property T5 Item5 = {read=GetItem5};
	__property T6 Item6 = {read=GetItem6};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class PASCALIMPLEMENTATION TTuple__6 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T3 FItem3;
	T4 FItem4;
	T5 FItem5;
	T6 FItem6;
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	T3 __fastcall GetItem3();
	T4 __fastcall GetItem4();
	T5 __fastcall GetItem5();
	T6 __fastcall GetItem6();
	
public:
	 ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get2(/* out */ T2 &AValue);
	 ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get3(/* out */ T3 &AValue);
	 ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get4(/* out */ T4 &AValue);
	 ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get5(/* out */ T5 &AValue);
	 ::System::DelphiInterface<ITuple__6<T1,T2,T3,T4,T5,T6> > __fastcall Get6(/* out */ T6 &AValue);
	__fastcall TTuple__6(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5, const T6 AItem6);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__6() { }
	
private:
	void *__ITuple__6;	// ITuple__6<T1,T2,T3,T4,T5,T6> 
	
public:
	operator ITuple__6<T1,T2,T3,T4,T5,T6>*(void) { return (ITuple__6<T1,T2,T3,T4,T5,T6>*)&__ITuple__6; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> __interface ITuple__7  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual T3 __fastcall GetItem3() = 0 ;
	virtual T4 __fastcall GetItem4() = 0 ;
	virtual T5 __fastcall GetItem5() = 0 ;
	virtual T6 __fastcall GetItem6() = 0 ;
	virtual T7 __fastcall GetItem7() = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
	__property T3 Item3 = {read=GetItem3};
	__property T4 Item4 = {read=GetItem4};
	__property T5 Item5 = {read=GetItem5};
	__property T6 Item6 = {read=GetItem6};
	__property T7 Item7 = {read=GetItem7};
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get3(/* out */ T3 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get4(/* out */ T4 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get5(/* out */ T5 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get6(/* out */ T6 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get7(/* out */ T7 &AValue) = 0 ;
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class PASCALIMPLEMENTATION TTuple__7 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T3 FItem3;
	T4 FItem4;
	T5 FItem5;
	T6 FItem6;
	T7 FItem7;
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	T3 __fastcall GetItem3();
	T4 __fastcall GetItem4();
	T5 __fastcall GetItem5();
	T6 __fastcall GetItem6();
	T7 __fastcall GetItem7();
	
public:
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get2(/* out */ T2 &AValue);
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get3(/* out */ T3 &AValue);
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get4(/* out */ T4 &AValue);
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get5(/* out */ T5 &AValue);
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get6(/* out */ T6 &AValue);
	 ::System::DelphiInterface<ITuple__7<T1,T2,T3,T4,T5,T6,T7> > __fastcall Get7(/* out */ T7 &AValue);
	__fastcall TTuple__7(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5, const T6 AItem6, const T7 AItem7);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__7() { }
	
private:
	void *__ITuple__7;	// ITuple__7<T1,T2,T3,T4,T5,T6,T7> 
	
public:
	operator ITuple__7<T1,T2,T3,T4,T5,T6,T7>*(void) { return (ITuple__7<T1,T2,T3,T4,T5,T6,T7>*)&__ITuple__7; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> __interface ITuple__8  : public  ::System::IInterface 
{
	virtual T1 __fastcall GetItem1() = 0 ;
	virtual T2 __fastcall GetItem2() = 0 ;
	virtual T3 __fastcall GetItem3() = 0 ;
	virtual T4 __fastcall GetItem4() = 0 ;
	virtual T5 __fastcall GetItem5() = 0 ;
	virtual T6 __fastcall GetItem6() = 0 ;
	virtual T7 __fastcall GetItem7() = 0 ;
	virtual TRest __fastcall GetRestValue() = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get1(/* out */ T1 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get2(/* out */ T2 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get3(/* out */ T3 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get4(/* out */ T4 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get5(/* out */ T5 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get6(/* out */ T6 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get7(/* out */ T7 &AValue) = 0 ;
	virtual  ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall GetRest(/* out */ TRest &AValue) = 0 ;
	__property T1 Item1 = {read=GetItem1};
	__property T2 Item2 = {read=GetItem2};
	__property T3 Item3 = {read=GetItem3};
	__property T4 Item4 = {read=GetItem4};
	__property T5 Item5 = {read=GetItem5};
	__property T6 Item6 = {read=GetItem6};
	__property T7 Item7 = {read=GetItem7};
	__property TRest Rest = {read=GetRestValue};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> class PASCALIMPLEMENTATION TTuple__8 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	T1 FItem1;
	T2 FItem2;
	T3 FItem3;
	T4 FItem4;
	T5 FItem5;
	T6 FItem6;
	T7 FItem7;
	TRest FRest;
	
protected:
	T1 __fastcall GetItem1();
	T2 __fastcall GetItem2();
	T3 __fastcall GetItem3();
	T4 __fastcall GetItem4();
	T5 __fastcall GetItem5();
	T6 __fastcall GetItem6();
	T7 __fastcall GetItem7();
	TRest __fastcall GetRestValue();
	
public:
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get1(/* out */ T1 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get2(/* out */ T2 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get3(/* out */ T3 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get4(/* out */ T4 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get5(/* out */ T5 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get6(/* out */ T6 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall Get7(/* out */ T7 &AValue);
	 ::System::DelphiInterface<ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> > __fastcall GetRest(/* out */ TRest &AValue);
	__fastcall TTuple__8(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5, const T6 AItem6, const T7 AItem7, const TRest ARest);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTuple__8() { }
	
private:
	void *__ITuple__8;	// ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest> 
	
public:
	operator ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest>*(void) { return (ITuple__8<T1,T2,T3,T4,T5,T6,T7,TRest>*)&__ITuple__8; }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> struct DECLSPEC_DRECORD TRecTuple__2
{
public:
	T1 Item1;
	T2 Item2;
	__fastcall TRecTuple__2(const T1 AItem1, const T2 AItem2);
	TRecTuple__2() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> struct DECLSPEC_DRECORD TRecTuple__3
{
public:
	T1 Item1;
	T2 Item2;
	T3 Item3;
	__fastcall TRecTuple__3(const T1 AItem1, const T2 AItem2, const T3 AItem3);
	TRecTuple__3() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> struct DECLSPEC_DRECORD TRecTuple__4
{
public:
	T1 Item1;
	T2 Item2;
	T3 Item3;
	T4 Item4;
	__fastcall TRecTuple__4(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4);
	TRecTuple__4() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5> struct DECLSPEC_DRECORD TRecTuple__5
{
public:
	T1 Item1;
	T2 Item2;
	T3 Item3;
	T4 Item4;
	T5 Item5;
	__fastcall TRecTuple__5(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5);
	TRecTuple__5() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct DECLSPEC_DRECORD TRecTuple__6
{
public:
	T1 Item1;
	T2 Item2;
	T3 Item3;
	T4 Item4;
	T5 Item5;
	T6 Item6;
	__fastcall TRecTuple__6(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5, const T6 AItem6);
	TRecTuple__6() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct DECLSPEC_DRECORD TRecTuple__7
{
public:
	T1 Item1;
	T2 Item2;
	T3 Item3;
	T4 Item4;
	T5 Item5;
	T6 Item6;
	T7 Item7;
	__fastcall TRecTuple__7(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5, const T6 AItem6, const T7 AItem7);
	TRecTuple__7() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> struct DECLSPEC_DRECORD TRecTuple__8
{
public:
	T1 Item1;
	T2 Item2;
	T3 Item3;
	T4 Item4;
	T5 Item5;
	T6 Item6;
	T7 Item7;
	TRest Rest;
	__fastcall TRecTuple__8(const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5, const T6 AItem6, const T7 AItem7, const TRest ARest);
	TRecTuple__8() {}
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface ISmartPointer__1  : public  ::System::Sysutils::TFunc__1<T> 
{
	virtual T __fastcall GetValue() = 0 ;
	__property T Value = {read=GetValue};
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TSmartPointer__1 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
private:
	T FValue;
	
protected:
	T __fastcall GetValue();
	
public:
	__fastcall TSmartPointer__1(T AValue);
	__fastcall virtual ~TSmartPointer__1();
	T __fastcall Invoke();
private:
	void *__ISmartPointer__1;	// ISmartPointer__1<T> 
	
public:
	operator ISmartPointer__1<T>*(void) { return (ISmartPointer__1<T>*)&__ISmartPointer__1; }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSmartPointer : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
public:
	template<typename T> __classmethod  ::System::DelphiInterface<ISmartPointer__1<T> > __fastcall Create(T AValue);
public:
	/* TObject.Create */ inline __fastcall TSmartPointer() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSmartPointer() { }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5> __interface TProc__5  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(T1 Arg1, T2 Arg2, T3 Arg3, T4 Arg4, T5 Arg5) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> __interface TFunc__6  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(T1 Arg1, T2 Arg2, T3 Arg3, T4 Arg4, T5 Arg5) = 0 ;
};

typedef void __fastcall (*TGlobalProc)(void);

/* [Template Alias] */
#if defined(__clang__)
template<typename T> using TGlobalProc__1 = void __fastcall (*)(T AItem);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2> using TGlobalProc__2 = void __fastcall (*)(T1 AItem1, T2 AItem2);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3> using TGlobalProc__3 = void __fastcall (*)(T1 AItem1, T2 AItem2, T3 AItem3);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4> using TGlobalProc__4 = void __fastcall (*)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4, typename T5> using TGlobalProc__5 = void __fastcall (*)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4, T5 AItem5);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename TResult> using TGlobalFunc__1 = TResult __fastcall (*)(void);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T, typename TResult> using TGlobalFunc__2 = TResult __fastcall (*)(T AItem);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename TResult> using TGlobalFunc__3 = TResult __fastcall (*)(T1 AItem1, T2 AItem2);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename TResult> using TGlobalFunc__4 = TResult __fastcall (*)(T1 AItem1, T2 AItem2, T3 AItem3);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4, typename TResult> using TGlobalFunc__5 = TResult __fastcall (*)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> using TGlobalFunc__6 = TResult __fastcall (*)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4, T5 AItem5);
#endif

typedef void __fastcall (__closure *TMemberProc)(void);

/* [Template Alias] */
#if defined(__clang__)
template<typename T> using TMemberProc__1 = void __fastcall (__closure *)(T AItem);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2> using TMemberProc__2 = void __fastcall (__closure *)(T1 AItem1, T2 AItem2);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3> using TMemberProc__3 = void __fastcall (__closure *)(T1 AItem1, T2 AItem2, T3 AItem3);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4> using TMemberProc__4 = void __fastcall (__closure *)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4, typename T5> using TMemberProc__5 = void __fastcall (__closure *)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4, T5 AItem5);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename TResult> using TMemberFunc__1 = TResult __fastcall (__closure *)(void);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T, typename TResult> using TMemberFunc__2 = TResult __fastcall (__closure *)(T AItem);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename TResult> using TMemberFunc__3 = TResult __fastcall (__closure *)(T1 AItem1, T2 AItem2);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename TResult> using TMemberFunc__4 = TResult __fastcall (__closure *)(T1 AItem1, T2 AItem2, T3 AItem3);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4, typename TResult> using TMemberFunc__5 = TResult __fastcall (__closure *)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4);
#endif

/* [Template Alias] */
#if defined(__clang__)
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> using TMemberFunc__6 = TResult __fastcall (__closure *)(T1 AItem1, T2 AItem2, T3 AItem3, T4 AItem4, T5 AItem5);
#endif

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename TItem> class PASCALIMPLEMENTATION Delegate__1 : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
public:
	static  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TItem> > __fastcall Execute(void * AMethod)/* overload */;
	template<typename T1> static  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TItem> > __fastcall Execute(void * AMethod, const T1 AItem1)/* overload */;
	template<typename T1, typename T2> static  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TItem> > __fastcall Execute(void * AMethod, const T1 AItem1, const T2 AItem2)/* overload */;
	template<typename T1, typename T2, typename T3> static  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TItem> > __fastcall Execute(void * AMethod, const T1 AItem1, const T2 AItem2, const T3 AItem3)/* overload */;
	template<typename T1, typename T2, typename T3, typename T4> static  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TItem> > __fastcall Execute(void * AMethod, const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4)/* overload */;
	template<typename T1, typename T2, typename T3, typename T4, typename T5> static  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TItem> > __fastcall Execute(void * AMethod, const T1 AItem1, const T2 AItem2, const T3 AItem3, const T4 AItem4, const T5 AItem5)/* overload */;
public:
	/* TObject.Create */ inline __fastcall Delegate__1() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~Delegate__1() { }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TWeakHolder__1
{
public:
	T Value;
	__fastcall operator TWeakHolder__1<T>();
	__fastcall operator T();
	static bool __fastcall _op_Equality(const TWeakHolder__1<T> ALeft, const T ARight);
	static bool __fastcall _op_Inequality(const TWeakHolder__1<T> ALeft, const T ARight);
	__fastcall TWeakHolder__1(T AValue);
	TWeakHolder__1() {}
	
	friend bool operator ==(const TWeakHolder__1<T> ALeft, const T ARight) { return TWeakHolder__1::_op_Equality(ALeft, ARight); }
	friend bool operator !=(const TWeakHolder__1<T> ALeft, const T ARight) { return TWeakHolder__1::_op_Inequality(ALeft, ARight); }
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TWeakInterfaceHolder__1
{
public:
	T Value;
	__fastcall operator TWeakInterfaceHolder__1<T>();
	__fastcall operator T();
	static bool __fastcall _op_Equality(const TWeakInterfaceHolder__1<T> ALeft, const T ARight);
	static bool __fastcall _op_Inequality(const TWeakInterfaceHolder__1<T> ALeft, const T ARight);
	__fastcall TWeakInterfaceHolder__1(const T AValue);
	TWeakInterfaceHolder__1() {}
	
	friend bool operator ==(const TWeakInterfaceHolder__1<T> ALeft, const T ARight) { return TWeakInterfaceHolder__1::_op_Equality(ALeft, ARight); }
	friend bool operator !=(const TWeakInterfaceHolder__1<T> ALeft, const T ARight) { return TWeakInterfaceHolder__1::_op_Inequality(ALeft, ARight); }
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompare : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
public:
	template<typename T> __classmethod bool __fastcall Equals(T ALeft, T ARight);
public:
	/* TObject.Create */ inline __fastcall TCompare() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCompare() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Elements */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_ElementsHPP

// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Containers.Common.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_Containers_CommonHPP
#define Mitov_Containers_CommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Rtti.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> class DELPHICLASS TContainerQuery__3;
  #ifdef MANAGED_INTERFACE_OPERATORS
    #define __OLD__MANAGED_INTERFACE_OPERATORS__
    #undef MANAGED_INTERFACE_OPERATORS
  #endif // MANAGED_INTERFACE_OPERATORS

namespace Mitov
{
namespace Containers
{
namespace Common
{
//-- forward type declarations -----------------------------------------------
template<typename T> __interface DELPHIINTERFACE TConstProc__1;
#ifdef __clang__
template<typename T> using _di_TConstProc__1 =  ::System::DelphiInterface<TConstProc__1<T>>;
#endif
template<typename T1, typename T2> __interface DELPHIINTERFACE TConstProc__2;
#ifdef __clang__
template<typename T1, typename T2> using _di_TConstProc__2 =  ::System::DelphiInterface<TConstProc__2<T1, T2>>;
#endif
template<typename T1, typename T2, typename T3> __interface DELPHIINTERFACE TConstProc__3;
#ifdef __clang__
template<typename T1, typename T2, typename T3> using _di_TConstProc__3 =  ::System::DelphiInterface<TConstProc__3<T1, T2, T3>>;
#endif
template<typename T1, typename T2, typename T3, typename T4> __interface DELPHIINTERFACE TConstProc__4;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4> using _di_TConstProc__4 =  ::System::DelphiInterface<TConstProc__4<T1, T2, T3, T4>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5> __interface DELPHIINTERFACE TConstProc__5;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5> using _di_TConstProc__5 =  ::System::DelphiInterface<TConstProc__5<T1, T2, T3, T4, T5>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> __interface DELPHIINTERFACE TConstProc__6;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> using _di_TConstProc__6 =  ::System::DelphiInterface<TConstProc__6<T1, T2, T3, T4, T5, T6>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> __interface DELPHIINTERFACE TConstProc__7;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> using _di_TConstProc__7 =  ::System::DelphiInterface<TConstProc__7<T1, T2, T3, T4, T5, T6, T7>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> __interface DELPHIINTERFACE TConstProc__8;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> using _di_TConstProc__8 =  ::System::DelphiInterface<TConstProc__8<T1, T2, T3, T4, T5, T6, T7, T8>>;
#endif
template<typename T, typename TResult> __interface DELPHIINTERFACE TConstFunc__2;
#ifdef __clang__
template<typename T, typename TResult> using _di_TConstFunc__2 =  ::System::DelphiInterface<TConstFunc__2<T, TResult>>;
#endif
template<typename T1, typename T2, typename TResult> __interface DELPHIINTERFACE TConstFunc__3;
#ifdef __clang__
template<typename T1, typename T2, typename TResult> using _di_TConstFunc__3 =  ::System::DelphiInterface<TConstFunc__3<T1, T2, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename TResult> __interface DELPHIINTERFACE TConstFunc__4;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename TResult> using _di_TConstFunc__4 =  ::System::DelphiInterface<TConstFunc__4<T1, T2, T3, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename TResult> __interface DELPHIINTERFACE TConstFunc__5;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename TResult> using _di_TConstFunc__5 =  ::System::DelphiInterface<TConstFunc__5<T1, T2, T3, T4, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> __interface DELPHIINTERFACE TConstFunc__6;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> using _di_TConstFunc__6 =  ::System::DelphiInterface<TConstFunc__6<T1, T2, T3, T4, T5, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TResult> __interface DELPHIINTERFACE TConstFunc__7;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TResult> using _di_TConstFunc__7 =  ::System::DelphiInterface<TConstFunc__7<T1, T2, T3, T4, T5, T6, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TResult> __interface DELPHIINTERFACE TConstFunc__8;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TResult> using _di_TConstFunc__8 =  ::System::DelphiInterface<TConstFunc__8<T1, T2, T3, T4, T5, T6, T7, TResult>>;
#endif
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TResult> __interface DELPHIINTERFACE TConstFunc__9;
#ifdef __clang__
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TResult> using _di_TConstFunc__9 =  ::System::DelphiInterface<TConstFunc__9<T1, T2, T3, T4, T5, T6, T7, T8, TResult>>;
#endif
__interface DELPHIINTERFACE ITypeInfoChangeNotify;
typedef  ::System::DelphiInterface<ITypeInfoChangeNotify> _di_ITypeInfoChangeNotify;
__interface DELPHIINTERFACE IEnumerateChildren;
typedef  ::System::DelphiInterface<IEnumerateChildren> _di_IEnumerateChildren;
__interface DELPHIINTERFACE IChangeNotification;
typedef  ::System::DelphiInterface<IChangeNotification> _di_IChangeNotification;
__interface DELPHIINTERFACE IValueChangeNotify;
typedef  ::System::DelphiInterface<IValueChangeNotify> _di_IValueChangeNotify;
__interface DELPHIINTERFACE INameChangeNotify;
typedef  ::System::DelphiInterface<INameChangeNotify> _di_INameChangeNotify;
__interface DELPHIINTERFACE IList;
typedef  ::System::DelphiInterface<IList> _di_IList;
template<typename T> __interface DELPHIINTERFACE IEnumerable__1;
#ifdef __clang__
template<typename T> using _di_IEnumerable__1 =  ::System::DelphiInterface<IEnumerable__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE IReverseEnumeratorHost__1;
#ifdef __clang__
template<typename T> using _di_IReverseEnumeratorHost__1 =  ::System::DelphiInterface<IReverseEnumeratorHost__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE IReverseEnumerable__1;
#ifdef __clang__
template<typename T> using _di_IReverseEnumerable__1 =  ::System::DelphiInterface<IReverseEnumerable__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE IQuery__1;
#ifdef __clang__
template<typename T> using _di_IQuery__1 =  ::System::DelphiInterface<IQuery__1<T>>;
#endif
template<typename T> class DELPHICLASS TQuery__1;
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> class DELPHICLASS TContainerQueryAccess__3;
template<typename T_COLLECTION, typename T> __interface DELPHIINTERFACE IBasicContainerQuery__2;
#ifdef __clang__
template<typename T_COLLECTION, typename T> using _di_IBasicContainerQuery__2 =  ::System::DelphiInterface<IBasicContainerQuery__2<T_COLLECTION, T>>;
#endif
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> __interface DELPHIINTERFACE IContainerQuery__3;
#ifdef __clang__
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> using _di_IContainerQuery__3 =  ::System::DelphiInterface<IContainerQuery__3<T_REAL_COLLECTION, T_COLLECTION, T>>;
#endif
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> class DELPHICLASS TContainerQuery__3;
//-- type declarations -------------------------------------------------------
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface TConstProc__1  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T Arg1) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2> __interface TConstProc__2  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3> __interface TConstProc__3  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4> __interface TConstProc__4  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5> __interface TConstProc__5  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> __interface TConstProc__6  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5, const T6 Arg6) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> __interface TConstProc__7  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5, const T6 Arg6, const T7 Arg7) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> __interface TConstProc__8  : public  ::System::IInterface 
{
	virtual void __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5, const T6 Arg6, const T7 Arg7, const T8 Arg8) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T, typename TResult> __interface TConstFunc__2  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T Arg1) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename TResult> __interface TConstFunc__3  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename TResult> __interface TConstFunc__4  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename TResult> __interface TConstFunc__5  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> __interface TConstFunc__6  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TResult> __interface TConstFunc__7  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5, const T6 Arg6) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TResult> __interface TConstFunc__8  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5, const T6 Arg6, const T7 Arg7) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TResult> __interface TConstFunc__9  : public  ::System::IInterface 
{
	virtual TResult __fastcall Invoke(const T1 Arg1, const T2 Arg2, const T3 Arg3, const T4 Arg4, const T5 Arg5, const T6 Arg6, const T7 Arg7, const T8 Arg8) = 0 ;
};

__interface  INTERFACE_UUID("{685977B5-59C9-444C-A548-F19A9575CAA1}") ITypeInfoChangeNotify  : public  ::System::IInterface 
{
	virtual void __fastcall TypeInfoChange( ::System::TObject* AObject) = 0 ;
};

__interface  INTERFACE_UUID("{F3B5192A-990E-4FA4-9CE3-55271DD29A17}") IEnumerateChildren  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::TObject*> > __fastcall GetEnumerator() = 0 ;
};

__interface  INTERFACE_UUID("{A926EB37-2FB2-4ADC-9B5C-FB9B9DB19894}") IChangeNotification  : public  ::System::IInterface 
{
	virtual  ::System::Sysutils::_di_TProc __fastcall AddChangeNotification(const  ::System::Sysutils::_di_TProc ALambda) = 0 ;
	virtual void __fastcall RemoveChangeNotification(const  ::System::Sysutils::_di_TProc ALambda) = 0 ;
	virtual  ::System::Sysutils::_di_TProc __fastcall AddDestroyNotification(const  ::System::Sysutils::_di_TProc ALambda) = 0 ;
	virtual void __fastcall RemoveDestroyNotification(const  ::System::Sysutils::_di_TProc ALambda) = 0 ;
};

__interface  INTERFACE_UUID("{9706B98D-7358-4111-A90E-1C3BE0738DD5}") IValueChangeNotify  : public  ::System::IInterface 
{
	virtual void __fastcall ChangeNotify() = 0 ;
};

__interface  INTERFACE_UUID("{B214194E-2EB6-4BFC-AB92-D749F72D82D2}") INameChangeNotify  : public  ::System::IInterface 
{
	virtual void __fastcall NameChanged() = 0 ;
};

__interface  INTERFACE_UUID("{EEFAD71F-D914-4F0B-A092-DBE8223F48CA}") IList  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::Rtti::TValue> > __fastcall GetValueEnumerator() = 0 ;
	virtual void __fastcall ClearValues() = 0 ;
	virtual  ::System::Rtti::TValue __fastcall GetNewValue() = 0 ;
	virtual void __fastcall AddValue(const  ::System::Rtti::TValue &AValue) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface  INTERFACE_UUID("{CAFEC3AE-090E-4135-849E-B39A213C7231}") IEnumerable__1  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetEnumerator() = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface  INTERFACE_UUID("{C6AAC7EC-5F44-41D0-BF9C-D2BE9BF7B351}") IReverseEnumeratorHost__1  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetEnumerator() = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface  INTERFACE_UUID("{D95A8112-779C-4B45-BE62-BA12D4E6D28F}") IReverseEnumerable__1  : public IEnumerable__1<T> 
{
	virtual  ::System::DelphiInterface<IReverseEnumeratorHost__1<T> > __fastcall GetReverse() = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface  INTERFACE_UUID("{B6ABA8F6-C80C-48D5-B08C-4C0C10F2FA54}") IQuery__1  : public  ::System::IInterface 
{
	virtual bool __fastcall Equals(const  ::System::DelphiInterface<IEnumerable__1<T> > AOther, const  ::System::DelphiInterface<TConstFunc__3<T,T,bool> > ACompareFunc = ( ::System::DelphiInterface<TConstFunc__3<T,T,bool> >)(0x0)) = 0 ;
	virtual bool __fastcall Intersects(const  ::System::DelphiInterface<IEnumerable__1<T> > AOther) = 0 ;
	virtual bool __fastcall Contains(const T AItem) = 0 /* overload */;
	virtual bool __fastcall Contains(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc) = 0 /* overload */;
	virtual int __fastcall CountOf(const T AItem) = 0 /* overload */;
	virtual int __fastcall CountOf(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc) = 0 /* overload */;
	virtual int __fastcall Sum(const  ::System::DelphiInterface<TConstFunc__2<T,int> > ACompareFunc) = 0 ;
	virtual bool __fastcall IfFind(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, /* out */ T &ARes) = 0 /* overload */;
	virtual bool __fastcall IfFind(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, const  ::System::DelphiInterface<TConstProc__1<T> > AFoundProc) = 0 /* overload */;
	virtual bool __fastcall IsEmpty() = 0 ;
	virtual T __fastcall First() = 0 /* overload */;
	virtual bool __fastcall First(/* out */ T &ARes) = 0 /* overload */;
	virtual bool __fastcall IndexOf(const T AValue, /* out */ int &AIndex) = 0 /* overload */;
	virtual bool __fastcall IndexOf(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, /* out */ int &AIndex) = 0 /* overload */;
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TQuery__1 : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::DelphiInterface< ::System::IEnumerator__1<T> > > > FCreateEnumerator;
	 ::System::DelphiInterface< ::System::Generics::Defaults::IComparer__1<T> > FComparer;
	__classmethod bool __fastcall GetAsObject(T AGenItem, /* out */  ::System::TObject* &ARes);
	__classmethod bool __fastcall GetAsInterface(T AGenItem, /* out */  ::System::_di_IInterface &ARes);
	bool __fastcall DefaultEquals(const  ::System::DelphiInterface<IEnumerable__1<T> > AOther);
	HIDESBASE bool __fastcall Equals(const  ::System::DelphiInterface<IEnumerable__1<T> > AOther, const  ::System::DelphiInterface<TConstFunc__3<T,T,bool> > ACompareFunc);
	bool __fastcall Intersects(const  ::System::DelphiInterface<IEnumerable__1<T> > AOther);
	bool __fastcall Contains(const T AItem)/* overload */;
	bool __fastcall Contains(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc)/* overload */;
	int __fastcall CountOf(const T AItem)/* overload */;
	int __fastcall CountOf(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc)/* overload */;
	int __fastcall Sum(const  ::System::DelphiInterface<TConstFunc__2<T,int> > ACompareFunc);
	bool __fastcall IfFind(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, /* out */ T &ARes)/* overload */;
	bool __fastcall IfFind(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, const  ::System::DelphiInterface<TConstProc__1<T> > AFoundProc)/* overload */;
	bool __fastcall IsEmpty();
	T __fastcall First()/* overload */;
	bool __fastcall First(/* out */ T &ARes)/* overload */;
	bool __fastcall IndexOf(const T AValue, /* out */ int &AIndex)/* overload */;
	bool __fastcall IndexOf(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, /* out */ int &AIndex)/* overload */;
	
public:
	__fastcall TQuery__1(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::DelphiInterface< ::System::IEnumerator__1<T> > > > ACreateEnumerator);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TQuery__1() { }
	
private:
	void *__IQuery__1;	// IQuery__1<T> 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B6ABA8F6-C80C-48D5-B08C-4C0C10F2FA54}
	operator  ::System::DelphiInterface<IQuery__1<T> >()
	{
		 ::System::DelphiInterface<IQuery__1<T> > intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IQuery__1<T>*(void) { return (IQuery__1<T>*)&__IQuery__1; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> class PASCALIMPLEMENTATION TContainerQueryAccess__3 : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
private:
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::DelphiInterface< ::System::IEnumerator__1<T> > > > FCreateEnumerator;
	T_REAL_COLLECTION FCollection;
	
public:
	template<typename T_OBJECT> T_REAL_COLLECTION __fastcall ForEachObject(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T_OBJECT> > AProc);
	template<typename T_OBJECT> T_REAL_COLLECTION __fastcall ForWhileObject(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T_OBJECT,bool> > AProc);
	template<typename T_INTERFACE> T_REAL_COLLECTION __fastcall ForEachInterface(const  ::System::DelphiInterface<TConstProc__1<T_INTERFACE> > AProc)/* overload */;
	template<typename T_INTERFACE> T_REAL_COLLECTION __fastcall ForWhileInterface(const  ::System::DelphiInterface<TConstFunc__2<T_INTERFACE,bool> > AProc)/* overload */;
	__fastcall TContainerQueryAccess__3(T_REAL_COLLECTION ACollection, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::DelphiInterface< ::System::IEnumerator__1<T> > > > ACreateEnumerator);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TContainerQueryAccess__3() { }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T_COLLECTION, typename T> __interface  INTERFACE_UUID("{3243BF2F-8493-442B-B77A-6B4CDD696276}") IBasicContainerQuery__2  : public IQuery__1<T> 
{
	virtual T_COLLECTION __fastcall Filter(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc) = 0 /* overload */;
	virtual T_COLLECTION __fastcall Skip(int ACount) = 0 ;
	virtual T_COLLECTION __fastcall Take(int ACount) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> __interface  INTERFACE_UUID("{6F2946A8-F9C1-4FEE-91B2-83E5F6D5E8ED}") IContainerQuery__3  : public IBasicContainerQuery__2<T_COLLECTION,T> 
{
	virtual T_REAL_COLLECTION __fastcall Find(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, /* out */ T &ARes) = 0 /* overload */;
	virtual T_REAL_COLLECTION __fastcall Find(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, const  ::System::DelphiInterface<TConstProc__1<T> > AFoundProc) = 0 /* overload */;
	virtual T_REAL_COLLECTION __fastcall ForEach(const  ::System::DelphiInterface<TConstProc__1<T> > AProc) = 0 /* overload */;
	virtual T_REAL_COLLECTION __fastcall ForEach(const  ::System::DelphiInterface<TConstProc__2<int,T> > AProc) = 0 /* overload */;
	virtual T_REAL_COLLECTION __fastcall ForFirst(const  ::System::DelphiInterface<TConstProc__1<T> > AProc) = 0 /* overload */;
	virtual T_REAL_COLLECTION __fastcall ForFirst(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, const  ::System::DelphiInterface<TConstProc__1<T> > AProc) = 0 /* overload */;
	virtual T_REAL_COLLECTION __fastcall DoOnce(const  ::System::DelphiInterface<TConstProc__1<T_REAL_COLLECTION> > AProc) = 0 ;
	virtual TContainerQueryAccess__3<T_REAL_COLLECTION,T_COLLECTION,T>* __fastcall Access() = 0 ;
};

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T_REAL_COLLECTION, typename T_COLLECTION, typename T> class PASCALIMPLEMENTATION TContainerQuery__3 : public TQuery__1<T>
{
	typedef TQuery__1<T> inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__1<T_COLLECTION> > FCreateCollection;
	 ::System::DelphiInterface<TConstProc__2<T_COLLECTION,T> > FAddToCollection;
	T_REAL_COLLECTION FCollection;
	TContainerQueryAccess__3<T_REAL_COLLECTION,T_COLLECTION,T>* FAccess;
	T_COLLECTION __fastcall Filter(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc);
	T_COLLECTION __fastcall Skip(int ACount);
	T_COLLECTION __fastcall Take(int ACount);
	T_REAL_COLLECTION __fastcall Find(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, /* out */ T &ARes)/* overload */;
	T_REAL_COLLECTION __fastcall Find(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, const  ::System::DelphiInterface<TConstProc__1<T> > AFoundProc)/* overload */;
	T_REAL_COLLECTION __fastcall ForEach(const  ::System::DelphiInterface<TConstProc__1<T> > AProc)/* overload */;
	T_REAL_COLLECTION __fastcall ForEach(const  ::System::DelphiInterface<TConstProc__2<int,T> > AProc)/* overload */;
	T_REAL_COLLECTION __fastcall ForFirst(const  ::System::DelphiInterface<TConstProc__1<T> > AProc)/* overload */;
	T_REAL_COLLECTION __fastcall ForFirst(const  ::System::DelphiInterface<TConstFunc__2<T,bool> > ACompareFunc, const  ::System::DelphiInterface<TConstProc__1<T> > AProc)/* overload */;
	T_REAL_COLLECTION __fastcall DoOnce(const  ::System::DelphiInterface<TConstProc__1<T_REAL_COLLECTION> > AProc);
	TContainerQueryAccess__3<T_REAL_COLLECTION,T_COLLECTION,T>* __fastcall Access();
	
public:
	__fastcall TContainerQuery__3(const T_REAL_COLLECTION ACollection, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::DelphiInterface< ::System::IEnumerator__1<T> > > > ACreateEnumerator, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1<T_COLLECTION> > ACreateCollection, const  ::System::DelphiInterface<TConstProc__2<T_COLLECTION,T> > AAddToCollection);
	__fastcall virtual ~TContainerQuery__3();
private:
	void *__IContainerQuery__3;	// IContainerQuery__3<T_REAL_COLLECTION,T_COLLECTION,T> 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6F2946A8-F9C1-4FEE-91B2-83E5F6D5E8ED}
	operator  ::System::DelphiInterface<IContainerQuery__3<T_REAL_COLLECTION,T_COLLECTION,T> >()
	{
		 ::System::DelphiInterface<IContainerQuery__3<T_REAL_COLLECTION,T_COLLECTION,T> > intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IContainerQuery__3<T_REAL_COLLECTION,T_COLLECTION,T>*(void) { return (IContainerQuery__3<T_REAL_COLLECTION,T_COLLECTION,T>*)&__IContainerQuery__3; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Common */
}	/* namespace Containers */
}	/* namespace Mitov */

//-- user supplied -----------------------------------------------------------
#ifdef __OLD__MANAGED_INTERFACE_OPERATORS__
  #define MANAGED_INTERFACE_OPERATORS
  #undef __OLD__MANAGED_INTERFACE_OPERATORS__
#endif // __OLD__MANAGED_INTERFACE_OPERATORS__

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_Containers_CommonHPP

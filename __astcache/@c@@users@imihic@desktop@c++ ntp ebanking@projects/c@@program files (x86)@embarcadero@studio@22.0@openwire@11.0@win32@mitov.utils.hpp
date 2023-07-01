// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Utils.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_UtilsHPP
#define Mitov_UtilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Rtti.hpp>
#include <System.SysUtils.hpp>
#include <Mitov.Containers.List.hpp>
#include <Mitov.Elements.hpp>
#include <Mitov.Containers.Common.hpp>
#include <Mitov.Containers.Utils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mitov
{
namespace Utils
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ICommandLineParam;
typedef  ::System::DelphiInterface<ICommandLineParam> _di_ICommandLineParam;
class DELPHICLASS TBasicCommandLineParam;
class DELPHICLASS TCommandLineParam;
class DELPHICLASS TOptionalCommandLineParam;
class DELPHICLASS TRequiredCommandLineSwitch;
class DELPHICLASS TOptionalCommandLineSwitch;
__interface DELPHIINTERFACE ICpmmandLineParametersParser;
typedef  ::System::DelphiInterface<ICpmmandLineParametersParser> _di_ICpmmandLineParametersParser;
class DELPHICLASS TCpmmandLineParametersParser;
template<typename T> class DELPHICLASS TComponentEnumerator__1;
template<typename T> class DELPHICLASS TComponentEnumeratorRecursive__1;
template<typename T> class DELPHICLASS TComponentReverseEnumerator__1;
template<typename T> class DELPHICLASS TComponentReverseEnumeratorRecursive__1;
struct TComponentHelper /* Helper for class ' ::System::Classes::TComponent*' */;
class DELPHICLASS TInterfaceStringsEnumerator;
class DELPHICLASS TInterfaceStringsReverseEnumerator;
struct TStringsHelper /* Helper for class ' ::System::Classes::TStrings*' */;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{38DE15BC-6944-4AC0-9454-19252A97318D}") ICommandLineParam  : public  ::System::IInterface 
{
	virtual bool __fastcall TryProcessSwitch(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList) = 0 ;
	virtual bool __fastcall TryProcessParam(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList, /* out */ bool &AIsOptional) = 0 ;
	virtual void __fastcall AddHelpLines(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::Mitov::Elements::TRecTuple__2< ::System::UnicodeString, ::System::UnicodeString> > > ADescriptions) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicCommandLineParam : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > FOnValue;
	virtual bool __fastcall TryProcessSwitch(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList);
	virtual bool __fastcall TryProcessParam(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList, /* out */ bool &AIsOptional);
	virtual void __fastcall AddHelpLines(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::Mitov::Elements::TRecTuple__2< ::System::UnicodeString, ::System::UnicodeString> > > ADescriptions);
	
public:
	__fastcall TBasicCommandLineParam(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicCommandLineParam() { }
	
private:
	void *__ICommandLineParam;	// ICommandLineParam 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {38DE15BC-6944-4AC0-9454-19252A97318D}
	operator _di_ICommandLineParam()
	{
		_di_ICommandLineParam intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICommandLineParam*(void) { return (ICommandLineParam*)&__ICommandLineParam; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommandLineParam : public TBasicCommandLineParam
{
	typedef TBasicCommandLineParam inherited;
	
protected:
	virtual bool __fastcall TryProcessParam(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList, /* out */ bool &AIsOptional);
public:
	/* TBasicCommandLineParam.Create */ inline __fastcall TCommandLineParam(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue) : TBasicCommandLineParam(AOnValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCommandLineParam() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOptionalCommandLineParam : public TCommandLineParam
{
	typedef TCommandLineParam inherited;
	
protected:
	virtual bool __fastcall TryProcessParam(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList, /* out */ bool &AIsOptional);
public:
	/* TBasicCommandLineParam.Create */ inline __fastcall TOptionalCommandLineParam(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue) : TCommandLineParam(AOnValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOptionalCommandLineParam() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRequiredCommandLineSwitch : public TBasicCommandLineParam
{
	typedef TBasicCommandLineParam inherited;
	
protected:
	 ::System::UnicodeString FSwitch;
	 ::System::UnicodeString FSwitchParameter;
	 ::System::UnicodeString FDescription;
	bool FFailed;
	virtual bool __fastcall TryProcessSwitch(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList);
	virtual void __fastcall AddHelpLines(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::Mitov::Elements::TRecTuple__2< ::System::UnicodeString, ::System::UnicodeString> > > ADescriptions);
	
public:
	__fastcall TRequiredCommandLineSwitch(const  ::System::UnicodeString ASwitch, const  ::System::UnicodeString ADescription, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue)/* overload */;
	__fastcall TRequiredCommandLineSwitch(const  ::System::UnicodeString ASwitch, const  ::System::UnicodeString ASwitchParameter, const  ::System::UnicodeString ADescription, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRequiredCommandLineSwitch() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOptionalCommandLineSwitch : public TRequiredCommandLineSwitch
{
	typedef TRequiredCommandLineSwitch inherited;
	
protected:
	virtual bool __fastcall TryProcessSwitch(const  ::Mitov::Containers::List::_di_IStringArrayList AParamsList);
public:
	/* TRequiredCommandLineSwitch.Create */ inline __fastcall TOptionalCommandLineSwitch(const  ::System::UnicodeString ASwitch, const  ::System::UnicodeString ADescription, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue)/* overload */ : TRequiredCommandLineSwitch(ASwitch, ADescription, AOnValue) { }
	/* TRequiredCommandLineSwitch.Create */ inline __fastcall TOptionalCommandLineSwitch(const  ::System::UnicodeString ASwitch, const  ::System::UnicodeString ASwitchParameter, const  ::System::UnicodeString ADescription, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString,bool> > AOnValue)/* overload */ : TRequiredCommandLineSwitch(ASwitch, ASwitchParameter, ADescription, AOnValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOptionalCommandLineSwitch() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{762CCE74-5B59-4760-8D71-0FE84FC42BAE}") ICpmmandLineParametersParser  : public  ::System::IInterface 
{
	virtual _di_ICpmmandLineParametersParser __fastcall Add(const _di_ICommandLineParam AParam) = 0 ;
	virtual bool __fastcall Process() = 0 ;
	virtual  ::Mitov::Containers::List::_di_IStringArrayList __fastcall GetHelpLines(int ALeftSpacing) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCpmmandLineParametersParser : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::Mitov::Containers::List::_di_IStringArrayList FParamsList;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_ICommandLineParam> > FParamsParsersList;
	_di_ICpmmandLineParametersParser __fastcall Add(const _di_ICommandLineParam AParam);
	bool __fastcall Process();
	 ::Mitov::Containers::List::_di_IStringArrayList __fastcall GetHelpLines(int ALeftSpacing);
	
public:
	__classmethod _di_ICpmmandLineParametersParser __fastcall Create();
	__fastcall TCpmmandLineParametersParser();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCpmmandLineParametersParser() { }
	
private:
	void *__ICpmmandLineParametersParser;	// ICpmmandLineParametersParser 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {762CCE74-5B59-4760-8D71-0FE84FC42BAE}
	operator _di_ICpmmandLineParametersParser()
	{
		_di_ICpmmandLineParametersParser intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICpmmandLineParametersParser*(void) { return (ICpmmandLineParametersParser*)&__ICpmmandLineParametersParser; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TComponentEnumerator__1 : public  ::Mitov::Containers::Utils::TBasicEnumerator__1<T>
{
	typedef  ::Mitov::Containers::Utils::TBasicEnumerator__1<T> inherited;
	
protected:
	T FComponent;
	int FIndex;
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T,int> > FGetCount;
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__3<T,int,T> > FGetItem;
	
public:
	virtual  ::System::TObject* __fastcall GetCurrent();
	virtual void __fastcall Reset();
	virtual bool __fastcall MoveNext();
	virtual T __fastcall GenericGetCurrent();
	virtual void __fastcall AfterConstruction();
	__fastcall TComponentEnumerator__1(T AComponent, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T,int> > AGetCount, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<T,int,T> > AGetItem);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentEnumerator__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TComponentEnumeratorRecursive__1 : public TComponentEnumerator__1<T>
{
	typedef TComponentEnumerator__1<T> inherited;
	
protected:
	 ::System::DelphiInterface< ::System::IEnumerator__1<T> > FNested;
	
public:
	virtual void __fastcall Reset();
	virtual bool __fastcall MoveNext();
	virtual T __fastcall GenericGetCurrent();
public:
	/* {Mitov_Utils}TComponentEnumerator<Mitov_Utils_TComponentEnumeratorRecursive<T>_T>.Create */ inline __fastcall TComponentEnumeratorRecursive__1(T AComponent, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T,int> > AGetCount, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<T,int,T> > AGetItem) : TComponentEnumerator__1<T>(AComponent, AGetCount, AGetItem) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentEnumeratorRecursive__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TComponentReverseEnumerator__1 : public TComponentEnumerator__1<T>
{
	typedef TComponentEnumerator__1<T> inherited;
	
public:
	virtual void __fastcall Reset();
	virtual bool __fastcall MoveNext();
public:
	/* {Mitov_Utils}TComponentEnumerator<Mitov_Utils_TComponentReverseEnumerator<T>_T>.Create */ inline __fastcall TComponentReverseEnumerator__1(T AComponent, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T,int> > AGetCount, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<T,int,T> > AGetItem) : TComponentEnumerator__1<T>(AComponent, AGetCount, AGetItem) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentReverseEnumerator__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TComponentReverseEnumeratorRecursive__1 : public TComponentReverseEnumerator__1<T>
{
	typedef TComponentReverseEnumerator__1<T> inherited;
	
protected:
	 ::System::DelphiInterface< ::System::IEnumerator__1<T> > FNested;
	
public:
	virtual void __fastcall Reset();
	virtual bool __fastcall MoveNext();
	virtual T __fastcall GenericGetCurrent();
public:
	/* {Mitov_Utils}TComponentEnumerator<Mitov_Utils_TComponentReverseEnumeratorRecursive<T>_T>.Create */ inline __fastcall TComponentReverseEnumeratorRecursive__1(T AComponent, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T,int> > AGetCount, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<T,int,T> > AGetItem) : TComponentReverseEnumerator__1<T>(AComponent, AGetCount, AGetItem) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentReverseEnumeratorRecursive__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInterfaceStringsEnumerator : public  ::Mitov::Containers::Utils::TBasicEnumerator__1< ::System::UnicodeString>
{
	typedef  ::Mitov::Containers::Utils::TBasicEnumerator__1< ::System::UnicodeString> inherited;
	
private:
	int FIndex;
	 ::System::Classes::TStrings* FStrings;
	
public:
	virtual void __fastcall Reset();
	virtual bool __fastcall MoveNext();
	virtual  ::System::UnicodeString __fastcall GenericGetCurrent();
	__fastcall TInterfaceStringsEnumerator( ::System::Classes::TStrings* AStrings);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInterfaceStringsEnumerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInterfaceStringsReverseEnumerator : public TInterfaceStringsEnumerator
{
	typedef TInterfaceStringsEnumerator inherited;
	
public:
	virtual void __fastcall Reset();
	virtual bool __fastcall MoveNext();
	__fastcall TInterfaceStringsReverseEnumerator( ::System::Classes::TStrings* AStrings);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInterfaceStringsReverseEnumerator() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall GetTrimmedFloatString(float AValue)/* overload */;
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall GetTrimmedFloatString(double AValue)/* overload */;
extern DELPHI_PACKAGE  ::System::Classes::TComponent* __fastcall GetMainOwnerComponent( ::System::Classes::TComponent* AComponent);
extern DELPHI_PACKAGE bool __fastcall StringToCharInt(const  ::System::UnicodeString AValue, /* out */ int &AResult);
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall DesignTimeTextToString(const  ::System::UnicodeString AText);
}	/* namespace Utils */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_UtilsHPP

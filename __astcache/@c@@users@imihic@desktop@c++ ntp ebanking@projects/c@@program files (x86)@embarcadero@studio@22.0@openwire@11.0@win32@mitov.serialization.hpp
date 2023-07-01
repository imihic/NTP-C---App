// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Serialization.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_SerializationHPP
#define Mitov_SerializationHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Rtti.hpp>
#include <System.TypInfo.hpp>
#include <Mitov.Elements.hpp>
#include <Mitov.Containers.List.hpp>
#include <Mitov.Containers.Common.hpp>
#include <Mitov.Containers.Dictionary.hpp>
#include <Mitov.Attributes.hpp>
#include <Mitov.TypeInfo.hpp>
#include <Mitov.Utils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mitov
{
namespace Serialization
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS SerializeAttribute;
class DELPHICLASS SerializeNameAttribute;
class DELPHICLASS SerializeUTCTimeAttribute;
__interface DELPHIINTERFACE ISequentialReader;
typedef  ::System::DelphiInterface<ISequentialReader> _di_ISequentialReader;
__interface DELPHIINTERFACE ILoadNoticatier;
typedef  ::System::DelphiInterface<ILoadNoticatier> _di_ILoadNoticatier;
class DELPHICLASS TLoadNoticatier;
class DELPHICLASS TSequentialReaderAccess;
class DELPHICLASS TReaderAccess;
__interface DELPHIINTERFACE IReader;
typedef  ::System::DelphiInterface<IReader> _di_IReader;
class DELPHICLASS TBasicWriterAccess;
class DELPHICLASS TWriterAccess;
__interface DELPHIINTERFACE IWriter;
typedef  ::System::DelphiInterface<IWriter> _di_IWriter;
class DELPHICLASS TSequentialWriterAccess;
__interface DELPHIINTERFACE ISequentialWriter;
typedef  ::System::DelphiInterface<ISequentialWriter> _di_ISequentialWriter;
__interface DELPHIINTERFACE ISerializable;
typedef  ::System::DelphiInterface<ISerializable> _di_ISerializable;
__interface DELPHIINTERFACE IPostSerializable;
typedef  ::System::DelphiInterface<IPostSerializable> _di_IPostSerializable;
class DELPHICLASS TBasicReader;
class DELPHICLASS TBasicWriter;
class DELPHICLASS TBasicSequentialWriter;
class DELPHICLASS TWriterAdapter;
class DELPHICLASS TWriterObjectAdapter;
class DELPHICLASS TReaderObjectAdapter;
class DELPHICLASS TClassFactory;
class DELPHICLASS TSerialization;
class DELPHICLASS TSerialize;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TSerializeOption : unsigned char { Defaults, Events, ComponentType, ComponentName, Children, Bindings, ExcludeDynamicTypeInfo };

typedef  ::System::Set<TSerializeOption, _DELPHI_SET_ENUMERATOR(TSerializeOption::Defaults), _DELPHI_SET_ENUMERATOR(TSerializeOption::ExcludeDynamicTypeInfo)> TSerializeOptions;

enum class DECLSPEC_DENUM TDeserializeOption : unsigned char { ExcludeDynamicTypeInfo, FromPaste, NoCrossFormConnections };

typedef  ::System::Set<TDeserializeOption, _DELPHI_SET_ENUMERATOR(TDeserializeOption::ExcludeDynamicTypeInfo), _DELPHI_SET_ENUMERATOR(TDeserializeOption::NoCrossFormConnections)> TDeserializeOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION SerializeAttribute : public  ::Mitov::Attributes::TBasicBooleanAttribute
{
	typedef  ::Mitov::Attributes::TBasicBooleanAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Boolean>.Create */ inline __fastcall SerializeAttribute(const bool AValue) :  ::Mitov::Attributes::TBasicBooleanAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~SerializeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION SerializeNameAttribute : public  ::Mitov::Attributes::TBasicStringAttribute
{
	typedef  ::Mitov::Attributes::TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall SerializeNameAttribute(const  ::System::UnicodeString AValue) :  ::Mitov::Attributes::TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~SerializeNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION SerializeUTCTimeAttribute : public  ::Mitov::Attributes::TBasicBooleanAttribute
{
	typedef  ::Mitov::Attributes::TBasicBooleanAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Boolean>.Create */ inline __fastcall SerializeUTCTimeAttribute(const bool AValue) :  ::Mitov::Attributes::TBasicBooleanAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~SerializeUTCTimeAttribute() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{323065B3-8A3E-428B-B155-4CD3EE757F6B}") ISequentialReader  : public  ::System::IInterface 
{
	virtual TDeserializeOptions __fastcall GetOptions() = 0 ;
	virtual bool __fastcall HasMore() = 0 ;
	virtual _di_ISequentialReader __fastcall SkipOne() = 0 ;
	virtual bool __fastcall ReadNextBinary(bool APeekOnly, /* out */  ::System::DynamicArray< ::System::Byte> &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextBinary(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextBinaries(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextNested(bool APeekOnly, /* out */ _di_IReader &ANestedReader) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextNested(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextNesteds(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextNesteds(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<int,_di_IReader> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextArray(bool APeekOnly, /* out */ _di_ISequentialReader &AArrayReader) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextArray(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextArrays(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyString(bool APeekOnly, /* out */  ::System::UnicodeString &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyString(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyString(bool APeekOnly, /* out */  ::System::UnicodeString &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyString(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextStrings(/* out */  ::Mitov::Containers::List::_di_IStringArrayList &AData) = 0 ;
	virtual  ::Mitov::Containers::List::_di_IStringArrayList __fastcall ReadNextStrings() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextStrings(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ __int64 &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ __int64 &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > __fastcall ReadNextOnlyInt64Numbers() = 0 ;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData) = 0 /* overload */;
	virtual bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > __fastcall ReadNextAnyInt64Numbers() = 0 ;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ unsigned __int64 &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ unsigned __int64 &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > __fastcall ReadNextOnlyUInt64Numbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData) = 0 /* overload */;
	virtual bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > __fastcall ReadNextAnyUInt64Numbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ int &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ int &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > __fastcall ReadNextOnlyIntegerNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData) = 0 /* overload */;
	virtual bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > __fastcall ReadNextAnyIntegerNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ unsigned &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ unsigned &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > __fastcall ReadNextOnlyUnsignedNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData) = 0 /* overload */;
	virtual bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > __fastcall ReadNextAnyUnsignedNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ double &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ double &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > __fastcall ReadNextOnlyRealNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData) = 0 /* overload */;
	virtual bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > __fastcall ReadNextAnyRealNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ float &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ float &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > __fastcall ReadNextOnlyFloatNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData) = 0 /* overload */;
	virtual bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > &AData) = 0 /* overload */;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > __fastcall ReadNextAnyFloatNumbers() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData) = 0 /* overload */;
	virtual bool __fastcall ReadNextBoolean(bool APeekOnly, /* out */ bool &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextBoolean(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall IfReadNextBooleans(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<bool> > &AData) = 0 ;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<bool> > __fastcall ReadNextBooleans() = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextBooleans(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData) = 0 /* overload */;
	virtual  ::System::Sysutils::_di_TProc __fastcall AddLoadedNotification(const  ::System::Sysutils::_di_TProc ALambda) = 0 ;
	virtual void __fastcall RemoveLoadedNotification(const  ::System::Sysutils::_di_TProc ALambda) = 0 ;
};

__interface  INTERFACE_UUID("{3F134ECB-4E8B-4D40-8B2C-64A59239C9C9}") ILoadNoticatier  : public  ::Mitov::Containers::List::ILinkedList__1< ::System::Sysutils::_di_TProc> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLoadNoticatier : public  ::Mitov::Containers::List::TLinkedList__1< ::System::Sysutils::_di_TProc>
{
	typedef  ::Mitov::Containers::List::TLinkedList__1< ::System::Sysutils::_di_TProc> inherited;
	
public:
	__fastcall virtual ~TLoadNoticatier();
public:
	/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc>.Create */ inline __fastcall TLoadNoticatier() :  ::Mitov::Containers::List::TLinkedList__1< ::System::Sysutils::_di_TProc>() { }
	/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc>.CreateEnumerator */ inline __fastcall TLoadNoticatier( ::System::Generics::Collections::TEnumerator__1< ::System::Sysutils::_di_TProc>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1< ::System::Sysutils::_di_TProc>(AEnumerator) { }
	/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc>.CreateEnumerator */ inline __fastcall TLoadNoticatier(const  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::Sysutils::_di_TProc> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1< ::System::Sysutils::_di_TProc>(AEnumerator) { }
	/* {Mitov_Containers_List}TLinkedList<System_SysUtils_TProc>.CreateCopy */ inline __fastcall TLoadNoticatier(const  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::Sysutils::_di_TProc> > AOther) :  ::Mitov::Containers::List::TLinkedList__1< ::System::Sysutils::_di_TProc>(AOther) { }
	
private:
	void *__ILoadNoticatier;	// ILoadNoticatier 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3F134ECB-4E8B-4D40-8B2C-64A59239C9C9}
	operator _di_ILoadNoticatier()
	{
		_di_ILoadNoticatier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILoadNoticatier*(void) { return (ILoadNoticatier*)&__ILoadNoticatier; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSequentialReaderAccess : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::UnicodeString, ::System::UnicodeString> > FRenameMap;
	 ::System::UnicodeString FPath;
	TDeserializeOptions FOptions;
	_di_ILoadNoticatier FLoadNoticatier;
	template<typename T> static void __fastcall ReadNestedSet(const _di_IReader AReader, /* out */ T &AData);
	
public:
	 ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::UnicodeString, ::System::UnicodeString> > __fastcall GetRenameMap();
	_di_ILoadNoticatier __fastcall GetLoadNoticatier();
	 ::System::UnicodeString __fastcall GetPath();
	void __fastcall ResetPath();
	template<typename T> bool __fastcall ReadNextEnum(bool APeekOnly, /* out */ T &AData)/* overload */;
	template<typename T> _di_ISequentialReader __fastcall ReadNextEnum(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	template<typename T> bool __fastcall ReadNextSet(bool APeekOnly, /* out */ T &AData)/* overload */;
	template<typename T> _di_ISequentialReader __fastcall ReadNextSet(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	
protected:
	TDeserializeOptions __fastcall GetOptions();
	virtual bool __fastcall HasMore() = 0 ;
	virtual _di_ISequentialReader __fastcall SkipOne() = 0 ;
	virtual bool __fastcall ReadNextBinary(bool APeekOnly, /* out */  ::System::DynamicArray< ::System::Byte> &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextBinary(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	_di_ISequentialReader __fastcall ReadNextBinaries(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData)/* overload */;
	virtual bool __fastcall ReadNextNested(bool APeekOnly, /* out */ _di_IReader &ANestedReader) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextNested(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	_di_ISequentialReader __fastcall ReadNextNesteds(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData)/* overload */;
	_di_ISequentialReader __fastcall ReadNextNesteds(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2<int,_di_IReader> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextArray(bool APeekOnly, /* out */ _di_ISequentialReader &AArrayReader) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextArray(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	_di_ISequentialReader __fastcall ReadNextArrays(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyString(bool APeekOnly, /* out */  ::System::UnicodeString &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyString(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyString(bool APeekOnly, /* out */  ::System::UnicodeString &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyString(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextStrings(/* out */  ::Mitov::Containers::List::_di_IStringArrayList &AData)/* overload */;
	 ::Mitov::Containers::List::_di_IStringArrayList __fastcall ReadNextStrings()/* overload */;
	_di_ISequentialReader __fastcall ReadNextStrings(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ __int64 &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ __int64 &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > __fastcall ReadNextOnlyInt64Numbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData)/* overload */;
	bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<__int64> > __fastcall ReadNextAnyInt64Numbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ unsigned __int64 &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ unsigned __int64 &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > __fastcall ReadNextOnlyUInt64Numbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData)/* overload */;
	bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned __int64> > __fastcall ReadNextAnyUInt64Numbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ int &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ int &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > __fastcall ReadNextOnlyIntegerNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData)/* overload */;
	bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<int> > __fastcall ReadNextAnyIntegerNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ unsigned &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ unsigned &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > __fastcall ReadNextOnlyUnsignedNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData)/* overload */;
	bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<unsigned> > __fastcall ReadNextAnyUnsignedNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ double &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ double &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > __fastcall ReadNextOnlyRealNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData)/* overload */;
	bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<double> > __fastcall ReadNextAnyRealNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ float &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNextAnyNumber(bool APeekOnly, /* out */ float &AData)/* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextAnyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextOnlyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > __fastcall ReadNextOnlyFloatNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextOnlyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData)/* overload */;
	bool __fastcall IfReadNextAnyNumbers(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<float> > __fastcall ReadNextAnyFloatNumbers()/* overload */;
	_di_ISequentialReader __fastcall ReadNextAnyNumbers(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData)/* overload */;
	virtual bool __fastcall ReadNextBoolean(bool APeekOnly, /* out */ bool &AData) = 0 /* overload */;
	virtual _di_ISequentialReader __fastcall ReadNextBoolean(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall IfReadNextBooleans(/* out */  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<bool> > &AData)/* overload */;
	 ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<bool> > __fastcall ReadNextBooleans()/* overload */;
	_di_ISequentialReader __fastcall ReadNextBooleans(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData)/* overload */;
	 ::System::Sysutils::_di_TProc __fastcall AddLoadedNotification(const  ::System::Sysutils::_di_TProc ALambda);
	void __fastcall RemoveLoadedNotification(const  ::System::Sysutils::_di_TProc ALambda);
	
public:
	__classmethod _di_ISequentialReader __fastcall Create(_di_ILoadNoticatier ALoadNoticatier,  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::UnicodeString, ::System::UnicodeString> > ARenameMap, const  ::System::UnicodeString APath, TDeserializeOptions AOptions);
	__fastcall TSequentialReaderAccess(_di_ILoadNoticatier ALoadNoticatier,  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::UnicodeString, ::System::UnicodeString> > ARenameMap, const  ::System::UnicodeString APath, TDeserializeOptions AOptions);
public:
	/* TObject.Create */ inline __fastcall TSequentialReaderAccess() :  ::System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSequentialReaderAccess() { }
	
private:
	void *__ISequentialReader;	// ISequentialReader 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {323065B3-8A3E-428B-B155-4CD3EE757F6B}
	operator _di_ISequentialReader()
	{
		_di_ISequentialReader intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISequentialReader*(void) { return (ISequentialReader*)&__ISequentialReader; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TReaderAccess : public TSequentialReaderAccess
{
	typedef TSequentialReaderAccess inherited;
	
protected:
	virtual TReaderAccess* __fastcall Access();
	virtual _di_IReader __fastcall GetReader() = 0 ;
	
public:
	template<typename T> bool __fastcall ReadEnum(const  ::System::UnicodeString AName, /* out */ T &AData)/* overload */;
	template<typename T> _di_ISequentialReader __fastcall ReadEnum(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	template<typename T> bool __fastcall ReadSet(const  ::System::UnicodeString AName, /* out */ T &AData)/* overload */;
	template<typename T> _di_ISequentialReader __fastcall ReadSet(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
public:
	/* TSequentialReaderAccess.CreateObject */ inline __fastcall TReaderAccess(_di_ILoadNoticatier ALoadNoticatier,  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::UnicodeString, ::System::UnicodeString> > ARenameMap, const  ::System::UnicodeString APath, TDeserializeOptions AOptions) : TSequentialReaderAccess(ALoadNoticatier, ARenameMap, APath, AOptions) { }
	
public:
	/* TObject.Create */ inline __fastcall TReaderAccess() : TSequentialReaderAccess() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TReaderAccess() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{4DC81895-CACB-4DB4-A56C-E1F3C4F99B31}") IReader  : public ISequentialReader 
{
	virtual TReaderAccess* __fastcall Access() = 0 ;
	virtual bool __fastcall NextName(/* out */  ::System::UnicodeString &AName) = 0 /* overload */;
	virtual _di_IReader __fastcall NextName(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadConstructorType(/* out */  ::System::UnicodeString &ATypeName) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadConstructorType(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadBinary(const  ::System::UnicodeString AName, /* out */  ::System::DynamicArray< ::System::Byte> &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadBinary(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadBinary(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */  ::System::DynamicArray< ::System::Byte> &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadBinary(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNested(const  ::System::UnicodeString AName, /* out */ _di_IReader &ANestedReader) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNested(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNested(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ _di_IReader &ANestedReader) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNested(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadArray(const  ::System::UnicodeString AName, /* out */ _di_ISequentialReader &AArrayReader) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadArray(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadArray(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ _di_ISequentialReader &AArrayReader) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadArray(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadString(const  ::System::UnicodeString AName, /* out */  ::System::UnicodeString &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadString(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadString(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */  ::System::UnicodeString &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadString(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ __int64 &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ __int64 &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ unsigned __int64 &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ unsigned __int64 &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ int &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ int &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ unsigned &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ unsigned &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ double &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ double &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ float &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ float &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadBoolean(const  ::System::UnicodeString AName, /* out */ bool &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadBoolean(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
	virtual bool __fastcall ReadBoolean(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ bool &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadBoolean(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicWriterAccess : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	TSerializeOptions FOptions;
	template<typename T> void __fastcall WriteNestedSet(const _di_IWriter AWriter, T AData);
	TSerializeOptions __fastcall GetOptions();
	
public:
	__fastcall TBasicWriterAccess(TSerializeOptions AOptions);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicWriterAccess() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWriterAccess : public TBasicWriterAccess
{
	typedef TBasicWriterAccess inherited;
	
protected:
	virtual TWriterAccess* __fastcall Access();
	virtual _di_IWriter __fastcall GetWriter() = 0 ;
	
public:
	template<typename T> _di_IWriter __fastcall WriteEnum(const  ::System::UnicodeString AName, T AData);
	template<typename T> _di_IWriter __fastcall WriteSet(const  ::System::UnicodeString AName, T AData);
public:
	/* TBasicWriterAccess.Create */ inline __fastcall TWriterAccess(TSerializeOptions AOptions) : TBasicWriterAccess(AOptions) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWriterAccess() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{E33B1A59-190A-4929-8427-38F14927531A}") IWriter  : public  ::System::IInterface 
{
	virtual TSerializeOptions __fastcall GetOptions() = 0 ;
	virtual TWriterAccess* __fastcall Access() = 0 ;
	virtual _di_IWriter __fastcall WriteConstructorType(const  ::System::UnicodeString ATypeName) = 0 ;
	virtual _di_IWriter __fastcall WriteNill(const  ::System::UnicodeString AName) = 0 ;
	virtual _di_IWriter __fastcall WriteBinary(const  ::System::UnicodeString AName,  ::System::PByte AData, int ASize) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteBinary(const  ::System::UnicodeString AName, const  ::System::DynamicArray< ::System::Byte> AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNested(const  ::System::UnicodeString AName, /* out */ _di_IWriter &ANestedWriter) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNested(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IWriter> > AProc) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteArray(const  ::System::UnicodeString AName, /* out */ _di_ISequentialWriter &AArrayWriter) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteArray(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialWriter> > AProc) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteString(const  ::System::UnicodeString AName, const  ::System::UnicodeString AData) = 0 ;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, __int64 AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, unsigned __int64 AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, int AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, unsigned AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, double AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, float AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteBoolean(const  ::System::UnicodeString AName, bool AData) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSequentialWriterAccess : public TBasicWriterAccess
{
	typedef TBasicWriterAccess inherited;
	
protected:
	virtual TSequentialWriterAccess* __fastcall Access();
	virtual _di_ISequentialWriter __fastcall GetWriter() = 0 ;
	
public:
	template<typename T> _di_ISequentialWriter __fastcall WriteEnum(T AData);
	template<typename T> _di_ISequentialWriter __fastcall WriteSet(T AData);
public:
	/* TBasicWriterAccess.Create */ inline __fastcall TSequentialWriterAccess(TSerializeOptions AOptions) : TBasicWriterAccess(AOptions) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSequentialWriterAccess() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A9832E03-FEE7-4FB2-A993-92ADD9947444}") ISequentialWriter  : public  ::System::IInterface 
{
	virtual TSerializeOptions __fastcall GetOptions() = 0 ;
	virtual TSequentialWriterAccess* __fastcall Access() = 0 ;
	virtual _di_ISequentialWriter __fastcall WriteNill() = 0 ;
	virtual _di_ISequentialWriter __fastcall WriteBinary( ::System::PByte AData, int ASize) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteBinary(const  ::System::DynamicArray< ::System::Byte> AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNested(/* out */ _di_IWriter &ANestedWriter) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNested(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IWriter> > AProc) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteArray(/* out */ _di_ISequentialWriter &ANestedWriter) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteArray(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialWriter> > AProc) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteString(const  ::System::UnicodeString AData) = 0 ;
	virtual _di_ISequentialWriter __fastcall WriteNumber(__int64 AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned __int64 AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(int AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(double AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(float AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteBoolean(bool AData) = 0 ;
};

__interface  INTERFACE_UUID("{887FEB07-9267-46AE-B2B4-784B5C6108B6}") ISerializable  : public  ::System::IInterface 
{
	virtual void __fastcall SerializationRead(const _di_IReader AReader) = 0 ;
	virtual void __fastcall SerializationWrite(const _di_IWriter AWriter, const  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects) = 0 ;
};

__interface  INTERFACE_UUID("{55C1339F-E166-4878-BCB3-C682B36945A1}") IPostSerializable  : public  ::System::IInterface 
{
	virtual void __fastcall PostSerializationRead(const _di_IReader AReader) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicReader : public TReaderAccess
{
	typedef TReaderAccess inherited;
	
protected:
	virtual _di_IReader __fastcall GetReader();
	virtual bool __fastcall NextName(/* out */  ::System::UnicodeString &AName) = 0 /* overload */;
	virtual _di_IReader __fastcall NextName(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadConstructorType(/* out */  ::System::UnicodeString &ATypeName) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadConstructorType(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadBinary(const  ::System::UnicodeString AName, /* out */  ::System::DynamicArray< ::System::Byte> &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadBinary(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	bool __fastcall ReadBinary(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */  ::System::DynamicArray< ::System::Byte> &AData)/* overload */;
	_di_IReader __fastcall ReadBinary(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNested(const  ::System::UnicodeString AName, /* out */ _di_IReader &ANestedReader) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNested(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNested(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ _di_IReader &ANestedReader)/* overload */;
	virtual _di_IReader __fastcall ReadNested(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadArray(const  ::System::UnicodeString AName, /* out */ _di_ISequentialReader &AArrayReader) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadArray(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadArray(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ _di_ISequentialReader &AArrayReader)/* overload */;
	virtual _di_IReader __fastcall ReadArray(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadString(const  ::System::UnicodeString AName, /* out */  ::System::UnicodeString &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadString(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadString(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */  ::System::UnicodeString &AData)/* overload */;
	virtual _di_IReader __fastcall ReadString(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ __int64 &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ __int64 &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ unsigned __int64 &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ unsigned __int64 &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ int &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ int &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ unsigned &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ unsigned &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ double &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ double &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString AName, /* out */ float &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ float &AData)/* overload */;
	virtual _di_IReader __fastcall ReadNumber(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadBoolean(const  ::System::UnicodeString AName, /* out */ bool &AData) = 0 /* overload */;
	virtual _di_IReader __fastcall ReadBoolean(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
	virtual bool __fastcall ReadBoolean(const  ::System::UnicodeString *ANames, const int ANames_High, /* out */ bool &AData)/* overload */;
	virtual _di_IReader __fastcall ReadBoolean(const  ::System::UnicodeString *ANames, const int ANames_High, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc())/* overload */;
public:
	/* TSequentialReaderAccess.CreateObject */ inline __fastcall TBasicReader(_di_ILoadNoticatier ALoadNoticatier,  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::UnicodeString, ::System::UnicodeString> > ARenameMap, const  ::System::UnicodeString APath, TDeserializeOptions AOptions) : TReaderAccess(ALoadNoticatier, ARenameMap, APath, AOptions) { }
	
public:
	/* TObject.Create */ inline __fastcall TBasicReader() : TReaderAccess() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicReader() { }
	
private:
	void *__IReader;	// IReader 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {323065B3-8A3E-428B-B155-4CD3EE757F6B}
	operator _di_ISequentialReader()
	{
		_di_ISequentialReader intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISequentialReader*(void) { return (ISequentialReader*)&__IReader; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4DC81895-CACB-4DB4-A56C-E1F3C4F99B31}
	operator _di_IReader()
	{
		_di_IReader intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IReader*(void) { return (IReader*)&__IReader; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicWriter : public TWriterAccess
{
	typedef TWriterAccess inherited;
	
protected:
	virtual _di_IWriter __fastcall GetWriter();
	virtual _di_IWriter __fastcall WriteConstructorType(const  ::System::UnicodeString ATypeName) = 0 ;
	virtual _di_IWriter __fastcall WriteNill(const  ::System::UnicodeString AName) = 0 ;
	virtual _di_IWriter __fastcall WriteBinary(const  ::System::UnicodeString AName,  ::System::PByte AData, int ASize) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteBinary(const  ::System::UnicodeString AName, const  ::System::DynamicArray< ::System::Byte> AData)/* overload */;
	virtual _di_IWriter __fastcall WriteNested(const  ::System::UnicodeString AName, /* out */ _di_IWriter &ANestedWriter) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNested(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IWriter> > AProc)/* overload */;
	virtual _di_IWriter __fastcall WriteArray(const  ::System::UnicodeString AName, /* out */ _di_ISequentialWriter &AArrayWriter) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteArray(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialWriter> > AProc)/* overload */;
	virtual _di_IWriter __fastcall WriteString(const  ::System::UnicodeString AName, const  ::System::UnicodeString AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, __int64 AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, unsigned __int64 AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, int AData)/* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, unsigned AData)/* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, double AData) = 0 /* overload */;
	virtual _di_IWriter __fastcall WriteNumber(const  ::System::UnicodeString AName, float AData)/* overload */;
	virtual _di_IWriter __fastcall WriteBoolean(const  ::System::UnicodeString AName, bool AData) = 0 /* overload */;
public:
	/* TBasicWriterAccess.Create */ inline __fastcall TBasicWriter(TSerializeOptions AOptions) : TWriterAccess(AOptions) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicWriter() { }
	
private:
	void *__IWriter;	// IWriter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E33B1A59-190A-4929-8427-38F14927531A}
	operator _di_IWriter()
	{
		_di_IWriter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IWriter*(void) { return (IWriter*)&__IWriter; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicSequentialWriter : public TSequentialWriterAccess
{
	typedef TSequentialWriterAccess inherited;
	
protected:
	virtual _di_ISequentialWriter __fastcall GetWriter();
	virtual _di_ISequentialWriter __fastcall WriteNill() = 0 ;
	virtual _di_ISequentialWriter __fastcall WriteBinary( ::System::PByte AData, int ASize) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteBinary(const  ::System::DynamicArray< ::System::Byte> AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNested(/* out */ _di_IWriter &ANestedWriter) = 0 /* overload */;
	_di_ISequentialWriter __fastcall WriteNested(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IWriter> > AProc)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteArray(/* out */ _di_ISequentialWriter &ANestedWriter) = 0 /* overload */;
	_di_ISequentialWriter __fastcall WriteArray(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialWriter> > AProc)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteString(const  ::System::UnicodeString AData) = 0 ;
	virtual _di_ISequentialWriter __fastcall WriteNumber(__int64 AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned __int64 AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(int AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(double AData) = 0 /* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(float AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteBoolean(bool AData) = 0 ;
public:
	/* TBasicWriterAccess.Create */ inline __fastcall TBasicSequentialWriter(TSerializeOptions AOptions) : TSequentialWriterAccess(AOptions) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicSequentialWriter() { }
	
private:
	void *__ISequentialWriter;	// ISequentialWriter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A9832E03-FEE7-4FB2-A993-92ADD9947444}
	operator _di_ISequentialWriter()
	{
		_di_ISequentialWriter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISequentialWriter*(void) { return (ISequentialWriter*)&__ISequentialWriter; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWriterAdapter : public TBasicSequentialWriter
{
	typedef TBasicSequentialWriter inherited;
	
protected:
	_di_IWriter FWriter;
	 ::System::UnicodeString FName;
	virtual _di_ISequentialWriter __fastcall WriteNill();
	virtual _di_ISequentialWriter __fastcall WriteBinary( ::System::PByte AData, int ASize)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNested(/* out */ _di_IWriter &ANestedWriter)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteArray(/* out */ _di_ISequentialWriter &ANestedWriter)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteString(const  ::System::UnicodeString AData);
	virtual _di_ISequentialWriter __fastcall WriteNumber(__int64 AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned __int64 AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(int AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(double AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(float AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteBoolean(bool AData);
	
public:
	__classmethod _di_ISequentialWriter __fastcall Create(const  ::System::UnicodeString AName, const _di_IWriter AWriter, TSerializeOptions AOptions);
	__fastcall TWriterAdapter(const  ::System::UnicodeString AName, const _di_IWriter AWriter, TSerializeOptions AOptions);
public:
	/* TBasicWriterAccess.Create */ inline __fastcall TWriterAdapter(TSerializeOptions AOptions) : TBasicSequentialWriter(AOptions) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWriterAdapter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_ISequentialWriter __fastcall  WriteBinary(const  ::System::DynamicArray< ::System::Byte> AData){ return TBasicSequentialWriter::WriteBinary(AData); }
	inline _di_ISequentialWriter __fastcall  WriteNested(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IWriter> > AProc){ return TBasicSequentialWriter::WriteNested(AProc); }
	inline _di_ISequentialWriter __fastcall  WriteArray(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialWriter> > AProc){ return TBasicSequentialWriter::WriteArray(AProc); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWriterObjectAdapter : public TBasicSequentialWriter
{
	typedef TBasicSequentialWriter inherited;
	
protected:
	_di_IWriter FWriter;
	virtual _di_ISequentialWriter __fastcall WriteNill();
	virtual _di_ISequentialWriter __fastcall WriteBinary( ::System::PByte AData, int ASize)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNested(/* out */ _di_IWriter &ANestedWriter)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteArray(/* out */ _di_ISequentialWriter &ANestedWriter)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteString(const  ::System::UnicodeString AData);
	virtual _di_ISequentialWriter __fastcall WriteNumber(__int64 AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned __int64 AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(int AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(unsigned AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(double AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteNumber(float AData)/* overload */;
	virtual _di_ISequentialWriter __fastcall WriteBoolean(bool AData);
	
public:
	__classmethod _di_ISequentialWriter __fastcall Create(const _di_IWriter AWriter, TSerializeOptions AOptions);
	__fastcall TWriterObjectAdapter(const _di_IWriter AWriter, TSerializeOptions AOptions);
public:
	/* TBasicWriterAccess.Create */ inline __fastcall TWriterObjectAdapter(TSerializeOptions AOptions) : TBasicSequentialWriter(AOptions) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWriterObjectAdapter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_ISequentialWriter __fastcall  WriteBinary(const  ::System::DynamicArray< ::System::Byte> AData){ return TBasicSequentialWriter::WriteBinary(AData); }
	inline _di_ISequentialWriter __fastcall  WriteNested(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IWriter> > AProc){ return TBasicSequentialWriter::WriteNested(AProc); }
	inline _di_ISequentialWriter __fastcall  WriteArray(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialWriter> > AProc){ return TBasicSequentialWriter::WriteArray(AProc); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TReaderObjectAdapter : public TSequentialReaderAccess
{
	typedef TSequentialReaderAccess inherited;
	
protected:
	_di_IReader FReader;
	virtual bool __fastcall HasMore();
	virtual _di_ISequentialReader __fastcall SkipOne();
	virtual bool __fastcall ReadNextBinary(bool APeekOnly, /* out */  ::System::DynamicArray< ::System::Byte> &AData)/* overload */;
	virtual bool __fastcall ReadNextNested(bool APeekOnly, /* out */ _di_IReader &ANestedReader)/* overload */;
	virtual bool __fastcall ReadNextArray(bool APeekOnly, /* out */ _di_ISequentialReader &AArrayReader)/* overload */;
	virtual bool __fastcall ReadNextOnlyString(bool APeekOnly, /* out */  ::System::UnicodeString &AData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ __int64 &AData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ unsigned __int64 &AData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ int &AData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ unsigned &AData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ double &AData)/* overload */;
	virtual bool __fastcall ReadNextOnlyNumber(bool APeekOnly, /* out */ float &AData)/* overload */;
	virtual bool __fastcall ReadNextBoolean(bool APeekOnly, /* out */ bool &AData)/* overload */;
	
public:
	__classmethod _di_ISequentialReader __fastcall Create(const _di_IReader AReader);
	__fastcall TReaderObjectAdapter(const _di_IReader AReader);
public:
	/* TObject.Create */ inline __fastcall TReaderObjectAdapter() : TSequentialReaderAccess() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TReaderObjectAdapter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_ISequentialReader __fastcall  ReadNextBinary(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::DynamicArray< ::System::Byte> > > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextBinary(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextNested(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextNested(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextArray(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISequentialReader> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextArray(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyString(bool APeekOnly, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::System::UnicodeString> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyString(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<__int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyNumber(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned __int64> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyNumber(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<int> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyNumber(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<unsigned> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyNumber(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<double> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyNumber(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextOnlyNumber(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<float> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextOnlyNumber(APeekOnly, AOnData, AOnElse); }
	inline _di_ISequentialReader __fastcall  ReadNextBoolean(bool APeekOnly, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<bool> > AOnData, const  ::System::Sysutils::_di_TProc AOnElse =  ::System::Sysutils::_di_TProc()){ return TSequentialReaderAccess::ReadNextBoolean(APeekOnly, AOnData, AOnElse); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TClassFactory : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
protected:
	static  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::Mitov::Elements::ITuple__2< ::Mitov::Typeinfo::_di_IClassTypeInfo, ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__5< ::System::TObject*, ::System::Classes::TPersistent*, ::Mitov::Typeinfo::_di_IClassTypeInfo, ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> >, ::System::TObject*> > > > > > FFactoriesList;
	
public:
	static bool __fastcall GetDefault(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass, /* out */  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__5< ::System::TObject*, ::System::Classes::TPersistent*, ::Mitov::Typeinfo::_di_IClassTypeInfo, ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> >, ::System::TObject*> > &AFactoryLambda);
	static void __fastcall RegisterDefault(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass,  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__5< ::System::TObject*, ::System::Classes::TPersistent*, ::Mitov::Typeinfo::_di_IClassTypeInfo, ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> >, ::System::TObject*> > AFactoryLambda);
	
protected:
	static void __fastcall InitClass();
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	HIDESBASE  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall TypeInfo(bool AIncludeDynamicTypeInfo = true);
	__classmethod  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall ClassTypeInfo();
	template<typename T> HIDESBASE bool __fastcall IfSupports(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AOnSupports)/* overload */;
	template<typename T> HIDESBASE bool __fastcall IfSupports(T &AInterface)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TClassFactory() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TClassFactory() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSerialization : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
protected:
	static  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::DelphiInterface< ::Mitov::Elements::ITuple__2< ::Mitov::Typeinfo::_di_IClassTypeInfo, ::System::DynamicArray< ::System::UnicodeString> > > > > FIgnoreName;
	
public:
	static void __fastcall RegisterIgnoreNames( ::System::TClass AClass, const  ::System::DynamicArray< ::System::UnicodeString> ANames)/* overload */;
	static void __fastcall RegisterIgnoreNames(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassTypeInfo, const  ::System::DynamicArray< ::System::UnicodeString> ANames)/* overload */;
	static void __fastcall RegisterIgnoreNames( ::System::TClass *AClasses, const int AClasses_High, const  ::System::DynamicArray< ::System::UnicodeString> ANames)/* overload */;
	static bool __fastcall GetNameIgnored(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassTypeInfo, const  ::System::UnicodeString AName);
	
protected:
	static void __fastcall InitClass();
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	HIDESBASE  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall TypeInfo(bool AIncludeDynamicTypeInfo = true);
	__classmethod  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall ClassTypeInfo();
	template<typename T> HIDESBASE bool __fastcall IfSupports(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AOnSupports)/* overload */;
	template<typename T> HIDESBASE bool __fastcall IfSupports(T &AInterface)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TSerialization() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSerialization() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSerialize : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
	
public:
	__interface DELPHIINTERFACE TSerialFromReader;
	typedef  ::System::DelphiInterface<TSerialFromReader> _di_TSerialFromReader;
	__interface TSerialFromReader  : public  ::System::IInterface 
	{
		virtual bool __fastcall Invoke(const _di_ISequentialReader AReader, const  ::Mitov::Typeinfo::_di_ITypedObjectInfo AMember, /* out */  ::System::Rtti::TValue &AValue) = 0 ;
	};
	
	__interface DELPHIINTERFACE TSerialToWriter;
	typedef  ::System::DelphiInterface<TSerialToWriter> _di_TSerialToWriter;
	__interface TSerialToWriter  : public  ::System::IInterface 
	{
		virtual void __fastcall Invoke(const _di_ISequentialWriter AWriter, const  ::Mitov::Typeinfo::_di_ITypedObjectInfo AMember, const  ::System::Rtti::TValue &AValue) = 0 ;
	};
	
	__interface DELPHIINTERFACE TSerialReadInjected;
	typedef  ::System::DelphiInterface<TSerialReadInjected> _di_TSerialReadInjected;
	__interface TSerialReadInjected  : public  ::System::IInterface 
	{
		virtual void __fastcall Invoke(const _di_ISequentialReader AReader,  ::System::TObject* ARootComponent,  ::System::TObject* AOwner, const  ::Mitov::Typeinfo::_di_IMemberInfo AMember, TDeserializeOptions AOptions) = 0 ;
	};
	
	__interface DELPHIINTERFACE TSerialWriteInjected;
	typedef  ::System::DelphiInterface<TSerialWriteInjected> _di_TSerialWriteInjected;
	__interface TSerialWriteInjected  : public  ::System::IInterface 
	{
		virtual void __fastcall Invoke(const _di_ISequentialWriter AWriter,  ::System::TObject* AOwner, const  ::Mitov::Typeinfo::_di_IMemberInfo AMember, TSerializeOptions AOptions, const  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects) = 0 ;
	};
	
	__interface DELPHIINTERFACE TGetClassByName;
	typedef  ::System::DelphiInterface<TGetClassByName> _di_TGetClassByName;
	__interface TGetClassByName  : public  ::System::IInterface 
	{
		virtual bool __fastcall Invoke( ::System::TObject* AOwner, const  ::System::UnicodeString ATypeName, /* out */  ::Mitov::Typeinfo::_di_IClassTypeInfo &ACreateClass) = 0 ;
	};
	
	
private:
	static void __fastcall ToInstance(const _di_IReader AReader, const  ::Mitov::Typeinfo::_di_ITypeInfo AObjType, void * AInstance, const  ::System::Rtti::TValue &AValue, TDeserializeOptions AOptions, const _di_TGetClassByName AOnGetClassByName);
	static  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::Rtti::TValue> > __fastcall ExtractParameters(const _di_ISequentialReader AArrayReader, const  ::Mitov::Typeinfo::_di_IMethodInfo AMethod);
	static void __fastcall ExecuteMethod(const  ::System::Rtti::TValue &AInstance, _di_IReader AReader, const  ::Mitov::Typeinfo::_di_IMethodInfo AMethod);
	static bool __fastcall ExtractSetValue(const _di_ISequentialReader AReader, const  ::Mitov::Typeinfo::_di_ITypeInfo AParamType, /* out */  ::System::Rtti::TValue &AResult);
	static bool __fastcall ObjectFromString(const  ::System::UnicodeString ATypeName,  ::System::TObject* AOwner, /* out */  ::System::TObject* &AObject, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > AOnCreate, const _di_TGetClassByName AOnGetClassByName);
	
protected:
	static  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::Typinfo::PTypeInfo,_di_TSerialFromReader> > FSerialFromReader;
	static  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::DelphiInterface< ::Mitov::Elements::ITuple__2< ::Mitov::Typeinfo::_di_IClassTypeInfo,_di_TSerialFromReader> > > > FClassFromReader;
	static  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::Typinfo::PTypeInfo,_di_TSerialToWriter> > FSerializeToWriter;
	static  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::DelphiInterface< ::Mitov::Elements::ITuple__2< ::Mitov::Typeinfo::_di_IClassTypeInfo,_di_TSerialToWriter> > > > FSerializeClassWriter;
	static  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_TSerialReadInjected> > FSerialReadInjected;
	static  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_TSerialWriteInjected> > FSerialWriteInjected;
	static void __fastcall InitClass();
	
public:
	__classmethod _di_TSerialToWriter __fastcall RegisterSerialToWriter( ::System::Typinfo::PTypeInfo ATypeInfo, const _di_TSerialToWriter AProc)/* overload */;
	__classmethod _di_TSerialToWriter __fastcall RegisterSerialToWriter( ::System::Typinfo::PTypeInfo const *ATypeInfos, const int ATypeInfos_High, const _di_TSerialToWriter AProc)/* overload */;
	__classmethod _di_TSerialToWriter __fastcall RegisterSerialToWriter(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassTypeInfo, const _di_TSerialToWriter AProc)/* overload */;
	__classmethod _di_TSerialToWriter __fastcall RegisterSerialToWriter( ::System::TClass AClass, const _di_TSerialToWriter AProc)/* overload */;
	__classmethod _di_TSerialToWriter __fastcall RegisterSerialToWriter( ::System::TClass const *AClasses, const int AClasses_High, const _di_TSerialToWriter AProc)/* overload */;
	__classmethod void __fastcall UnregisterSerialToWriter(const _di_TSerialToWriter AProc);
	__classmethod _di_TSerialFromReader __fastcall RegisterSerialFromReader( ::System::Typinfo::PTypeInfo ATypeInfo, const _di_TSerialFromReader AProc)/* overload */;
	__classmethod _di_TSerialFromReader __fastcall RegisterSerialFromReader( ::System::Typinfo::PTypeInfo *ATypeInfos, const int ATypeInfos_High, const _di_TSerialFromReader AProc)/* overload */;
	__classmethod _di_TSerialFromReader __fastcall RegisterSerialFromReader(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassTypeInfo, const _di_TSerialFromReader AProc)/* overload */;
	__classmethod _di_TSerialFromReader __fastcall RegisterSerialFromReader( ::System::TClass AClass, const _di_TSerialFromReader AProc)/* overload */;
	__classmethod _di_TSerialFromReader __fastcall RegisterSerialFromReader( ::System::TClass const *AClasses, const int AClasses_High, const _di_TSerialFromReader AProc)/* overload */;
	__classmethod void __fastcall UnregisterSerialFromReader(const _di_TSerialFromReader AProc);
	__classmethod _di_TSerialWriteInjected __fastcall RegisterSerialWriteInjected(const _di_TSerialWriteInjected AProc);
	__classmethod void __fastcall UnregisterSerialWriteInjected(const _di_TSerialWriteInjected AProc);
	__classmethod _di_TSerialReadInjected __fastcall RegisterSerialReadInjected(const _di_TSerialReadInjected AProc);
	__classmethod void __fastcall UnregisterSerialReadInjected(const _di_TSerialReadInjected AProc);
	__classmethod void __fastcall Serialize(const  ::System::UnicodeString AName, const _di_IWriter AWriter, const  ::System::Rtti::TValue &AValue, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	__classmethod void __fastcall Serialize(const  ::System::UnicodeString AName, const _di_IWriter AWriter, const  ::System::Rtti::TValue &AValue, bool AForceConstructable, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	__classmethod void __fastcall Serialize(const _di_ISequentialWriter AWriter, const  ::System::Rtti::TValue &AValue, bool AForceConstructable, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	__classmethod void __fastcall Serialize(const _di_ISequentialWriter AWriter, const  ::System::Rtti::TValue &AValue, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	template<typename T> __classmethod void __fastcall Serialize(const _di_IWriter AWriter, const T AValue, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	template<typename T> __classmethod void __fastcall Serialize(const  ::System::UnicodeString AName, const _di_IWriter AWriter, const T AValue, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	template<typename T> __classmethod void __fastcall Serialize(const _di_ISequentialWriter AWriter, const T AValue, TSerializeOptions AOptions = (TSerializeOptions() << TSerializeOption::Events ),  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects =  ::Mitov::Containers::List::_di_IObjectArrayList())/* overload */;
	__classmethod void __fastcall Deserialize(_di_ISequentialReader AReader, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > AOnInstanceCreated,  ::System::TObject* ARootComponent,  ::System::TObject* AOwner, const  ::Mitov::Typeinfo::_di_ITypedObjectInfo AMember,  ::System::Rtti::TValue &AValue,  ::System::_di_IInterface &AInterface, TDeserializeOptions AOptions = TDeserializeOptions() , const _di_TGetClassByName AOnGetClassByName = _di_TGetClassByName())/* overload */;
	__classmethod void __fastcall Deserialize(const _di_ISequentialReader AReader, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > AOnInstanceCreated,  ::System::TObject* AOwner, const  ::Mitov::Typeinfo::_di_ITypedObjectInfo AMember,  ::System::Rtti::TValue &AValue,  ::System::_di_IInterface &AInterface, TDeserializeOptions AOptions = TDeserializeOptions() , const _di_TGetClassByName AOnGetClassByName = _di_TGetClassByName())/* overload */;
	template<typename T> __classmethod void __fastcall Deserialize(const _di_ISequentialReader AReader, T &AValue, TDeserializeOptions AOptions = TDeserializeOptions() , const _di_TGetClassByName AOnGetClassByName = _di_TGetClassByName())/* overload */;
	template<typename T> __classmethod void __fastcall Deserialize(const _di_ISequentialReader AReader, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > AOnInstanceCreated,  ::System::TObject* ARootComponent,  ::System::TObject* AOwner, T &AValue, TDeserializeOptions AOptions = TDeserializeOptions() , const _di_TGetClassByName AOnGetClassByName = _di_TGetClassByName())/* overload */;
	template<typename T> __classmethod void __fastcall Deserialize(const _di_ISequentialReader AReader, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > AOnInstanceCreated,  ::System::TObject* AOwner, T &AValue, TDeserializeOptions AOptions = TDeserializeOptions() , const _di_TGetClassByName AOnGetClassByName = _di_TGetClassByName())/* overload */;
	__classmethod void __fastcall Reserialize(const _di_IReader AReader, const _di_IWriter AWriter)/* overload */;
	__classmethod void __fastcall Reserialize(const _di_ISequentialReader AReader, const _di_ISequentialWriter AWriter)/* overload */;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	HIDESBASE  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall TypeInfo(bool AIncludeDynamicTypeInfo = true);
	__classmethod  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall ClassTypeInfo();
	template<typename T> HIDESBASE bool __fastcall IfSupports(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AOnSupports)/* overload */;
	template<typename T> HIDESBASE bool __fastcall IfSupports(T &AInterface)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TSerialize() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSerialize() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Serialization */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_SerializationHPP

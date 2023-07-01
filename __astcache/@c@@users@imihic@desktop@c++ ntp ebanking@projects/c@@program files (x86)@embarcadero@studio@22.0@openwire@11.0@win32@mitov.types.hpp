// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Types.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_TypesHPP
#define Mitov_TypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <Mitov.Containers.List.hpp>
#include <Mitov.Containers.Dictionary.hpp>
#include <System.Generics.Collections.hpp>
#include <Mitov.Elements.hpp>
#include <System.Rtti.hpp>
#include <System.TypInfo.hpp>
#include <Mitov.Attributes.hpp>
#include <Mitov.Design.Components.hpp>
#include <Mitov.Containers.Common.hpp>
#include <Mitov.Containers.Utils.hpp>
#include <Mitov.Threading.hpp>
#include <Mitov.Serialization.hpp>
#include <System.Generics.Defaults.hpp>
#include <Mitov.TypeInfo.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
  #ifdef MANAGED_INTERFACE_OPERATORS
    #define __OLD__MANAGED_INTERFACE_OPERATORS__
    #undef MANAGED_INTERFACE_OPERATORS
  #endif // MANAGED_INTERFACE_OPERATORS
template<typename T> class DELPHICLASS TTypedBasicPersistentCollection__1;

namespace Mitov
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
template<typename T> class DELPHICLASS TTypedAttribute__1;
__interface DELPHIINTERFACE IPropertyElement;
typedef  ::System::DelphiInterface<IPropertyElement> _di_IPropertyElement;
class DELPHICLASS TPropertyElement;
__interface DELPHIINTERFACE IPropertyElements;
typedef  ::System::DelphiInterface<IPropertyElements> _di_IPropertyElements;
class DELPHICLASS TPropertyElements;
__interface DELPHIINTERFACE IPersistentDestructionNotify;
typedef  ::System::DelphiInterface<IPersistentDestructionNotify> _di_IPersistentDestructionNotify;
__interface DELPHIINTERFACE IPersistentCollectionNotifier;
typedef  ::System::DelphiInterface<IPersistentCollectionNotifier> _di_IPersistentCollectionNotifier;
__interface DELPHIINTERFACE IPropertyChangeNotify;
typedef  ::System::DelphiInterface<IPropertyChangeNotify> _di_IPropertyChangeNotify;
__interface DELPHIINTERFACE IChangeNotifyLock;
typedef  ::System::DelphiInterface<IChangeNotifyLock> _di_IChangeNotifyLock;
__interface DELPHIINTERFACE ILockItem;
typedef  ::System::DelphiInterface<ILockItem> _di_ILockItem;
__interface DELPHIINTERFACE IChangeNotifyLink;
typedef  ::System::DelphiInterface<IChangeNotifyLink> _di_IChangeNotifyLink;
class DELPHICLASS TChangeNotifyLink;
__interface DELPHIINTERFACE INameChangeNotifyItem;
typedef  ::System::DelphiInterface<INameChangeNotifyItem> _di_INameChangeNotifyItem;
__interface DELPHIINTERFACE IEnabledItem;
typedef  ::System::DelphiInterface<IEnabledItem> _di_IEnabledItem;
__interface DELPHIINTERFACE IEnableItem;
typedef  ::System::DelphiInterface<IEnableItem> _di_IEnableItem;
__interface DELPHIINTERFACE INamedItem;
typedef  ::System::DelphiInterface<INamedItem> _di_INamedItem;
__interface DELPHIINTERFACE INamedPathItem;
typedef  ::System::DelphiInterface<INamedPathItem> _di_INamedPathItem;
class DELPHICLASS TPersistentDestructionAdapter;
class DELPHICLASS TBasicNamedItemAdapter;
class DELPHICLASS TNamedItemAdapter;
class DELPHICLASS TNamedPathItemAdapter;
__interface DELPHIINTERFACE INamableItem;
typedef  ::System::DelphiInterface<INamableItem> _di_INamableItem;
class DELPHICLASS TBasicLockChangeNotifyLock;
class DELPHICLASS TChangeNotifyLock;
class DELPHICLASS TPairedLock;
class DELPHICLASS TPairedLockSection;
class DELPHICLASS TBasicObject;
class DELPHICLASS TLockObject;
class DELPHICLASS TLockInterfacedObject;
__interface DELPHIINTERFACE ICustomIcon;
typedef  ::System::DelphiInterface<ICustomIcon> _di_ICustomIcon;
class DELPHICLASS TLockComponent;
class DELPHICLASS TBasicPersistent;
class DELPHICLASS TBasicInterfacedPersistent;
class DELPHICLASS TLockPersistent;
class DELPHICLASS TDisabledPersistent;
class DELPHICLASS TEnabledPersistent;
class DELPHICLASS TBasicNamedPersistentItem;
class DELPHICLASS TNamedPersistentItem;
template<typename T> class DELPHICLASS TTypedOwnedPersistent__1;
class DELPHICLASS TBasicPersistentCollection;
template<typename T> class DELPHICLASS TTypedBasicPersistentCollection__1;
__interface DELPHIINTERFACE IPersistentCollection;
typedef  ::System::DelphiInterface<IPersistentCollection> _di_IPersistentCollection;
class DELPHICLASS BasicAddItemsAttribute;
class DELPHICLASS BasicAddClassItemsAttribute;
class DELPHICLASS BasicAddCountClassItemsAttribute;
class DELPHICLASS AddItemAttribute;
class DELPHICLASS AddNamedItemAttribute;
class DELPHICLASS AddIndexedNamedItemAttribute;
class DELPHICLASS AddIndexedStartNamedItemAttribute;
class DELPHICLASS TPersistentCollection;
template<typename T> class DELPHICLASS TTypedPersistentCollection__1;
class DELPHICLASS TComponentCollection;
class DELPHICLASS TLockCollectionItem;
__interface DELPHIINTERFACE ICollectionNotifier;
typedef  ::System::DelphiInterface<ICollectionNotifier> _di_ICollectionNotifier;
class DELPHICLASS TLockCollection;
template<typename T> class DELPHICLASS TTypedCollectionItem__1;
template<typename T> class DELPHICLASS TTypedCollection__1;
template<typename T_OWNER, typename T> class DELPHICLASS TTypedOwnerComponentCollection__2;
template<typename T_OWNER, typename T> class DELPHICLASS TTypedOwnerPropertyCollection__2;
class DELPHICLASS PersistentCollectionAttribute;
__interface DELPHIINTERFACE IPersistentCollectionClassInfo;
typedef  ::System::DelphiInterface<IPersistentCollectionClassInfo> _di_IPersistentCollectionClassInfo;
__interface DELPHIINTERFACE IRegisteredPersistents;
typedef  ::System::DelphiInterface<IRegisteredPersistents> _di_IRegisteredPersistents;
__interface DELPHIINTERFACE IRelaxedTimer;
typedef  ::System::DelphiInterface<IRelaxedTimer> _di_IRelaxedTimer;
__interface DELPHIINTERFACE INestedRelaxedTimer;
typedef  ::System::DelphiInterface<INestedRelaxedTimer> _di_INestedRelaxedTimer;
class DELPHICLASS TRelaxedTimer;
struct TWriterHelper /* Helper for class ' ::System::Classes::TWriter*' */;
__interface DELPHIINTERFACE TClassFactoryProc;
typedef  ::System::DelphiInterface<TClassFactoryProc> _di_TClassFactoryProc;
__interface DELPHIINTERFACE TSuffixConverterFunc;
typedef  ::System::DelphiInterface<TSuffixConverterFunc> _di_TSuffixConverterFunc;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TTypedAttribute__1 : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	T FValue;
	
public:
	__property T Value = {read=FValue};
	__fastcall TTypedAttribute__1(const T AValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTypedAttribute__1() { }
	
};

#pragma pack(pop)

typedef double *PReal;

typedef  ::System::UnicodeString TAttributedFileName;

__interface  INTERFACE_UUID("{EDBFDF25-AA3B-4DED-A64F-C6E577CA0750}") IPropertyElement  : public  ::System::IInterface 
{
	virtual  ::System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetIdentName() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetPinPath() = 0 ;
	virtual  ::System::Classes::TPersistent* __fastcall GetPersistent() = 0 ;
	__property  ::System::UnicodeString DisplayName = {read=GetDisplayName};
	__property  ::System::UnicodeString IdentName = {read=GetIdentName};
	__property  ::System::UnicodeString PinPath = {read=GetPinPath};
	__property  ::System::Classes::TPersistent* Persistent = {read=GetPersistent};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertyElement : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::UnicodeString FDisplayName;
	 ::System::UnicodeString FIdentName;
	 ::System::UnicodeString FPinPath;
	 ::System::Classes::TPersistent* FPersistent;
	 ::System::UnicodeString __fastcall GetDisplayName();
	 ::System::UnicodeString __fastcall GetIdentName();
	 ::System::UnicodeString __fastcall GetPinPath();
	 ::System::Classes::TPersistent* __fastcall GetPersistent();
	
public:
	__fastcall TPropertyElement( ::System::Classes::TPersistent* APersistent, const  ::System::UnicodeString AName)/* overload */;
	__fastcall TPropertyElement( ::System::Classes::TPersistent* APersistent, const  ::System::UnicodeString AIdentName, const  ::System::UnicodeString ADisplayName)/* overload */;
	__fastcall TPropertyElement( ::System::Classes::TPersistent* APersistent, const  ::System::UnicodeString AIdentName, const  ::System::UnicodeString APinPath, const  ::System::UnicodeString ADisplayName)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPropertyElement() { }
	
private:
	void *__IPropertyElement;	// IPropertyElement 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EDBFDF25-AA3B-4DED-A64F-C6E577CA0750}
	operator _di_IPropertyElement()
	{
		_di_IPropertyElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyElement*(void) { return (IPropertyElement*)&__IPropertyElement; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{52960AA5-377A-4BAB-9AD8-B6F67FE70941}") IPropertyElements  : public  ::Mitov::Containers::List::IArrayList__1<_di_IPropertyElement> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertyElements : public  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_Types_IPropertyElement>.Create */ inline __fastcall TPropertyElements() :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Types_IPropertyElement>.CreateEnumerator */ inline __fastcall TPropertyElements( ::System::Generics::Collections::TEnumerator__1<_di_IPropertyElement>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Types_IPropertyElement>.CreateEnumerator */ inline __fastcall TPropertyElements(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IPropertyElement> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Types_IPropertyElement>.CreateCopy */ inline __fastcall TPropertyElements(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IPropertyElement> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Types_IPropertyElement>.CreateArray */ inline __fastcall TPropertyElements(const _di_IPropertyElement *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyElement>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Types_IPropertyElement>.Destroy */ inline __fastcall virtual ~TPropertyElements() { }
	
private:
	void *__IPropertyElements;	// IPropertyElements 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {52960AA5-377A-4BAB-9AD8-B6F67FE70941}
	operator _di_IPropertyElements()
	{
		_di_IPropertyElements intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyElements*(void) { return (IPropertyElements*)&__IPropertyElements; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D0700707-FD42-4B12-905A-31F640DD1216}") IPersistentDestructionNotify  : public  ::System::IInterface 
{
	virtual void __fastcall PersistentDestroyed( ::System::Classes::TPersistent* AItem) = 0 ;
};

__interface  INTERFACE_UUID("{4B47936D-B1BF-426E-AAEF-A752074FFD61}") IPersistentCollectionNotifier  : public  ::System::IInterface 
{
	virtual void __fastcall NestedComponentRegistered( ::System::Classes::TPersistentClass AClass) = 0 ;
	virtual void __fastcall ComponentOwnerChanged( ::System::Classes::TComponent* AComponent) = 0 ;
	virtual void __fastcall ComponentIndexChanged( ::System::Classes::TComponent* AComponent, int AIndex) = 0 ;
	virtual void __fastcall PersistentCollectionItemsAdded( ::System::Classes::TPersistent* ACollection, const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems) = 0 ;
	virtual void __fastcall PersistentCollectionItemsRemoving( ::System::Classes::TPersistent* ACollection, const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems) = 0 ;
	virtual void __fastcall PersistentCollectionItemsRemoved( ::System::Classes::TPersistent* ACollection, const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems) = 0 ;
	virtual void __fastcall PersistentCollectionOrderChanged( ::System::Classes::TPersistent* ACollection,  ::System::Classes::TPersistent* AItem1,  ::System::Classes::TPersistent* AItem2) = 0 ;
	virtual void __fastcall PersistentCollectionItemMoved( ::System::Classes::TPersistent* ACollection,  ::System::Classes::TPersistent* AItem, int AFromIndex, int AToIndex) = 0 ;
};

__interface  INTERFACE_UUID("{44E8671C-2852-43DA-A176-148EB7E7E33D}") IPropertyChangeNotify  : public  ::System::IInterface 
{
	virtual void __fastcall BeginModify() = 0 ;
	virtual void __fastcall EndModify() = 0 ;
};

__interface  INTERFACE_UUID("{41898A42-8C0F-4C05-AEE4-C2DE0BAB1869}") IChangeNotifyLock  : public  ::Mitov::Threading::IBasicLock 
{
	virtual void __fastcall ChangeNotify() = 0 ;
	virtual TBasicLockChangeNotifyLock* __fastcall GetAccess() = 0 ;
	virtual  ::System::Sysutils::_di_TProc __fastcall AddChangeNotification(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall RemoveChangeNotification(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual  ::System::Sysutils::_di_TProc __fastcall AddDestroyNotification(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall RemoveDestroyNotification(const  ::System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall DelegateNotifications(const  ::Mitov::Containers::Common::_di_IChangeNotification AItem) = 0 ;
	__property TBasicLockChangeNotifyLock* Access = {read=GetAccess};
};

__interface  INTERFACE_UUID("{92828CB2-05EF-4DDE-8DE1-EABBF87A658F}") ILockItem  : public  ::System::IInterface 
{
	virtual _di_IChangeNotifyLock __fastcall GetLock() = 0 ;
	virtual void __fastcall ForLock(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IChangeNotifyLock> > AProc) = 0 ;
	virtual  ::System::Sysutils::_di_TProc __fastcall GetNotify() = 0 ;
};

__interface  INTERFACE_UUID("{E450099F-CF51-4091-AA96-27B38AEC6F69}") IChangeNotifyLink  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > __fastcall GetProc() = 0 ;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > > > __fastcall GetList() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChangeNotifyLink : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > FProc;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > > > FList;
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > __fastcall GetProc();
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > > > __fastcall GetList();
	
public:
	__fastcall TChangeNotifyLink(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > AProc, const  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > > > AList);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TChangeNotifyLink() { }
	
private:
	void *__IChangeNotifyLink;	// IChangeNotifyLink 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E450099F-CF51-4091-AA96-27B38AEC6F69}
	operator _di_IChangeNotifyLink()
	{
		_di_IChangeNotifyLink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IChangeNotifyLink*(void) { return (IChangeNotifyLink*)&__IChangeNotifyLink; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{D5992297-9D4A-4EEA-B787-9B3C1C588D74}") INameChangeNotifyItem  : public  ::Mitov::Containers::Common::INameChangeNotify 
{
	virtual _di_IChangeNotifyLink __fastcall AddNameChangeNotify(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > ANotify) = 0 ;
	virtual void __fastcall RemoveNameChangeNotify(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > ANotify) = 0 ;
};

__interface  INTERFACE_UUID("{0A104B75-A7FE-498E-A8D8-854306F17B80}") IEnabledItem  : public  ::System::IInterface 
{
	virtual bool __fastcall GetIsEnabled() = 0 ;
};

__interface  INTERFACE_UUID("{7BADBB78-803B-4459-998D-E2A7FFBF0632}") IEnableItem  : public IEnabledItem 
{
	virtual bool __fastcall GetHasEnable() = 0 ;
	virtual bool __fastcall GetCanDisable() = 0 ;
	HIDESBASE virtual bool __fastcall GetIsEnabled() = 0 ;
	virtual void __fastcall SetIsEnabled(bool AValue) = 0 ;
};

__interface  INTERFACE_UUID("{E64A220A-70C6-49E8-8E64-BEC670409DF5}") INamedItem  : public INameChangeNotifyItem 
{
	virtual  ::System::UnicodeString __fastcall GetInstanceName(const  ::System::UnicodeString AParentName =  ::System::UnicodeString()) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetDisplayName(bool ALongName, const  ::System::UnicodeString AParentName =  ::System::UnicodeString()) = 0 ;
};

__interface  INTERFACE_UUID("{3542DF87-6BD8-4E88-9486-0525F8C824D9}") INamedPathItem  : public INameChangeNotifyItem 
{
	virtual  ::System::UnicodeString __fastcall GetDisplayPathName(const  ::System::UnicodeString AParentName =  ::System::UnicodeString()) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistentDestructionAdapter : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > FItemDestroyed;
	void __fastcall PersistentDestroyed( ::System::Classes::TPersistent* AItem);
	
public:
	__fastcall TPersistentDestructionAdapter(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AItemDestroyed);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPersistentDestructionAdapter() { }
	
private:
	void *__IPersistentDestructionNotify;	// IPersistentDestructionNotify 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D0700707-FD42-4B12-905A-31F640DD1216}
	operator _di_IPersistentDestructionNotify()
	{
		_di_IPersistentDestructionNotify intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPersistentDestructionNotify*(void) { return (IPersistentDestructionNotify*)&__IPersistentDestructionNotify; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicNamedItemAdapter : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::Mitov::Elements::TMultiProc__1< ::System::TObject*> FNameChangeNotify;
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString, ::System::UnicodeString> > FGetName;
	 ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > FGetDisplayName;
	_di_IChangeNotifyLink __fastcall AddNameChangeNotify(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > ANotify);
	void __fastcall RemoveNameChangeNotify(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > ANotify);
	void __fastcall NameChanged();
	
public:
	__fastcall TBasicNamedItemAdapter(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString, ::System::UnicodeString> > AGetName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > AGetDisplayName)/* overload */;
	__fastcall TBasicNamedItemAdapter(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > AGetDisplayName)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicNamedItemAdapter() { }
	
private:
	void *__INameChangeNotifyItem;	// INameChangeNotifyItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B214194E-2EB6-4BFC-AB92-D749F72D82D2}
	operator  ::Mitov::Containers::Common::_di_INameChangeNotify()
	{
		 ::Mitov::Containers::Common::_di_INameChangeNotify intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::INameChangeNotify*(void) { return ( ::Mitov::Containers::Common::INameChangeNotify*)&__INameChangeNotifyItem; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D5992297-9D4A-4EEA-B787-9B3C1C588D74}
	operator _di_INameChangeNotifyItem()
	{
		_di_INameChangeNotifyItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INameChangeNotifyItem*(void) { return (INameChangeNotifyItem*)&__INameChangeNotifyItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNamedItemAdapter : public TBasicNamedItemAdapter
{
	typedef TBasicNamedItemAdapter inherited;
	
protected:
	 ::System::UnicodeString __fastcall GetInstanceName(const  ::System::UnicodeString AParentName);
	 ::System::UnicodeString __fastcall GetDisplayName(bool ALongName, const  ::System::UnicodeString AParentName);
public:
	/* TBasicNamedItemAdapter.Create */ inline __fastcall TNamedItemAdapter(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString, ::System::UnicodeString> > AGetName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > AGetDisplayName)/* overload */ : TBasicNamedItemAdapter(AGetName, AGetDisplayName) { }
	/* TBasicNamedItemAdapter.Create */ inline __fastcall TNamedItemAdapter(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > AGetDisplayName)/* overload */ : TBasicNamedItemAdapter(AGetDisplayName) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNamedItemAdapter() { }
	
private:
	void *__INamedItem;	// INamedItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E64A220A-70C6-49E8-8E64-BEC670409DF5}
	operator _di_INamedItem()
	{
		_di_INamedItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamedItem*(void) { return (INamedItem*)&__INamedItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNamedPathItemAdapter : public TBasicNamedItemAdapter
{
	typedef TBasicNamedItemAdapter inherited;
	
protected:
	 ::System::UnicodeString __fastcall GetDisplayPathName(const  ::System::UnicodeString AParentName);
public:
	/* TBasicNamedItemAdapter.Create */ inline __fastcall TNamedPathItemAdapter(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2< ::System::UnicodeString, ::System::UnicodeString> > AGetName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > AGetDisplayName)/* overload */ : TBasicNamedItemAdapter(AGetName, AGetDisplayName) { }
	/* TBasicNamedItemAdapter.Create */ inline __fastcall TNamedPathItemAdapter(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<bool, ::System::UnicodeString, ::System::UnicodeString> > AGetDisplayName)/* overload */ : TBasicNamedItemAdapter(AGetDisplayName) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNamedPathItemAdapter() { }
	
private:
	void *__INamedPathItem;	// INamedPathItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3542DF87-6BD8-4E88-9486-0525F8C824D9}
	operator _di_INamedPathItem()
	{
		_di_INamedPathItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamedPathItem*(void) { return (INamedPathItem*)&__INamedPathItem; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FE675F04-881D-4E31-8CAD-8BFA0DAAF1DE}") INamableItem  : public  ::System::IInterface 
{
	virtual void __fastcall SetDisplayName(const  ::System::UnicodeString AValue) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicLockChangeNotifyLock : public  ::Mitov::Threading::TBasicLock
{
	typedef  ::Mitov::Threading::TBasicLock inherited;
	
protected:
	 ::Mitov::Containers::List::_di_IChangeNotifySupport FChangeNotifySupport;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::Mitov::Containers::List::TInterfacedChangeNotifyItem> > FDelegatedNotications;
	
protected:
	 ::System::Sysutils::_di_TProc __fastcall InternalAddChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	virtual  ::System::Sysutils::_di_TProc __fastcall AddChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	virtual void __fastcall RemoveChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	virtual  ::System::Sysutils::_di_TProc __fastcall AddDestroyNotification(const  ::System::Sysutils::_di_TProc AProc);
	virtual void __fastcall RemoveDestroyNotification(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall DelegateNotifications(const  ::Mitov::Containers::Common::_di_IChangeNotification AItem);
	
public:
	template<typename T> void __fastcall Setter(T &APropValue, T AValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false);
	template<typename T> void __fastcall PropertySetter( ::System::TObject* AOwner, const  ::System::UnicodeString APropertyName, T &APropValue, T AValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false);
	template<typename T> T __fastcall Getter(T &APropValue);
	void __fastcall SetterMin(int &APropValue, int AValue, int AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude(int &APropValue, int AValue, int AMinValue, int AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax(int &APropValue, int AValue, int AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax(int &APropValue, int AValue, int AMinValue, int AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin(__int64 &APropValue, __int64 AValue, __int64 AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude(__int64 &APropValue, __int64 AValue, __int64 AMinValue, __int64 AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax(__int64 &APropValue, __int64 AValue, __int64 AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax(__int64 &APropValue, __int64 AValue, __int64 AMinValue, __int64 AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin(unsigned __int64 &APropValue, unsigned __int64 AValue, unsigned __int64 AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude(unsigned __int64 &APropValue, unsigned __int64 AValue, unsigned __int64 AMinValue, unsigned __int64 AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax(unsigned __int64 &APropValue, unsigned __int64 AValue, unsigned __int64 AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax(unsigned __int64 &APropValue, unsigned __int64 AValue, unsigned __int64 AMinValue, unsigned __int64 AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin(unsigned &APropValue, unsigned AValue, unsigned AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude(unsigned &APropValue, unsigned AValue, unsigned AMinValue, unsigned AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax(unsigned &APropValue, unsigned AValue, unsigned AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax(unsigned &APropValue, unsigned AValue, unsigned AMinValue, unsigned AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin( ::System::Word &APropValue,  ::System::Word AValue,  ::System::Word AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude( ::System::Word &APropValue,  ::System::Word AValue,  ::System::Word AMinValue,  ::System::Word AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax( ::System::Word &APropValue,  ::System::Word AValue,  ::System::Word AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax( ::System::Word &APropValue,  ::System::Word AValue,  ::System::Word AMinValue,  ::System::Word AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin( ::System::Byte &APropValue,  ::System::Byte AValue,  ::System::Byte AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude( ::System::Byte &APropValue,  ::System::Byte AValue,  ::System::Byte AMinValue,  ::System::Byte AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax( ::System::Byte &APropValue,  ::System::Byte AValue,  ::System::Byte AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax( ::System::Byte &APropValue,  ::System::Byte AValue,  ::System::Byte AMinValue,  ::System::Byte AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin(float &APropValue, float AValue, float AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude(float &APropValue, float AValue, float AMinValue, float AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax(float &APropValue, float AValue, float AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax(float &APropValue, float AValue, float AMinValue, float AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMin(double &APropValue, double AValue, double AMinValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinExlude(double &APropValue, double AValue, double AMinValue, double AMinSubstituteValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMax(double &APropValue, double AValue, double AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall SetterMinMax(double &APropValue, double AValue, double AMinValue, double AMaxValue, const  ::System::Sysutils::_di_TProc AUpdatedFunc =  ::System::Sysutils::_di_TProc(), bool AStopLock = false)/* overload */;
	void __fastcall Execute(const  ::System::Sysutils::_di_TProc AUpdatedFunc)/* overload */;
	template<typename T> T __fastcall Execute(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1<T> > AUpdatedFunc)/* overload */;
	void __fastcall ChangeNotify();
	TBasicLockChangeNotifyLock* __fastcall GetAccess();
	virtual void __fastcall BeforeDestruction();
	__classmethod _di_IChangeNotifyLock __fastcall Create(const  ::System::Sysutils::_di_TProc ANotify);
	__fastcall TBasicLockChangeNotifyLock(const  ::System::Sysutils::_di_TProc ANotify);
public:
	/* TObject.Create */ inline __fastcall TBasicLockChangeNotifyLock() :  ::Mitov::Threading::TBasicLock() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicLockChangeNotifyLock() { }
	
private:
	void *__IChangeNotification;	//  ::Mitov::Containers::Common::IChangeNotification 
	void *__IChangeNotifyLock;	// IChangeNotifyLock 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A926EB37-2FB2-4ADC-9B5C-FB9B9DB19894}
	operator  ::Mitov::Containers::Common::_di_IChangeNotification()
	{
		 ::Mitov::Containers::Common::_di_IChangeNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IChangeNotification*(void) { return ( ::Mitov::Containers::Common::IChangeNotification*)&__IChangeNotification; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {41898A42-8C0F-4C05-AEE4-C2DE0BAB1869}
	operator _di_IChangeNotifyLock()
	{
		_di_IChangeNotifyLock intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IChangeNotifyLock*(void) { return (IChangeNotifyLock*)&__IChangeNotifyLock; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChangeNotifyLock : public TBasicLockChangeNotifyLock
{
	typedef TBasicLockChangeNotifyLock inherited;
	
protected:
	 ::Mitov::Threading::_di_IBasicLock FLock;
	
public:
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall ReadLock();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall WriteLock();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall StopLock();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall UnlockAll();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall UnlockAllLockInOrder(const  ::Mitov::Threading::_di_IBasicLock AFirstLock);
	virtual  ::Mitov::Threading::TBasicLock* __fastcall GetInstance();
	__classmethod _di_IChangeNotifyLock __fastcall Create(const  ::System::Sysutils::_di_TProc ANotify);
	__classmethod _di_IChangeNotifyLock __fastcall CreateCopy(const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc ANotify);
	__fastcall TChangeNotifyLock(const  ::System::Sysutils::_di_TProc ANotify);
	__fastcall TChangeNotifyLock(const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc ANotify);
public:
	/* TObject.Create */ inline __fastcall TChangeNotifyLock() : TBasicLockChangeNotifyLock() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TChangeNotifyLock() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPairedLock : public TBasicLockChangeNotifyLock
{
	typedef TBasicLockChangeNotifyLock inherited;
	
protected:
	_di_IChangeNotifyLock FFirstLock;
	_di_IChangeNotifyLock FSecondLock;
	
public:
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall ReadLock();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall WriteLock();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall StopLock();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall UnlockAll();
	virtual  ::Mitov::Threading::_di_ILockSection __fastcall UnlockAllLockInOrder(const  ::Mitov::Threading::_di_IBasicLock AFirstLock);
	virtual  ::Mitov::Threading::TBasicLock* __fastcall GetInstance();
	virtual  ::System::Sysutils::_di_TProc __fastcall AddChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	virtual void __fastcall RemoveChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	__classmethod _di_IChangeNotifyLock __fastcall Create(const _di_IChangeNotifyLock AFirstLock, const _di_IChangeNotifyLock ASecondLock, const  ::System::Sysutils::_di_TProc ANotify);
	__fastcall TPairedLock(const _di_IChangeNotifyLock AFirstLock, const _di_IChangeNotifyLock ASecondLock, const  ::System::Sysutils::_di_TProc ANotify);
public:
	/* TObject.Create */ inline __fastcall TPairedLock() : TBasicLockChangeNotifyLock() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPairedLock() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPairedLockSection : public  ::Mitov::Threading::TLockSection
{
	typedef  ::Mitov::Threading::TLockSection inherited;
	
protected:
	 ::Mitov::Threading::_di_ILockSection FFirstSection;
	 ::Mitov::Threading::_di_ILockSection FSecondSection;
	
public:
	__fastcall TPairedLockSection(const  ::Mitov::Threading::_di_ILockSection AFirstSection, const  ::Mitov::Threading::_di_ILockSection ASecondSection);
	__fastcall virtual ~TPairedLockSection();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicObject : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
protected:
	__classmethod virtual void __fastcall InitDefaults(TBasicObject* AInstance);
	
public:
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual TBasicObject();
	__fastcall virtual ~TBasicObject();
	HIDESBASE  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall TypeInfo(bool AIncludeDynamicTypeInfo = true);
	__classmethod  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall ClassTypeInfo();
	template<typename T> HIDESBASE bool __fastcall IfSupports(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AOnSupports)/* overload */;
	template<typename T> HIDESBASE bool __fastcall IfSupports(T &AInterface)/* overload */;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockObject : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
protected:
	_di_IChangeNotifyLock FLock;
	__classmethod virtual void __fastcall InitDefaults(TLockObject* AInstance);
	
protected:
	virtual void __fastcall NotifyProp();
	
public:
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual TLockObject();
	__fastcall virtual ~TLockObject();
	HIDESBASE  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall TypeInfo(bool AIncludeDynamicTypeInfo = true);
	__classmethod  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall ClassTypeInfo();
	template<typename T> HIDESBASE bool __fastcall IfSupports(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<T> > AOnSupports)/* overload */;
	template<typename T> HIDESBASE bool __fastcall IfSupports(T &AInterface)/* overload */;
};

#pragma pack(pop)

typedef  ::System::TMetaClass* TBasicObjectClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockInterfacedObject : public  ::Mitov::Threading::TBasicInterfacedObject
{
	typedef  ::Mitov::Threading::TBasicInterfacedObject inherited;
	
protected:
	_di_IChangeNotifyLock FLock;
	
public:
	_di_IChangeNotifyLock __fastcall GetLock();
	void __fastcall ForLock(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IChangeNotifyLock> > AProc);
	 ::System::Sysutils::_di_TProc __fastcall GetNotify();
	
protected:
	 ::System::Sysutils::_di_TProc __fastcall AddChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall RemoveChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	 ::System::Sysutils::_di_TProc __fastcall AddDestroyNotification(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall RemoveDestroyNotification(const  ::System::Sysutils::_di_TProc AProc);
	__classmethod virtual void __fastcall InitDefaults( ::Mitov::Threading::TBasicInterfacedObject* AInstance);
	
protected:
	virtual void __fastcall NotifyProp();
public:
	/* TBasicInterfacedObject.Create */ inline __fastcall TLockInterfacedObject() :  ::Mitov::Threading::TBasicInterfacedObject() { }
	/* TBasicInterfacedObject.Destroy */ inline __fastcall virtual ~TLockInterfacedObject() { }
	
private:
	void *__IChangeNotification;	//  ::Mitov::Containers::Common::IChangeNotification 
	void *__ILockItem;	// ILockItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A926EB37-2FB2-4ADC-9B5C-FB9B9DB19894}
	operator  ::Mitov::Containers::Common::_di_IChangeNotification()
	{
		 ::Mitov::Containers::Common::_di_IChangeNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IChangeNotification*(void) { return ( ::Mitov::Containers::Common::IChangeNotification*)&__IChangeNotification; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {92828CB2-05EF-4DDE-8DE1-EABBF87A658F}
	operator _di_ILockItem()
	{
		_di_ILockItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockItem*(void) { return (ILockItem*)&__ILockItem; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CCAA0C94-D7FA-4240-92DF-33A526B4E72D}") ICustomIcon  : public  ::System::IInterface 
{
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetIcon() = 0 ;
};

class PASCALIMPLEMENTATION TLockComponent : public  ::System::Classes::TComponent
{
	typedef  ::System::Classes::TComponent inherited;
	
protected:
	_di_IChangeNotifyLock FLock;
	__classmethod virtual bool __fastcall AutoManaged();
	virtual void __fastcall CreateStart(bool AFromConstructor);
	virtual void __fastcall Loaded();
	virtual void __fastcall DefineProperties( ::System::Classes::TFiler* AFiler);
	
protected:
	virtual void __fastcall NotifyProp();
	
protected:
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetIcon();
	 ::System::Sysutils::_di_TProc __fastcall AddChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall RemoveChangeNotification(const  ::System::Sysutils::_di_TProc AProc);
	 ::System::Sysutils::_di_TProc __fastcall AddDestroyNotification(const  ::System::Sysutils::_di_TProc AProc);
	void __fastcall RemoveDestroyNotification(const  ::System::Sysutils::_di_TProc AProc);
	
public:
	_di_IChangeNotifyLock __fastcall GetLock();
	void __fastcall ForLock(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IChangeNotifyLock> > AProc);
	 ::System::Sysutils::_di_TProc __fastcall GetNotify();
	
protected:
	__classmethod virtual void __fastcall InitDefaults(TLockComponent* AInstance);
	
public:
	virtual void __fastcall Assign( ::System::Classes::TPersistent* ASource);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual TLockComponent( ::System::Classes::TComponent* AOwner);
	__fastcall virtual ~TLockComponent();
	
__published:
	__property Name = {default=0};
private:
	void *__ICustomIcon;	// ICustomIcon 
	void *__IChangeNotification;	//  ::Mitov::Containers::Common::IChangeNotification 
	void *__ILockItem;	// ILockItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CCAA0C94-D7FA-4240-92DF-33A526B4E72D}
	operator _di_ICustomIcon()
	{
		_di_ICustomIcon intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomIcon*(void) { return (ICustomIcon*)&__ICustomIcon; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A926EB37-2FB2-4ADC-9B5C-FB9B9DB19894}
	operator  ::Mitov::Containers::Common::_di_IChangeNotification()
	{
		 ::Mitov::Containers::Common::_di_IChangeNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IChangeNotification*(void) { return ( ::Mitov::Containers::Common::IChangeNotification*)&__IChangeNotification; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {92828CB2-05EF-4DDE-8DE1-EABBF87A658F}
	operator _di_ILockItem()
	{
		_di_ILockItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockItem*(void) { return (ILockItem*)&__ILockItem; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicPersistent : public  ::System::Classes::TPersistent
{
	typedef  ::System::Classes::TPersistent inherited;
	
protected:
	virtual void __fastcall DefineProperties( ::System::Classes::TFiler* AFiler);
	__classmethod virtual void __fastcall InitDefaults( ::System::TObject* AOwnerInstance, TBasicPersistent* AInstance);
	__classmethod virtual bool __fastcall AutoManaged();
	
public:
	virtual void __fastcall Assign( ::System::Classes::TPersistent* ASource);
	virtual void __fastcall BeforeDestruction();
	__fastcall TBasicPersistent();
	__fastcall TBasicPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner);
	__fastcall virtual ~TBasicPersistent();
	HIDESBASE  ::System::Classes::TComponent* __fastcall GetOwnerComponent();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicInterfacedPersistent : public TBasicPersistent
{
	typedef TBasicPersistent inherited;
	
protected:
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
public:
	/* TBasicPersistent.Create */ inline __fastcall TBasicInterfacedPersistent() : TBasicPersistent() { }
	/* TBasicPersistent.CreateOwner */ inline __fastcall TBasicInterfacedPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TBasicPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TBasicInterfacedPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockPersistent : public TBasicInterfacedPersistent
{
	typedef TBasicInterfacedPersistent inherited;
	
protected:
	_di_IChangeNotifyLock FLock;
	 ::System::Classes::TPersistent* FOwnerProperty;
	 ::System::Sysutils::_di_TProc FOnChange;
	
public:
	_di_IChangeNotifyLock __fastcall GetLock();
	void __fastcall ForLock(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IChangeNotifyLock> > AProc);
	 ::System::Sysutils::_di_TProc __fastcall GetNotify();
	
protected:
	virtual void __fastcall NotifyProp();
	void __fastcall ClasicNotifyProp( ::System::TObject* ASender);
	
public:
	template<typename T> __classmethod  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > __fastcall OwnerSetter(T &AInstance)/* overload */;
	virtual void __fastcall Assign( ::System::Classes::TPersistent* ASource);
	DYNAMIC  ::System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall OwnerNameChanged(const  ::System::UnicodeString AOldName, const  ::System::UnicodeString ANewName);
	virtual void __fastcall BeforeDestruction();
	inline __fastcall TLockPersistent() { }
	    __fastcall virtual TLockPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange);;
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TLockPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TBasicInterfacedPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TLockPersistent() { }
	
private:
	void *__ILockItem;	// ILockItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {92828CB2-05EF-4DDE-8DE1-EABBF87A658F}
	operator _di_ILockItem()
	{
		_di_ILockItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockItem*(void) { return (ILockItem*)&__ILockItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDisabledPersistent : public TLockPersistent
{
	typedef TLockPersistent inherited;
	
protected:
	bool FEnabled;
	virtual void __fastcall SetEnabled(bool AValue);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
public:
	/* TLockPersistent.Create */ inline __fastcall virtual TDisabledPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TLockPersistent(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TDisabledPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TLockPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TDisabledPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnabledPersistent : public TDisabledPersistent
{
	typedef TDisabledPersistent inherited;
	
public:
	__fastcall virtual TEnabledPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange);
	
__published:
	__property Enabled = {default=1};
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TEnabledPersistent(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TDisabledPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TEnabledPersistent() { }
	
};

#pragma pack(pop)

typedef  ::System::TMetaClass* TLockPersistentClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicNamedPersistentItem : public TLockPersistent
{
	typedef TLockPersistent inherited;
	
protected:
	 ::Mitov::Elements::TMultiProc__1< ::System::TObject*> FNameChangeNotify;
	virtual  ::System::UnicodeString __fastcall GetInstanceName(const  ::System::UnicodeString AParentName) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetDisplayName(bool ALongName, const  ::System::UnicodeString AParentName) = 0 ;
	_di_IChangeNotifyLink __fastcall AddNameChangeNotify(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > ANotify);
	void __fastcall RemoveNameChangeNotify(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::TObject*> > ANotify);
	virtual void __fastcall NameChanged();
public:
	/* TLockPersistent.Create */ inline __fastcall virtual TBasicNamedPersistentItem(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TLockPersistent(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TBasicNamedPersistentItem(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TLockPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TBasicNamedPersistentItem() { }
	
private:
	void *__INamedItem;	// INamedItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B214194E-2EB6-4BFC-AB92-D749F72D82D2}
	operator  ::Mitov::Containers::Common::_di_INameChangeNotify()
	{
		 ::Mitov::Containers::Common::_di_INameChangeNotify intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::INameChangeNotify*(void) { return ( ::Mitov::Containers::Common::INameChangeNotify*)&__INamedItem; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E64A220A-70C6-49E8-8E64-BEC670409DF5}
	operator _di_INamedItem()
	{
		_di_INamedItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamedItem*(void) { return (INamedItem*)&__INamedItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNamedPersistentItem : public TBasicNamedPersistentItem
{
	typedef TBasicNamedPersistentItem inherited;
	
protected:
	 ::System::UnicodeString FName;
	
protected:
	virtual void __fastcall SetName(const  ::System::UnicodeString AValue);
	
protected:
	virtual  ::System::UnicodeString __fastcall GetInstanceName(const  ::System::UnicodeString AParentName);
	virtual  ::System::UnicodeString __fastcall GetDisplayName(bool ALongName, const  ::System::UnicodeString AParentName);
	void __fastcall SetDisplayName(const  ::System::UnicodeString AValue);
	
__published:
	__property  ::System::UnicodeString Name = {read=FName, write=SetName};
public:
	/* TLockPersistent.Create */ inline __fastcall virtual TNamedPersistentItem(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TBasicNamedPersistentItem(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TNamedPersistentItem(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TBasicNamedPersistentItem(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TNamedPersistentItem() { }
	
private:
	void *__INamableItem;	// INamableItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE675F04-881D-4E31-8CAD-8BFA0DAAF1DE}
	operator _di_INamableItem()
	{
		_di_INamableItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamableItem*(void) { return (INamableItem*)&__INamableItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TTypedOwnedPersistent__1 : public TLockPersistent
{
	typedef TLockPersistent inherited;
	
protected:
	T FOwnerComponent;
	HIDESBASE T __fastcall GetOwnerComponent();
	
public:
	__fastcall TTypedOwnedPersistent__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated, T AOwnerComponent,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange);
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TTypedOwnedPersistent__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TLockPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TTypedOwnedPersistent__1() { }
	
};

#pragma pack(pop)

enum class DECLSPEC_DENUM TPeristentOperation : unsigned char { Added, Removing, Removed, IndexChanged, Swapping, Swapped, Loaded };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicPersistentCollection : public TLockPersistent
{
	typedef TLockPersistent inherited;
	
protected:
	virtual  ::System::Classes::TPersistent* __fastcall IntGetItem(int AIndex) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetName(int AIndex);
	virtual bool __fastcall Contains(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType) = 0 ;
	
public:
	virtual  ::System::UnicodeString __fastcall GetDisplayName(int AIndex, bool ALongName);
	virtual bool __fastcall CanAdd(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType);
	virtual bool __fastcall IsCompatible(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType);
public:
	/* TLockPersistent.Create */ inline __fastcall virtual TBasicPersistentCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TLockPersistent(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TBasicPersistentCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TLockPersistent(AOnCreated, AOwner) { }
	/* TBasicPersistent.Destroy */ inline __fastcall virtual ~TBasicPersistentCollection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TTypedBasicPersistentCollection__1 : public TBasicPersistentCollection
{
	typedef TBasicPersistentCollection inherited;
	
public:
	T operator[](int Index) { return this->Items[Index]; }
	
protected:
	 ::System::Generics::Collections::TObjectList__1<T>* FList;
	 ::Mitov::Elements::TConstMultiProc__3<TTypedBasicPersistentCollection__1<T>*, ::System::DynamicArray< ::System::Classes::TPersistent*>,TPeristentOperation> FOnChangeNotify;
	virtual void __fastcall DefineProperties( ::System::Classes::TFiler* AFiler);
	virtual void __fastcall SerializationRead(const  ::Mitov::Serialization::_di_IReader AReader);
	virtual void __fastcall SerializationWrite(const  ::Mitov::Serialization::_di_IWriter AWriter, const  ::Mitov::Containers::List::_di_IObjectArrayList ASelectedObjects);
	virtual  ::System::Classes::TPersistent* __fastcall IntGetItem(int AIndex);
	int __fastcall GetCount();
	T __fastcall GetItem(int AIndex);
	void __fastcall SetItem(int AIndex, T AItem);
	void __fastcall SetName(int AIndex, const  ::System::UnicodeString AName);
	void __fastcall SetOnChangeNotify(const  ::Mitov::Elements::TConstMultiProc__3<TTypedBasicPersistentCollection__1<T>*, ::System::DynamicArray< ::System::Classes::TPersistent*>,TPeristentOperation> AValue);
	bool __fastcall GetOwnsObjects();
	void __fastcall SetOwnsObjects(bool AValue);
	virtual bool __fastcall Contains(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType);
	virtual void __fastcall ReadData( ::System::Classes::TReader* AReader) = 0 ;
	void __fastcall WriteData( ::System::Classes::TWriter* AWriter);
	 ::System::DelphiInterface< ::System::IEnumerator__1< ::System::TObject*> > __fastcall GetOWEnumerator();
	
public:
	 ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetEnumerator();
	 ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetReverseEnumerator();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::IReverseEnumeratorHost__1<T> > __fastcall GetReverse();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::IContainerQuery__3<TTypedBasicPersistentCollection__1<T>*, ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<T> >,T> > __fastcall Query(bool AReverse = false);
	
protected:
	virtual void __fastcall DoNotify(const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems, TPeristentOperation AAction);
	
public:
	void __fastcall Add(T AItem)/* overload */;
	void __fastcall Add(const  ::System::DynamicArray<T> AItems)/* overload */;
	void __fastcall Insert(int AIndex, T AItem)/* overload */;
	void __fastcall Insert(int AIndex, const  ::System::DynamicArray<T> AItems)/* overload */;
	void __fastcall Clear();
	void __fastcall Delete(int AIndex)/* overload */;
	void __fastcall Delete(const  ::System::DynamicArray<int> AIndexes)/* overload */;
	void __fastcall Remove(T AItem);
	void __fastcall Swap(int AIndex1, int AIndex2);
	void __fastcall MoveTo(T AItem, int AIndex)/* overload */;
	void __fastcall MoveTo(int AIndex1, int AIndex2)/* overload */;
	void __fastcall Sort(const  ::System::DelphiInterface< ::System::Generics::Defaults::TComparison__1<T> > ACompareFunc);
	__fastcall virtual TTypedBasicPersistentCollection__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange);
	__fastcall virtual ~TTypedBasicPersistentCollection__1();
	__property  ::Mitov::Elements::TConstMultiProc__3<TTypedBasicPersistentCollection__1<T>*, ::System::DynamicArray< ::System::Classes::TPersistent*>,TPeristentOperation> OnChangeNotify = {read=FOnChangeNotify, write=SetOnChangeNotify};
	__property bool OwnsObjects = {read=GetOwnsObjects, write=SetOwnsObjects, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property T Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property  ::System::UnicodeString Names[int Index] = {read=GetName, write=SetName};
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TTypedBasicPersistentCollection__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TBasicPersistentCollection(AOnCreated, AOwner) { }
	
private:
	void *__ISerializable;	//  ::Mitov::Serialization::ISerializable 
	void *__IEnumerable__1;	//  ::Mitov::Containers::Common::IEnumerable__1<T> 
	void *__IEnumerateChildren;	//  ::Mitov::Containers::Common::IEnumerateChildren 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {887FEB07-9267-46AE-B2B4-784B5C6108B6}
	operator  ::Mitov::Serialization::_di_ISerializable()
	{
		 ::Mitov::Serialization::_di_ISerializable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Serialization::ISerializable*(void) { return ( ::Mitov::Serialization::ISerializable*)&__ISerializable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CAFEC3AE-090E-4135-849E-B39A213C7231}
	operator  ::System::DelphiInterface< ::Mitov::Containers::Common::IEnumerable__1<T> >()
	{
		 ::System::DelphiInterface< ::Mitov::Containers::Common::IEnumerable__1<T> > intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IEnumerable__1<T>*(void) { return ( ::Mitov::Containers::Common::IEnumerable__1<T>*)&__IEnumerable__1; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F3B5192A-990E-4FA4-9CE3-55271DD29A17}
	operator  ::Mitov::Containers::Common::_di_IEnumerateChildren()
	{
		 ::Mitov::Containers::Common::_di_IEnumerateChildren intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IEnumerateChildren*(void) { return ( ::Mitov::Containers::Common::IEnumerateChildren*)&__IEnumerateChildren; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EF5361E1-F3DA-4F88-8E99-C8B62DB7C235}") IPersistentCollection  : public  ::System::IInterface 
{
	
public:
	TLockPersistent* operator[](int Index) { return this->Items[Index]; }
	virtual  ::System::DelphiInterface< ::System::IEnumerator__1<TLockPersistent*> > __fastcall GetEnumerator() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual TLockPersistent* __fastcall GetItem(int AIndex) = 0 ;
	virtual void __fastcall SetItem(int AIndex, TLockPersistent* AItem) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetName(int AIndex) = 0 ;
	virtual void __fastcall SetName(int AIndex, const  ::System::UnicodeString AName) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetDisplayName(int AIndex, bool ALongName) = 0 ;
	virtual TLockPersistent* __fastcall Add(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType) = 0 /* overload */;
	virtual void __fastcall Add(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType, unsigned ACount) = 0 /* overload */;
	virtual TLockPersistent* __fastcall Add(TLockPersistentClass AType) = 0 /* overload */;
	virtual void __fastcall Add(TLockPersistentClass AType, unsigned ACount) = 0 /* overload */;
	virtual TLockPersistent* __fastcall Insert(int AIndex, TLockPersistentClass AType) = 0 /* overload */;
	virtual void __fastcall Insert(int AIndex, TLockPersistentClass AType, unsigned ACount) = 0 /* overload */;
	virtual TLockPersistent* __fastcall Insert(int AIndex, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType) = 0 /* overload */;
	virtual void __fastcall Insert(int AIndex, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType, unsigned ACount) = 0 /* overload */;
	virtual void __fastcall Swap(int AIndex1, int AIndex2) = 0 ;
	virtual void __fastcall MoveTo(TLockPersistent* AItem, int AIndex) = 0 /* overload */;
	virtual void __fastcall MoveTo(int AIndex1, int AIndex2) = 0 /* overload */;
	virtual void __fastcall Delete(int AIndex) = 0 /* overload */;
	virtual void __fastcall Delete(const  ::System::DynamicArray<int> AIndexes) = 0 /* overload */;
	virtual void __fastcall Clear() = 0 ;
	virtual bool __fastcall CanAdd(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType) = 0 ;
	virtual bool __fastcall IsCompatible(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType) = 0 ;
	virtual  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetTypeInfo() = 0 ;
	virtual void __fastcall SetTypeInfoGetter(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > AGetter) = 0 ;
	virtual  ::System::DelphiInterface< ::Mitov::Containers::Common::IContainerQuery__3<TTypedBasicPersistentCollection__1<TLockPersistent*>*, ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<TLockPersistent*> >,TLockPersistent*> > __fastcall Query(bool AReverse = false) = 0 ;
	virtual TPersistentCollection* __fastcall GetInstance() = 0 ;
	virtual _di_IChangeNotifyLock __fastcall GetLock() = 0 ;
	__property int Count = {read=GetCount};
	__property TLockPersistent* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property  ::System::UnicodeString Names[int Index] = {read=GetName, write=SetName};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION BasicAddItemsAttribute : public  ::Mitov::Attributes::TCustomInterfacedAttribute
{
	typedef  ::Mitov::Attributes::TCustomInterfacedAttribute inherited;
	
public:
	virtual void __fastcall CreateInstance(const _di_IPersistentCollection APersistentCollection, const  ::Mitov::Typeinfo::_di_IAttributesInfo AAttributeList);
public:
	/* TObject.Create */ inline __fastcall BasicAddItemsAttribute() :  ::Mitov::Attributes::TCustomInterfacedAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~BasicAddItemsAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION BasicAddClassItemsAttribute : public BasicAddItemsAttribute
{
	typedef BasicAddItemsAttribute inherited;
	
protected:
	 ::Mitov::Attributes::_di_IAtttributeParameterInfo FValue;
	virtual bool __fastcall Cleanup(NativeInt AHInstance);
	
public:
	__property  ::Mitov::Attributes::_di_IAtttributeParameterInfo Value = {read=FValue};
	__fastcall BasicAddClassItemsAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue);
	__fastcall virtual ~BasicAddClassItemsAttribute();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION BasicAddCountClassItemsAttribute : public BasicAddClassItemsAttribute
{
	typedef BasicAddClassItemsAttribute inherited;
	
protected:
	unsigned FCount;
	
public:
	__property unsigned Count = {read=FCount, nodefault};
	__fastcall BasicAddCountClassItemsAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, unsigned ACount);
public:
	/* BasicAddClassItemsAttribute.Destroy */ inline __fastcall virtual ~BasicAddCountClassItemsAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AddItemAttribute : public BasicAddCountClassItemsAttribute
{
	typedef BasicAddCountClassItemsAttribute inherited;
	
public:
	virtual void __fastcall CreateInstance(const _di_IPersistentCollection APersistentCollection, const  ::Mitov::Typeinfo::_di_IAttributesInfo AAttributeList);
	__fastcall AddItemAttribute( ::System::TClass AValue, unsigned ACount)/* overload */;
	__fastcall AddItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue)/* overload */;
	__fastcall AddItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, unsigned ACount)/* overload */;
public:
	/* BasicAddClassItemsAttribute.Destroy */ inline __fastcall virtual ~AddItemAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AddNamedItemAttribute : public BasicAddClassItemsAttribute
{
	typedef BasicAddClassItemsAttribute inherited;
	
protected:
	 ::System::UnicodeString FName;
	
public:
	__property  ::System::UnicodeString Name = {read=FName};
	virtual void __fastcall CreateInstance(const _di_IPersistentCollection APersistentCollection, const  ::Mitov::Typeinfo::_di_IAttributesInfo AAttributeList);
	__fastcall AddNamedItemAttribute( ::System::TClass AValue, const  ::System::UnicodeString AName)/* overload */;
	__fastcall AddNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, const  ::System::UnicodeString AName)/* overload */;
public:
	/* BasicAddClassItemsAttribute.Destroy */ inline __fastcall virtual ~AddNamedItemAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AddIndexedNamedItemAttribute : public BasicAddCountClassItemsAttribute
{
	typedef BasicAddCountClassItemsAttribute inherited;
	
protected:
	 ::System::UnicodeString FName;
	
public:
	__property  ::System::UnicodeString Name = {read=FName};
	virtual void __fastcall CreateInstance(const _di_IPersistentCollection APersistentCollection, const  ::Mitov::Typeinfo::_di_IAttributesInfo AAttributeList);
	__fastcall AddIndexedNamedItemAttribute( ::System::TClass AValue, const  ::System::UnicodeString AName)/* overload */;
	__fastcall AddIndexedNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, const  ::System::UnicodeString AName)/* overload */;
	__fastcall AddIndexedNamedItemAttribute( ::System::TClass AValue, const  ::System::UnicodeString AName, unsigned ACount)/* overload */;
	__fastcall AddIndexedNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, const  ::System::UnicodeString AName, unsigned ACount)/* overload */;
public:
	/* BasicAddClassItemsAttribute.Destroy */ inline __fastcall virtual ~AddIndexedNamedItemAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AddIndexedStartNamedItemAttribute : public AddIndexedNamedItemAttribute
{
	typedef AddIndexedNamedItemAttribute inherited;
	
protected:
	unsigned FStartIndex;
	
public:
	__property unsigned StartIndex = {read=FStartIndex, nodefault};
	virtual void __fastcall CreateInstance(const _di_IPersistentCollection APersistentCollection, const  ::Mitov::Typeinfo::_di_IAttributesInfo AAttributeList);
	__fastcall AddIndexedStartNamedItemAttribute( ::System::TClass AValue, unsigned AStartIndex, const  ::System::UnicodeString AName)/* overload */;
	__fastcall AddIndexedStartNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, unsigned AStartIndex, const  ::System::UnicodeString AName)/* overload */;
	__fastcall AddIndexedStartNamedItemAttribute( ::System::TClass AValue, unsigned AStartIndex, const  ::System::UnicodeString AName, unsigned ACount)/* overload */;
	__fastcall AddIndexedStartNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, unsigned AStartIndex, const  ::System::UnicodeString AName, unsigned ACount)/* overload */;
public:
	/* AddIndexedNamedItemAttribute.Create */ inline __fastcall AddIndexedStartNamedItemAttribute( ::System::TClass AValue, const  ::System::UnicodeString AName)/* overload */ : AddIndexedNamedItemAttribute(AValue, AName) { }
	/* AddIndexedNamedItemAttribute.Create */ inline __fastcall AddIndexedStartNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, const  ::System::UnicodeString AName)/* overload */ : AddIndexedNamedItemAttribute(AValue, AName) { }
	/* AddIndexedNamedItemAttribute.Create */ inline __fastcall AddIndexedStartNamedItemAttribute( ::System::TClass AValue, const  ::System::UnicodeString AName, unsigned ACount)/* overload */ : AddIndexedNamedItemAttribute(AValue, AName, ACount) { }
	/* AddIndexedNamedItemAttribute.Create */ inline __fastcall AddIndexedStartNamedItemAttribute(const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AValue, const  ::System::UnicodeString AName, unsigned ACount)/* overload */ : AddIndexedNamedItemAttribute(AValue, AName, ACount) { }
	
public:
	/* BasicAddClassItemsAttribute.Destroy */ inline __fastcall virtual ~AddIndexedStartNamedItemAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistentCollection : public TTypedBasicPersistentCollection__1<TLockPersistent*>
{
	typedef TTypedBasicPersistentCollection__1<TLockPersistent*> inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > FClassTypeInfoGetter;
	static  ::System::DelphiInterface< ::Mitov::Containers::Dictionary::IDictionary__2< ::System::Classes::TPersistent*,TPersistentCollection*> > FOwnerDictionaty;
	void __fastcall ProcessCreatedInstance(TLockPersistent* AInstance, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType);
	TLockPersistent* __fastcall CreateInstance(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated, TLockPersistentClass AType)/* overload */;
	TLockPersistent* __fastcall CreateInstance(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType)/* overload */;
	virtual void __fastcall ReadData( ::System::Classes::TReader* AReader);
	virtual void __fastcall DoNotify(const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems, TPeristentOperation AAction);
	 ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetTypeInfo();
	void __fastcall SetTypeInfoGetter(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > AGetter);
	TPersistentCollection* __fastcall GetInstance();
	
public:
	__classmethod TPersistentCollection* __fastcall GetOwnerCollection( ::System::Classes::TPersistent* AItem)/* overload */;
	__classmethod bool __fastcall GetOwnerCollection( ::System::Classes::TPersistent* AItem, /* out */ TPersistentCollection* &AResult)/* overload */;
	__classmethod bool __fastcall ForOwnerCollection( ::System::Classes::TPersistent* AItem, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<TPersistentCollection*> > AFunc);
	
protected:
	__classmethod void __fastcall PersistentCollectionItemsAdded( ::System::Classes::TPersistent* ACollection, const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems);
	__classmethod void __fastcall PersistentCollectionItemsRemoving( ::System::Classes::TPersistent* ACollection, const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems);
	__classmethod void __fastcall PersistentCollectionItemsRemoved( ::System::Classes::TPersistent* ACollection, const  ::System::DynamicArray< ::System::Classes::TPersistent*> AItems);
	__classmethod void __fastcall PersistentCollectionOrderChanged( ::System::Classes::TPersistent* ACollection,  ::System::Classes::TPersistent* AItem1,  ::System::Classes::TPersistent* AItem2);
	__classmethod void __fastcall PersistentCollectionItemMoved( ::System::Classes::TPersistent* ACollection,  ::System::Classes::TPersistent* AItem, int AFromIndex, int AToIndex);
	
public:
	__classmethod void __fastcall AddPersistentCollectionNotifier(const _di_IPersistentCollectionNotifier ANotifyItem);
	__classmethod void __fastcall RemovePersistentCollectionNotifier(const _di_IPersistentCollectionNotifier ANotifyItem);
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > __fastcall AddSetter();
	 ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > __fastcall InsertSetter(int AIndex);
	HIDESBASE TLockPersistent* __fastcall Add(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType)/* overload */;
	HIDESBASE void __fastcall Add(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType, unsigned ACount)/* overload */;
	HIDESBASE TLockPersistent* __fastcall Add(TLockPersistentClass AType)/* overload */;
	HIDESBASE void __fastcall Add(TLockPersistentClass AType, unsigned ACount)/* overload */;
	HIDESBASE TLockPersistent* __fastcall Insert(int AIndex, TLockPersistentClass AType)/* overload */;
	HIDESBASE void __fastcall Insert(int AIndex, TLockPersistentClass AType, unsigned ACount)/* overload */;
	HIDESBASE TLockPersistent* __fastcall Insert(int AIndex, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType)/* overload */;
	HIDESBASE void __fastcall Insert(int AIndex, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType, unsigned ACount)/* overload */;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* {Mitov_Types}TTypedBasicPersistentCollection<Mitov_Types_TLockPersistent>.Create */ inline __fastcall virtual TPersistentCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TTypedBasicPersistentCollection__1<TLockPersistent*>(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	/* {Mitov_Types}TTypedBasicPersistentCollection<Mitov_Types_TLockPersistent>.Destroy */ inline __fastcall virtual ~TPersistentCollection() { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TPersistentCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TTypedBasicPersistentCollection__1<TLockPersistent*>(AOnCreated, AOwner) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Add(TLockPersistent* AItem){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Add(AItem); }
	inline void __fastcall  Add(const  ::System::DynamicArray<TLockPersistent*> AItems){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Add(AItems); }
	inline void __fastcall  Insert(int AIndex, TLockPersistent* AItem){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Insert(AIndex, AItem); }
	inline void __fastcall  Insert(int AIndex, const  ::System::DynamicArray<TLockPersistent*> AItems){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Insert(AIndex, AItems); }
	
private:
	void *__IPersistentCollection;	// IPersistentCollection 
	void *__IEnumerateChildren;	//  ::Mitov::Containers::Common::IEnumerateChildren 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF5361E1-F3DA-4F88-8E99-C8B62DB7C235}
	operator _di_IPersistentCollection()
	{
		_di_IPersistentCollection intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPersistentCollection*(void) { return (IPersistentCollection*)&__IPersistentCollection; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F3B5192A-990E-4FA4-9CE3-55271DD29A17}
	operator  ::Mitov::Containers::Common::_di_IEnumerateChildren()
	{
		 ::Mitov::Containers::Common::_di_IEnumerateChildren intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IEnumerateChildren*(void) { return ( ::Mitov::Containers::Common::IEnumerateChildren*)&__IEnumerateChildren; }
	#endif
	
};

#pragma pack(pop)

typedef  ::System::TMetaClass* TPersistentCollectionClass;

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TTypedPersistentCollection__1 : public TPersistentCollection
{
	typedef TPersistentCollection inherited;
	
public:
	T operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE T __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, T AItem);
	
public:
	HIDESBASE  ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetEnumerator();
	HIDESBASE  ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetReverseEnumerator();
	HIDESBASE  ::System::DelphiInterface< ::Mitov::Containers::Common::IReverseEnumeratorHost__1<T> > __fastcall GetReverse();
	HIDESBASE TTypedPersistentCollection__1<T>* __fastcall Remove( ::System::DelphiInterface< ::System::Sysutils::TFunc__2<T,bool> > ARemoveFunc);
	HIDESBASE T __fastcall Add(TLockPersistentClass AType)/* overload */;
	template<typename T_CREATED> HIDESBASE T_CREATED __fastcall Add()/* overload */;
	HIDESBASE T __fastcall Insert(int AIndex, TLockPersistentClass AType)/* overload */;
	template<typename T_CREATED> HIDESBASE T_CREATED __fastcall Insert(int AIndex)/* overload */;
	HIDESBASE void __fastcall Insert(int AIndex, TLockPersistentClass AType, unsigned ACount)/* overload */;
	HIDESBASE TLockPersistent* __fastcall Insert(int AIndex, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType)/* overload */;
	HIDESBASE void __fastcall Insert(int AIndex, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType, unsigned ACount)/* overload */;
	HIDESBASE  ::System::DelphiInterface< ::Mitov::Containers::Common::IContainerQuery__3<TTypedPersistentCollection__1<T>*, ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<T> >,T> > __fastcall Query(bool AReverse = false);
	HIDESBASE void __fastcall Sort(const  ::System::DelphiInterface< ::System::Generics::Defaults::TComparison__1<T> > ACompareFunc);
	__property T Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* {Mitov_Types}TTypedBasicPersistentCollection<Mitov_Types_TLockPersistent>.Create */ inline __fastcall virtual TTypedPersistentCollection__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TPersistentCollection(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	/* {Mitov_Types}TTypedBasicPersistentCollection<Mitov_Types_TLockPersistent>.Destroy */ inline __fastcall virtual ~TTypedPersistentCollection__1() { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TTypedPersistentCollection__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TPersistentCollection(AOnCreated, AOwner) { }
	
	/* Hoisted overloads: */
	
public:
	inline TLockPersistent* __fastcall  Add(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType){ return ::Mitov::Types::TPersistentCollection::Add(AType); }
	inline void __fastcall  Add(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AType, unsigned ACount){ ::Mitov::Types::TPersistentCollection::Add(AType, ACount); }
	inline void __fastcall  Add(TLockPersistentClass AType, unsigned ACount){ ::Mitov::Types::TPersistentCollection::Add(AType, ACount); }
	inline void __fastcall  Add(TLockPersistent* AItem){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Add(AItem); }
	inline void __fastcall  Add(const  ::System::DynamicArray<TLockPersistent*> AItems){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Add(AItems); }
	inline void __fastcall  Insert(int AIndex, TLockPersistent* AItem){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Insert(AIndex, AItem); }
	inline void __fastcall  Insert(int AIndex, const  ::System::DynamicArray<TLockPersistent*> AItems){ TTypedBasicPersistentCollection__1<TLockPersistent*>::Insert(AIndex, AItems); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentCollection : public TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>
{
	typedef TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*> inherited;
	
protected:
	 ::System::Classes::TComponent* __fastcall CreateInstance( ::System::Classes::TComponentClass AType);
	virtual void __fastcall ReadData( ::System::Classes::TReader* AReader);
	
public:
	HIDESBASE  ::System::Classes::TComponent* __fastcall Add( ::System::Classes::TComponentClass AType)/* overload */;
	HIDESBASE void __fastcall Add( ::System::Classes::TComponentClass AType, unsigned ACount)/* overload */;
	HIDESBASE  ::System::Classes::TComponent* __fastcall Insert(int AIndex,  ::System::Classes::TComponentClass AType)/* overload */;
public:
	/* {Mitov_Types}TTypedBasicPersistentCollection<System_Classes_TComponent>.Create */ inline __fastcall virtual TComponentCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwnerProperty, const _di_IChangeNotifyLock ALock, const  ::System::Sysutils::_di_TProc AOnChange) : TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>(AOnCreated, AOwnerProperty, ALock, AOnChange) { }
	/* {Mitov_Types}TTypedBasicPersistentCollection<System_Classes_TComponent>.Destroy */ inline __fastcall virtual ~TComponentCollection() { }
	
public:
	/* TBasicPersistent.CreateOwner */ inline __fastcall TComponentCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::TObject* AOwner) : TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>(AOnCreated, AOwner) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Add( ::System::Classes::TComponent* AItem){ TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>::Add(AItem); }
	inline void __fastcall  Add(const  ::System::DynamicArray< ::System::Classes::TComponent*> AItems){ TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>::Add(AItems); }
	inline void __fastcall  Insert(int AIndex,  ::System::Classes::TComponent* AItem){ TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>::Insert(AIndex, AItem); }
	inline void __fastcall  Insert(int AIndex, const  ::System::DynamicArray< ::System::Classes::TComponent*> AItems){ TTypedBasicPersistentCollection__1< ::System::Classes::TComponent*>::Insert(AIndex, AItems); }
	
private:
	void *__IEnumerateChildren;	//  ::Mitov::Containers::Common::IEnumerateChildren 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F3B5192A-990E-4FA4-9CE3-55271DD29A17}
	operator  ::Mitov::Containers::Common::_di_IEnumerateChildren()
	{
		 ::Mitov::Containers::Common::_di_IEnumerateChildren intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Containers::Common::IEnumerateChildren*(void) { return ( ::Mitov::Containers::Common::IEnumerateChildren*)&__IEnumerateChildren; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockCollectionItem : public  ::System::Classes::TCollectionItem
{
	typedef  ::System::Classes::TCollectionItem inherited;
	
protected:
	_di_IChangeNotifyLock FLock;
	virtual void __fastcall NotifyProp();
	_di_IChangeNotifyLock __fastcall GetLock();
	void __fastcall ForLock(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IChangeNotifyLock> > AProc);
	 ::System::Sysutils::_di_TProc __fastcall GetNotify();
	virtual void __fastcall DefineProperties( ::System::Classes::TFiler* AFiler);
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	
protected:
	__classmethod virtual void __fastcall InitDefaults( ::System::TObject* AOwner, TLockCollectionItem* AInstance);
	
public:
	virtual void __fastcall Assign( ::System::Classes::TPersistent* ASource);
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual TLockCollectionItem( ::System::Classes::TCollection* ACollection);
	__fastcall virtual ~TLockCollectionItem();
private:
	void *__ILockItem;	// ILockItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {92828CB2-05EF-4DDE-8DE1-EABBF87A658F}
	operator _di_ILockItem()
	{
		_di_ILockItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockItem*(void) { return (ILockItem*)&__ILockItem; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{55437AD4-9F90-42AC-9146-5F93F8A325EF}") ICollectionNotifier  : public  ::System::IInterface 
{
	virtual void __fastcall CollectionItemCreated( ::System::Classes::TCollection* ACollection,  ::System::Classes::TCollectionItem* AItem) = 0 ;
	virtual void __fastcall CollectionItemDestroyed( ::System::Classes::TCollection* ACollection,  ::System::Classes::TCollectionItem* AItem) = 0 ;
	virtual void __fastcall CollectionItemChanged( ::System::Classes::TCollection* ACollection,  ::System::Classes::TCollectionItem* AItem) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockCollection : public  ::System::Classes::TCollection
{
	typedef  ::System::Classes::TCollection inherited;
	
protected:
	_di_IChangeNotifyLock FLock;
	 ::System::Classes::TPersistent* FOwner;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<void *> > FNotifyList;
	virtual void __fastcall NotifyProp();
	virtual  ::System::Classes::TPersistent* __fastcall IntGetOwner();
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	
protected:
	_di_IChangeNotifyLock __fastcall GetLock();
	void __fastcall ForLock(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IChangeNotifyLock> > AProc);
	 ::System::Sysutils::_di_TProc __fastcall GetNotify();
	__classmethod virtual void __fastcall InitDefaults( ::System::TObject* AOwner, TLockCollection* AInstance);
	virtual void __fastcall AfterNewItemCreated( ::System::Classes::TCollectionItem* AItem);
	virtual void __fastcall AfterNewItemDestroyed( ::System::Classes::TCollectionItem* AItem);
	virtual void __fastcall NewItemCreated( ::System::Classes::TCollectionItem* AItem);
	virtual void __fastcall Notify( ::System::Classes::TCollectionItem* AItem,  ::System::Generics::Collections::TCollectionNotification AAction);
	virtual void __fastcall Update( ::System::Classes::TCollectionItem* AItem);
	
public:
	__classmethod void __fastcall AddCollectionNotifier(TLockCollection* ACollection, const _di_ICollectionNotifier ANotifyItem);
	__classmethod void __fastcall RemoveCollectionNotifier(TLockCollection* ACollection, const _di_ICollectionNotifier ANotifyItem);
	DYNAMIC  ::System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Assign( ::System::Classes::TPersistent* ASource);
	virtual void __fastcall BeforeDestruction();
	__fastcall TLockCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock,  ::System::Classes::TCollectionItemClass AItemClass);
	__fastcall virtual TLockCollection(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock) = 0 ;
	__fastcall virtual ~TLockCollection();
private:
	void *__ILockItem;	// ILockItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {92828CB2-05EF-4DDE-8DE1-EABBF87A658F}
	operator _di_ILockItem()
	{
		_di_ILockItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockItem*(void) { return (ILockItem*)&__ILockItem; }
	#endif
	
};

#pragma pack(pop)

typedef  ::System::TMetaClass* TLockCollectionClass;

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TTypedCollectionItem__1 : public TLockCollectionItem
{
	typedef TLockCollectionItem inherited;
	
protected:
	T __fastcall GetIntCollection();
	void __fastcall SetIntCollection(T AValue);
	
public:
	__property T Collection = {read=GetIntCollection, write=SetIntCollection};
public:
	/* TLockCollectionItem.Create */ inline __fastcall virtual TTypedCollectionItem__1( ::System::Classes::TCollection* ACollection) : TLockCollectionItem(ACollection) { }
	/* TLockCollectionItem.Destroy */ inline __fastcall virtual ~TTypedCollectionItem__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TTypedCollection__1 : public TLockCollection
{
	typedef TLockCollection inherited;
	
public:
	T operator[](int AIndex) { return this->Items[AIndex]; }
	
protected:
	virtual T __fastcall GetNoLockItem(int AIndex);
	HIDESBASE virtual T __fastcall GetItem(int AIndex);
	HIDESBASE virtual void __fastcall SetItem(int AIndex, T AItem);
	
public:
	HIDESBASE virtual T __fastcall Add();
	HIDESBASE  ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetEnumerator();
	 ::System::DelphiInterface< ::System::IEnumerator__1<T> > __fastcall GetReverseEnumerator();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::IReverseEnumeratorHost__1<T> > __fastcall GetReverse();
	 ::System::DelphiInterface< ::Mitov::Containers::Common::IContainerQuery__3<TTypedCollection__1<T>*, ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<T> >,T> > __fastcall Query(bool AReverse = false);
	__fastcall virtual TTypedCollection__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock);
	__property T Items[int AIndex] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TLockCollection.CreateEx */ inline __fastcall TTypedCollection__1(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock,  ::System::Classes::TCollectionItemClass AItemClass) : TLockCollection(AOnCreated, AOwner, ALock, AItemClass) { }
	/* TLockCollection.Destroy */ inline __fastcall virtual ~TTypedCollection__1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T_OWNER, typename T> class PASCALIMPLEMENTATION TTypedOwnerComponentCollection__2 : public TTypedCollection__1<T>
{
	typedef TTypedCollection__1<T> inherited;
	
protected:
	HIDESBASE T_OWNER __fastcall GetOwnerComponent();
	
public:
	__fastcall TTypedOwnerComponentCollection__2(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated, T_OWNER AOwner);
	__fastcall TTypedOwnerComponentCollection__2(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated, T_OWNER AOwner, const _di_IChangeNotifyLock ALock);
	__property T_OWNER OwnerComponent = {read=GetOwnerComponent};
public:
	/* {Mitov_Types}TTypedCollection<Mitov_Types_TTypedOwnerComponentCollection<T_OWNER,T>_T>.Create */ inline __fastcall virtual TTypedOwnerComponentCollection__2(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock) : TTypedCollection__1<T>(AOnCreated, AOwner, ALock) { }
	
public:
	/* TLockCollection.Destroy */ inline __fastcall virtual ~TTypedOwnerComponentCollection__2() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T_OWNER, typename T> class PASCALIMPLEMENTATION TTypedOwnerPropertyCollection__2 : public TTypedCollection__1<T>
{
	typedef TTypedCollection__1<T> inherited;
	
public:
	T_OWNER __fastcall GetOwnerProperty();
	__fastcall TTypedOwnerPropertyCollection__2(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated, T_OWNER AOwnerProperty);
public:
	/* {Mitov_Types}TTypedCollection<Mitov_Types_TTypedOwnerPropertyCollection<T_OWNER,T>_T>.Create */ inline __fastcall virtual TTypedOwnerPropertyCollection__2(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1< ::System::Classes::TPersistent*> > AOnCreated,  ::System::Classes::TPersistent* AOwner, const _di_IChangeNotifyLock ALock) : TTypedCollection__1<T>(AOnCreated, AOwner, ALock) { }
	
public:
	/* TLockCollection.Destroy */ inline __fastcall virtual ~TTypedOwnerPropertyCollection__2() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PersistentCollectionAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::Mitov::Typeinfo::_di_IClassTypeInfo FValue;
	
public:
	__property  ::Mitov::Typeinfo::_di_IClassTypeInfo Value = {read=FValue};
	
protected:
	bool __fastcall Cleanup(NativeInt AHInstance);
	
public:
	__fastcall PersistentCollectionAttribute(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AValue)/* overload */;
	__fastcall PersistentCollectionAttribute(TPersistentCollectionClass AValue)/* overload */;
	__fastcall virtual ~PersistentCollectionAttribute();
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B1E65C7C-6B61-4DA5-9EBD-E3D199F9F0D0}") IPersistentCollectionClassInfo  : public  ::Mitov::Design::Components::IBasicClassInfo 
{
	virtual  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetOwnClassType() = 0 ;
	virtual bool __fastcall ContainsHInstance(NativeInt AHInstance) = 0 ;
};

__interface  INTERFACE_UUID("{99226803-B7E0-4725-A4A6-3F0C4FBA6C8C}") IRegisteredPersistents  : public  ::Mitov::Containers::List::IArrayList__1<_di_IPersistentCollectionClassInfo> 
{
	
};

__interface  INTERFACE_UUID("{4FDC53CB-924A-40E3-AC36-9A3B85F1561E}") IRelaxedTimer  : public  ::System::IInterface 
{
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(bool AValue) = 0 ;
	virtual unsigned __fastcall GetInterval() = 0 ;
	virtual void __fastcall SetInterval(unsigned AValue) = 0 ;
	virtual  ::System::Sysutils::_di_TProc __fastcall GetOnTimer() = 0 ;
	virtual void __fastcall SetOnTimer(const  ::System::Sysutils::_di_TProc AValue) = 0 ;
	virtual void __fastcall Reset() = 0 ;
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
	__property unsigned Interval = {read=GetInterval, write=SetInterval};
	__property  ::System::Sysutils::_di_TProc OnTimer = {read=GetOnTimer, write=SetOnTimer};
};

__interface  INTERFACE_UUID("{5733C7C1-C55E-490B-8F65-4292825F9FAD}") INestedRelaxedTimer  : public  ::System::IInterface 
{
	virtual void __fastcall ClearOwner() = 0 ;
	virtual HWND __fastcall GetWindowHandle() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRelaxedTimer : public TLockInterfacedObject
{
	typedef TLockInterfacedObject inherited;
	
private:
	bool FEnabled;
	unsigned FInterval;
	_di_INestedRelaxedTimer FTimer;
	 ::System::Sysutils::_di_TProc FOnTimer;
	bool __fastcall GetEnabled();
	void __fastcall SetEnabled(bool AValue);
	unsigned __fastcall GetInterval();
	void __fastcall SetInterval(unsigned AValue);
	 ::System::Sysutils::_di_TProc __fastcall GetOnTimer();
	void __fastcall SetOnTimer(const  ::System::Sysutils::_di_TProc AValue);
	void __fastcall Reset();
	void __fastcall UpdateTimer();
	
protected:
	void __fastcall DoTimer();
	
public:
	__fastcall TRelaxedTimer()/* overload */;
	__fastcall TRelaxedTimer(bool AEnabled)/* overload */;
	__fastcall virtual ~TRelaxedTimer();
private:
	void *__IRelaxedTimer;	// IRelaxedTimer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4FDC53CB-924A-40E3-AC36-9A3B85F1561E}
	operator _di_IRelaxedTimer()
	{
		_di_IRelaxedTimer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IRelaxedTimer*(void) { return (IRelaxedTimer*)&__IRelaxedTimer; }
	#endif
	
};

#pragma pack(pop)

__interface TClassFactoryProc  : public  ::System::IInterface 
{
	virtual bool __fastcall Invoke(const  ::System::UnicodeString AClassName, /* out */  ::Mitov::Typeinfo::_di_IClassTypeInfo &AClass) = 0 ;
};

__interface TSuffixConverterFunc  : public  ::System::IInterface 
{
	virtual bool __fastcall Invoke(const  ::System::Rtti::TValue &AValue, /* out */  ::System::UnicodeString &AText) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<void *> > GPropertyChangeNotify;
extern DELPHI_PACKAGE  ::System::TObject* __fastcall GetObjectInstance( ::System::TObject* AObject);
extern DELPHI_PACKAGE  ::System::Byte __fastcall LPGetAlpha( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Byte __fastcall LPGetRed( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Byte __fastcall LPGetGreen( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Byte __fastcall LPGetBlue( ::System::Uitypes::TAlphaColor AColor);
extern DELPHI_PACKAGE  ::System::Uitypes::TColor __fastcall LPMakeColor( ::System::Byte r,  ::System::Byte g,  ::System::Byte b)/* overload */;
extern DELPHI_PACKAGE  ::System::Uitypes::TAlphaColor __fastcall LPMakeColor( ::System::Byte a,  ::System::Byte r,  ::System::Byte g,  ::System::Byte b)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetCollectionCount( ::System::Classes::TCollection* ACollection);
extern DELPHI_PACKAGE void __fastcall RegisterNestedComponent( ::System::Classes::TPersistentClass AClass);
extern DELPHI_PACKAGE int __fastcall GetNestedComponentCount(void);
extern DELPHI_PACKAGE  ::System::Classes::TPersistentClass __fastcall GetNestedComponent(int AIndex);
extern DELPHI_PACKAGE bool __fastcall GetIsNestedComponent( ::System::Classes::TPersistentClass AClass);
extern DELPHI_PACKAGE void __fastcall ComponentOwnerChanged( ::System::Classes::TComponent* AComponent);
extern DELPHI_PACKAGE void __fastcall ComponentIndexChanged( ::System::Classes::TComponent* AComponent, int AIndex);
extern DELPHI_PACKAGE void __fastcall RegisterDynamicElement(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterDynamicElement( ::System::Classes::TPersistentClass AClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterDynamicElements(const  ::Mitov::Typeinfo::_di_IClassTypeInfo *AClasses, const int AClasses_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterDynamicElements( ::System::Classes::TPersistentClass const *AClasses, const int AClasses_High)/* overload */;
extern DELPHI_PACKAGE  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > __fastcall GetDynamicElementsFor(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass);
extern DELPHI_PACKAGE bool __fastcall GetDynamicElementDefaultFor(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass, /* out */  ::Mitov::Typeinfo::_di_IClassTypeInfo &AResult);
extern DELPHI_PACKAGE void __fastcall RegisterClassFactory(const _di_TClassFactoryProc AProc);
extern DELPHI_PACKAGE void __fastcall UnregisterClassFactory(const _di_TClassFactoryProc AProc);
extern DELPHI_PACKAGE _di_TSuffixConverterFunc __fastcall RegisterDisplayNameSuffixConverter(const  ::Mitov::Typeinfo::_di_ITypeInfo ATypeInfo, const _di_TSuffixConverterFunc AFunc);
extern DELPHI_PACKAGE void __fastcall UnregisterDisplayNameSuffixConverter(const _di_TSuffixConverterFunc AFunc);
extern DELPHI_PACKAGE void __fastcall RegisterPersistentDestroy(const _di_IPersistentDestructionNotify AItem);
extern DELPHI_PACKAGE void __fastcall UnregisterPersistentDestroy(const _di_IPersistentDestructionNotify AItem);
extern DELPHI_PACKAGE void __fastcall RegisterPropertyChangeNotify(const _di_IPropertyChangeNotify AItem);
extern DELPHI_PACKAGE void __fastcall UnregisterPropertyChangeNotify(const _di_IPropertyChangeNotify AItem);
extern DELPHI_PACKAGE void __fastcall RegisterCollectionItemClassForCollection(TPersistentCollectionClass ACollection, TLockPersistentClass AClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterCollectionItemClassForCollection(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACollection, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterCollectionItemClasses(TLockPersistentClass const *APersistentClasses, const int APersistentClasses_High);
extern DELPHI_PACKAGE void __fastcall RegisterCollectionItemClass(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass);
extern DELPHI_PACKAGE  ::Mitov::Containers::List::_di_IStringArrayList __fastcall GetClassOldNames(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass);
extern DELPHI_PACKAGE  ::Mitov::Design::Components::_di_IClassCategories __fastcall GetRegisteredPersistentCollectionTypes(TPersistentCollectionClass ACollectionType)/* overload */;
extern DELPHI_PACKAGE  ::Mitov::Design::Components::_di_IClassCategories __fastcall GetRegisteredPersistentCollectionTypes(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACollectionType)/* overload */;
extern DELPHI_PACKAGE  ::Mitov::Design::Components::_di_IClassCategories __fastcall GetPersistentCollectionSubCategories(const  ::Mitov::Design::Components::_di_IClassCategory ACategory);
extern DELPHI_PACKAGE _di_IRegisteredPersistents __fastcall GetPersistentCollectionCategoriesClasses(const  ::Mitov::Design::Components::_di_IClassCategory ACategory);
extern DELPHI_PACKAGE bool __fastcall GetCollectionItemCanBeAddedToCollection(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACollection, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass);
extern DELPHI_PACKAGE bool __fastcall GetCollectionItemCompatibleAlternativeForCollection(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACollection, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClass, /* out */  ::Mitov::Typeinfo::_di_IClassTypeInfo &AResult);
extern DELPHI_PACKAGE bool __fastcall IsCompatibleCollectionItem(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassItem1, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassItem2);
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall GetPersistentDisplayNameSuffix( ::System::Classes::TPersistent* AObject, bool ALongName);
}	/* namespace Types */
}	/* namespace Mitov */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MITOV_TYPES)
using namespace  ::Mitov::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MITOV)
using namespace Mitov;
#endif

//-- user supplied -----------------------------------------------------------
#ifdef __OLD__MANAGED_INTERFACE_OPERATORS__
  #define MANAGED_INTERFACE_OPERATORS
  #undef __OLD__MANAGED_INTERFACE_OPERATORS__
#endif // __OLD__MANAGED_INTERFACE_OPERATORS__

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_TypesHPP

// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Design.Components.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_Design_ComponentsHPP
#define Mitov_Design_ComponentsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Classes.hpp>
#include <Mitov.Containers.List.hpp>
#include <IGDIPlus.hpp>
#include <System.SysUtils.hpp>
#include <Mitov.Attributes.hpp>
#include <Mitov.Containers.Common.hpp>
#include <Mitov.TypeInfo.hpp>
#include <Mitov.Utils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Rtti.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mitov
{
namespace Design
{
namespace Components
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMemberCategory;
typedef  ::System::DelphiInterface<IMemberCategory> _di_IMemberCategory;
__interface DELPHIINTERFACE IModificationInstance;
typedef  ::System::DelphiInterface<IModificationInstance> _di_IModificationInstance;
__interface DELPHIINTERFACE IBasicDesigner;
typedef  ::System::DelphiInterface<IBasicDesigner> _di_IBasicDesigner;
__interface DELPHIINTERFACE IUpdatingInstance;
typedef  ::System::DelphiInterface<IUpdatingInstance> _di_IUpdatingInstance;
__interface DELPHIINTERFACE IComponentEditorMenuItem;
typedef  ::System::DelphiInterface<IComponentEditorMenuItem> _di_IComponentEditorMenuItem;
__interface DELPHIINTERFACE IComponentEditorOptionalMenuItem;
typedef  ::System::DelphiInterface<IComponentEditorOptionalMenuItem> _di_IComponentEditorOptionalMenuItem;
__interface DELPHIINTERFACE IComponentEditorMenuItems;
typedef  ::System::DelphiInterface<IComponentEditorMenuItems> _di_IComponentEditorMenuItems;
__interface DELPHIINTERFACE IComponentEditor;
typedef  ::System::DelphiInterface<IComponentEditor> _di_IComponentEditor;
__interface DELPHIINTERFACE ICustomIcon;
typedef  ::System::DelphiInterface<ICustomIcon> _di_ICustomIcon;
__interface DELPHIINTERFACE IBasicClassInfo;
typedef  ::System::DelphiInterface<IBasicClassInfo> _di_IBasicClassInfo;
__interface DELPHIINTERFACE IClassCategory;
typedef  ::System::DelphiInterface<IClassCategory> _di_IClassCategory;
__interface DELPHIINTERFACE IClassCategories;
typedef  ::System::DelphiInterface<IClassCategories> _di_IClassCategories;
class DELPHICLASS TClassCategories;
__interface DELPHIINTERFACE ICategoryClassTypeInfo;
typedef  ::System::DelphiInterface<ICategoryClassTypeInfo> _di_ICategoryClassTypeInfo;
class DELPHICLASS TCategoryClassTypeInfo;
__interface DELPHIINTERFACE ICategoryClasses;
typedef  ::System::DelphiInterface<ICategoryClasses> _di_ICategoryClasses;
class DELPHICLASS TCategoryClasses;
class DELPHICLASS TBasicClassInfo;
class DELPHICLASS TClassCategory;
class DELPHICLASS TUnknownToolbarCategory;
class DELPHICLASS TBasicCategoryAttribute;
class DELPHICLASS CategoryAttribute;
class DELPHICLASS AlternateCategoryAttribute;
class DELPHICLASS TComponentEditorMenuItems;
class DELPHICLASS TMemberCategory;
class DELPHICLASS TMiscellaneousMemberCategory;
class DELPHICLASS TVisualMemberCategory;
class DELPHICLASS TLayoutMemberCategory;
class DELPHICLASS TBehaviorMemberCategory;
template<typename T> struct TCategorizedValue__1;
__interface DELPHIINTERFACE ICategorizedValueList;
typedef  ::System::DelphiInterface<ICategorizedValueList> _di_ICategorizedValueList;
class DELPHICLASS TCategorizedValueList;
class DELPHICLASS TMemberCategoryAttribute;
__interface DELPHIINTERFACE TComponentFactoryProc;
typedef  ::System::DelphiInterface<TComponentFactoryProc> _di_TComponentFactoryProc;
__interface DELPHIINTERFACE TComponentCategoriesFactoryProc;
typedef  ::System::DelphiInterface<TComponentCategoriesFactoryProc> _di_TComponentCategoriesFactoryProc;
__interface DELPHIINTERFACE IComponentLocked;
typedef  ::System::DelphiInterface<IComponentLocked> _di_IComponentLocked;
__interface DELPHIINTERFACE ICheckIfComponentLocked;
typedef  ::System::DelphiInterface<ICheckIfComponentLocked> _di_ICheckIfComponentLocked;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{76CFB076-9846-4254-8BBA-44561AEFA12F}") IMemberCategory  : public  ::System::IInterface 
{
	virtual  ::System::UnicodeString __fastcall GetName() = 0 ;
	virtual bool __fastcall GetImage(/* out */  ::Igdiplus::_di_IGPBitmap &ABitmap) = 0 ;
};

__interface  INTERFACE_UUID("{52B673DB-EF47-4AC9-A2B2-95F88E45C733}") IModificationInstance  : public  ::System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{D6528152-DB6F-4052-BE04-9FEBACC0CF21}") IBasicDesigner  : public  ::System::IInterface 
{
	virtual _di_IModificationInstance __fastcall BeginModify() = 0 ;
};

__interface  INTERFACE_UUID("{D5144942-2ECC-4D3C-A3A2-21F392871F64}") IUpdatingInstance  : public  ::System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{7BACB13B-DC35-4553-A0D9-098FAF214145}") IComponentEditorMenuItem  : public  ::System::IInterface 
{
	virtual  ::System::UnicodeString __fastcall GetText() = 0 ;
	virtual void __fastcall Execute() = 0 ;
};

__interface  INTERFACE_UUID("{8CAE335E-586C-402F-A27B-6CE5F906D0DD}") IComponentEditorOptionalMenuItem  : public  ::System::IInterface 
{
	virtual bool __fastcall GetEnabled() = 0 ;
};

__interface  INTERFACE_UUID("{7799391F-B126-4848-B573-468C22556A4E}") IComponentEditorMenuItems  : public  ::Mitov::Containers::List::IArrayList__1<_di_IComponentEditorMenuItem> 
{
	
};

__interface  INTERFACE_UUID("{8B17D2C1-99F1-48C3-9352-5CA0BA2848C4}") IComponentEditor  : public  ::System::IInterface 
{
	virtual bool __fastcall Execute() = 0 ;
	virtual _di_IComponentEditorMenuItems __fastcall GetMenuItems() = 0 ;
};

__interface  INTERFACE_UUID("{CCAA0C94-D7FA-4240-92DF-33A526B4E72D}") ICustomIcon  : public  ::System::IInterface 
{
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetIcon() = 0 ;
};

__interface  INTERFACE_UUID("{A9B06B12-BA0E-44D9-BDBC-45307F5EFC95}") IBasicClassInfo  : public  ::System::IInterface 
{
	virtual  ::System::UnicodeString __fastcall GetName() = 0 ;
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetImage() = 0 ;
};

typedef  ::System::TMetaClass* TClassCategoryClass;

__interface  INTERFACE_UUID("{37E28BA8-FA56-4CDB-9BE5-A704B55E1D84}") IClassCategory  : public IBasicClassInfo 
{
	virtual  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetCategoryTypeInfo() = 0 ;
};

__interface  INTERFACE_UUID("{948E1AA2-9FF0-43E5-9CF3-8C99A1908797}") IClassCategories  : public  ::Mitov::Containers::List::IArrayList__1<_di_IClassCategory> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TClassCategories : public  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IClassCategory>.Create */ inline __fastcall TClassCategories() :  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IClassCategory>.CreateEnumerator */ inline __fastcall TClassCategories( ::System::Generics::Collections::TEnumerator__1<_di_IClassCategory>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IClassCategory>.CreateEnumerator */ inline __fastcall TClassCategories(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IClassCategory> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IClassCategory>.CreateCopy */ inline __fastcall TClassCategories(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IClassCategory> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IClassCategory>.CreateArray */ inline __fastcall TClassCategories(const _di_IClassCategory *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IClassCategory>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IClassCategory>.Destroy */ inline __fastcall virtual ~TClassCategories() { }
	
private:
	void *__IClassCategories;	// IClassCategories 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {948E1AA2-9FF0-43E5-9CF3-8C99A1908797}
	operator _di_IClassCategories()
	{
		_di_IClassCategories intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IClassCategories*(void) { return (IClassCategories*)&__IClassCategories; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{F46C56C4-7883-499E-9EBE-AC93068629BD}") ICategoryClassTypeInfo  : public  ::System::IInterface 
{
	virtual  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetClassTypeInfo() = 0 ;
	virtual bool __fastcall ContainsHInstance(NativeInt AHInstance) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCategoryClassTypeInfo : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::Mitov::Typeinfo::_di_IClassTypeInfo FTypeInfo;
	NativeInt FHInstance;
	 ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetClassTypeInfo();
	bool __fastcall ContainsHInstance(NativeInt AHInstance);
	
public:
	__fastcall TCategoryClassTypeInfo(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ATypeInfo);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCategoryClassTypeInfo() { }
	
private:
	void *__ICategoryClassTypeInfo;	// ICategoryClassTypeInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F46C56C4-7883-499E-9EBE-AC93068629BD}
	operator _di_ICategoryClassTypeInfo()
	{
		_di_ICategoryClassTypeInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICategoryClassTypeInfo*(void) { return (ICategoryClassTypeInfo*)&__ICategoryClassTypeInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BD21B29B-BBCC-47BB-B709-E0889E9FCA99}") ICategoryClasses  : public  ::Mitov::Containers::List::ILinkedList__1<_di_ICategoryClassTypeInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCategoryClasses : public  ::Mitov::Containers::List::TLinkedList__1<_di_ICategoryClassTypeInfo>
{
	typedef  ::Mitov::Containers::List::TLinkedList__1<_di_ICategoryClassTypeInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TLinkedList<Mitov_Design_Components_ICategoryClassTypeInfo>.Create */ inline __fastcall TCategoryClasses() :  ::Mitov::Containers::List::TLinkedList__1<_di_ICategoryClassTypeInfo>() { }
	/* {Mitov_Containers_List}TLinkedList<Mitov_Design_Components_ICategoryClassTypeInfo>.CreateEnumerator */ inline __fastcall TCategoryClasses( ::System::Generics::Collections::TEnumerator__1<_di_ICategoryClassTypeInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1<_di_ICategoryClassTypeInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TLinkedList<Mitov_Design_Components_ICategoryClassTypeInfo>.CreateEnumerator */ inline __fastcall TCategoryClasses(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_ICategoryClassTypeInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TLinkedList__1<_di_ICategoryClassTypeInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TLinkedList<Mitov_Design_Components_ICategoryClassTypeInfo>.CreateCopy */ inline __fastcall TCategoryClasses(const  ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1<_di_ICategoryClassTypeInfo> > AOther) :  ::Mitov::Containers::List::TLinkedList__1<_di_ICategoryClassTypeInfo>(AOther) { }
	/* {Mitov_Containers_List}TLinkedList<Mitov_Design_Components_ICategoryClassTypeInfo>.Destroy */ inline __fastcall virtual ~TCategoryClasses() { }
	
private:
	void *__ICategoryClasses;	// ICategoryClasses 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BD21B29B-BBCC-47BB-B709-E0889E9FCA99}
	operator _di_ICategoryClasses()
	{
		_di_ICategoryClasses intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICategoryClasses*(void) { return (ICategoryClasses*)&__ICategoryClasses; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicClassInfo : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	virtual  ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetOwnClassType();
	virtual  ::System::UnicodeString __fastcall GetName();
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetImage();
public:
	/* TObject.Create */ inline __fastcall TBasicClassInfo() :  ::System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicClassInfo() { }
	
private:
	void *__IBasicClassInfo;	// IBasicClassInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A9B06B12-BA0E-44D9-BDBC-45307F5EFC95}
	operator _di_IBasicClassInfo()
	{
		_di_IBasicClassInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IBasicClassInfo*(void) { return (IBasicClassInfo*)&__IBasicClassInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TClassCategory : public TBasicClassInfo
{
	typedef TBasicClassInfo inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::TObject*> > FOnGetInstance;
	 ::System::DelphiInterface< ::Mitov::Containers::List::ILinkedList__1< ::Mitov::Typeinfo::_di_IObjectInstanceNotify> > FDestroyList;
	 ::System::TObject* __fastcall GetObjectInstance();
	void __fastcall SetOnGetInstance(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::TObject*> > AOnGetInstance);
	void __fastcall RegisterNotify(const  ::Mitov::Typeinfo::_di_IObjectInstanceNotify ANotify);
	void __fastcall UnregisterNotify(const  ::Mitov::Typeinfo::_di_IObjectInstanceNotify ANotify);
	 ::Mitov::Typeinfo::_di_IClassTypeInfo __fastcall GetCategoryTypeInfo();
	
public:
	__fastcall virtual TClassCategory();
	__fastcall virtual ~TClassCategory();
private:
	void *__IObjectInstance;	//  ::Mitov::Typeinfo::IObjectInstance 
	void *__IClassCategory;	// IClassCategory 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D7185F13-DA54-43AD-B370-C1A445CB7BDB}
	operator  ::Mitov::Typeinfo::_di_IObjectInstance()
	{
		 ::Mitov::Typeinfo::_di_IObjectInstance intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::Mitov::Typeinfo::IObjectInstance*(void) { return ( ::Mitov::Typeinfo::IObjectInstance*)&__IObjectInstance; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {37E28BA8-FA56-4CDB-9BE5-A704B55E1D84}
	operator _di_IClassCategory()
	{
		_di_IClassCategory intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IClassCategory*(void) { return (IClassCategory*)&__IClassCategory; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TUnknownToolbarCategory : public TClassCategory
{
	typedef TClassCategory inherited;
	
public:
	/* TClassCategory.Create */ inline __fastcall virtual TUnknownToolbarCategory() : TClassCategory() { }
	/* TClassCategory.Destroy */ inline __fastcall virtual ~TUnknownToolbarCategory() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicCategoryAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::Mitov::Typeinfo::_di_IClassTypeInfo FCategoryTypeInfo;
	
public:
	__property  ::Mitov::Typeinfo::_di_IClassTypeInfo Category = {read=FCategoryTypeInfo};
	
protected:
	bool __fastcall Cleanup(NativeInt AHInstance);
	
public:
	__fastcall TBasicCategoryAttribute(TClassCategoryClass ACategory)/* overload */;
	__fastcall TBasicCategoryAttribute(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACategoryTypeInfo)/* overload */;
	__fastcall virtual ~TBasicCategoryAttribute();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CategoryAttribute : public TBasicCategoryAttribute
{
	typedef TBasicCategoryAttribute inherited;
	
public:
	/* TBasicCategoryAttribute.Create */ inline __fastcall CategoryAttribute(TClassCategoryClass ACategory)/* overload */ : TBasicCategoryAttribute(ACategory) { }
	/* TBasicCategoryAttribute.Create */ inline __fastcall CategoryAttribute(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACategoryTypeInfo)/* overload */ : TBasicCategoryAttribute(ACategoryTypeInfo) { }
	/* TBasicCategoryAttribute.Destroy */ inline __fastcall virtual ~CategoryAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AlternateCategoryAttribute : public TBasicCategoryAttribute
{
	typedef TBasicCategoryAttribute inherited;
	
public:
	/* TBasicCategoryAttribute.Create */ inline __fastcall AlternateCategoryAttribute(TClassCategoryClass ACategory)/* overload */ : TBasicCategoryAttribute(ACategory) { }
	/* TBasicCategoryAttribute.Create */ inline __fastcall AlternateCategoryAttribute(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACategoryTypeInfo)/* overload */ : TBasicCategoryAttribute(ACategoryTypeInfo) { }
	/* TBasicCategoryAttribute.Destroy */ inline __fastcall virtual ~AlternateCategoryAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentEditorMenuItems : public  ::Mitov::Containers::List::TArrayList__1<_di_IComponentEditorMenuItem>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IComponentEditorMenuItem> inherited;
	
protected:
	_di_IComponentEditor FOwner;
	
public:
	__fastcall TComponentEditorMenuItems(const _di_IComponentEditor AOwner);
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IComponentEditorMenuItem>.CreateEnumerator */ inline __fastcall TComponentEditorMenuItems( ::System::Generics::Collections::TEnumerator__1<_di_IComponentEditorMenuItem>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IComponentEditorMenuItem>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IComponentEditorMenuItem>.CreateEnumerator */ inline __fastcall TComponentEditorMenuItems(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IComponentEditorMenuItem> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IComponentEditorMenuItem>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IComponentEditorMenuItem>.CreateCopy */ inline __fastcall TComponentEditorMenuItems(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IComponentEditorMenuItem> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IComponentEditorMenuItem>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IComponentEditorMenuItem>.CreateArray */ inline __fastcall TComponentEditorMenuItems(const _di_IComponentEditorMenuItem *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IComponentEditorMenuItem>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_IComponentEditorMenuItem>.Destroy */ inline __fastcall virtual ~TComponentEditorMenuItems() { }
	
private:
	void *__IComponentEditorMenuItems;	// IComponentEditorMenuItems 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7799391F-B126-4848-B573-468C22556A4E}
	operator _di_IComponentEditorMenuItems()
	{
		_di_IComponentEditorMenuItems intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IComponentEditorMenuItems*(void) { return (IComponentEditorMenuItems*)&__IComponentEditorMenuItems; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMemberCategory : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	virtual  ::System::UnicodeString __fastcall GetName();
	virtual bool __fastcall GetImage(/* out */  ::Igdiplus::_di_IGPBitmap &ABitmap);
	
public:
	__fastcall virtual TMemberCategory();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMemberCategory() { }
	
private:
	void *__IMemberCategory;	// IMemberCategory 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {76CFB076-9846-4254-8BBA-44561AEFA12F}
	operator _di_IMemberCategory()
	{
		_di_IMemberCategory intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMemberCategory*(void) { return (IMemberCategory*)&__IMemberCategory; }
	#endif
	
};

#pragma pack(pop)

typedef  ::System::TMetaClass* TMemberCategoryClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMiscellaneousMemberCategory : public TMemberCategory
{
	typedef TMemberCategory inherited;
	
public:
	/* TMemberCategory.Create */ inline __fastcall virtual TMiscellaneousMemberCategory() : TMemberCategory() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMiscellaneousMemberCategory() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVisualMemberCategory : public TMemberCategory
{
	typedef TMemberCategory inherited;
	
public:
	/* TMemberCategory.Create */ inline __fastcall virtual TVisualMemberCategory() : TMemberCategory() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TVisualMemberCategory() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLayoutMemberCategory : public TMemberCategory
{
	typedef TMemberCategory inherited;
	
public:
	/* TMemberCategory.Create */ inline __fastcall virtual TLayoutMemberCategory() : TMemberCategory() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLayoutMemberCategory() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBehaviorMemberCategory : public TMemberCategory
{
	typedef TMemberCategory inherited;
	
public:
	/* TMemberCategory.Create */ inline __fastcall virtual TBehaviorMemberCategory() : TMemberCategory() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBehaviorMemberCategory() { }
	
};

#pragma pack(pop)

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> struct DECLSPEC_DRECORD TCategorizedValue__1
{
public:
	T Value;
	 ::System::DynamicArray< ::Mitov::Typeinfo::_di_IClassTypeInfo> Categories;
	 ::Igdiplus::_di_IGPImage Image;
	__fastcall TCategorizedValue__1(T AValue, const  ::System::DynamicArray< ::Mitov::Typeinfo::_di_IClassTypeInfo> ACategories, const  ::Igdiplus::_di_IGPImage AImage);
	TCategorizedValue__1() {}
};


__interface  INTERFACE_UUID("{CFCFAD1B-08A9-4746-9172-A2F829B214D4}") ICategorizedValueList  : public  ::Mitov::Containers::List::IArrayList__1<TCategorizedValue__1< ::System::UnicodeString> > 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCategorizedValueList : public  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> >
{
	typedef  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> > inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_TCategorizedValue<System_string>>.Create */ inline __fastcall TCategorizedValueList() :  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> >() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_TCategorizedValue<System_string>>.CreateEnumerator */ inline __fastcall TCategorizedValueList( ::System::Generics::Collections::TEnumerator__1<TCategorizedValue__1< ::System::UnicodeString> >* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> >(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_TCategorizedValue<System_string>>.CreateEnumerator */ inline __fastcall TCategorizedValueList(const  ::System::DelphiInterface< ::System::IEnumerator__1<TCategorizedValue__1< ::System::UnicodeString> > > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> >(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_TCategorizedValue<System_string>>.CreateCopy */ inline __fastcall TCategorizedValueList(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<TCategorizedValue__1< ::System::UnicodeString> > > AOther) :  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> >(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_TCategorizedValue<System_string>>.CreateArray */ inline __fastcall TCategorizedValueList(const TCategorizedValue__1< ::System::UnicodeString> *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<TCategorizedValue__1< ::System::UnicodeString> >(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_Design_Components_TCategorizedValue<System_string>>.Destroy */ inline __fastcall virtual ~TCategorizedValueList() { }
	
private:
	void *__ICategorizedValueList;	// ICategorizedValueList 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CFCFAD1B-08A9-4746-9172-A2F829B214D4}
	operator _di_ICategorizedValueList()
	{
		_di_ICategorizedValueList intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICategorizedValueList*(void) { return (ICategorizedValueList*)&__ICategorizedValueList; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMemberCategoryAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	TMemberCategoryClass FCategory;
	
public:
	__property TMemberCategoryClass Category = {read=FCategory};
	__fastcall TMemberCategoryAttribute(TMemberCategoryClass ACategory);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMemberCategoryAttribute() { }
	
};

#pragma pack(pop)

__interface TComponentFactoryProc  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::Classes::TComponent*> > __fastcall Invoke(const  ::Mitov::Typeinfo::_di_IClassTypeInfo ACategoryTypeInfo) = 0 ;
};

__interface TComponentCategoriesFactoryProc  : public  ::System::IInterface 
{
	virtual  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > __fastcall Invoke() = 0 ;
};

__interface  INTERFACE_UUID("{A420D377-26F9-4F86-BC30-D63E7B1FF574}") IComponentLocked  : public  ::System::IInterface 
{
	virtual bool __fastcall GetLocked( ::System::TObject* ALicenseInfo) = 0 ;
};

__interface  INTERFACE_UUID("{DDEF7E41-3EE9-4073-98CB-6BA914F45A28}") ICheckIfComponentLocked  : public  ::System::IInterface 
{
	virtual bool __fastcall GetIsLocked( ::System::Classes::TComponent* AComponent) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RegisterComponentInComponentCategory(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AParentCategory, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AComponentTypeInfo);
extern DELPHI_PACKAGE void __fastcall RegisterComponentInComponentCategories(TClassCategoryClass const *AParentCategories, const int AParentCategories_High, const  ::Mitov::Typeinfo::_di_IClassTypeInfo AComponentTypeInfo);
extern DELPHI_PACKAGE void __fastcall RegisterComponentInCategories(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AComponentTypeInfo);
extern DELPHI_PACKAGE void __fastcall RegisterComponents( ::System::Classes::TComponentClass const *AComponentClasses, const int AComponentClasses_High);
extern DELPHI_PACKAGE void __fastcall RegisterComponentCategoriesInCategories(TClassCategoryClass const *AParentCategories, const int AParentCategories_High, TClassCategoryClass *ACategories, const int ACategories_High);
extern DELPHI_PACKAGE void __fastcall RegisterComponentCategories(TClassCategoryClass const *ACategories, const int ACategories_High);
extern DELPHI_PACKAGE _di_IClassCategories __fastcall GetRegisteredComponentCategories(void);
extern DELPHI_PACKAGE _di_IClassCategories __fastcall GetSubCategories(const _di_IClassCategory ACategory);
extern DELPHI_PACKAGE void __fastcall RegisterComponentFactory(const _di_TComponentFactoryProc AProc);
extern DELPHI_PACKAGE void __fastcall UnregisterComponentFactory(const _di_TComponentFactoryProc AProc);
extern DELPHI_PACKAGE void __fastcall RegisterComponentCategoriesFactory(const _di_TComponentCategoriesFactoryProc AProc);
extern DELPHI_PACKAGE void __fastcall UnregisterComponentCategoriesFactory(const _di_TComponentCategoriesFactoryProc AProc);
extern DELPHI_PACKAGE bool __fastcall GetComponentResImageByName(NativeInt AHInstance, const  ::System::UnicodeString AName, /* out */  ::Igdiplus::_di_IGPBitmap &ABitmap);
extern DELPHI_PACKAGE bool __fastcall GetComponentSmallResImageByName(NativeInt AHInstance, const  ::System::UnicodeString AName, /* out */  ::Igdiplus::_di_IGPBitmap &ABitmap);
extern DELPHI_PACKAGE bool __fastcall GetBMPResImageByName(NativeInt AHInstance, const  ::System::UnicodeString AName, /* out */  ::Igdiplus::_di_IGPBitmap &ABitmap);
extern DELPHI_PACKAGE bool __fastcall GetPNGResImageByName(NativeInt AHInstance, const  ::System::UnicodeString AName, /* out */  ::Igdiplus::_di_IGPBitmap &ABitmap);
extern DELPHI_PACKAGE void __fastcall AddComponentRegistrationProcedure(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > AProcedure);
extern DELPHI_PACKAGE void __fastcall RegisterComponentRegisteredNotify(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1< ::Mitov::Typeinfo::_di_IClassTypeInfo> > ALambda);
extern DELPHI_PACKAGE  ::System::UnicodeString __fastcall GetClassNameBase( ::System::TObject* AComponent);
extern DELPHI_PACKAGE  ::Igdiplus::_di_IGPBitmap __fastcall GetClassImage(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassTypeInfo)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetClassImage( ::System::TObject* AObject, /* out */  ::Igdiplus::_di_IGPBitmap &AImage)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetClassImage(const  ::Mitov::Typeinfo::_di_IClassTypeInfo AClassTypeInfo, /* out */  ::Igdiplus::_di_IGPBitmap &AImage)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetAddComponnentCallback(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2< ::System::UnicodeString, ::Igdiplus::_di_IGPBitmap> > ACollback);
extern DELPHI_PACKAGE void __fastcall BasicRegisterNoIcon( ::System::Classes::TComponentClass const *AComponentClasses, const int AComponentClasses_High);
extern DELPHI_PACKAGE void __fastcall BasicRegisterComponents(const  ::System::UnicodeString APage,  ::System::Classes::TComponentClass const *AComponentClasses, const int AComponentClasses_High);
extern DELPHI_PACKAGE void __fastcall RegisterDynamicClassImage(const  ::System::UnicodeString AName, const  ::Igdiplus::_di_IGPBitmap ABitmap);
extern DELPHI_PACKAGE bool __fastcall GetDynamicClassImage(const  ::System::UnicodeString AName, /* out */  ::Igdiplus::_di_IGPBitmap &ABitmap);
extern DELPHI_PACKAGE void __fastcall ClearRegisteredClasses(void);
}	/* namespace Components */
}	/* namespace Design */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_Design_ComponentsHPP

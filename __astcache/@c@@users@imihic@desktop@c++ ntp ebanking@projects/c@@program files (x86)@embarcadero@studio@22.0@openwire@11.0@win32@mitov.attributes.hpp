// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.Attributes.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_AttributesHPP
#define Mitov_AttributesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Rtti.hpp>
#include <System.TypInfo.hpp>
#include <System.SysUtils.hpp>
#include <IGDIPlus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Mitov
{
namespace Attributes
{
//-- forward type declarations -----------------------------------------------
template<typename T> class DELPHICLASS TTypedAttribute__1;
class DELPHICLASS ThisAttributedType;
class DELPHICLASS TCustomInterfacedAttribute;
class DELPHICLASS DynamicIconAttribute;
class DELPHICLASS IsObjectNameAttribute;
class DELPHICLASS RearrangeOrderAttribute;
class DELPHICLASS TAttributeCollectionAttribute;
class DELPHICLASS DontSerializeChildrenAttribute;
class DELPHICLASS FixedCollectionAttribute;
class DELPHICLASS FixedOrderCollectionAttribute;
class DELPHICLASS DynamicPropertyAttribute;
class DELPHICLASS AllowCollectionExpantionAttribute;
class DELPHICLASS ExcludePropertyPopulationAttribute;
class DELPHICLASS RefreshPropertiesAttribute;
class DELPHICLASS CacheRttiAttribute;
class DELPHICLASS MakeOpenWireInstanceAttribute;
class DELPHICLASS DontSerializeConstructableAttribute;
class DELPHICLASS DontSerializeTypeNameAttribute;
class DELPHICLASS DontCopyAttribute;
class DELPHICLASS UpdatePreviewAttribute;
class DELPHICLASS HiddenDesignAttribute;
class DELPHICLASS IgnoreNamePathAttribute;
class DELPHICLASS PropertyValueAttribute;
class DELPHICLASS PropertyInfoAttribute;
class DELPHICLASS FixedNameAttribute;
class DELPHICLASS AutoUpdateAttribute;
class DELPHICLASS PermanentComponentAttribute;
class DELPHICLASS AutoChangeNotifyAttribute;
class DELPHICLASS AutoNameChangeNotifyAttribute;
class DELPHICLASS AutoInitPropertyFieldsAttribute;
class DELPHICLASS ReadOnlyAttribute;
class DELPHICLASS SingleCollectionInstanceAttribute;
class DELPHICLASS DynamicElementAttribute;
class DELPHICLASS MultiLineAttribute;
class DELPHICLASS IdentifierStringAttribute;
class DELPHICLASS DynamicTypeNameAttribute;
class DELPHICLASS VirtualInheritedAttribute;
class DELPHICLASS BasicInheritedAttribute;
class DELPHICLASS DoNotCreateAttribute;
class DELPHICLASS TBasicStringAttribute;
class DELPHICLASS TBasicCharAttribute;
class DELPHICLASS TBasicBooleanAttribute;
class DELPHICLASS TBasicIntegerAttribute;
class DELPHICLASS TBasicUnsignedAttribute;
class DELPHICLASS TBasicGUIDAttribute;
class DELPHICLASS TBasicTypeInfoAttribute;
__interface DELPHIINTERFACE IAtttributeParameterInfo;
typedef  ::System::DelphiInterface<IAtttributeParameterInfo> _di_IAtttributeParameterInfo;
class DELPHICLASS TBasicClassAttribute;
class DELPHICLASS TBasicValueTypeAttribute;
class DELPHICLASS TBasicCommonRttiValueAttribute;
class DELPHICLASS TBasicRttiValueAttribute;
class DELPHICLASS TBasicValueRangeAttribute;
class DELPHICLASS ReplaceValueAttribute;
class DELPHICLASS ExtendDisplayNameAttribute;
class DELPHICLASS ValueRangeAttribute;
class DELPHICLASS DesignRangeAttribute;
class DELPHICLASS TBasicSingleRttiValueAttribute;
class DELPHICLASS PropertyNameMapAttribute;
class DELPHICLASS CreateNameAttribute;
class DELPHICLASS StreamingIdentifierAttribute;
class DELPHICLASS OldNameAttribute;
class DELPHICLASS NamespaceAttribute;
class DELPHICLASS ParentImageAttribute;
class DELPHICLASS RemovedPropertyAttribute;
class DELPHICLASS ContainsSubDiagramAttribute;
class DELPHICLASS IPProtocolNameAttribute;
class DELPHICLASS MinValueAttribute;
class DELPHICLASS MaxValueAttribute;
class DELPHICLASS DesignMinAttribute;
class DELPHICLASS DesignMaxAttribute;
template<typename T> class DELPHICLASS TSizeAttribute__1;
class DELPHICLASS IntegerSizeAttribute;
class DELPHICLASS FloatSizeAttribute;
class DELPHICLASS RealSizeAttribute;
class DELPHICLASS OWAccesModeAttribute;
class DELPHICLASS SuppressRangeAttribute;
class DELPHICLASS NameAttribute;
class DELPHICLASS AlternativeNameAttribute;
class DELPHICLASS NamePostfixAttribute;
class DELPHICLASS ComponentEditorEntriesDesignAttribute;
class DELPHICLASS TBasicComponentEditorEntryDesignAttribute;
class DELPHICLASS ComponentEditorEntryDesignAttribute;
class DELPHICLASS ComponentEditorEntryDesignConfirmationAttribute;
class DELPHICLASS ComponentEditorEntryFullRefreshDesignAttribute;
class DELPHICLASS FileNameDesignAttribute;
class DELPHICLASS PropertyListDialogDesignAttribute;
class DELPHICLASS CollectionItemAssociationAttribute;
class DELPHICLASS DesignAssociationAttribute;
class DELPHICLASS PropertyListDesignAssociationAttribute;
class DELPHICLASS DefaultAssociationAttribute;
class DELPHICLASS PropertyListDesignValueAttribute;
class DELPHICLASS PropertySortListDesignAttribute;
class DELPHICLASS PropertyFixedListDesignAttribute;
class DELPHICLASS RequiresDynamicInplaceRefreshAttribute;
class DELPHICLASS ComponentEditorAttribute;
class DELPHICLASS StringDesignAccessAttribute;
class DELPHICLASS NotExpandableClassAttribute;
class DELPHICLASS TVLCommonFilterHostedPreviewAttribute;
class DELPHICLASS TOWInplaceNonMovableAttribute;
class DELPHICLASS DefaultSingleAttribute;
class DELPHICLASS TOWResizePropertyAttribute;
class DELPHICLASS NoAutoManageAttribute;
class DELPHICLASS AutoManageAttribute;
class DELPHICLASS AutoManageNotifyAttribute;
class DELPHICLASS AutoDestroyAttribute;
class DELPHICLASS CreateTypeAttribute;
class DELPHICLASS SerializeConstructableAttribute;
class DELPHICLASS CodeComponentAttribute;
class DELPHICLASS ExcludeSystemColorsAttribute;
class DELPHICLASS HideEmptyAttribute;
class DELPHICLASS DelphiPersistancyTypeAttribute;
class DELPHICLASS OWStudioChannelTypeAttribute;
class DELPHICLASS TBasicModeAttribute;
class DELPHICLASS DesignTimeOnlyAttribute;
class DELPHICLASS DebugTimeOnlyAttribute;
class DELPHICLASS AnyRuntimeTimeOnlyAttribute;
class DELPHICLASS PreviewSizeAttribute;
class DELPHICLASS InplacePreviewFormAttribute;
class DELPHICLASS TBasicCustomIconAttribute;
class DELPHICLASS CustomStaticIconAttribute;
class DELPHICLASS CustomDynamicIconAttribute;
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

typedef  ::System::TMetaClass* TCustomAttributeClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION ThisAttributedType : public  ::System::TObject
{
	typedef  ::System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall ThisAttributedType() :  ::System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ThisAttributedType() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomInterfacedAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
public:
	/* TObject.Create */ inline __fastcall TCustomInterfacedAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomInterfacedAttribute() { }
	
private:
	void *__IInterface;	//  ::System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator  ::System::_di_IInterface()
	{
		 ::System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator  ::System::IInterface*(void) { return ( ::System::IInterface*)&__IInterface; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DynamicIconAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DynamicIconAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DynamicIconAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION IsObjectNameAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall IsObjectNameAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~IsObjectNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION RearrangeOrderAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall RearrangeOrderAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~RearrangeOrderAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAttributeCollectionAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TAttributeCollectionAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAttributeCollectionAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DontSerializeChildrenAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DontSerializeChildrenAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DontSerializeChildrenAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION FixedCollectionAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall FixedCollectionAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~FixedCollectionAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION FixedOrderCollectionAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall FixedOrderCollectionAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~FixedOrderCollectionAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DynamicPropertyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DynamicPropertyAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DynamicPropertyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AllowCollectionExpantionAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall AllowCollectionExpantionAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~AllowCollectionExpantionAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ExcludePropertyPopulationAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall ExcludePropertyPopulationAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ExcludePropertyPopulationAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION RefreshPropertiesAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	bool FInvalidateView;
	
public:
	__property bool InvalidateView = {read=FInvalidateView, nodefault};
	__fastcall RefreshPropertiesAttribute(const bool AInvalidateView)/* overload */;
	__fastcall RefreshPropertiesAttribute()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~RefreshPropertiesAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CacheRttiAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall CacheRttiAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CacheRttiAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION MakeOpenWireInstanceAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall MakeOpenWireInstanceAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~MakeOpenWireInstanceAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DontSerializeConstructableAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DontSerializeConstructableAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DontSerializeConstructableAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DontSerializeTypeNameAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DontSerializeTypeNameAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DontSerializeTypeNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DontCopyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DontCopyAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DontCopyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION UpdatePreviewAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall UpdatePreviewAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~UpdatePreviewAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION HiddenDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall HiddenDesignAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~HiddenDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION IgnoreNamePathAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall IgnoreNamePathAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~IgnoreNamePathAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyValueAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall PropertyValueAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~PropertyValueAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyInfoAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall PropertyInfoAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~PropertyInfoAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION FixedNameAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall FixedNameAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~FixedNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoUpdateAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall AutoUpdateAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~AutoUpdateAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PermanentComponentAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall PermanentComponentAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~PermanentComponentAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoChangeNotifyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall AutoChangeNotifyAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~AutoChangeNotifyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoNameChangeNotifyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall AutoNameChangeNotifyAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~AutoNameChangeNotifyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoInitPropertyFieldsAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall AutoInitPropertyFieldsAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~AutoInitPropertyFieldsAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ReadOnlyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall ReadOnlyAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ReadOnlyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION SingleCollectionInstanceAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall SingleCollectionInstanceAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~SingleCollectionInstanceAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DynamicElementAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DynamicElementAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DynamicElementAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION MultiLineAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall MultiLineAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~MultiLineAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION IdentifierStringAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall IdentifierStringAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~IdentifierStringAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DynamicTypeNameAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DynamicTypeNameAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DynamicTypeNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION VirtualInheritedAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall VirtualInheritedAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~VirtualInheritedAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION BasicInheritedAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall BasicInheritedAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~BasicInheritedAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DoNotCreateAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DoNotCreateAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DoNotCreateAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicStringAttribute : public TTypedAttribute__1< ::System::UnicodeString>
{
	typedef TTypedAttribute__1< ::System::UnicodeString> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall TBasicStringAttribute(const  ::System::UnicodeString AValue) : TTypedAttribute__1< ::System::UnicodeString>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicStringAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicCharAttribute : public TTypedAttribute__1< ::System::WideChar>
{
	typedef TTypedAttribute__1< ::System::WideChar> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Char>.Create */ inline __fastcall TBasicCharAttribute(const  ::System::WideChar AValue) : TTypedAttribute__1< ::System::WideChar>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicCharAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicBooleanAttribute : public TTypedAttribute__1<bool>
{
	typedef TTypedAttribute__1<bool> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Boolean>.Create */ inline __fastcall TBasicBooleanAttribute(const bool AValue) : TTypedAttribute__1<bool>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicBooleanAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicIntegerAttribute : public TTypedAttribute__1<int>
{
	typedef TTypedAttribute__1<int> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Integer>.Create */ inline __fastcall TBasicIntegerAttribute(const int AValue) : TTypedAttribute__1<int>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicIntegerAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicUnsignedAttribute : public TTypedAttribute__1<unsigned>
{
	typedef TTypedAttribute__1<unsigned> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Cardinal>.Create */ inline __fastcall TBasicUnsignedAttribute(const unsigned AValue) : TTypedAttribute__1<unsigned>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicUnsignedAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicGUIDAttribute : public TTypedAttribute__1<GUID>
{
	typedef TTypedAttribute__1<GUID> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_TGUID>.Create */ inline __fastcall TBasicGUIDAttribute(const GUID &AValue) : TTypedAttribute__1<GUID>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicGUIDAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicTypeInfoAttribute : public TTypedAttribute__1< ::System::Typinfo::PTypeInfo>
{
	typedef TTypedAttribute__1< ::System::Typinfo::PTypeInfo> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_TypInfo_PTypeInfo>.Create */ inline __fastcall TBasicTypeInfoAttribute(const  ::System::Typinfo::PTypeInfo AValue) : TTypedAttribute__1< ::System::Typinfo::PTypeInfo>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicTypeInfoAttribute() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{0C1393BF-162E-4414-91D9-E4D67AD26877}") IAtttributeParameterInfo  : public  ::System::IInterface 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicClassAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	_di_IAtttributeParameterInfo FValue;
	
public:
	__property _di_IAtttributeParameterInfo Value = {read=FValue};
	
protected:
	bool __fastcall Cleanup(NativeInt AHInstance);
	
public:
	__fastcall TBasicClassAttribute( ::System::TClass AValue)/* overload */;
	__fastcall TBasicClassAttribute(const _di_IAtttributeParameterInfo AValue)/* overload */;
	__fastcall virtual ~TBasicClassAttribute();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicValueTypeAttribute : public TTypedAttribute__1< ::System::Classes::TValueType>
{
	typedef TTypedAttribute__1< ::System::Classes::TValueType> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Classes_TValueType>.Create */ inline __fastcall TBasicValueTypeAttribute(const  ::System::Classes::TValueType AValue) : TTypedAttribute__1< ::System::Classes::TValueType>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicValueTypeAttribute() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TBasicCommonRttiValueAttribute : public TTypedAttribute__1< ::System::Rtti::TValue>
{
	typedef TTypedAttribute__1< ::System::Rtti::TValue> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Rtti_TValue>.Create */ inline __fastcall TBasicCommonRttiValueAttribute(const  ::System::Rtti::TValue &AValue) : TTypedAttribute__1< ::System::Rtti::TValue>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicCommonRttiValueAttribute() { }
	
};


class PASCALIMPLEMENTATION TBasicRttiValueAttribute : public TBasicCommonRttiValueAttribute
{
	typedef TBasicCommonRttiValueAttribute inherited;
	
public:
	__fastcall TBasicRttiValueAttribute(const  ::System::Byte AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const  ::System::Word AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const  ::System::WideChar AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const unsigned AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const int AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const unsigned __int64 AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const __int64 AValue)/* overload */;
	__fastcall TBasicRttiValueAttribute(const  ::System::Extended AValue)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicRttiValueAttribute() { }
	
};


class PASCALIMPLEMENTATION TBasicValueRangeAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	 ::System::Rtti::TValue Min;
	 ::System::Rtti::TValue Max;
	__fastcall TBasicValueRangeAttribute(const  ::System::Byte AMin, const  ::System::Byte AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const  ::System::Word AMin, const  ::System::Word AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const  ::System::WideChar AMin, const  ::System::WideChar AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const unsigned AMin, const unsigned AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const int AMin, const int AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const unsigned __int64 AMin, const unsigned __int64 AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const __int64 AMin, const __int64 AMax)/* overload */;
	__fastcall TBasicValueRangeAttribute(const  ::System::Extended AMin, const  ::System::Extended AMax)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicValueRangeAttribute() { }
	
};


class PASCALIMPLEMENTATION ReplaceValueAttribute : public TBasicCommonRttiValueAttribute
{
	typedef TBasicCommonRttiValueAttribute inherited;
	
public:
	 ::System::Rtti::TValue WithValue;
	__fastcall ReplaceValueAttribute(const  ::System::Byte AValue, const  ::System::Byte AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const  ::System::Word AValue, const  ::System::Word AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const  ::System::WideChar AValue, const  ::System::WideChar AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const unsigned AValue, const unsigned AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const int AValue, const int AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const unsigned __int64 AValue, const unsigned __int64 AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const __int64 AValue, const __int64 AWithValue)/* overload */;
	__fastcall ReplaceValueAttribute(const  ::System::Extended AValue, const  ::System::Extended AWithValue)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ReplaceValueAttribute() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION ExtendDisplayNameAttribute : public AutoNameChangeNotifyAttribute
{
	typedef AutoNameChangeNotifyAttribute inherited;
	
protected:
	 ::System::UnicodeString FPrefix;
	 ::System::UnicodeString FSuffix;
	
public:
	__property  ::System::UnicodeString Prefix = {read=FPrefix};
	__property  ::System::UnicodeString Suffix = {read=FSuffix};
	__fastcall ExtendDisplayNameAttribute(const  ::System::UnicodeString APrefix, const  ::System::UnicodeString ASuffix)/* overload */;
	__fastcall ExtendDisplayNameAttribute(const  ::System::UnicodeString APrefix)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ExtendDisplayNameAttribute() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION ValueRangeAttribute : public TBasicValueRangeAttribute
{
	typedef TBasicValueRangeAttribute inherited;
	
public:
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const  ::System::Byte AMin, const  ::System::Byte AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const  ::System::Word AMin, const  ::System::Word AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const  ::System::WideChar AMin, const  ::System::WideChar AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const unsigned AMin, const unsigned AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const int AMin, const int AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const unsigned __int64 AMin, const unsigned __int64 AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const __int64 AMin, const __int64 AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall ValueRangeAttribute(const  ::System::Extended AMin, const  ::System::Extended AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ValueRangeAttribute() { }
	
};


class PASCALIMPLEMENTATION DesignRangeAttribute : public TBasicValueRangeAttribute
{
	typedef TBasicValueRangeAttribute inherited;
	
public:
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const  ::System::Byte AMin, const  ::System::Byte AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const  ::System::Word AMin, const  ::System::Word AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const  ::System::WideChar AMin, const  ::System::WideChar AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const unsigned AMin, const unsigned AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const int AMin, const int AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const unsigned __int64 AMin, const unsigned __int64 AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const __int64 AMin, const __int64 AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	/* TBasicValueRangeAttribute.Create */ inline __fastcall DesignRangeAttribute(const  ::System::Extended AMin, const  ::System::Extended AMax)/* overload */ : TBasicValueRangeAttribute(AMin, AMax) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DesignRangeAttribute() { }
	
};


class PASCALIMPLEMENTATION TBasicSingleRttiValueAttribute : public TBasicCommonRttiValueAttribute
{
	typedef TBasicCommonRttiValueAttribute inherited;
	
public:
	__fastcall TBasicSingleRttiValueAttribute(const float AValue)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicSingleRttiValueAttribute() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyNameMapAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall PropertyNameMapAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~PropertyNameMapAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CreateNameAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall CreateNameAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~CreateNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION StreamingIdentifierAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall StreamingIdentifierAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~StreamingIdentifierAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION OldNameAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall OldNameAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~OldNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION NamespaceAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall NamespaceAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~NamespaceAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ParentImageAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	_di_IAtttributeParameterInfo FImageClassInfo;
	
public:
	__property _di_IAtttributeParameterInfo ImageClassInfo = {read=FImageClassInfo};
	
protected:
	bool __fastcall Cleanup(NativeInt AHInstance);
	
public:
	__fastcall ParentImageAttribute( ::System::TClass AImageClass)/* overload */;
	__fastcall ParentImageAttribute(const _di_IAtttributeParameterInfo AImageClass)/* overload */;
	__fastcall virtual ~ParentImageAttribute();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION RemovedPropertyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::System::Typinfo::TTypeInfo *FDataType;
	 ::System::UnicodeString FOldName;
	 ::System::UnicodeString FNewName;
	
public:
	__property  ::System::Typinfo::PTypeInfo DataType = {read=FDataType};
	__property  ::System::UnicodeString OldName = {read=FOldName};
	__property  ::System::UnicodeString NewName = {read=FNewName};
	__fastcall RemovedPropertyAttribute( ::System::Typinfo::PTypeInfo ADataType, const  ::System::UnicodeString AOldName, const  ::System::UnicodeString ANewName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~RemovedPropertyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ContainsSubDiagramAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
	
protected:
	__interface DELPHIINTERFACE TContainsCheckFunc;
	typedef  ::System::DelphiInterface<TContainsCheckFunc> _di_TContainsCheckFunc;
	__interface TContainsCheckFunc  : public  ::System::IInterface 
	{
		virtual bool __fastcall Invoke(const  ::System::UnicodeString AValue) = 0 ;
	};
	
	
protected:
	_di_TContainsCheckFunc FContainsCheckFunc;
	
public:
	bool __fastcall ContainsComponentTypeName(const  ::System::UnicodeString AValue);
	__fastcall ContainsSubDiagramAttribute(const _di_TContainsCheckFunc AContainsCheckFunc);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ContainsSubDiagramAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION IPProtocolNameAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall IPProtocolNameAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~IPProtocolNameAttribute() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION MinValueAttribute : public TBasicRttiValueAttribute
{
	typedef TBasicRttiValueAttribute inherited;
	
public:
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const  ::System::Byte AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const  ::System::Word AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const  ::System::WideChar AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const unsigned AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const int AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const unsigned __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MinValueAttribute(const  ::System::Extended AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~MinValueAttribute() { }
	
};


class PASCALIMPLEMENTATION MaxValueAttribute : public TBasicRttiValueAttribute
{
	typedef TBasicRttiValueAttribute inherited;
	
public:
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const  ::System::Byte AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const  ::System::Word AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const  ::System::WideChar AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const unsigned AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const int AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const unsigned __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall MaxValueAttribute(const  ::System::Extended AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~MaxValueAttribute() { }
	
};


class PASCALIMPLEMENTATION DesignMinAttribute : public TBasicRttiValueAttribute
{
	typedef TBasicRttiValueAttribute inherited;
	
public:
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const  ::System::Byte AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const  ::System::Word AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const  ::System::WideChar AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const unsigned AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const int AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const unsigned __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMinAttribute(const  ::System::Extended AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DesignMinAttribute() { }
	
};


class PASCALIMPLEMENTATION DesignMaxAttribute : public TBasicRttiValueAttribute
{
	typedef TBasicRttiValueAttribute inherited;
	
public:
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const  ::System::Byte AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const  ::System::Word AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const  ::System::WideChar AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const unsigned AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const int AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const unsigned __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const __int64 AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	/* TBasicRttiValueAttribute.Create */ inline __fastcall DesignMaxAttribute(const  ::System::Extended AValue)/* overload */ : TBasicRttiValueAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DesignMaxAttribute() { }
	
};


// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TSizeAttribute__1 : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	T FWidth;
	T FHeight;
	
public:
	__property T Width = {read=FWidth};
	__property T Height = {read=FHeight};
	__fastcall TSizeAttribute__1(T AWidth, T AHeight);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSizeAttribute__1() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION IntegerSizeAttribute : public TSizeAttribute__1<int>
{
	typedef TSizeAttribute__1<int> inherited;
	
public:
	/* {Mitov_Attributes}TSizeAttribute<System_Integer>.Create */ inline __fastcall IntegerSizeAttribute(int AWidth, int AHeight) : TSizeAttribute__1<int>(AWidth, AHeight) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~IntegerSizeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION FloatSizeAttribute : public TSizeAttribute__1<float>
{
	typedef TSizeAttribute__1<float> inherited;
	
public:
	/* {Mitov_Attributes}TSizeAttribute<System_Single>.Create */ inline __fastcall FloatSizeAttribute(float AWidth, float AHeight) : TSizeAttribute__1<float>(AWidth, AHeight) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~FloatSizeAttribute() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION RealSizeAttribute : public TSizeAttribute__1<double>
{
	typedef TSizeAttribute__1<double> inherited;
	
public:
	/* {Mitov_Attributes}TSizeAttribute<System_Real>.Create */ inline __fastcall RealSizeAttribute(double AWidth, double AHeight) : TSizeAttribute__1<double>(AWidth, AHeight) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~RealSizeAttribute() { }
	
};


enum DECLSPEC_DENUM TOWBindingReadWriteMode : unsigned char { brwRead, brwWrite, brwMultiWrite, brwReadWrite, brwClockSink, brwClockSource };

#pragma pack(push,4)
class PASCALIMPLEMENTATION OWAccesModeAttribute : public TTypedAttribute__1<TOWBindingReadWriteMode>
{
	typedef TTypedAttribute__1<TOWBindingReadWriteMode> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<Mitov_Attributes_TOWBindingReadWriteMode>.Create */ inline __fastcall OWAccesModeAttribute(const TOWBindingReadWriteMode AValue) : TTypedAttribute__1<TOWBindingReadWriteMode>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~OWAccesModeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION SuppressRangeAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall SuppressRangeAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~SuppressRangeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION NameAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall NameAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~NameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AlternativeNameAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall AlternativeNameAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~AlternativeNameAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION NamePostfixAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall NamePostfixAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~NamePostfixAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ComponentEditorEntriesDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	bool FIncludeMethods;
	
public:
	__property bool IncludeMethods = {read=FIncludeMethods, nodefault};
	__fastcall ComponentEditorEntriesDesignAttribute(bool AIncludeMethods);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ComponentEditorEntriesDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicComponentEditorEntryDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::System::UnicodeString FMenuItemText;
	bool FInsertFront;
	
public:
	__property  ::System::UnicodeString MenuItemText = {read=FMenuItemText};
	__property bool InsertFront = {read=FInsertFront, nodefault};
	__fastcall TBasicComponentEditorEntryDesignAttribute(const  ::System::UnicodeString AMenuItemText, bool AInsertFront)/* overload */;
	__fastcall TBasicComponentEditorEntryDesignAttribute(const  ::System::UnicodeString AMenuItemText)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicComponentEditorEntryDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ComponentEditorEntryDesignAttribute : public TBasicComponentEditorEntryDesignAttribute
{
	typedef TBasicComponentEditorEntryDesignAttribute inherited;
	
public:
	/* TBasicComponentEditorEntryDesignAttribute.Create */ inline __fastcall ComponentEditorEntryDesignAttribute(const  ::System::UnicodeString AMenuItemText, bool AInsertFront)/* overload */ : TBasicComponentEditorEntryDesignAttribute(AMenuItemText, AInsertFront) { }
	/* TBasicComponentEditorEntryDesignAttribute.Create */ inline __fastcall ComponentEditorEntryDesignAttribute(const  ::System::UnicodeString AMenuItemText)/* overload */ : TBasicComponentEditorEntryDesignAttribute(AMenuItemText) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ComponentEditorEntryDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ComponentEditorEntryDesignConfirmationAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::System::UnicodeString FQuery;
	bool FByDefault;
	
public:
	__property  ::System::UnicodeString Query = {read=FQuery};
	__property bool ByDefault = {read=FByDefault, nodefault};
	__fastcall ComponentEditorEntryDesignConfirmationAttribute(const  ::System::UnicodeString AQuery, bool AByDefault);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ComponentEditorEntryDesignConfirmationAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ComponentEditorEntryFullRefreshDesignAttribute : public ComponentEditorEntryDesignAttribute
{
	typedef ComponentEditorEntryDesignAttribute inherited;
	
public:
	/* TBasicComponentEditorEntryDesignAttribute.Create */ inline __fastcall ComponentEditorEntryFullRefreshDesignAttribute(const  ::System::UnicodeString AMenuItemText, bool AInsertFront)/* overload */ : ComponentEditorEntryDesignAttribute(AMenuItemText, AInsertFront) { }
	/* TBasicComponentEditorEntryDesignAttribute.Create */ inline __fastcall ComponentEditorEntryFullRefreshDesignAttribute(const  ::System::UnicodeString AMenuItemText)/* overload */ : ComponentEditorEntryDesignAttribute(AMenuItemText) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~ComponentEditorEntryFullRefreshDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION FileNameDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::System::UnicodeString FFilter;
	 ::System::UnicodeString FDefaultExt;
	
public:
	__property  ::System::UnicodeString Filter = {read=FFilter};
	__property  ::System::UnicodeString DefaultExt = {read=FDefaultExt};
	__fastcall FileNameDesignAttribute(const  ::System::UnicodeString AFilter, const  ::System::UnicodeString ADefaultExt);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~FileNameDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyListDialogDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	 ::System::UnicodeString FCaption;
	
public:
	__property  ::System::UnicodeString Caption = {read=FCaption};
	__fastcall PropertyListDialogDesignAttribute(const  ::System::UnicodeString ACaption);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~PropertyListDialogDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CollectionItemAssociationAttribute : public TBasicClassAttribute
{
	typedef TBasicClassAttribute inherited;
	
public:
	/* TBasicClassAttribute.Create */ inline __fastcall CollectionItemAssociationAttribute( ::System::TClass AValue)/* overload */ : TBasicClassAttribute(AValue) { }
	/* TBasicClassAttribute.Create */ inline __fastcall CollectionItemAssociationAttribute(const _di_IAtttributeParameterInfo AValue)/* overload */ : TBasicClassAttribute(AValue) { }
	/* TBasicClassAttribute.Destroy */ inline __fastcall virtual ~CollectionItemAssociationAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DesignAssociationAttribute : public TBasicClassAttribute
{
	typedef TBasicClassAttribute inherited;
	
public:
	/* TBasicClassAttribute.Create */ inline __fastcall DesignAssociationAttribute( ::System::TClass AValue)/* overload */ : TBasicClassAttribute(AValue) { }
	/* TBasicClassAttribute.Create */ inline __fastcall DesignAssociationAttribute(const _di_IAtttributeParameterInfo AValue)/* overload */ : TBasicClassAttribute(AValue) { }
	/* TBasicClassAttribute.Destroy */ inline __fastcall virtual ~DesignAssociationAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyListDesignAssociationAttribute : public DesignAssociationAttribute
{
	typedef DesignAssociationAttribute inherited;
	
public:
	/* TBasicClassAttribute.Create */ inline __fastcall PropertyListDesignAssociationAttribute( ::System::TClass AValue)/* overload */ : DesignAssociationAttribute(AValue) { }
	/* TBasicClassAttribute.Create */ inline __fastcall PropertyListDesignAssociationAttribute(const _di_IAtttributeParameterInfo AValue)/* overload */ : DesignAssociationAttribute(AValue) { }
	/* TBasicClassAttribute.Destroy */ inline __fastcall virtual ~PropertyListDesignAssociationAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DefaultAssociationAttribute : public TBasicClassAttribute
{
	typedef TBasicClassAttribute inherited;
	
public:
	/* TBasicClassAttribute.Create */ inline __fastcall DefaultAssociationAttribute( ::System::TClass AValue)/* overload */ : TBasicClassAttribute(AValue) { }
	/* TBasicClassAttribute.Create */ inline __fastcall DefaultAssociationAttribute(const _di_IAtttributeParameterInfo AValue)/* overload */ : TBasicClassAttribute(AValue) { }
	/* TBasicClassAttribute.Destroy */ inline __fastcall virtual ~DefaultAssociationAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyListDesignValueAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
protected:
	bool FAddAfter;
	
public:
	__property bool AddAfter = {read=FAddAfter, nodefault};
	__fastcall PropertyListDesignValueAttribute(const  ::System::UnicodeString AValue, bool AAddAfter);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~PropertyListDesignValueAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertySortListDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall PropertySortListDesignAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~PropertySortListDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PropertyFixedListDesignAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall PropertyFixedListDesignAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~PropertyFixedListDesignAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION RequiresDynamicInplaceRefreshAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall RequiresDynamicInplaceRefreshAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~RequiresDynamicInplaceRefreshAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ComponentEditorAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall ComponentEditorAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ComponentEditorAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION StringDesignAccessAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall StringDesignAccessAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~StringDesignAccessAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION NotExpandableClassAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall NotExpandableClassAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~NotExpandableClassAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVLCommonFilterHostedPreviewAttribute : public ComponentEditorAttribute
{
	typedef ComponentEditorAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TVLCommonFilterHostedPreviewAttribute() : ComponentEditorAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TVLCommonFilterHostedPreviewAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOWInplaceNonMovableAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TOWInplaceNonMovableAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOWInplaceNonMovableAttribute() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION DefaultSingleAttribute : public  ::System::Classes::DefaultAttribute
{
	typedef  ::System::Classes::DefaultAttribute inherited;
	
public:
	__fastcall DefaultSingleAttribute(const float ADefaultValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DefaultSingleAttribute() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TOWResizePropertyAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall TOWResizePropertyAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOWResizePropertyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION NoAutoManageAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall NoAutoManageAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~NoAutoManageAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoManageAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
protected:
	bool FAutoCreate;
	_di_IAtttributeParameterInfo FCreateClass;
	
public:
	__property bool AutoCreate = {read=FAutoCreate, nodefault};
	__property _di_IAtttributeParameterInfo CreateClass = {read=FCreateClass};
	
protected:
	bool __fastcall Cleanup(NativeInt AHInstance);
	
public:
	__fastcall AutoManageAttribute()/* overload */;
	__fastcall AutoManageAttribute( ::System::TClass AClass)/* overload */;
	__fastcall AutoManageAttribute(const _di_IAtttributeParameterInfo AClass)/* overload */;
	__fastcall virtual ~AutoManageAttribute();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoManageNotifyAttribute : public AutoManageAttribute
{
	typedef AutoManageAttribute inherited;
	
public:
	/* AutoManageAttribute.Create */ inline __fastcall AutoManageNotifyAttribute()/* overload */ : AutoManageAttribute() { }
	/* AutoManageAttribute.Create */ inline __fastcall AutoManageNotifyAttribute( ::System::TClass AClass)/* overload */ : AutoManageAttribute(AClass) { }
	/* AutoManageAttribute.Create */ inline __fastcall AutoManageNotifyAttribute(const _di_IAtttributeParameterInfo AClass)/* overload */ : AutoManageAttribute(AClass) { }
	/* AutoManageAttribute.Destroy */ inline __fastcall virtual ~AutoManageNotifyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AutoDestroyAttribute : public AutoManageAttribute
{
	typedef AutoManageAttribute inherited;
	
public:
	__fastcall AutoDestroyAttribute();
public:
	/* AutoManageAttribute.Destroy */ inline __fastcall virtual ~AutoDestroyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CreateTypeAttribute : public TBasicTypeInfoAttribute
{
	typedef TBasicTypeInfoAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_TypInfo_PTypeInfo>.Create */ inline __fastcall CreateTypeAttribute(const  ::System::Typinfo::PTypeInfo AValue) : TBasicTypeInfoAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~CreateTypeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION SerializeConstructableAttribute : public TBasicBooleanAttribute
{
	typedef TBasicBooleanAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Boolean>.Create */ inline __fastcall SerializeConstructableAttribute(const bool AValue) : TBasicBooleanAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~SerializeConstructableAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CodeComponentAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall CodeComponentAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CodeComponentAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ExcludeSystemColorsAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall ExcludeSystemColorsAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ExcludeSystemColorsAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION HideEmptyAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall HideEmptyAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~HideEmptyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DelphiPersistancyTypeAttribute : public TBasicValueTypeAttribute
{
	typedef TBasicValueTypeAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_Classes_TValueType>.Create */ inline __fastcall DelphiPersistancyTypeAttribute(const  ::System::Classes::TValueType AValue) : TBasicValueTypeAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DelphiPersistancyTypeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION OWStudioChannelTypeAttribute : public TBasicStringAttribute
{
	typedef TBasicStringAttribute inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_string>.Create */ inline __fastcall OWStudioChannelTypeAttribute(const  ::System::UnicodeString AValue) : TBasicStringAttribute(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~OWStudioChannelTypeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicModeAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TBasicModeAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicModeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DesignTimeOnlyAttribute : public TBasicModeAttribute
{
	typedef TBasicModeAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DesignTimeOnlyAttribute() : TBasicModeAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DesignTimeOnlyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION DebugTimeOnlyAttribute : public TBasicModeAttribute
{
	typedef TBasicModeAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall DebugTimeOnlyAttribute() : TBasicModeAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~DebugTimeOnlyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION AnyRuntimeTimeOnlyAttribute : public TBasicModeAttribute
{
	typedef TBasicModeAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall AnyRuntimeTimeOnlyAttribute() : TBasicModeAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~AnyRuntimeTimeOnlyAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION PreviewSizeAttribute : public IntegerSizeAttribute
{
	typedef IntegerSizeAttribute inherited;
	
public:
	/* {Mitov_Attributes}TSizeAttribute<System_Integer>.Create */ inline __fastcall PreviewSizeAttribute(int AWidth, int AHeight) : IntegerSizeAttribute(AWidth, AHeight) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~PreviewSizeAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION InplacePreviewFormAttribute : public TTypedAttribute__1< ::System::TClass>
{
	typedef TTypedAttribute__1< ::System::TClass> inherited;
	
public:
	/* {Mitov_Attributes}TTypedAttribute<System_TClass>.Create */ inline __fastcall InplacePreviewFormAttribute(const  ::System::TClass AValue) : TTypedAttribute__1< ::System::TClass>(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~InplacePreviewFormAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicCustomIconAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetIcon() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TBasicCustomIconAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBasicCustomIconAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CustomStaticIconAttribute : public TBasicCustomIconAttribute
{
	typedef TBasicCustomIconAttribute inherited;
	
protected:
	 ::Igdiplus::_di_IGPBitmap FIcon;
	
public:
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetIcon();
	__fastcall CustomStaticIconAttribute(const  ::Igdiplus::_di_IGPBitmap AIcon);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~CustomStaticIconAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CustomDynamicIconAttribute : public TBasicCustomIconAttribute
{
	typedef TBasicCustomIconAttribute inherited;
	
protected:
	 ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::Igdiplus::_di_IGPBitmap> > FGetIcon;
	
public:
	virtual  ::Igdiplus::_di_IGPBitmap __fastcall GetIcon();
	__fastcall CustomDynamicIconAttribute(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::Igdiplus::_di_IGPBitmap> > AGetIcon);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~CustomDynamicIconAttribute() { }
	
};

#pragma pack(pop)

typedef bool __fastcall (__closure *TCleanupClassAttributesFunction)(NativeInt AHInstance);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RegisterCleanupClassAttributesList(const TCleanupClassAttributesFunction AItem);
extern DELPHI_PACKAGE void __fastcall UnregisterCleanupClassAttributesList(const TCleanupClassAttributesFunction AItem);
}	/* namespace Attributes */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_AttributesHPP

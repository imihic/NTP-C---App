// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Mitov.TypeInfo.pas' rev: 35.00 (Windows)
// This file is modified to improve C++ Builder compatibility.

#ifndef Mitov_TypeinfoHPP
#define Mitov_TypeinfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Rtti.hpp>
#include <System.TypInfo.hpp>
#include <System.Types.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.SysUtils.hpp>
#include <System.StrUtils.hpp>
#include <System.Classes.hpp>
#include <Mitov.Containers.List.hpp>
#include <Mitov.Containers.Dictionary.hpp>
#include <Mitov.Attributes.hpp>
#include <Mitov.Containers.Common.hpp>

//-- user supplied -----------------------------------------------------------
namespace Mitov
{
namespace Typeinfo
{
class TMemberAttributeAccess;
}	/* namespace Typeinfo */
}	/* namespace Mitov */

namespace Mitov
{
namespace Typeinfo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ExtendableTypeInfoAttribute;
class DELPHICLASS ExtendTypeInfoAttribute;
__interface DELPHIINTERFACE IObjectInstanceNotify;
typedef  ::System::DelphiInterface<IObjectInstanceNotify> _di_IObjectInstanceNotify;
__interface DELPHIINTERFACE IObjectInstance;
typedef  ::System::DelphiInterface<IObjectInstance> _di_IObjectInstance;
__interface DELPHIINTERFACE IDynamicTypeInfoInstance;
typedef  ::System::DelphiInterface<IDynamicTypeInfoInstance> _di_IDynamicTypeInfoInstance;
__interface DELPHIINTERFACE IDynamicTypeInfo;
typedef  ::System::DelphiInterface<IDynamicTypeInfo> _di_IDynamicTypeInfo;
__interface DELPHIINTERFACE IDynamicMemberOwner;
typedef  ::System::DelphiInterface<IDynamicMemberOwner> _di_IDynamicMemberOwner;
__interface DELPHIINTERFACE IDynamicInheritedObjectInstance;
typedef  ::System::DelphiInterface<IDynamicInheritedObjectInstance> _di_IDynamicInheritedObjectInstance;
__interface DELPHIINTERFACE IDynamicRealObjectInstance;
typedef  ::System::DelphiInterface<IDynamicRealObjectInstance> _di_IDynamicRealObjectInstance;
__interface DELPHIINTERFACE IAttributeAccess;
typedef  ::System::DelphiInterface<IAttributeAccess> _di_IAttributeAccess;
class DELPHICLASS TAttributeAccess;
__interface DELPHIINTERFACE IObjectInfo;
typedef  ::System::DelphiInterface<IObjectInfo> _di_IObjectInfo;
__interface DELPHIINTERFACE IAttributesInfo;
typedef  ::System::DelphiInterface<IAttributesInfo> _di_IAttributesInfo;
__interface DELPHIINTERFACE INamedObjectInfo;
typedef  ::System::DelphiInterface<INamedObjectInfo> _di_INamedObjectInfo;
class DELPHICLASS TTypeAttributeAccess;
__interface DELPHIINTERFACE TTypeInfoFilterFunc;
typedef  ::System::DelphiInterface<TTypeInfoFilterFunc> _di_TTypeInfoFilterFunc;
__interface DELPHIINTERFACE TTypeInfoTypeFilterFunc;
typedef  ::System::DelphiInterface<TTypeInfoTypeFilterFunc> _di_TTypeInfoTypeFilterFunc;
__interface DELPHIINTERFACE ITypeInfo;
typedef  ::System::DelphiInterface<ITypeInfo> _di_ITypeInfo;
__interface DELPHIINTERFACE ITypesInfo;
typedef  ::System::DelphiInterface<ITypesInfo> _di_ITypesInfo;
__interface DELPHIINTERFACE IUnitInfo;
typedef  ::System::DelphiInterface<IUnitInfo> _di_IUnitInfo;
__interface DELPHIINTERFACE IUnitsInfo;
typedef  ::System::DelphiInterface<IUnitsInfo> _di_IUnitsInfo;
__interface DELPHIINTERFACE IPackageInfo;
typedef  ::System::DelphiInterface<IPackageInfo> _di_IPackageInfo;
__interface DELPHIINTERFACE IPackagesInfo;
typedef  ::System::DelphiInterface<IPackagesInfo> _di_IPackagesInfo;
__interface DELPHIINTERFACE ITypedObjectInfo;
typedef  ::System::DelphiInterface<ITypedObjectInfo> _di_ITypedObjectInfo;
__interface DELPHIINTERFACE IMemberInfo;
typedef  ::System::DelphiInterface<IMemberInfo> _di_IMemberInfo;
__interface DELPHIINTERFACE IStructuredTypeInfo;
typedef  ::System::DelphiInterface<IStructuredTypeInfo> _di_IStructuredTypeInfo;
__interface DELPHIINTERFACE IRecordTypeInfo;
typedef  ::System::DelphiInterface<IRecordTypeInfo> _di_IRecordTypeInfo;
__interface DELPHIINTERFACE IValueMemberInfo;
typedef  ::System::DelphiInterface<IValueMemberInfo> _di_IValueMemberInfo;
__interface DELPHIINTERFACE IFieldInfo;
typedef  ::System::DelphiInterface<IFieldInfo> _di_IFieldInfo;
__interface DELPHIINTERFACE IFieldsInfo;
typedef  ::System::DelphiInterface<IFieldsInfo> _di_IFieldsInfo;
class DELPHICLASS TDynamicFieldsInfo;
__interface DELPHIINTERFACE ISinglePropertyInfo;
typedef  ::System::DelphiInterface<ISinglePropertyInfo> _di_ISinglePropertyInfo;
__interface DELPHIINTERFACE IValueLimitsInfo;
typedef  ::System::DelphiInterface<IValueLimitsInfo> _di_IValueLimitsInfo;
__interface DELPHIINTERFACE IPropertyInfo;
typedef  ::System::DelphiInterface<IPropertyInfo> _di_IPropertyInfo;
__interface DELPHIINTERFACE IIndexedPropertyInfo;
typedef  ::System::DelphiInterface<IIndexedPropertyInfo> _di_IIndexedPropertyInfo;
__interface DELPHIINTERFACE IMembersInfo;
typedef  ::System::DelphiInterface<IMembersInfo> _di_IMembersInfo;
class DELPHICLASS TDynamicMembersInfo;
__interface DELPHIINTERFACE ISinglePropertiesInfo;
typedef  ::System::DelphiInterface<ISinglePropertiesInfo> _di_ISinglePropertiesInfo;
class DELPHICLASS TDynamicSinglePropertiesInfo;
__interface DELPHIINTERFACE IIndexedPropertiesInfo;
typedef  ::System::DelphiInterface<IIndexedPropertiesInfo> _di_IIndexedPropertiesInfo;
class DELPHICLASS TDynamicIndexedPropertiesInfo;
__interface DELPHIINTERFACE IPropertiesInfo;
typedef  ::System::DelphiInterface<IPropertiesInfo> _di_IPropertiesInfo;
class DELPHICLASS TDynamicPropertiesInfo;
__interface DELPHIINTERFACE IRecursivePropertyInfo;
typedef  ::System::DelphiInterface<IRecursivePropertyInfo> _di_IRecursivePropertyInfo;
class DELPHICLASS TRecursivePropertyInfo;
__interface DELPHIINTERFACE ISinglePropertiesRecursiveInfo;
typedef  ::System::DelphiInterface<ISinglePropertiesRecursiveInfo> _di_ISinglePropertiesRecursiveInfo;
class DELPHICLASS TSinglePropertiesRecursiveInfo;
__interface DELPHIINTERFACE IParameterInfo;
typedef  ::System::DelphiInterface<IParameterInfo> _di_IParameterInfo;
__interface DELPHIINTERFACE IParametersInfo;
typedef  ::System::DelphiInterface<IParametersInfo> _di_IParametersInfo;
__interface DELPHIINTERFACE IInvokableInfo;
typedef  ::System::DelphiInterface<IInvokableInfo> _di_IInvokableInfo;
__interface DELPHIINTERFACE IMethodInfo;
typedef  ::System::DelphiInterface<IMethodInfo> _di_IMethodInfo;
__interface DELPHIINTERFACE IMethodsInfo;
typedef  ::System::DelphiInterface<IMethodsInfo> _di_IMethodsInfo;
class DELPHICLASS TDynamicMethodsInfo;
__interface DELPHIINTERFACE IUnitDeclaredTypeInfo;
typedef  ::System::DelphiInterface<IUnitDeclaredTypeInfo> _di_IUnitDeclaredTypeInfo;
__interface DELPHIINTERFACE IClassTypeInfo;
typedef  ::System::DelphiInterface<IClassTypeInfo> _di_IClassTypeInfo;
__interface DELPHIINTERFACE IInterfaceTypeInfo;
typedef  ::System::DelphiInterface<IInterfaceTypeInfo> _di_IInterfaceTypeInfo;
__interface DELPHIINTERFACE IInterfacesInfo;
typedef  ::System::DelphiInterface<IInterfacesInfo> _di_IInterfacesInfo;
class DELPHICLASS TDynamicInterfacesInfo;
__interface DELPHIINTERFACE IOrdinalTypeInfo;
typedef  ::System::DelphiInterface<IOrdinalTypeInfo> _di_IOrdinalTypeInfo;
__interface DELPHIINTERFACE IInt64TypeInfo;
typedef  ::System::DelphiInterface<IInt64TypeInfo> _di_IInt64TypeInfo;
__interface DELPHIINTERFACE IInvokableTypeInfo;
typedef  ::System::DelphiInterface<IInvokableTypeInfo> _di_IInvokableTypeInfo;
__interface DELPHIINTERFACE IMethodTypeInfo;
typedef  ::System::DelphiInterface<IMethodTypeInfo> _di_IMethodTypeInfo;
__interface DELPHIINTERFACE IProcedureTypeInfo;
typedef  ::System::DelphiInterface<IProcedureTypeInfo> _di_IProcedureTypeInfo;
__interface DELPHIINTERFACE IClassRefTypeInfo;
typedef  ::System::DelphiInterface<IClassRefTypeInfo> _di_IClassRefTypeInfo;
__interface DELPHIINTERFACE IEnumerationValueInfo;
typedef  ::System::DelphiInterface<IEnumerationValueInfo> _di_IEnumerationValueInfo;
__interface DELPHIINTERFACE IEnumerationValuesInfo;
typedef  ::System::DelphiInterface<IEnumerationValuesInfo> _di_IEnumerationValuesInfo;
__interface DELPHIINTERFACE IEnumerationTypeInfo;
typedef  ::System::DelphiInterface<IEnumerationTypeInfo> _di_IEnumerationTypeInfo;
__interface DELPHIINTERFACE ISetTypeInfo;
typedef  ::System::DelphiInterface<ISetTypeInfo> _di_ISetTypeInfo;
__interface DELPHIINTERFACE IStringTypeInfo;
typedef  ::System::DelphiInterface<IStringTypeInfo> _di_IStringTypeInfo;
__interface DELPHIINTERFACE IAnsiStringTypeInfo;
typedef  ::System::DelphiInterface<IAnsiStringTypeInfo> _di_IAnsiStringTypeInfo;
__interface DELPHIINTERFACE IFloatTypeInfo;
typedef  ::System::DelphiInterface<IFloatTypeInfo> _di_IFloatTypeInfo;
__interface DELPHIINTERFACE IArrayTypeInfo;
typedef  ::System::DelphiInterface<IArrayTypeInfo> _di_IArrayTypeInfo;
__interface DELPHIINTERFACE IDynamicArrayTypeInfo;
typedef  ::System::DelphiInterface<IDynamicArrayTypeInfo> _di_IDynamicArrayTypeInfo;
__interface DELPHIINTERFACE IPointerTypeInfo;
typedef  ::System::DelphiInterface<IPointerTypeInfo> _di_IPointerTypeInfo;
struct TRttiInfo;
struct TValueHelper /* Helper for record ' ::System::Rtti::TValue' */;
class DELPHICLASS TVirtualObjectInfo;
class DELPHICLASS TObjectInfo;
class DELPHICLASS TNamedObjectInfo;
class DELPHICLASS TTypedObjectInfo;
class DELPHICLASS TMemberInfo;
class DELPHICLASS TValueMemberInfo;
class DELPHICLASS TAttributesInfo;
class DELPHICLASS TEnumerationValuesInfo;
class DELPHICLASS TDynamicObjectInfo;
class DELPHICLASS TDynamicNamedObjectInfo;
class DELPHICLASS TDynamicTypedObjectInfo;
class DELPHICLASS TDynamicMemberInfo;
class DELPHICLASS TDynamicPropertyInfo;
class DELPHICLASS TDynamicSinglePropertyInfo;
class DELPHICLASS TDynamicIndexedPropertyInfo;
class DELPHICLASS TDynamicTypeInfo;
class DELPHICLASS TDynamicClassTypeInfo;
struct TRttiObjectHelper /* Helper for class ' ::System::TObject*' */;
struct TTypeInfoHelper /* Helper for record ' ::System::Typinfo::TTypeInfo' */;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION ExtendableTypeInfoAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall ExtendableTypeInfoAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ExtendableTypeInfoAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ExtendTypeInfoAttribute : public  ::System::TCustomAttribute
{
	typedef  ::System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall ExtendTypeInfoAttribute() :  ::System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~ExtendTypeInfoAttribute() { }
	
};

#pragma pack(pop)

typedef  ::System::Set< ::System::Typinfo::TMemberVisibility,  ::System::Typinfo::TMemberVisibility::mvPrivate,  ::System::Typinfo::TMemberVisibility::mvPublished> TMemberVisibilities;

__interface  INTERFACE_UUID("{8536DD62-EB45-4469-B931-68734462AC1B}") IObjectInstanceNotify  : public  ::System::IInterface 
{
	virtual void __fastcall ObjectDestroyed( ::System::TObject* AInstance) = 0 ;
};

__interface  INTERFACE_UUID("{D7185F13-DA54-43AD-B370-C1A445CB7BDB}") IObjectInstance  : public  ::System::IInterface 
{
	virtual  ::System::TObject* __fastcall GetObjectInstance() = 0 ;
	virtual void __fastcall SetOnGetInstance(const  ::System::DelphiInterface< ::System::Sysutils::TFunc__1< ::System::TObject*> > AOnGetInstance) = 0 ;
	virtual void __fastcall RegisterNotify(const _di_IObjectInstanceNotify ANotify) = 0 ;
	virtual void __fastcall UnregisterNotify(const _di_IObjectInstanceNotify ANotify) = 0 ;
};

__interface  INTERFACE_UUID("{DA493A24-60AC-4B8C-B4BD-0FB030A21A24}") IDynamicTypeInfoInstance  : public  ::System::IInterface 
{
	virtual void __fastcall SetTypeInfoInstance( ::System::TObject* AInstance) = 0 ;
	virtual void __fastcall InvalidateMembers() = 0 ;
};

__interface  INTERFACE_UUID("{639CFB07-C756-483B-AEA6-450538D4AAC9}") IDynamicTypeInfo  : public  ::System::IInterface 
{
	virtual _di_ITypeInfo __fastcall GetTypeInfo(const _di_ITypeInfo ATypeInfo) = 0 ;
	virtual void __fastcall Populate( ::System::TObject* AOwnerObject, const _di_IValueMemberInfo AMember,  ::System::TObject* AObject,  ::System::Classes::TPersistent* ARootInstance) = 0 ;
};

__interface  INTERFACE_UUID("{19961EF5-CDA1-4D71-8EFE-FC368AD3493C}") IDynamicMemberOwner  : public  ::System::IInterface 
{
	virtual void __fastcall RemoveMemberOwnerReference() = 0 ;
};

__interface  INTERFACE_UUID("{6FFDD2EB-8C04-40E8-A06E-CC6627706291}") IDynamicInheritedObjectInstance  : public  ::System::IInterface 
{
	virtual  ::System::TObject* __fastcall GetBaseObject() = 0 ;
};

__interface  INTERFACE_UUID("{7573EC84-E4B6-488E-B395-0A2A87C1BDFB}") IDynamicRealObjectInstance  : public  ::System::IInterface 
{
	virtual  ::System::TObject* __fastcall GetRealInstance() = 0 ;
};

__interface  INTERFACE_UUID("{40DB4691-FB53-4933-B364-E76C030035B8}") IAttributeAccess  : public  ::System::IInterface 
{
	virtual TAttributeAccess* __fastcall Access() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAttributeAccess : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	 ::System::TObject* FInstance;
	TAttributeAccess* __fastcall Access();
	
public:
	template<typename T> bool __fastcall Get(/* out */ T &AResult)/* overload */;
	template<typename T> bool __fastcall ForLast(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T>  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<T> > __fastcall GetAll()/* overload */;
	__fastcall TAttributeAccess( ::System::TObject* AInstance);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAttributeAccess() { }
	
private:
	void *__IAttributeAccess;	// IAttributeAccess 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {40DB4691-FB53-4933-B364-E76C030035B8}
	operator _di_IAttributeAccess()
	{
		_di_IAttributeAccess intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAttributeAccess*(void) { return (IAttributeAccess*)&__IAttributeAccess; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9AC90D20-CAC5-43A8-B413-C2089071CC42}") IObjectInfo  : public  ::Mitov::Attributes::IAtttributeParameterInfo 
{
	virtual  ::System::Rtti::TRttiObject* __fastcall GetRTTIHandle() = 0 ;
	virtual _di_IPackageInfo __fastcall GetPackage() = 0 ;
	virtual _di_IAttributesInfo __fastcall GetDeclaredCustomAttributes() = 0 ;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes() = 0 /* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass) = 0 /* overload */;
	virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult) = 0 /* overload */;
	virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass) = 0 /* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass) = 0 /* overload */;
	virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult) = 0 /* overload */;
	virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass) = 0 /* overload */;
	virtual TAttributeAccess* __fastcall GetAccessAttributes() = 0 ;
	__property  ::System::Rtti::TRttiObject* RTTIHandle = {read=GetRTTIHandle};
	__property _di_IPackageInfo Package = {read=GetPackage};
	__property _di_IAttributesInfo DeclaredCustomAttributes = {read=GetDeclaredCustomAttributes};
	__property _di_IAttributesInfo CustomAttributes = {read=GetCustomAttributes};
	__property TAttributeAccess* AccessAttributes = {read=GetAccessAttributes};
};

__interface  INTERFACE_UUID("{C71B0CBA-0CB7-43A7-8250-AD9BCC09A887}") IAttributesInfo  : public  ::Mitov::Containers::List::IArrayList__1< ::System::TCustomAttribute*> 
{
	
};

__interface  INTERFACE_UUID("{43DD5E62-82AD-45CC-9655-BE9DE3CFF93C}") INamedObjectInfo  : public IObjectInfo 
{
	virtual  ::System::UnicodeString __fastcall GetName() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetSaveName() = 0 ;
	__property  ::System::UnicodeString Name = {read=GetName};
	__property  ::System::UnicodeString DisplayName = {read=GetDisplayName};
	__property  ::System::UnicodeString SaveName = {read=GetSaveName};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTypeAttributeAccess : public TAttributeAccess
{
	typedef TAttributeAccess inherited;
	
public:
	template<typename T> HIDESBASE bool __fastcall Get(/* out */ T &AResult)/* overload */;
	template<typename T> HIDESBASE bool __fastcall ForLast(const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T> HIDESBASE  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<T> > __fastcall GetAll()/* overload */;
	template<typename T> HIDESBASE bool __fastcall Get(bool AInherit, /* out */ T &AResult)/* overload */;
	template<typename T> HIDESBASE bool __fastcall ForLast(bool AInherit, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T> HIDESBASE  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<T> > __fastcall GetAll(bool AInherit)/* overload */;
public:
	/* TAttributeAccess.Create */ inline __fastcall TTypeAttributeAccess( ::System::TObject* AInstance) : TAttributeAccess(AInstance) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTypeAttributeAccess() { }
	
};

#pragma pack(pop)

__interface TTypeInfoFilterFunc  : public  ::System::IInterface 
{
	virtual bool __fastcall Invoke(void * AInstance, const _di_IPropertyInfo AProperty, bool &AProcessSubproperties) = 0 ;
};

__interface TTypeInfoTypeFilterFunc  : public  ::System::IInterface 
{
	virtual bool __fastcall Invoke(const _di_ITypeInfo ATypeInfo, void * AInstance, const _di_IPropertyInfo AProperty, bool &AProcessSubproperties) = 0 ;
};

__interface  INTERFACE_UUID("{0C8ACD76-B2BD-4E73-B6AA-D008148941CF}") ITypeInfo  : public INamedObjectInfo 
{
	virtual bool __fastcall Equals(const _di_ITypeInfo AOther) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetNamespace() = 0 ;
	virtual  ::System::DynamicArray< ::System::UnicodeString> __fastcall GetNamespacedNames() = 0 ;
	virtual  ::System::Typinfo::PTypeInfo __fastcall GetHandle() = 0 ;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(bool AInherit) = 0 /* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AInherit) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AInherit, /* out */  ::System::TCustomAttribute* &AResult) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AInherit) = 0 /* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass, bool AInherit) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, bool AInherit, /* out */  ::System::TCustomAttribute* &AResult) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass, bool AInherit) = 0 /* overload */;
	virtual TTypeAttributeAccess* __fastcall GetTypeAccessAttributes() = 0 ;
	virtual _di_ITypeInfo __fastcall GetBaseType() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetQualifiedName() = 0 ;
	virtual bool __fastcall GetIsPublic() = 0 ;
	virtual  ::System::TTypeKind __fastcall GetTypeKind() = 0 ;
	virtual int __fastcall GetTypeSize() = 0 ;
	virtual _di_IPropertiesInfo __fastcall GetProperties() = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties() = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties() = 0 /* overload */;
	virtual bool __fastcall GetDefaultIndexProperty(/* out */ _di_IIndexedPropertyInfo &AProperty) = 0 ;
	virtual _di_IFieldsInfo __fastcall GetFields() = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods() = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers() = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::Typinfo::TMethodKind AMethodKind) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance,  ::System::Typinfo::TTypeKinds ATypeKinds, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance,  ::System::TClass AClass, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance,  ::System::TClass const *AClasses, const int AClasses_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities,  ::System::TClass AClass, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >()) = 0 /* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities, const _di_TTypeInfoFilterFunc AFilterFunc) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IPropertyInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_ISinglePropertyInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IIndexedPropertyInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IFieldInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMethodInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMemberInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties() = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties() = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties() = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields() = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods() = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers() = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers( ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers( ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers( ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities,  ::System::TClass AClass) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High) = 0 /* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IPropertyInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_ISinglePropertyInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IIndexedPropertyInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IFieldInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMethodInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMemberInfo,bool> > AFilterFunc) = 0 /* overload */;
	virtual bool __fastcall GetMethod(const  ::System::UnicodeString AName, /* out */ _di_IMethodInfo &AResult) = 0 ;
	virtual bool __fastcall GetSubMethod( ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_IMethodInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >()) = 0 ;
	virtual _di_IMethodsInfo __fastcall GetMethods(const  ::System::UnicodeString AName) = 0 /* overload */;
	virtual bool __fastcall GetField(const  ::System::UnicodeString AName, /* out */ _di_IFieldInfo &AResult) = 0 ;
	virtual bool __fastcall GetProperty(const  ::System::UnicodeString AName, /* out */ _di_IPropertyInfo &AResult) = 0 ;
	virtual bool __fastcall GetSingleProperty(const  ::System::UnicodeString AName, /* out */ _di_ISinglePropertyInfo &AResult) = 0 ;
	virtual bool __fastcall GetSingleSubProperty( ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_ISinglePropertyInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >()) = 0 ;
	virtual bool __fastcall GetIndexedSubProperty( ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_IIndexedPropertyInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >()) = 0 ;
	virtual bool __fastcall GetIndexedProperty(const  ::System::UnicodeString AName, /* out */ _di_IIndexedPropertyInfo &AResult) = 0 ;
	virtual bool __fastcall GetMember(const  ::System::UnicodeString AName, /* out */ _di_IMemberInfo &AResult) = 0 ;
	virtual  ::System::UnicodeString __fastcall GetMethodName(void * AMethod) = 0 ;
	virtual _di_ITypeInfo __fastcall ForMethod(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IMethodInfo> > AProc) = 0 ;
	virtual _di_ITypeInfo __fastcall ForField(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IFieldInfo> > AProc) = 0 ;
	virtual _di_ITypeInfo __fastcall ForProperty(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IPropertyInfo> > AProc) = 0 ;
	virtual _di_ITypeInfo __fastcall ForSingleProperty(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISinglePropertyInfo> > AProc) = 0 ;
	virtual _di_ITypeInfo __fastcall ForSingleSubProperty( ::System::TObject* AInstance, const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2< ::System::TObject*,_di_ISinglePropertyInfo> > AProc) = 0 ;
	virtual _di_ITypeInfo __fastcall ForIndexedProperty(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IIndexedPropertyInfo> > AProc) = 0 ;
	virtual _di_ITypeInfo __fastcall ForMember(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IMemberInfo> > AProc) = 0 ;
	virtual bool __fastcall InheritsFrom(const _di_ITypeInfo AType, bool AIncludeSelf = true) = 0 ;
	virtual int __fastcall InheritanceDepth(const _di_ITypeInfo AType) = 0 ;
	__property TTypeAttributeAccess* AccessAttributes = {read=GetTypeAccessAttributes};
	__property  ::System::Typinfo::PTypeInfo Handle = {read=GetHandle};
	__property  ::System::UnicodeString Namespace = {read=GetNamespace};
	__property  ::System::DynamicArray< ::System::UnicodeString> NamespacedNames = {read=GetNamespacedNames};
	__property _di_ITypeInfo BaseType = {read=GetBaseType};
	__property  ::System::UnicodeString QualifiedName = {read=GetQualifiedName};
	__property bool IsPublic = {read=GetIsPublic};
	__property  ::System::TTypeKind TypeKind = {read=GetTypeKind};
	__property int TypeSize = {read=GetTypeSize};
	__property _di_IPropertiesInfo Properties = {read=GetProperties};
	__property _di_ISinglePropertiesInfo SingleProperties = {read=GetSingleProperties};
	__property _di_IIndexedPropertiesInfo IndexedProperties = {read=GetIndexedProperties};
	__property _di_IFieldsInfo Fields = {read=GetFields};
	__property _di_IMethodsInfo Methods = {read=GetMethods};
	__property _di_IMembersInfo Members = {read=GetMembers};
	__property _di_IPropertiesInfo DeclaredProperties = {read=GetDeclaredProperties};
	__property _di_ISinglePropertiesInfo DeclaredSingleProperties = {read=GetDeclaredSingleProperties};
	__property _di_IIndexedPropertiesInfo DeclaredIndexedProperties = {read=GetDeclaredIndexedProperties};
	__property _di_IFieldsInfo DeclaredFields = {read=GetDeclaredFields};
	__property _di_IMethodsInfo DeclaredMethods = {read=GetDeclaredMethods};
	__property _di_IMembersInfo DeclaredMembers = {read=GetDeclaredMembers};
};

__interface  INTERFACE_UUID("{4AEE3BF0-7F17-43EC-9874-6127E8F671D0}") ITypesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_ITypeInfo> 
{
	
};

__interface  INTERFACE_UUID("{EBFDAFDE-FF58-4F86-832B-1B7683DAA1EE}") IUnitInfo  : public INamedObjectInfo 
{
	virtual _di_ITypesInfo __fastcall GetTypes() = 0 ;
	__property _di_ITypesInfo Types = {read=GetTypes};
};

__interface  INTERFACE_UUID("{25A8013E-58FE-4F4E-B1DA-2701CC592FAF}") IUnitsInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IUnitInfo> 
{
	
};

__interface  INTERFACE_UUID("{B83763EC-F327-40A3-9CC8-3478334E06B9}") IPackageInfo  : public INamedObjectInfo 
{
	virtual NativeUInt __fastcall GetHandle() = 0 ;
	virtual void * __fastcall GetBaseAddress() = 0 ;
	virtual _di_ITypesInfo __fastcall GetTypes() = 0 ;
	virtual _di_IUnitsInfo __fastcall GetUnits() = 0 ;
	virtual bool __fastcall FindType(const  ::System::UnicodeString AQualifiedName, /* out */ _di_ITypeInfo &AType) = 0 ;
	virtual _di_IPackageInfo __fastcall ForType(const  ::System::UnicodeString AQualifiedName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ITypeInfo> > AProc) = 0 ;
	__property NativeUInt Handle = {read=GetHandle};
	__property void * BaseAddress = {read=GetBaseAddress};
	__property _di_ITypesInfo Types = {read=GetTypes};
	__property _di_IUnitsInfo Units = {read=GetUnits};
};

__interface  INTERFACE_UUID("{1E3D0C2F-1201-4E21-B238-D148E7AF55FC}") IPackagesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IPackageInfo> 
{
	
};

__interface  INTERFACE_UUID("{8C119E30-F9D1-4900-A003-243769A01F4E}") ITypedObjectInfo  : public INamedObjectInfo 
{
	virtual _di_ITypeInfo __fastcall GetTypeInfo() = 0 ;
	__property _di_ITypeInfo TypeInfo = {read=GetTypeInfo};
};

__interface  INTERFACE_UUID("{9E0533F8-0956-4F11-88FD-99A9DD9A3007}") IMemberInfo  : public ITypedObjectInfo 
{
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(bool AIncludeType) = 0 /* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType) = 0 /* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass, bool AIncludeType) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType, /* out */  ::System::TCustomAttribute* &AResult) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, bool AIncludeType, /* out */  ::System::TCustomAttribute* &AResult) = 0 /* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass, bool AIncludeType) = 0 /* overload */;
	virtual TMemberAttributeAccess* __fastcall GetMemberAccessAttributes() = 0 ;
	virtual  ::System::Typinfo::TMemberVisibility __fastcall GetVisibility() = 0 ;
	__property  ::System::Typinfo::TMemberVisibility Visibility = {read=GetVisibility};
	__property TMemberAttributeAccess* AccessAttributes = {read=GetMemberAccessAttributes};
};

__interface  INTERFACE_UUID("{628C155C-5DB4-46F6-AB09-FCB17ECBF590}") IStructuredTypeInfo  : public ITypeInfo 
{
	
};

__interface  INTERFACE_UUID("{EA84CEA1-1076-4323-9A98-729B33EFF97B}") IRecordTypeInfo  : public IStructuredTypeInfo 
{
	
};

__interface  INTERFACE_UUID("{4AC1B21D-3101-48E8-B0A2-F161963DE59A}") IValueMemberInfo  : public IMemberInfo 
{
	virtual  ::System::Rtti::TValue __fastcall GetDefault(void * AInstance) = 0 ;
	virtual bool __fastcall GetHasDefault() = 0 ;
	virtual bool __fastcall GetIsDefault( ::System::TObject* AInstance, bool AIncludeStored = true) = 0 ;
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AInstance) = 0 ;
	virtual void __fastcall SetValue(void * AInstance, const  ::System::Rtti::TValue &AValue) = 0 ;
	virtual void __fastcall SetFromString(void * AInstance, const  ::System::UnicodeString AValue) = 0 ;
	__property  ::System::Rtti::TValue Default[void * AInstance] = {read=GetDefault};
	__property bool HasDefault = {read=GetHasDefault};
	__property  ::System::Rtti::TValue Value[void * AInstance] = {read=GetValue, write=SetValue};
};

__interface  INTERFACE_UUID("{89F370C6-526A-48FC-B70E-874B6BE9D537}") IFieldInfo  : public IValueMemberInfo 
{
	virtual int __fastcall GetOffset() = 0 ;
	__property int Offset = {read=GetOffset};
};

__interface  INTERFACE_UUID("{D536EE6B-AD67-456A-B121-5D18A39894C4}") IFieldsInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IFieldInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicFieldsInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IFieldInfo>.Create */ inline __fastcall TDynamicFieldsInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IFieldInfo>.CreateEnumerator */ inline __fastcall TDynamicFieldsInfo( ::System::Generics::Collections::TEnumerator__1<_di_IFieldInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IFieldInfo>.CreateEnumerator */ inline __fastcall TDynamicFieldsInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IFieldInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IFieldInfo>.CreateCopy */ inline __fastcall TDynamicFieldsInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IFieldInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IFieldInfo>.CreateArray */ inline __fastcall TDynamicFieldsInfo(const _di_IFieldInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IFieldInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IFieldInfo>.Destroy */ inline __fastcall virtual ~TDynamicFieldsInfo() { }
	
private:
	void *__IFieldsInfo;	// IFieldsInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D536EE6B-AD67-456A-B121-5D18A39894C4}
	operator _di_IFieldsInfo()
	{
		_di_IFieldsInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFieldsInfo*(void) { return (IFieldsInfo*)&__IFieldsInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{45492121-74A5-4891-9DE5-C47533EC53F9}") ISinglePropertyInfo  : public IValueMemberInfo 
{
	virtual bool __fastcall GetIsField() = 0 ;
	virtual int __fastcall GetFieldOffset() = 0 ;
	virtual bool __fastcall GetStorageField(/* out */ _di_IFieldInfo &AResult) = 0 ;
	virtual bool __fastcall GetIsReadable() = 0 ;
	virtual bool __fastcall GetIsWritable() = 0 ;
	virtual bool __fastcall GetHasReadMethod() = 0 ;
	virtual bool __fastcall GetHasWriteMethod() = 0 ;
	virtual bool __fastcall GetHasStored( ::System::TObject* AInstance) = 0 ;
	virtual bool __fastcall GetIsStored( ::System::TObject* AInstance) = 0 ;
	__property bool IsField = {read=GetIsField};
	__property int FieldOffset = {read=GetFieldOffset};
	__property bool IsReadable = {read=GetIsReadable};
	__property bool IsWritable = {read=GetIsWritable};
	__property bool HasReadMethod = {read=GetHasReadMethod};
	__property bool HasWriteMethod = {read=GetHasWriteMethod};
};

__interface  INTERFACE_UUID("{4DFCEA52-79EE-4B34-84DD-4C1D6B59648E}") IValueLimitsInfo  : public  ::System::IInterface 
{
	virtual bool __fastcall GetLimitsAvailable() = 0 ;
	virtual  ::System::Rtti::TValue __fastcall GetMinValue() = 0 ;
	virtual  ::System::Rtti::TValue __fastcall GetMaxValue() = 0 ;
	__property bool LimitsAvailable = {read=GetLimitsAvailable};
	__property  ::System::Rtti::TValue MinValue = {read=GetMinValue};
	__property  ::System::Rtti::TValue MaxValue = {read=GetMaxValue};
};

__interface  INTERFACE_UUID("{2251EB18-27B0-4C55-A4AC-4489C9076287}") IPropertyInfo  : public IMemberInfo 
{
	virtual bool __fastcall GetIsReadable() = 0 ;
	virtual bool __fastcall GetIsWritable() = 0 ;
	__property bool IsReadable = {read=GetIsReadable};
	__property bool IsWritable = {read=GetIsWritable};
};

__interface  INTERFACE_UUID("{8AD133C5-1942-4DD5-890E-031DE512870D}") IIndexedPropertyInfo  : public IMemberInfo 
{
	virtual bool __fastcall GetIsReadable() = 0 ;
	virtual bool __fastcall GetIsWritable() = 0 ;
	virtual bool __fastcall GetIsDefault() = 0 ;
	virtual _di_IParametersInfo __fastcall GetIndexes() = 0 ;
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AInstance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AInstance, const  ::System::DynamicArray< ::System::UnicodeString> AArgs) = 0 /* overload */;
	virtual void __fastcall SetValue(void * AInstance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High, const  ::System::Rtti::TValue &AValue) = 0 ;
	__property bool IsDefault = {read=GetIsDefault};
	__property _di_IParametersInfo Indexes = {read=GetIndexes};
	__property bool IsReadable = {read=GetIsReadable};
	__property bool IsWritable = {read=GetIsWritable};
};

__interface  INTERFACE_UUID("{473857D4-35A3-43C8-B551-01397BE170E7}") IMembersInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IMemberInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicMembersInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMemberInfo>.Create */ inline __fastcall TDynamicMembersInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMemberInfo>.CreateEnumerator */ inline __fastcall TDynamicMembersInfo( ::System::Generics::Collections::TEnumerator__1<_di_IMemberInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMemberInfo>.CreateEnumerator */ inline __fastcall TDynamicMembersInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IMemberInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMemberInfo>.CreateCopy */ inline __fastcall TDynamicMembersInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IMemberInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMemberInfo>.CreateArray */ inline __fastcall TDynamicMembersInfo(const _di_IMemberInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IMemberInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMemberInfo>.Destroy */ inline __fastcall virtual ~TDynamicMembersInfo() { }
	
private:
	void *__IMembersInfo;	// IMembersInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {473857D4-35A3-43C8-B551-01397BE170E7}
	operator _di_IMembersInfo()
	{
		_di_IMembersInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMembersInfo*(void) { return (IMembersInfo*)&__IMembersInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{66DBC587-8AC6-450E-A2F3-94A103E41776}") ISinglePropertiesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_ISinglePropertyInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicSinglePropertiesInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_ISinglePropertyInfo>.Create */ inline __fastcall TDynamicSinglePropertiesInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_ISinglePropertyInfo>.CreateEnumerator */ inline __fastcall TDynamicSinglePropertiesInfo( ::System::Generics::Collections::TEnumerator__1<_di_ISinglePropertyInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_ISinglePropertyInfo>.CreateEnumerator */ inline __fastcall TDynamicSinglePropertiesInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_ISinglePropertyInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_ISinglePropertyInfo>.CreateCopy */ inline __fastcall TDynamicSinglePropertiesInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_ISinglePropertyInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_ISinglePropertyInfo>.CreateArray */ inline __fastcall TDynamicSinglePropertiesInfo(const _di_ISinglePropertyInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_ISinglePropertyInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_ISinglePropertyInfo>.Destroy */ inline __fastcall virtual ~TDynamicSinglePropertiesInfo() { }
	
private:
	void *__ISinglePropertiesInfo;	// ISinglePropertiesInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {66DBC587-8AC6-450E-A2F3-94A103E41776}
	operator _di_ISinglePropertiesInfo()
	{
		_di_ISinglePropertiesInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISinglePropertiesInfo*(void) { return (ISinglePropertiesInfo*)&__ISinglePropertiesInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A894ADB0-93A5-49E7-8D3D-9388160B73AC}") IIndexedPropertiesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IIndexedPropertyInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicIndexedPropertiesInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IIndexedPropertyInfo>.Create */ inline __fastcall TDynamicIndexedPropertiesInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IIndexedPropertyInfo>.CreateEnumerator */ inline __fastcall TDynamicIndexedPropertiesInfo( ::System::Generics::Collections::TEnumerator__1<_di_IIndexedPropertyInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IIndexedPropertyInfo>.CreateEnumerator */ inline __fastcall TDynamicIndexedPropertiesInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IIndexedPropertyInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IIndexedPropertyInfo>.CreateCopy */ inline __fastcall TDynamicIndexedPropertiesInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IIndexedPropertyInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IIndexedPropertyInfo>.CreateArray */ inline __fastcall TDynamicIndexedPropertiesInfo(const _di_IIndexedPropertyInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IIndexedPropertyInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IIndexedPropertyInfo>.Destroy */ inline __fastcall virtual ~TDynamicIndexedPropertiesInfo() { }
	
private:
	void *__IIndexedPropertiesInfo;	// IIndexedPropertiesInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A894ADB0-93A5-49E7-8D3D-9388160B73AC}
	operator _di_IIndexedPropertiesInfo()
	{
		_di_IIndexedPropertiesInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IIndexedPropertiesInfo*(void) { return (IIndexedPropertiesInfo*)&__IIndexedPropertiesInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7062B7A7-1AA9-4E0D-A3E5-275554C40347}") IPropertiesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IPropertyInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicPropertiesInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IPropertyInfo>.Create */ inline __fastcall TDynamicPropertiesInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IPropertyInfo>.CreateEnumerator */ inline __fastcall TDynamicPropertiesInfo( ::System::Generics::Collections::TEnumerator__1<_di_IPropertyInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IPropertyInfo>.CreateEnumerator */ inline __fastcall TDynamicPropertiesInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IPropertyInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IPropertyInfo>.CreateCopy */ inline __fastcall TDynamicPropertiesInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IPropertyInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IPropertyInfo>.CreateArray */ inline __fastcall TDynamicPropertiesInfo(const _di_IPropertyInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IPropertyInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IPropertyInfo>.Destroy */ inline __fastcall virtual ~TDynamicPropertiesInfo() { }
	
private:
	void *__IPropertiesInfo;	// IPropertiesInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7062B7A7-1AA9-4E0D-A3E5-275554C40347}
	operator _di_IPropertiesInfo()
	{
		_di_IPropertiesInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertiesInfo*(void) { return (IPropertiesInfo*)&__IPropertiesInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B277D147-9098-4EB0-B7FF-78D2C84D5E48}") IRecursivePropertyInfo  : public  ::System::IInterface 
{
	virtual void * __fastcall GetOwner() = 0 ;
	virtual _di_ISinglePropertyInfo __fastcall GetElement() = 0 ;
	__property void * Owner = {read=GetOwner};
	__property _di_ISinglePropertyInfo Element = {read=GetElement};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecursivePropertyInfo : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	void *FOwner;
	_di_ISinglePropertyInfo FElement;
	void * __fastcall GetOwner();
	_di_ISinglePropertyInfo __fastcall GetElement();
	
public:
	__fastcall TRecursivePropertyInfo(void * AOwner, const _di_ISinglePropertyInfo AElement);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRecursivePropertyInfo() { }
	
private:
	void *__IRecursivePropertyInfo;	// IRecursivePropertyInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B277D147-9098-4EB0-B7FF-78D2C84D5E48}
	operator _di_IRecursivePropertyInfo()
	{
		_di_IRecursivePropertyInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IRecursivePropertyInfo*(void) { return (IRecursivePropertyInfo*)&__IRecursivePropertyInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8D3B1B9A-3F4C-4FF3-BBEA-85838C5D2734}") ISinglePropertiesRecursiveInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IRecursivePropertyInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSinglePropertiesRecursiveInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IRecursivePropertyInfo>.Create */ inline __fastcall TSinglePropertiesRecursiveInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IRecursivePropertyInfo>.CreateEnumerator */ inline __fastcall TSinglePropertiesRecursiveInfo( ::System::Generics::Collections::TEnumerator__1<_di_IRecursivePropertyInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IRecursivePropertyInfo>.CreateEnumerator */ inline __fastcall TSinglePropertiesRecursiveInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IRecursivePropertyInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IRecursivePropertyInfo>.CreateCopy */ inline __fastcall TSinglePropertiesRecursiveInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IRecursivePropertyInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IRecursivePropertyInfo>.CreateArray */ inline __fastcall TSinglePropertiesRecursiveInfo(const _di_IRecursivePropertyInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IRecursivePropertyInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IRecursivePropertyInfo>.Destroy */ inline __fastcall virtual ~TSinglePropertiesRecursiveInfo() { }
	
private:
	void *__ISinglePropertiesRecursiveInfo;	// ISinglePropertiesRecursiveInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8D3B1B9A-3F4C-4FF3-BBEA-85838C5D2734}
	operator _di_ISinglePropertiesRecursiveInfo()
	{
		_di_ISinglePropertiesRecursiveInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISinglePropertiesRecursiveInfo*(void) { return (ISinglePropertiesRecursiveInfo*)&__ISinglePropertiesRecursiveInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{99684F1D-B6A9-426C-BAAE-55878B9F876F}") IParameterInfo  : public ITypedObjectInfo 
{
	virtual  ::System::Typinfo::TParamFlags __fastcall GetFlags() = 0 ;
	virtual  ::System::UnicodeString __fastcall ToString() = 0 ;
	__property  ::System::Typinfo::TParamFlags Flags = {read=GetFlags};
};

__interface  INTERFACE_UUID("{F732B26F-BD9C-4578-B250-1913DFAF9D2A}") IParametersInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IParameterInfo> 
{
	
};

__interface  INTERFACE_UUID("{8FA3A37A-85FC-41ED-9631-6F31B86DB055}") IInvokableInfo  : public ITypedObjectInfo 
{
	virtual  ::System::Typinfo::TCallConv __fastcall GetCallingConvention() = 0 ;
	virtual _di_IParametersInfo __fastcall GetParameters() = 0 ;
	__property  ::System::Typinfo::TCallConv CallingConvention = {read=GetCallingConvention};
	__property _di_IParametersInfo Parameters = {read=GetParameters};
};

__interface  INTERFACE_UUID("{09A28225-A23F-493B-A8BF-B9929C640CBF}") IMethodInfo  : public IMemberInfo 
{
	virtual  ::System::Typinfo::TMethodKind __fastcall GetMethodKind() = 0 ;
	virtual  ::System::Rtti::TDispatchKind __fastcall GetDispatchKind() = 0 ;
	virtual  ::System::Typinfo::TCallConv __fastcall GetCallingConvention() = 0 ;
	virtual _di_IParametersInfo __fastcall GetParameters() = 0 ;
	virtual bool __fastcall GetHasExtendedInfo() = 0 ;
	virtual void * __fastcall GetCodeAddress() = 0 ;
	virtual  ::System::Rtti::TValue __fastcall Invoke( ::System::TObject* AIntance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall Invoke( ::System::TClass AIntance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall Invoke(const  ::System::Rtti::TValue &AIntance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall Invoke( ::System::TObject* AIntance, const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::Rtti::TValue> > AArgs) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall Invoke( ::System::TClass AIntance, const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::Rtti::TValue> > AArgs) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall Invoke(const  ::System::Rtti::TValue &AIntance, const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::Rtti::TValue> > AArgs) = 0 /* overload */;
	__property  ::System::Typinfo::TMethodKind MethodKind = {read=GetMethodKind};
	__property  ::System::Rtti::TDispatchKind DispatchKind = {read=GetDispatchKind};
	__property  ::System::Typinfo::TCallConv CallingConvention = {read=GetCallingConvention};
	__property _di_IParametersInfo Parameters = {read=GetParameters};
	__property bool HasExtendedInfo = {read=GetHasExtendedInfo};
	__property void * CodeAddress = {read=GetCodeAddress};
};

__interface  INTERFACE_UUID("{10069200-5C36-47FE-B518-8253DD130FBE}") IMethodsInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IMethodInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicMethodsInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMethodInfo>.Create */ inline __fastcall TDynamicMethodsInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMethodInfo>.CreateEnumerator */ inline __fastcall TDynamicMethodsInfo( ::System::Generics::Collections::TEnumerator__1<_di_IMethodInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMethodInfo>.CreateEnumerator */ inline __fastcall TDynamicMethodsInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IMethodInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMethodInfo>.CreateCopy */ inline __fastcall TDynamicMethodsInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IMethodInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMethodInfo>.CreateArray */ inline __fastcall TDynamicMethodsInfo(const _di_IMethodInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IMethodInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IMethodInfo>.Destroy */ inline __fastcall virtual ~TDynamicMethodsInfo() { }
	
private:
	void *__IMethodsInfo;	// IMethodsInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {10069200-5C36-47FE-B518-8253DD130FBE}
	operator _di_IMethodsInfo()
	{
		_di_IMethodsInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMethodsInfo*(void) { return (IMethodsInfo*)&__IMethodsInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{18DFAEE9-D77D-41C7-9050-CCB6D72BF192}") IUnitDeclaredTypeInfo  : public  ::System::IInterface 
{
	virtual _di_IUnitInfo __fastcall GetUnit() = 0 ;
	__property _di_IUnitInfo DeclaringUnit = {read=GetUnit};
};

__interface  INTERFACE_UUID("{48C85C75-8318-4568-B89A-59537017CC05}") IClassTypeInfo  : public IStructuredTypeInfo 
{
	virtual _di_IClassTypeInfo __fastcall GetBaseClass() = 0 ;
	virtual  ::System::TClass __fastcall GetMetaclassType() = 0 ;
	virtual _di_IInterfacesInfo __fastcall GetDeclaredInterfaces() = 0 ;
	virtual _di_IInterfacesInfo __fastcall GetInterfaces() = 0 ;
	__property _di_IClassTypeInfo BaseClass = {read=GetBaseClass};
	__property  ::System::TClass MetaclassType = {read=GetMetaclassType};
	__property _di_IInterfacesInfo DeclaredInterfaces = {read=GetDeclaredInterfaces};
	__property _di_IInterfacesInfo Interfaces = {read=GetInterfaces};
};

__interface  INTERFACE_UUID("{174E7E47-2CA4-461A-A159-5CCEB20AE7E5}") IInterfaceTypeInfo  : public IStructuredTypeInfo 
{
	virtual  ::System::Typinfo::TIntfFlags __fastcall GetIntfFlags() = 0 ;
	virtual _di_IInterfaceTypeInfo __fastcall GetBaseInterface() = 0 ;
	virtual GUID __fastcall GetGUID() = 0 ;
	__property  ::System::Typinfo::TIntfFlags IntfFlags = {read=GetIntfFlags};
	__property _di_IInterfaceTypeInfo BaseInterface = {read=GetBaseInterface};
	__property GUID GUID = {read=GetGUID};
};

__interface  INTERFACE_UUID("{B3536993-D6EE-4E38-BD81-3FD767153A74}") IInterfacesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IInterfaceTypeInfo> 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicInterfacesInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IInterfaceTypeInfo>.Create */ inline __fastcall TDynamicInterfacesInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IInterfaceTypeInfo>.CreateEnumerator */ inline __fastcall TDynamicInterfacesInfo( ::System::Generics::Collections::TEnumerator__1<_di_IInterfaceTypeInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IInterfaceTypeInfo>.CreateEnumerator */ inline __fastcall TDynamicInterfacesInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IInterfaceTypeInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IInterfaceTypeInfo>.CreateCopy */ inline __fastcall TDynamicInterfacesInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IInterfaceTypeInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IInterfaceTypeInfo>.CreateArray */ inline __fastcall TDynamicInterfacesInfo(const _di_IInterfaceTypeInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IInterfaceTypeInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IInterfaceTypeInfo>.Destroy */ inline __fastcall virtual ~TDynamicInterfacesInfo() { }
	
private:
	void *__IInterfacesInfo;	// IInterfacesInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B3536993-D6EE-4E38-BD81-3FD767153A74}
	operator _di_IInterfacesInfo()
	{
		_di_IInterfacesInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInterfacesInfo*(void) { return (IInterfacesInfo*)&__IInterfacesInfo; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{89F528B1-8453-46E2-9093-912CB4F4C5E2}") IOrdinalTypeInfo  : public ITypeInfo 
{
	virtual int __fastcall GetMaxValue() = 0 ;
	virtual int __fastcall GetMinValue() = 0 ;
	virtual  ::System::Typinfo::TOrdType __fastcall GetOrdType() = 0 ;
	__property  ::System::Typinfo::TOrdType OrdType = {read=GetOrdType};
	__property int MinValue = {read=GetMinValue};
	__property int MaxValue = {read=GetMaxValue};
};

__interface  INTERFACE_UUID("{1B62DC99-0CA5-4155-91EE-71D60D8BC54A}") IInt64TypeInfo  : public ITypeInfo 
{
	virtual __int64 __fastcall GetMaxValue() = 0 ;
	virtual __int64 __fastcall GetMinValue() = 0 ;
	__property __int64 MinValue = {read=GetMinValue};
	__property __int64 MaxValue = {read=GetMaxValue};
};

__interface  INTERFACE_UUID("{44A6FA12-7499-4591-869A-47994A5B1941}") IInvokableTypeInfo  : public ITypeInfo 
{
	virtual _di_ITypeInfo __fastcall GetReturnType() = 0 ;
	virtual  ::System::Typinfo::TCallConv __fastcall GetCallingConvention() = 0 ;
	virtual _di_IParametersInfo __fastcall GetParameters() = 0 ;
	__property _di_ITypeInfo ReturnType = {read=GetReturnType};
	__property  ::System::Typinfo::TCallConv CallingConvention = {read=GetCallingConvention};
	__property _di_IParametersInfo Parameters = {read=GetParameters};
};

__interface  INTERFACE_UUID("{371849AE-A91A-4071-9859-BC5F26336E9A}") IMethodTypeInfo  : public IInvokableTypeInfo 
{
	virtual  ::System::Typinfo::TMethodKind __fastcall GetMethodKind() = 0 ;
	__property  ::System::Typinfo::TMethodKind MethodKind = {read=GetMethodKind};
};

__interface  INTERFACE_UUID("{541AB5DD-AB1D-4287-9958-63EC7CC2981F}") IProcedureTypeInfo  : public IInvokableTypeInfo 
{
	
};

__interface  INTERFACE_UUID("{8BF00B85-A465-47B6-BF0A-A012FE2BF099}") IClassRefTypeInfo  : public ITypeInfo 
{
	virtual  ::System::TClass __fastcall GetReferencedClass() = 0 ;
	__property  ::System::TClass ReferencedClass = {read=GetReferencedClass};
};

__interface  INTERFACE_UUID("{31A8674D-F333-4FA3-ABC4-C103722E0655}") IEnumerationValueInfo  : public INamedObjectInfo 
{
	virtual int __fastcall GetValue() = 0 ;
	__property int Value = {read=GetValue};
};

__interface  INTERFACE_UUID("{6062D58D-1D97-485E-8D15-B41C7BE12808}") IEnumerationValuesInfo  : public  ::Mitov::Containers::List::IArrayList__1<_di_IEnumerationValueInfo> 
{
	
};

__interface  INTERFACE_UUID("{4CF9A20F-EF13-434B-8CA3-CCBB91512305}") IEnumerationTypeInfo  : public IOrdinalTypeInfo 
{
	virtual _di_ITypeInfo __fastcall GetUnderlyingType() = 0 ;
	virtual _di_IEnumerationValuesInfo __fastcall GetValues() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetNameByValue(int AValue) = 0 ;
	virtual bool __fastcall GetValueByName(const  ::System::UnicodeString AName, /* out */ int &AValue) = 0 ;
	__property _di_ITypeInfo UnderlyingType = {read=GetUnderlyingType};
	__property _di_IEnumerationValuesInfo Values = {read=GetValues};
};

__interface  INTERFACE_UUID("{B978558C-8782-48A0-88A0-0E5C1F4D8FB0}") ISetTypeInfo  : public ITypeInfo 
{
	virtual _di_IEnumerationTypeInfo __fastcall GetElementType() = 0 ;
	__property _di_IEnumerationTypeInfo ElementType = {read=GetElementType};
};

__interface  INTERFACE_UUID("{4B045F2E-B24C-4858-A353-0FD0C6C8C593}") IStringTypeInfo  : public ITypeInfo 
{
	virtual  ::System::Rtti::TRttiStringKind __fastcall GetStringKind() = 0 ;
	__property  ::System::Rtti::TRttiStringKind StringKind = {read=GetStringKind};
};

__interface  INTERFACE_UUID("{F73CFB23-B1D0-4209-ADFD-283F8D7E9501}") IAnsiStringTypeInfo  : public IStringTypeInfo 
{
	virtual  ::System::Word __fastcall GetCodePage() = 0 ;
	__property  ::System::Word CodePage = {read=GetCodePage};
};

__interface  INTERFACE_UUID("{39AF6932-3D62-4F89-A904-CF46204EBA01}") IFloatTypeInfo  : public ITypeInfo 
{
	virtual  ::System::Typinfo::TFloatType __fastcall GetFloatType() = 0 ;
	__property  ::System::Typinfo::TFloatType FloatType = {read=GetFloatType};
};

__interface  INTERFACE_UUID("{FF6F3BEB-EF2E-4300-816F-6BF9854FEE66}") IArrayTypeInfo  : public ITypeInfo 
{
	virtual int __fastcall GetTotalElementCount() = 0 ;
	virtual _di_ITypeInfo __fastcall GetElementType() = 0 ;
	virtual int __fastcall GetDimensionCount() = 0 ;
	virtual _di_ITypeInfo __fastcall GetDimension(int AIndex) = 0 ;
	__property int TotalElementCount = {read=GetTotalElementCount};
	__property _di_ITypeInfo ElementType = {read=GetElementType};
	__property int DimensionCount = {read=GetDimensionCount};
	__property _di_ITypeInfo Dimensions[int AIndex] = {read=GetDimension};
};

__interface  INTERFACE_UUID("{AAE163F7-7A7E-488B-A1CA-746B2034A9A3}") IDynamicArrayTypeInfo  : public ITypeInfo 
{
	virtual int __fastcall GetElementSize() = 0 ;
	virtual _di_ITypeInfo __fastcall GetElementType() = 0 ;
	virtual  ::System::Word __fastcall GetOleAutoVarType() = 0 ;
	__property int ElementSize = {read=GetElementSize};
	__property _di_ITypeInfo ElementType = {read=GetElementType};
	__property  ::System::Word OleAutoVarType = {read=GetOleAutoVarType};
};

__interface  INTERFACE_UUID("{EBB39C58-62EE-4B30-94A0-7D9511D8322A}") IPointerTypeInfo  : public ITypeInfo 
{
	virtual _di_ITypeInfo __fastcall GetReferredType() = 0 ;
	__property _di_ITypeInfo ReferredType = {read=GetReferredType};
};

struct DECLSPEC_DRECORD TRttiInfo
{
private:
	static _di_ITypesInfo __fastcall GetTypes();
	static _di_IPackagesInfo __fastcall GetPackages();
	static _di_IUnitsInfo __fastcall GetUnits();
	static void __fastcall PopulateTypes();
	static void __fastcall PopulateInterfaces();
	
public:
	static _di_ITypeInfo __fastcall GetClassType( ::System::TClass AClass);
	static _di_ITypeInfo __fastcall GetTypeInfoType(void * ATypeInfo);
	static _di_ITypeInfo __fastcall GetObjectType( ::System::TObject* AObject, bool AIncludeDynamicTypeInfo = true);
	static bool __fastcall GetType(const  ::System::UnicodeString AName, /* out */ _di_ITypeInfo &AType);
	static bool __fastcall GetInterfaceType(const GUID &AGUID, /* out */ _di_IInterfaceTypeInfo &AType);
	template<typename T> static _di_ITypeInfo __fastcall TypeOf();
	template<typename T> static  ::Mitov::Containers::List::_di_IStringArrayList __fastcall GetEnumNames();
	template<typename T> static  ::System::UnicodeString __fastcall GetEnumName(const T AValue);
	template<typename T> static bool __fastcall GetEnumValue(const  ::System::UnicodeString AName, /* out */ T &AValue);
	template<typename T> static bool __fastcall ForEnumValue(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc);
	static bool __fastcall FindType(const  ::System::UnicodeString AQualifiedName, /* out */ _di_ITypeInfo &AType);
	static bool __fastcall ForType(const  ::System::UnicodeString AQualifiedName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ITypeInfo> > AProc);
	template<typename T> static bool __fastcall ForAttribute(const _di_ITypeInfo AType, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T> static bool __fastcall ForAttribute(const _di_IObjectInfo AObject, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T> static bool __fastcall ForAttribute( ::System::TObject* AObject, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T> static bool __fastcall ForAttribute( ::System::TClass AClass, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T_INTF, typename T> static bool __fastcall ForAttribute(const T_INTF AInterface, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc)/* overload */;
	template<typename T> static bool __fastcall ForMemberAndTypeAttribute(const _di_IMemberInfo AObject, const  ::System::DelphiInterface< ::System::Sysutils::TProc__1<T> > AProc);
	static  ::System::UnicodeString __fastcall GetMethodName(const _di_ITypeInfo AType, void * AMethod)/* overload */;
	static  ::System::UnicodeString __fastcall GetMethodName( ::System::TObject* AObject, void * AMethod)/* overload */;
	static  ::System::UnicodeString __fastcall GetMethodName( ::System::TClass AClass, void * AMethod)/* overload */;
	static void __fastcall RegisterType(const _di_ITypeInfo AType);
	static void __fastcall UnregisterType(const _di_ITypeInfo AType);
	static void __fastcall InvalidateCache();
	static _di_ITypesInfo __fastcall GetTypesOf( ::System::Typinfo::TTypeKinds ATypeKinds);
	/* static */ __property _di_ITypesInfo Types = {read=GetTypes};
	/* static */ __property _di_IPackagesInfo Packages = {read=GetPackages};
	/* static */ __property _di_IUnitsInfo Units = {read=GetUnits};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualObjectInfo : public  ::System::TInterfacedObject
{
	typedef  ::System::TInterfacedObject inherited;
	
protected:
	_di_IAttributeAccess FAttributeAccess;
	virtual void __fastcall CreateAccessAttributes();
	virtual  ::System::Rtti::TRttiObject* __fastcall GetRTTIHandle();
	virtual _di_IPackageInfo __fastcall GetPackage() = 0 ;
	virtual _di_IAttributesInfo __fastcall GetDeclaredCustomAttributes();
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes()/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass)/* overload */;
	virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass)/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass)/* overload */;
	virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass)/* overload */;
	TAttributeAccess* __fastcall GetAccessAttributes();
	__fastcall TVirtualObjectInfo();
	
public:
	__fastcall virtual ~TVirtualObjectInfo();
private:
	void *__IObjectInfo;	// IObjectInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9AC90D20-CAC5-43A8-B413-C2089071CC42}
	operator _di_IObjectInfo()
	{
		_di_IObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IObjectInfo*(void) { return (IObjectInfo*)&__IObjectInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TObjectInfo : public TVirtualObjectInfo
{
	typedef TVirtualObjectInfo inherited;
	
protected:
	 ::System::Rtti::TRttiObject* FObject;
	virtual  ::System::Rtti::TRttiObject* __fastcall GetRTTIHandle();
	virtual _di_IPackageInfo __fastcall GetPackage();
	virtual _di_IAttributesInfo __fastcall GetDeclaredCustomAttributes();
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes()/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass)/* overload */;
	virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass)/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass)/* overload */;
	virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass)/* overload */;
	__fastcall virtual TObjectInfo( ::System::Rtti::TRttiObject* AObject);
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TObjectInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNamedObjectInfo : public TObjectInfo
{
	typedef TObjectInfo inherited;
	
protected:
	virtual  ::System::UnicodeString __fastcall GetName();
	virtual  ::System::UnicodeString __fastcall GetDisplayName();
	virtual  ::System::UnicodeString __fastcall GetSaveName();
protected:
	/* TObjectInfo.Create */ inline __fastcall virtual TNamedObjectInfo( ::System::Rtti::TRttiObject* AObject) : TObjectInfo(AObject) { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TNamedObjectInfo() { }
	
private:
	void *__INamedObjectInfo;	// INamedObjectInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {43DD5E62-82AD-45CC-9655-BE9DE3CFF93C}
	operator _di_INamedObjectInfo()
	{
		_di_INamedObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamedObjectInfo*(void) { return (INamedObjectInfo*)&__INamedObjectInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTypedObjectInfo : public TNamedObjectInfo
{
	typedef TNamedObjectInfo inherited;
	
protected:
	virtual _di_ITypeInfo __fastcall GetTypeInfo() = 0 ;
protected:
	/* TObjectInfo.Create */ inline __fastcall virtual TTypedObjectInfo( ::System::Rtti::TRttiObject* AObject) : TNamedObjectInfo(AObject) { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TTypedObjectInfo() { }
	
private:
	void *__ITypedObjectInfo;	// ITypedObjectInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C119E30-F9D1-4900-A003-243769A01F4E}
	operator _di_ITypedObjectInfo()
	{
		_di_ITypedObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITypedObjectInfo*(void) { return (ITypedObjectInfo*)&__ITypedObjectInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMemberInfo : public TTypedObjectInfo
{
	typedef TTypedObjectInfo inherited;
	
protected:
	_di_ITypeInfo FParentTypeInfoOwner;
	_di_ITypeInfo FOwnerType;
	virtual void __fastcall CreateAccessAttributes();
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(bool AIncludeType)/* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType)/* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType)/* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass, bool AIncludeType)/* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, bool AIncludeType, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass, bool AIncludeType)/* overload */;
	TMemberAttributeAccess* __fastcall GetMemberAccessAttributes();
	virtual  ::System::Typinfo::TMemberVisibility __fastcall GetVisibility();
	__fastcall TMemberInfo(const _di_ITypeInfo AOwnerType, const _di_ITypeInfo ATypeInfoOwner,  ::System::Rtti::TRttiObject* AObject);
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TMemberInfo() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IAttributesInfo __fastcall  GetCustomAttributes(){ return TObjectInfo::GetCustomAttributes(); }
	inline _di_IAttributesInfo __fastcall  GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass){ return TObjectInfo::GetCustomAttributes(AClass); }
	inline _di_IAttributesInfo __fastcall  GetCustomAttributes(const _di_IClassTypeInfo AClass){ return TObjectInfo::GetCustomAttributes(AClass); }
	inline bool __fastcall  GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult){ return TObjectInfo::GetCustomAttribute(AClass, AResult); }
	inline bool __fastcall  GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult){ return TObjectInfo::GetCustomAttribute(AClass, AResult); }
	inline bool __fastcall  HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass){ return TObjectInfo::HasCustomAttribute(AClass); }
	inline bool __fastcall  HasCustomAttribute(const _di_IClassTypeInfo AClass){ return TObjectInfo::HasCustomAttribute(AClass); }
	
private:
	void *__IMemberInfo;	// IMemberInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9E0533F8-0956-4F11-88FD-99A9DD9A3007}
	operator _di_IMemberInfo()
	{
		_di_IMemberInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMemberInfo*(void) { return (IMemberInfo*)&__IMemberInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TValueMemberInfo : public TMemberInfo
{
	typedef TMemberInfo inherited;
	
protected:
	virtual  ::System::Rtti::TValue __fastcall GetDefault(void * AIntance) = 0 ;
	virtual bool __fastcall GetHasDefault() = 0 ;
	virtual bool __fastcall GetIsDefault( ::System::TObject* AIntance, bool AIncludeStored = true) = 0 ;
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AInstance) = 0 ;
	virtual void __fastcall SetValue(void * AInstance, const  ::System::Rtti::TValue &AValue) = 0 ;
	void __fastcall SetFromString(void * AInstance, const  ::System::UnicodeString AValue);
	bool __fastcall GetLimitsAvailable();
	 ::System::Rtti::TValue __fastcall GetMaxValue();
	 ::System::Rtti::TValue __fastcall GetMinValue();
protected:
	/* TMemberInfo.Create */ inline __fastcall TValueMemberInfo(const _di_ITypeInfo AOwnerType, const _di_ITypeInfo ATypeInfoOwner,  ::System::Rtti::TRttiObject* AObject) : TMemberInfo(AOwnerType, ATypeInfoOwner, AObject) { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TValueMemberInfo() { }
	
private:
	void *__IValueLimitsInfo;	// IValueLimitsInfo 
	void *__IValueMemberInfo;	// IValueMemberInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4DFCEA52-79EE-4B34-84DD-4C1D6B59648E}
	operator _di_IValueLimitsInfo()
	{
		_di_IValueLimitsInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IValueLimitsInfo*(void) { return (IValueLimitsInfo*)&__IValueLimitsInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4AC1B21D-3101-48E8-B0A2-F161963DE59A}
	operator _di_IValueMemberInfo()
	{
		_di_IValueMemberInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IValueMemberInfo*(void) { return (IValueMemberInfo*)&__IValueMemberInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAttributesInfo : public  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>
{
	typedef  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*> inherited;
	
protected:
	HIDESBASE void __fastcall Append(const  ::System::DynamicArray< ::System::TCustomAttribute*> AAttributes)/* overload */;
	HIDESBASE void __fastcall Append(const _di_IAttributesInfo AAttributes)/* overload */;
	__fastcall TAttributesInfo()/* overload */;
	__fastcall TAttributesInfo(const  ::System::DynamicArray< ::System::TCustomAttribute*> AAttributes)/* overload */;
public:
	/* {Mitov_Containers_List}TArrayList<System_TCustomAttribute>.CreateEnumerator */ inline __fastcall TAttributesInfo( ::System::Generics::Collections::TEnumerator__1< ::System::TCustomAttribute*>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<System_TCustomAttribute>.CreateEnumerator */ inline __fastcall TAttributesInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::TCustomAttribute*> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<System_TCustomAttribute>.CreateCopy */ inline __fastcall TAttributesInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::TCustomAttribute*> > AOther) :  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<System_TCustomAttribute>.CreateArray */ inline __fastcall TAttributesInfo( ::System::TCustomAttribute* const *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<System_TCustomAttribute>.Destroy */ inline __fastcall virtual ~TAttributesInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::TCustomAttribute*> > __fastcall  Append(const  ::System::DelphiInterface< ::Mitov::Containers::Common::IEnumerable__1< ::System::TCustomAttribute*> > AOther){ return  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>::Append(AOther); }
	inline  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::TCustomAttribute*> > __fastcall  Append( ::System::TCustomAttribute* const *AItems, const int AItems_High){ return  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>::Append(AItems, AItems_High); }
	inline  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::TCustomAttribute*> > __fastcall  Append( ::System::Generics::Collections::TEnumerator__1< ::System::TCustomAttribute*>* const AEnumerator){ return  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>::Append(AEnumerator); }
	inline  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1< ::System::TCustomAttribute*> > __fastcall  Append(const  ::System::DelphiInterface< ::System::IEnumerator__1< ::System::TCustomAttribute*> > AEnumerator){ return  ::Mitov::Containers::List::TArrayList__1< ::System::TCustomAttribute*>::Append(AEnumerator); }
	
private:
	void *__IAttributesInfo;	// IAttributesInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C71B0CBA-0CB7-43A7-8250-AD9BCC09A887}
	operator _di_IAttributesInfo()
	{
		_di_IAttributesInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAttributesInfo*(void) { return (IAttributesInfo*)&__IAttributesInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnumerationValuesInfo : public  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo>
{
	typedef  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo> inherited;
	
public:
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IEnumerationValueInfo>.Create */ inline __fastcall TEnumerationValuesInfo() :  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo>() { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IEnumerationValueInfo>.CreateEnumerator */ inline __fastcall TEnumerationValuesInfo( ::System::Generics::Collections::TEnumerator__1<_di_IEnumerationValueInfo>* const AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IEnumerationValueInfo>.CreateEnumerator */ inline __fastcall TEnumerationValuesInfo(const  ::System::DelphiInterface< ::System::IEnumerator__1<_di_IEnumerationValueInfo> > AEnumerator)/* overload */ :  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo>(AEnumerator) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IEnumerationValueInfo>.CreateCopy */ inline __fastcall TEnumerationValuesInfo(const  ::System::DelphiInterface< ::Mitov::Containers::List::IArrayList__1<_di_IEnumerationValueInfo> > AOther) :  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo>(AOther) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IEnumerationValueInfo>.CreateArray */ inline __fastcall TEnumerationValuesInfo(const _di_IEnumerationValueInfo *AOther, const int AOther_High) :  ::Mitov::Containers::List::TArrayList__1<_di_IEnumerationValueInfo>(AOther, AOther_High) { }
	/* {Mitov_Containers_List}TArrayList<Mitov_TypeInfo_IEnumerationValueInfo>.Destroy */ inline __fastcall virtual ~TEnumerationValuesInfo() { }
	
private:
	void *__IEnumerationValuesInfo;	// IEnumerationValuesInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6062D58D-1D97-485E-8D15-B41C7BE12808}
	operator _di_IEnumerationValuesInfo()
	{
		_di_IEnumerationValuesInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEnumerationValuesInfo*(void) { return (IEnumerationValuesInfo*)&__IEnumerationValuesInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicObjectInfo : public TVirtualObjectInfo
{
	typedef TVirtualObjectInfo inherited;
	
protected:
	_di_IAttributeAccess FAttributeAccess;
	virtual _di_IPackageInfo __fastcall GetPackage();
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(bool AIncludeType)/* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType)/* overload */;
	HIDESBASE virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass, bool AIncludeType)/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes()/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass)/* overload */;
	virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass)/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass)/* overload */;
	virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass)/* overload */;
	HIDESBASE virtual TAttributeAccess* __fastcall GetAccessAttributes();
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicObjectInfo() : TVirtualObjectInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicObjectInfo() { }
	
private:
	void *__IObjectInfo;	// IObjectInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9AC90D20-CAC5-43A8-B413-C2089071CC42}
	operator _di_IObjectInfo()
	{
		_di_IObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IObjectInfo*(void) { return (IObjectInfo*)&__IObjectInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicNamedObjectInfo : public TDynamicObjectInfo
{
	typedef TDynamicObjectInfo inherited;
	
protected:
	virtual  ::System::UnicodeString __fastcall GetName() = 0 ;
	 ::System::UnicodeString __fastcall GetDisplayName();
	 ::System::UnicodeString __fastcall GetSaveName();
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicNamedObjectInfo() : TDynamicObjectInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicNamedObjectInfo() { }
	
private:
	void *__INamedObjectInfo;	// INamedObjectInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {43DD5E62-82AD-45CC-9655-BE9DE3CFF93C}
	operator _di_INamedObjectInfo()
	{
		_di_INamedObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamedObjectInfo*(void) { return (INamedObjectInfo*)&__INamedObjectInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicTypedObjectInfo : public TDynamicNamedObjectInfo
{
	typedef TDynamicNamedObjectInfo inherited;
	
protected:
	virtual _di_ITypeInfo __fastcall GetTypeInfo() = 0 ;
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicTypedObjectInfo() : TDynamicNamedObjectInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicTypedObjectInfo() { }
	
private:
	void *__ITypedObjectInfo;	// ITypedObjectInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C119E30-F9D1-4900-A003-243769A01F4E}
	operator _di_ITypedObjectInfo()
	{
		_di_ITypedObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITypedObjectInfo*(void) { return (ITypedObjectInfo*)&__ITypedObjectInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicMemberInfo : public TDynamicTypedObjectInfo
{
	typedef TDynamicTypedObjectInfo inherited;
	
protected:
	virtual void __fastcall CreateAccessAttributes();
	HIDESBASE virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AIncludeType)/* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, bool AIncludeType, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass, bool AIncludeType)/* overload */;
	virtual TMemberAttributeAccess* __fastcall GetMemberAccessAttributes();
	virtual  ::System::Typinfo::TMemberVisibility __fastcall GetVisibility();
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicMemberInfo() : TDynamicTypedObjectInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicMemberInfo() { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult){ return TDynamicObjectInfo::GetCustomAttribute(AClass, AResult); }
	inline bool __fastcall  GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult){ return TDynamicObjectInfo::GetCustomAttribute(AClass, AResult); }
	inline bool __fastcall  HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass){ return TDynamicObjectInfo::HasCustomAttribute(AClass); }
	inline bool __fastcall  HasCustomAttribute(const _di_IClassTypeInfo AClass){ return TDynamicObjectInfo::HasCustomAttribute(AClass); }
	
private:
	void *__IMemberInfo;	// IMemberInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9E0533F8-0956-4F11-88FD-99A9DD9A3007}
	operator _di_IMemberInfo()
	{
		_di_IMemberInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMemberInfo*(void) { return (IMemberInfo*)&__IMemberInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicPropertyInfo : public TDynamicMemberInfo
{
	typedef TDynamicMemberInfo inherited;
	
protected:
	virtual bool __fastcall GetIsReadable();
	virtual bool __fastcall GetIsWritable();
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicPropertyInfo() : TDynamicMemberInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicPropertyInfo() { }
	
private:
	void *__IPropertyInfo;	// IPropertyInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {2251EB18-27B0-4C55-A4AC-4489C9076287}
	operator _di_IPropertyInfo()
	{
		_di_IPropertyInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyInfo*(void) { return (IPropertyInfo*)&__IPropertyInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicSinglePropertyInfo : public TDynamicPropertyInfo
{
	typedef TDynamicPropertyInfo inherited;
	
protected:
	virtual  ::System::Rtti::TValue __fastcall GetDefault(void * AInstance) = 0 ;
	virtual bool __fastcall GetHasDefault();
	virtual bool __fastcall GetIsDefault( ::System::TObject* AInstance, bool AIncludeStored = true);
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AInstance) = 0 ;
	virtual void __fastcall SetValue(void * AInstance, const  ::System::Rtti::TValue &AValue) = 0 ;
	virtual void __fastcall SetFromString(void * AInstance, const  ::System::UnicodeString AValue);
	virtual bool __fastcall GetIsField();
	virtual int __fastcall GetFieldOffset();
	virtual bool __fastcall GetStorageField(/* out */ _di_IFieldInfo &AResult);
	virtual bool __fastcall GetHasReadMethod();
	virtual bool __fastcall GetHasWriteMethod();
	virtual bool __fastcall GetHasStored( ::System::TObject* AInstance);
	virtual bool __fastcall GetIsStored( ::System::TObject* AInstance);
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicSinglePropertyInfo() : TDynamicPropertyInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicSinglePropertyInfo() { }
	
private:
	void *__ISinglePropertyInfo;	// ISinglePropertyInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {45492121-74A5-4891-9DE5-C47533EC53F9}
	operator _di_ISinglePropertyInfo()
	{
		_di_ISinglePropertyInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISinglePropertyInfo*(void) { return (ISinglePropertyInfo*)&__ISinglePropertyInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicIndexedPropertyInfo : public TDynamicPropertyInfo
{
	typedef TDynamicPropertyInfo inherited;
	
protected:
	virtual bool __fastcall GetIsDefault();
	virtual _di_IParametersInfo __fastcall GetIndexes();
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AIntance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High) = 0 /* overload */;
	virtual  ::System::Rtti::TValue __fastcall GetValue(void * AIntance, const  ::System::DynamicArray< ::System::UnicodeString> AArgs) = 0 /* overload */;
	virtual void __fastcall SetValue(void * AIntance, const  ::System::Rtti::TValue *AArgs, const int AArgs_High, const  ::System::Rtti::TValue &AValue) = 0 ;
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicIndexedPropertyInfo() : TDynamicPropertyInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicIndexedPropertyInfo() { }
	
private:
	void *__IIndexedPropertyInfo;	// IIndexedPropertyInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8AD133C5-1942-4DD5-890E-031DE512870D}
	operator _di_IIndexedPropertyInfo()
	{
		_di_IIndexedPropertyInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IIndexedPropertyInfo*(void) { return (IIndexedPropertyInfo*)&__IIndexedPropertyInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicTypeInfo : public TDynamicNamedObjectInfo
{
	typedef TDynamicNamedObjectInfo inherited;
	
protected:
	HIDESBASE virtual bool __fastcall Equals(const _di_ITypeInfo AOther);
	virtual  ::System::UnicodeString __fastcall GetNamespace();
	virtual  ::System::DynamicArray< ::System::UnicodeString> __fastcall GetNamespacedNames();
	virtual  ::System::Typinfo::PTypeInfo __fastcall GetHandle() = 0 ;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes(bool AInherit)/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AInherit)/* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AInherit, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, bool AInherit)/* overload */;
	virtual _di_IAttributesInfo __fastcall GetCustomAttributes(const _di_IClassTypeInfo AClass, bool AInherit)/* overload */;
	HIDESBASE virtual bool __fastcall GetCustomAttribute(const _di_IClassTypeInfo AClass, bool AInherit, /* out */  ::System::TCustomAttribute* &AResult)/* overload */;
	HIDESBASE virtual bool __fastcall HasCustomAttribute(const _di_IClassTypeInfo AClass, bool AInherit)/* overload */;
	virtual TTypeAttributeAccess* __fastcall GetTypeAccessAttributes();
	virtual _di_ITypeInfo __fastcall GetBaseType() = 0 ;
	virtual  ::System::UnicodeString __fastcall GetQualifiedName();
	virtual bool __fastcall GetIsPublic();
	virtual  ::System::TTypeKind __fastcall GetTypeKind() = 0 ;
	virtual int __fastcall GetTypeSize() = 0 ;
	virtual _di_IPropertiesInfo __fastcall GetProperties()/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties()/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties()/* overload */;
	virtual bool __fastcall GetDefaultIndexProperty(/* out */ _di_IIndexedPropertyInfo &AProperty);
	virtual _di_IFieldsInfo __fastcall GetFields()/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods()/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers()/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::Typinfo::TMethodKind AMethodKind)/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance,  ::System::Typinfo::TTypeKinds ATypeKinds, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance,  ::System::TClass AClass, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance,  ::System::TClass const *AClasses, const int AClasses_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities,  ::System::TClass AClass, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> >(), const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter =  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> >())/* overload */;
	virtual _di_ISinglePropertiesRecursiveInfo __fastcall GetSinglePropertiesRecursive(void * AInstance, TMemberVisibilities AVisibilities, const _di_TTypeInfoFilterFunc AFilterFunc)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties( ::System::TClass AClass)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties( ::System::TClass AClass)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties( ::System::TClass AClass)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields( ::System::TClass AClass)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::TClass AClass)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers( ::System::TClass AClass)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IPropertyInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetSingleProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_ISinglePropertyInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetIndexedProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IIndexedPropertyInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetFields(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IFieldInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetMethods(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMethodInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IMembersInfo __fastcall GetMembers(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMemberInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties()/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties()/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties()/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields()/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods()/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers()/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers( ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties( ::System::TClass AClass)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties( ::System::TClass AClass)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties( ::System::TClass AClass)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields( ::System::TClass AClass)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods( ::System::TClass AClass)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers( ::System::TClass AClass)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers( ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities,  ::System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities,  ::System::TClass AClass)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(TMemberVisibilities AVisibilities,  ::System::TClass const *AClasses, const int AClasses_High)/* overload */;
	virtual _di_IPropertiesInfo __fastcall GetDeclaredProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IPropertyInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_ISinglePropertiesInfo __fastcall GetDeclaredSingleProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_ISinglePropertyInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IIndexedPropertiesInfo __fastcall GetDeclaredIndexedProperties(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IIndexedPropertyInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IFieldsInfo __fastcall GetDeclaredFields(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IFieldInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IMethodsInfo __fastcall GetDeclaredMethods(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMethodInfo,bool> > AFilterFunc)/* overload */;
	virtual _di_IMembersInfo __fastcall GetDeclaredMembers(const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_IMemberInfo,bool> > AFilterFunc)/* overload */;
	virtual bool __fastcall GetMethod(const  ::System::UnicodeString AName, /* out */ _di_IMethodInfo &AResult);
	virtual bool __fastcall GetSubMethod( ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_IMethodInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >());
	virtual _di_IMethodsInfo __fastcall GetMethods(const  ::System::UnicodeString AName)/* overload */;
	virtual bool __fastcall GetField(const  ::System::UnicodeString AName, /* out */ _di_IFieldInfo &AResult);
	virtual bool __fastcall GetProperty(const  ::System::UnicodeString AName, /* out */ _di_IPropertyInfo &AResult);
	virtual bool __fastcall GetSingleProperty(const  ::System::UnicodeString AName, /* out */ _di_ISinglePropertyInfo &AResult);
	virtual bool __fastcall GetSingleSubProperty( ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_ISinglePropertyInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >());
	virtual bool __fastcall GetIndexedSubProperty( ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_IIndexedPropertyInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel =  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >());
	virtual bool __fastcall GetIndexedProperty(const  ::System::UnicodeString AName, /* out */ _di_IIndexedPropertyInfo &AResult);
	virtual bool __fastcall GetMember(const  ::System::UnicodeString AName, /* out */ _di_IMemberInfo &AResult);
	virtual  ::System::UnicodeString __fastcall GetMethodName(void * AMethod);
	virtual _di_ITypeInfo __fastcall ForMethod(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IMethodInfo> > AProc);
	virtual _di_ITypeInfo __fastcall ForField(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IFieldInfo> > AProc);
	virtual _di_ITypeInfo __fastcall ForProperty(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IPropertyInfo> > AProc);
	virtual _di_ITypeInfo __fastcall ForSingleProperty(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_ISinglePropertyInfo> > AProc);
	virtual _di_ITypeInfo __fastcall ForSingleSubProperty( ::System::TObject* AInstance, const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__2< ::System::TObject*,_di_ISinglePropertyInfo> > AProc);
	virtual _di_ITypeInfo __fastcall ForIndexedProperty(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IIndexedPropertyInfo> > AProc);
	virtual _di_ITypeInfo __fastcall ForMember(const  ::System::UnicodeString AName, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__1<_di_IMemberInfo> > AProc);
	HIDESBASE virtual bool __fastcall InheritsFrom(const _di_ITypeInfo AType, bool AIncludeSelf = true);
	virtual int __fastcall InheritanceDepth(const _di_ITypeInfo AType);
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicTypeInfo() : TDynamicNamedObjectInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicTypeInfo() { }
	
	/* Hoisted overloads: */
	
protected:
	inline _di_IAttributesInfo __fastcall  GetCustomAttributes(){ return TDynamicObjectInfo::GetCustomAttributes(); }
	inline _di_IAttributesInfo __fastcall  GetCustomAttributes( ::Mitov::Attributes::TCustomAttributeClass AClass){ return TDynamicObjectInfo::GetCustomAttributes(AClass); }
	inline _di_IAttributesInfo __fastcall  GetCustomAttributes(const _di_IClassTypeInfo AClass){ return TDynamicObjectInfo::GetCustomAttributes(AClass); }
	inline bool __fastcall  GetCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass, /* out */  ::System::TCustomAttribute* &AResult){ return TDynamicObjectInfo::GetCustomAttribute(AClass, AResult); }
	inline bool __fastcall  GetCustomAttribute(const _di_IClassTypeInfo AClass, /* out */  ::System::TCustomAttribute* &AResult){ return TDynamicObjectInfo::GetCustomAttribute(AClass, AResult); }
	inline bool __fastcall  HasCustomAttribute( ::Mitov::Attributes::TCustomAttributeClass AClass){ return TDynamicObjectInfo::HasCustomAttribute(AClass); }
	inline bool __fastcall  HasCustomAttribute(const _di_IClassTypeInfo AClass){ return TDynamicObjectInfo::HasCustomAttribute(AClass); }
	
private:
	void *__ITypeInfo;	// ITypeInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0C8ACD76-B2BD-4E73-B6AA-D008148941CF}
	operator _di_ITypeInfo()
	{
		_di_ITypeInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITypeInfo*(void) { return (ITypeInfo*)&__ITypeInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {43DD5E62-82AD-45CC-9655-BE9DE3CFF93C}
	operator _di_INamedObjectInfo()
	{
		_di_INamedObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator INamedObjectInfo*(void) { return (INamedObjectInfo*)&__ITypeInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9AC90D20-CAC5-43A8-B413-C2089071CC42}
	operator _di_IObjectInfo()
	{
		_di_IObjectInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IObjectInfo*(void) { return (IObjectInfo*)&__ITypeInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDynamicClassTypeInfo : public TDynamicTypeInfo
{
	typedef TDynamicTypeInfo inherited;
	
protected:
	virtual  ::System::Typinfo::PTypeInfo __fastcall GetHandle();
	virtual  ::System::TTypeKind __fastcall GetTypeKind();
	virtual int __fastcall GetTypeSize();
	virtual _di_ITypeInfo __fastcall GetBaseType();
	virtual _di_IClassTypeInfo __fastcall GetBaseClass();
	virtual  ::System::TClass __fastcall GetMetaclassType();
	virtual _di_IInterfacesInfo __fastcall GetDeclaredInterfaces();
	virtual _di_IInterfacesInfo __fastcall GetInterfaces();
protected:
	/* TVirtualObjectInfo.Create */ inline __fastcall TDynamicClassTypeInfo() : TDynamicTypeInfo() { }
	
public:
	/* TVirtualObjectInfo.Destroy */ inline __fastcall virtual ~TDynamicClassTypeInfo() { }
	
private:
	void *__IClassTypeInfo;	// IClassTypeInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {48C85C75-8318-4568-B89A-59537017CC05}
	operator _di_IClassTypeInfo()
	{
		_di_IClassTypeInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IClassTypeInfo*(void) { return (IClassTypeInfo*)&__IClassTypeInfo; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define CStringTypes ( ::System::Set< ::System::TTypeKind,  ::System::TTypeKind::tkUnknown,  ::System::TTypeKind::tkMRecord>() <<  ::System::TTypeKind::tkString <<  ::System::TTypeKind::tkLString <<  ::System::TTypeKind::tkUString )
extern DELPHI_PACKAGE  ::System::Sysutils::TFormatSettings USFormatSettings;
extern DELPHI_PACKAGE bool GReleaseContxtOnShutdown;
extern DELPHI_PACKAGE bool __fastcall SharedGetSingleSubProperty(const _di_ITypeInfo ATypeInfo,  ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_ISinglePropertyInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel);
extern DELPHI_PACKAGE bool __fastcall SharedGetIndexedSubProperty(const _di_ITypeInfo ATypeInfo,  ::System::TObject* &AInstance, const  ::System::UnicodeString AName, /* out */ _di_IIndexedPropertyInfo &AResult, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > > AOnLevel = ( ::System::DelphiInterface< ::Mitov::Containers::Common::TConstProc__4< ::System::TObject*,_di_IMemberInfo, ::System::UnicodeString, ::System::DynamicArray< ::System::UnicodeString> > >)(0x0));
extern DELPHI_PACKAGE void __fastcall SharedGetSinglePropertiesRecursive(const  ::Mitov::Containers::List::_di_IObjectArrayList APrcessedClasses, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__2<_di_ITypeInfo,_di_ISinglePropertiesInfo> > AGetPropertiesProc, const _di_TTypeInfoTypeFilterFunc AAddPropertyProc, const  ::System::DelphiInterface< ::Mitov::Containers::Common::TConstFunc__3<void *,_di_IPropertyInfo,bool> > AProcessSubItemsFilter, const  ::System::DelphiInterface< ::System::Sysutils::TFunc__3<void *, ::System::TObject*,bool> > AProcessCollectionItemsFilter, const _di_ITypeInfo ATypeInfo, void * AInstance, const _di_ISinglePropertiesRecursiveInfo AResult);
extern DELPHI_PACKAGE void __fastcall AddTypeInfoMemberValueChangeNotify(const  ::Mitov::Containers::Common::_di_ITypeInfoChangeNotify AChangeNotify);
extern DELPHI_PACKAGE void __fastcall RemoveTypeInfoMemberValueChangeNotify(const  ::Mitov::Containers::Common::_di_ITypeInfoChangeNotify AChangeNotify);
extern DELPHI_PACKAGE void __fastcall NotifyTypeInfoMemberValueChanges( ::System::TObject* AObject);
extern DELPHI_PACKAGE bool __fastcall InheritsFromClassName(const _di_IClassTypeInfo AClass, const  ::System::UnicodeString AName);
extern DELPHI_PACKAGE  ::System::TObject* __fastcall GetRealTypeInstance( ::System::TObject* AInstance,  ::System::TClass AClassType)/* overload */;
extern DELPHI_PACKAGE  ::System::TObject* __fastcall GetRealTypeInstance( ::System::TObject* AInstance)/* overload */;
extern DELPHI_PACKAGE _di_ITypeInfo __fastcall GetAttributeClassInfo(const _di_ITypeInfo ATypeInfo, const  ::Mitov::Attributes::_di_IAtttributeParameterInfo AAttributeValue);
}	/* namespace Typeinfo */
}	/* namespace Mitov */
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Mitov_TypeinfoHPP

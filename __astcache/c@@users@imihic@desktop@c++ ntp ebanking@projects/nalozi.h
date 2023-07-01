
// **************************************************************************************************** //
//                                                                                                    
//                                          XML Data Binding                                          
//                                                                                                    
//         Generated on: 23.8.2022. 12:27:33                                                          
//       Generated from: C:\Users\imihic\Documents\Embarcadero\Studio\Projects\resources\nalozi.xml   
//   Settings stored in: C:\Users\imihic\Documents\Embarcadero\Studio\Projects\resources\nalozi.xdb   
//                                                                                                    
// **************************************************************************************************** //

#ifndef   naloziH
#define   naloziH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLnaloziType;
typedef System::DelphiInterface<IXMLnaloziType> _di_IXMLnaloziType;
__interface IXMLnalogType;
typedef System::DelphiInterface<IXMLnalogType> _di_IXMLnalogType;
__interface IXMLnalogTypeList;
typedef System::DelphiInterface<IXMLnalogTypeList> _di_IXMLnalogTypeList;
__interface IXMLnalogUJPType;
typedef System::DelphiInterface<IXMLnalogUJPType> _di_IXMLnalogUJPType;
__interface IXMLnalogUJPTypeList;
typedef System::DelphiInterface<IXMLnalogUJPTypeList> _di_IXMLnalogUJPTypeList;

// IXMLnaloziType 

__interface INTERFACE_UUID("{A988F3BA-56A6-4ECC-ADF2-4ED3D90349FC}") IXMLnaloziType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual _di_IXMLnalogTypeList __fastcall Get_nalog() = 0;
  virtual _di_IXMLnalogUJPTypeList __fastcall Get_nalogUJP() = 0;
  // Methods & Properties 
  __property _di_IXMLnalogTypeList nalog = { read=Get_nalog };
  __property _di_IXMLnalogUJPTypeList nalogUJP = { read=Get_nalogUJP };
};

// IXMLnalogType 

__interface INTERFACE_UUID("{E6F05CE0-D38B-43F5-ACA9-135F1E299F97}") IXMLnalogType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_primatelj() = 0;
  virtual System::UnicodeString __fastcall Get_adresaPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_mjestoPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_drzavaPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_racunPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_iznos() = 0;
  virtual System::UnicodeString __fastcall Get_pozivNaBroj() = 0;
  virtual System::UnicodeString __fastcall Get_svrhaDoznake() = 0;
  virtual void __fastcall Set_primatelj(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_adresaPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_mjestoPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_drzavaPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_racunPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_iznos(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_pozivNaBroj(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_svrhaDoznake(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString primatelj = { read=Get_primatelj, write=Set_primatelj };
  __property System::UnicodeString adresaPrimatelja = { read=Get_adresaPrimatelja, write=Set_adresaPrimatelja };
  __property System::UnicodeString mjestoPrimatelja = { read=Get_mjestoPrimatelja, write=Set_mjestoPrimatelja };
  __property System::UnicodeString drzavaPrimatelja = { read=Get_drzavaPrimatelja, write=Set_drzavaPrimatelja };
  __property System::UnicodeString racunPrimatelja = { read=Get_racunPrimatelja, write=Set_racunPrimatelja };
  __property System::UnicodeString iznos = { read=Get_iznos, write=Set_iznos };
  __property System::UnicodeString pozivNaBroj = { read=Get_pozivNaBroj, write=Set_pozivNaBroj };
  __property System::UnicodeString svrhaDoznake = { read=Get_svrhaDoznake, write=Set_svrhaDoznake };
};

// IXMLnalogTypeList 

__interface INTERFACE_UUID("{924464D4-1745-4775-B014-3205FAC7E6E5}") IXMLnalogTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLnalogType __fastcall Add() = 0;
  virtual _di_IXMLnalogType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLnalogType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLnalogType Items[int Index] = { read=Get_Item /* default */ };
};

// IXMLnalogUJPType 

__interface INTERFACE_UUID("{DBD4D946-748B-4613-A2F0-7A79FA5E3E1D}") IXMLnalogUJPType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_primatelj() = 0;
  virtual System::UnicodeString __fastcall Get_adresaPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_mjestoPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_drzavaPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_racunPrimatelja() = 0;
  virtual System::UnicodeString __fastcall Get_iznos() = 0;
  virtual System::UnicodeString __fastcall Get_vrstaPrihoda() = 0;
  virtual System::UnicodeString __fastcall Get_sifraOpcine() = 0;
  virtual System::UnicodeString __fastcall Get_pozivNaBroj() = 0;
  virtual System::UnicodeString __fastcall Get_svrhaDoznake() = 0;
  virtual void __fastcall Set_primatelj(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_adresaPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_mjestoPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_drzavaPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_racunPrimatelja(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_iznos(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_vrstaPrihoda(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_sifraOpcine(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_pozivNaBroj(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_svrhaDoznake(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString primatelj = { read=Get_primatelj, write=Set_primatelj };
  __property System::UnicodeString adresaPrimatelja = { read=Get_adresaPrimatelja, write=Set_adresaPrimatelja };
  __property System::UnicodeString mjestoPrimatelja = { read=Get_mjestoPrimatelja, write=Set_mjestoPrimatelja };
  __property System::UnicodeString drzavaPrimatelja = { read=Get_drzavaPrimatelja, write=Set_drzavaPrimatelja };
  __property System::UnicodeString racunPrimatelja = { read=Get_racunPrimatelja, write=Set_racunPrimatelja };
  __property System::UnicodeString iznos = { read=Get_iznos, write=Set_iznos };
  __property System::UnicodeString vrstaPrihoda = { read=Get_vrstaPrihoda, write=Set_vrstaPrihoda };
  __property System::UnicodeString sifraOpcine = { read=Get_sifraOpcine, write=Set_sifraOpcine };
  __property System::UnicodeString pozivNaBroj = { read=Get_pozivNaBroj, write=Set_pozivNaBroj };
  __property System::UnicodeString svrhaDoznake = { read=Get_svrhaDoznake, write=Set_svrhaDoznake };
};

// IXMLnalogUJPTypeList 

__interface INTERFACE_UUID("{59B3E121-636E-45D4-86C4-8DDABD09BF5A}") IXMLnalogUJPTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLnalogUJPType __fastcall Add() = 0;
  virtual _di_IXMLnalogUJPType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLnalogUJPType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLnalogUJPType Items[int Index] = { read=Get_Item /* default */ };
};

// Forward Decls 

class TXMLnaloziType;
class TXMLnalogType;
class TXMLnalogTypeList;
class TXMLnalogUJPType;
class TXMLnalogUJPTypeList;

// TXMLnaloziType 

class TXMLnaloziType : public Xml::Xmldoc::TXMLNode, public IXMLnaloziType
{
  __IXMLNODE_IMPL__
private:
  _di_IXMLnalogTypeList Fnalog;
  _di_IXMLnalogUJPTypeList FnalogUJP;
protected:
  // IXMLnaloziType 
  virtual _di_IXMLnalogTypeList __fastcall Get_nalog();
  virtual _di_IXMLnalogUJPTypeList __fastcall Get_nalogUJP();
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLnalogType 

class TXMLnalogType : public Xml::Xmldoc::TXMLNode, public IXMLnalogType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLnalogType 
  virtual System::UnicodeString __fastcall Get_primatelj();
  virtual System::UnicodeString __fastcall Get_adresaPrimatelja();
  virtual System::UnicodeString __fastcall Get_mjestoPrimatelja();
  virtual System::UnicodeString __fastcall Get_drzavaPrimatelja();
  virtual System::UnicodeString __fastcall Get_racunPrimatelja();
  virtual System::UnicodeString __fastcall Get_iznos();
  virtual System::UnicodeString __fastcall Get_pozivNaBroj();
  virtual System::UnicodeString __fastcall Get_svrhaDoznake();
  virtual void __fastcall Set_primatelj(System::UnicodeString Value);
  virtual void __fastcall Set_adresaPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_mjestoPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_drzavaPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_racunPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_iznos(System::UnicodeString Value);
  virtual void __fastcall Set_pozivNaBroj(System::UnicodeString Value);
  virtual void __fastcall Set_svrhaDoznake(System::UnicodeString Value);
};

// TXMLnalogTypeList 

class TXMLnalogTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLnalogTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLnalogTypeList 
  virtual _di_IXMLnalogType __fastcall Add();
  virtual _di_IXMLnalogType __fastcall Insert(const int Index);

  virtual _di_IXMLnalogType __fastcall Get_Item(int Index);
};

// TXMLnalogUJPType 

class TXMLnalogUJPType : public Xml::Xmldoc::TXMLNode, public IXMLnalogUJPType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLnalogUJPType 
  virtual System::UnicodeString __fastcall Get_primatelj();
  virtual System::UnicodeString __fastcall Get_adresaPrimatelja();
  virtual System::UnicodeString __fastcall Get_mjestoPrimatelja();
  virtual System::UnicodeString __fastcall Get_drzavaPrimatelja();
  virtual System::UnicodeString __fastcall Get_racunPrimatelja();
  virtual System::UnicodeString __fastcall Get_iznos();
  virtual System::UnicodeString __fastcall Get_vrstaPrihoda();
  virtual System::UnicodeString __fastcall Get_sifraOpcine();
  virtual System::UnicodeString __fastcall Get_pozivNaBroj();
  virtual System::UnicodeString __fastcall Get_svrhaDoznake();
  virtual void __fastcall Set_primatelj(System::UnicodeString Value);
  virtual void __fastcall Set_adresaPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_mjestoPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_drzavaPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_racunPrimatelja(System::UnicodeString Value);
  virtual void __fastcall Set_iznos(System::UnicodeString Value);
  virtual void __fastcall Set_vrstaPrihoda(System::UnicodeString Value);
  virtual void __fastcall Set_sifraOpcine(System::UnicodeString Value);
  virtual void __fastcall Set_pozivNaBroj(System::UnicodeString Value);
  virtual void __fastcall Set_svrhaDoznake(System::UnicodeString Value);
};

// TXMLnalogUJPTypeList 

class TXMLnalogUJPTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLnalogUJPTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLnalogUJPTypeList 
  virtual _di_IXMLnalogUJPType __fastcall Add();
  virtual _di_IXMLnalogUJPType __fastcall Insert(const int Index);

  virtual _di_IXMLnalogUJPType __fastcall Get_Item(int Index);
};

// Global Functions 

_di_IXMLnaloziType __fastcall Getnalozi(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLnaloziType __fastcall Getnalozi(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLnaloziType __fastcall Loadnalozi(const System::UnicodeString& FileName);
_di_IXMLnaloziType __fastcall  Newnalozi();

#define TargetNamespace ""

#endif
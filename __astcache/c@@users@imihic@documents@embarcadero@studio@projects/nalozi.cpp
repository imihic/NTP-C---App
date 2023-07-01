
// **************************************************************************************************** //
//                                                                                                    
//                                          XML Data Binding                                          
//                                                                                                    
//         Generated on: 23.8.2022. 12:27:33                                                          
//       Generated from: C:\Users\imihic\Documents\Embarcadero\Studio\Projects\resources\nalozi.xml   
//   Settings stored in: C:\Users\imihic\Documents\Embarcadero\Studio\Projects\resources\nalozi.xdb   
//                                                                                                    
// **************************************************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "nalozi.h"


// Global Functions 

_di_IXMLnaloziType __fastcall Getnalozi(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLnaloziType) Doc->GetDocBinding("nalozi", __classid(TXMLnaloziType), TargetNamespace);
};

_di_IXMLnaloziType __fastcall Getnalozi(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getnalozi(DocIntf);
};

_di_IXMLnaloziType __fastcall Loadnalozi(const System::UnicodeString& FileName)
{
  return (_di_IXMLnaloziType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("nalozi", __classid(TXMLnaloziType), TargetNamespace);
};

_di_IXMLnaloziType __fastcall  Newnalozi()
{
  return (_di_IXMLnaloziType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("nalozi", __classid(TXMLnaloziType), TargetNamespace);
};

// TXMLnaloziType 

void __fastcall TXMLnaloziType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("nalog"), __classid(TXMLnalogType));
  RegisterChildNode(System::UnicodeString("nalogUJP"), __classid(TXMLnalogUJPType));
  CollectionCreater<_di_IXMLnalogTypeList, TXMLnalogTypeList, IXMLnalogType>::DoCreate(this, Fnalog, "nalog");
  CollectionCreater<_di_IXMLnalogUJPTypeList, TXMLnalogUJPTypeList, IXMLnalogUJPType>::DoCreate(this, FnalogUJP, "nalogUJP");
  Xml::Xmldoc::TXMLNode::AfterConstruction();
};

_di_IXMLnalogTypeList __fastcall TXMLnaloziType::Get_nalog()
{
  return (_di_IXMLnalogTypeList) Fnalog;
};

_di_IXMLnalogUJPTypeList __fastcall TXMLnaloziType::Get_nalogUJP()
{
  return (_di_IXMLnalogUJPTypeList) FnalogUJP;
};

// TXMLnalogType 

System::UnicodeString __fastcall TXMLnalogType::Get_primatelj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("primatelj")]->Text;
};

void __fastcall TXMLnalogType::Set_primatelj(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("primatelj")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_adresaPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("adresaPrimatelja")]->Text;
};

void __fastcall TXMLnalogType::Set_adresaPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("adresaPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_mjestoPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("mjestoPrimatelja")]->Text;
};

void __fastcall TXMLnalogType::Set_mjestoPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("mjestoPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_drzavaPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("drzavaPrimatelja")]->Text;
};

void __fastcall TXMLnalogType::Set_drzavaPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("drzavaPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_racunPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("racunPrimatelja")]->Text;
};

void __fastcall TXMLnalogType::Set_racunPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("racunPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_iznos()
{
  return GetChildNodes()->Nodes[System::UnicodeString("iznos")]->Text;
};

void __fastcall TXMLnalogType::Set_iznos(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("iznos")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_pozivNaBroj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("pozivNaBroj")]->Text;
};

void __fastcall TXMLnalogType::Set_pozivNaBroj(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("pozivNaBroj")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogType::Get_svrhaDoznake()
{
  return GetChildNodes()->Nodes[System::UnicodeString("svrhaDoznake")]->Text;
};

void __fastcall TXMLnalogType::Set_svrhaDoznake(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("svrhaDoznake")]->NodeValue = Value;
};

// TXMLnalogTypeList 

_di_IXMLnalogType __fastcall TXMLnalogTypeList::Add()
{
  return (_di_IXMLnalogType) AddItem(-1);
};

_di_IXMLnalogType __fastcall TXMLnalogTypeList::Insert(const int Index)
{
  return (_di_IXMLnalogType) AddItem(Index);
};

_di_IXMLnalogType __fastcall TXMLnalogTypeList::Get_Item(int Index)
{
  return (_di_IXMLnalogType) List->Nodes[Index];
};

// TXMLnalogUJPType 

System::UnicodeString __fastcall TXMLnalogUJPType::Get_primatelj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("primatelj")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_primatelj(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("primatelj")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_adresaPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("adresaPrimatelja")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_adresaPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("adresaPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_mjestoPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("mjestoPrimatelja")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_mjestoPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("mjestoPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_drzavaPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("drzavaPrimatelja")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_drzavaPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("drzavaPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_racunPrimatelja()
{
  return GetChildNodes()->Nodes[System::UnicodeString("racunPrimatelja")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_racunPrimatelja(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("racunPrimatelja")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_iznos()
{
  return GetChildNodes()->Nodes[System::UnicodeString("iznos")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_iznos(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("iznos")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_vrstaPrihoda()
{
  return GetChildNodes()->Nodes[System::UnicodeString("vrstaPrihoda")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_vrstaPrihoda(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("vrstaPrihoda")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_sifraOpcine()
{
  return GetChildNodes()->Nodes[System::UnicodeString("sifraOpcine")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_sifraOpcine(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("sifraOpcine")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_pozivNaBroj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("pozivNaBroj")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_pozivNaBroj(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("pozivNaBroj")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLnalogUJPType::Get_svrhaDoznake()
{
  return GetChildNodes()->Nodes[System::UnicodeString("svrhaDoznake")]->Text;
};

void __fastcall TXMLnalogUJPType::Set_svrhaDoznake(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("svrhaDoznake")]->NodeValue = Value;
};

// TXMLnalogUJPTypeList 

_di_IXMLnalogUJPType __fastcall TXMLnalogUJPTypeList::Add()
{
  return (_di_IXMLnalogUJPType) AddItem(-1);
};

_di_IXMLnalogUJPType __fastcall TXMLnalogUJPTypeList::Insert(const int Index)
{
  return (_di_IXMLnalogUJPType) AddItem(Index);
};

_di_IXMLnalogUJPType __fastcall TXMLnalogUJPTypeList::Get_Item(int Index)
{
  return (_di_IXMLnalogUJPType) List->Nodes[Index];
};

// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// GetID @ 14b403500

long64 __thiscall FDS_StringBaseID::GetID(FDS_StringBaseID *this)

{
  return this->ID;
}

// StaticStruct @ 14b59fa60

UScriptStruct * __cdecl FDS_StringBaseID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringBaseID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StringBaseID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StringBaseID,(UObject *)pUVar1,
                         L"DS_StringBaseID");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StringBaseID.OuterSingleton;
}

// Str @ 14b98cef0

FString * __thiscall FDS_StringBaseID::Str(FDS_StringBaseID *this)

{
  bool bVar1;
  FDS_StringBaseTableRow *this_00;
  longlong lVar2;
  FString *pFVar3;
  
  if (this->ID == 0) {
    return FDS_StringIDWrapper::Empty;
  }
  this_00 = FDS_StringBaseTableRow::GetRef(this->ID,true);
  bVar1 = FDS_StringBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    lVar2 = (**(code **)this->_padding_)(this);
    pFVar3 = FDS_StringIDWrapper::InValid;
    if (lVar2 == 0) {
      pFVar3 = FDS_StringIDWrapper::Empty;
    }
    return pFVar3;
  }
  return &this_00->Text;
}


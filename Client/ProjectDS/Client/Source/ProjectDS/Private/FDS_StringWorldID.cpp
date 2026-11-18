// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// GetID @ 14b4f0000

long64 __thiscall FDS_StringWorldID::GetID(FDS_StringWorldID *this)

{
  return this->ID;
}

// StaticStruct @ 14b5a6530

UScriptStruct * __cdecl FDS_StringWorldID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringWorldID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StringWorldID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StringWorldID,(UObject *)pUVar1,
                         L"DS_StringWorldID");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StringWorldID.OuterSingleton;
}

// Str @ 14b98cfa0

FString * __thiscall FDS_StringWorldID::Str(FDS_StringWorldID *this)

{
  bool bVar1;
  FDS_StringWorldTableRow *this_00;
  longlong lVar2;
  FString *pFVar3;
  
  if (this->ID == 0) {
    return FDS_StringIDWrapper::Empty;
  }
  this_00 = FDS_StringWorldTableRow::GetRef(this->ID,true);
  bVar1 = FDS_StringWorldTableRow::IsValid(this_00);
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


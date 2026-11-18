// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// GetID @ 14b546b10

long64 __thiscall FDS_StringQuestID::GetID(FDS_StringQuestID *this)

{
  return this->ID;
}

// StaticStruct @ 14b5a1a40

UScriptStruct * __cdecl FDS_StringQuestID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringQuestID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StringQuestID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StringQuestID,(UObject *)pUVar1,
                         L"DS_StringQuestID");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StringQuestID.OuterSingleton;
}

// Str @ 14b9c6b00

FString * __thiscall FDS_StringQuestID::Str(FDS_StringQuestID *this)

{
  bool bVar1;
  FDS_StringQuestTableRow *this_00;
  longlong lVar2;
  FString *pFVar3;
  
  if (this->ID == 0) {
    return FDS_StringIDWrapper::Empty;
  }
  this_00 = FDS_StringQuestTableRow::GetRef(this->ID,true);
  bVar1 = FDS_StringQuestTableRow::IsValid(this_00);
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


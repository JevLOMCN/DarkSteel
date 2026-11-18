// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 5

// StaticStruct @ 14e9bce60

UScriptStruct * __cdecl FLocalizableMessageParameterEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry,
                         (UObject *)pUVar1,L"LocalizableMessageParameterEntry");
  }
  return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.OuterSingleton;
}

// FLocalizableMessageParameterEntry @ 14e9be9d0

FLocalizableMessageParameterEntry * __thiscall
FLocalizableMessageParameterEntry::FLocalizableMessageParameterEntry
          (FLocalizableMessageParameterEntry *this,FString *param_1,FInstancedStruct *param_2)

{
  ::FString::FString(&this->Key,param_1);
  (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Value).StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (&this->Value,(param_2->ScriptStruct).field0_0x0.DebugPtr,param_2->StructMemory);
  return this;
}

// FLocalizableMessageParameterEntry @ 14e9bea20

FLocalizableMessageParameterEntry * __thiscall
FLocalizableMessageParameterEntry::FLocalizableMessageParameterEntry
          (FLocalizableMessageParameterEntry *this)

{
  (this->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Key).Data.ArrayNum = 0;
  (this->Key).Data.ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&this->Value);
  return this;
}

// ~FLocalizableMessageParameterEntry @ 14e9becc0

void __thiscall
FLocalizableMessageParameterEntry::~FLocalizableMessageParameterEntry
          (FLocalizableMessageParameterEntry *this)

{
  FScriptContainerElement *pFVar1;
  
  FInstancedStruct::Reset(&this->Value);
  pFVar1 = (this->Key).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator== @ 14e9beed0

bool __thiscall
FLocalizableMessageParameterEntry::operator==
          (FLocalizableMessageParameterEntry *this,FLocalizableMessageParameterEntry *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->Key).Data.ArrayNum;
  iVar1 = (param_1->Key).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14e9bef0a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Key).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14e9bef0a:
  bVar3 = FInstancedStruct::Identical(&this->Value,&param_1->Value,0);
  if (!bVar3) {
    return false;
  }
  return true;
}


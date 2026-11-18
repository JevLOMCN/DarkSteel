// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// StaticStruct @ 146f12400

UScriptStruct * __cdecl FAIDataProviderStructValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderStructValue,(UObject *)pUVar1,
                         L"AIDataProviderStructValue");
  }
  return Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.OuterSingleton;
}

// IsMatchingType @ 146f12440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAIDataProviderStructValue::IsMatchingType(FAIDataProviderStructValue *this,FProperty *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FString *this_00;
  bool bVar4;
  void *local_18 [2];
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    this_00 = (FString *)(**(code **)(param_1->_padding_ + 0x68))(param_1,local_18,0);
    ::FString::RemoveAt(this_00,0,8,No);
    pFVar2 = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (this_00->Data).ArrayNum;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    iVar1 = (this->StructName).Data.ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        bVar4 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)pFVar2,
                           (wchar_t *)(this->StructName).Data.AllocatorInstance.Data);
        bVar4 = iVar3 == 0;
      }
    }
    else {
      bVar4 = iVar1 + iVar3 == 1;
    }
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return bVar4;
  }
  return false;
}


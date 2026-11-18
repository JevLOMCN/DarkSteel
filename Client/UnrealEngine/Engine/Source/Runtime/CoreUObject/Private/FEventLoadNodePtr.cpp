// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// HumanReadableStringForDebugging @ 141efae50

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

FString * __thiscall
FEventLoadNodePtr::HumanReadableStringForDebugging
          (FEventLoadNodePtr *this,FString *__return_storage_ptr__)

{
  EEventLoadNode EVar1;
  FAsyncPackage *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FName *pFVar6;
  FName FVar7;
  FName FVar8;
  FName local_res8;
  FString local_58;
  FString local_48;
  FName local_38 [2];
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  if (((this->WaitingPackage).Package == (FAsyncPackage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x37,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = (this->WaitingPackage).Package;
  EVar1 = this->Phase;
  if ((this->ImportOrExportIndex).Index == 0) {
    if (((EVar1 != ImportOrExport_Create) && (EVar1 != ImportOrExport_Serialize)) &&
       ((EVar1 != Export_StartIO &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x441,L""), FVar8 = FVar7, bVar4)))) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    if ((((EVar1 != ImportOrExport_Create) && (EVar1 != ImportOrExport_Serialize)) &&
        (EVar1 != Export_StartIO)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x460,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    pFVar6 = (FName *)FAsyncPackage::GetDebuggingPath
                                (pFVar2,&local_58,(FPackageIndex)(this->ImportOrExportIndex).Index);
    FVar8 = FVar7;
    if (local_38 != pFVar6) {
      FVar8 = *pFVar6;
      pFVar6->ComparisonIndex = 0;
      pFVar6->Number = 0;
      pFVar6[1].ComparisonIndex = 0;
      pFVar6[1].Number = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = (this->WaitingPackage).Package;
  if (pFVar2 != (FAsyncPackage *)0x0) {
    FVar7 = (pFVar2->Desc).Name;
  }
  local_res8 = FVar7;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %d %s   %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (FVar8 != (FName)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return __return_storage_ptr__;
}


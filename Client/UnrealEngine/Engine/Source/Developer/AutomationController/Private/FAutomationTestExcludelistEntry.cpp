// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 2

// operator= @ 148c54720

FAutomationTestExcludelistEntry * __thiscall
FAutomationTestExcludelistEntry::operator=
          (FAutomationTestExcludelistEntry *this,FAutomationTestExcludelistEntry *param_1)

{
  ::FString::operator=(&this->FullTestName,&param_1->FullTestName);
  this->bIsPropagated = param_1->bIsPropagated;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->Platforms,&param_1->Platforms);
  this->Map = param_1->Map;
  this->Test = param_1->Test;
  this->Reason = param_1->Reason;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&this->RHIs,&param_1->RHIs);
  this->Warn = param_1->Warn;
  return this;
}

// SetPropagation @ 148c6a860

void __thiscall
FAutomationTestExcludelistEntry::SetPropagation
          (FAutomationTestExcludelistEntry *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::TrimStartAndEnd(param_1,&local_18);
  pFVar3 = ::FString::ToLower(pFVar3,&local_28);
  iVar2 = (this->FullTestName).Data.ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      bVar4 = false;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->FullTestName).Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar4 = iVar2 != 0;
    }
  }
  else {
    bVar4 = iVar1 + iVar2 != 1;
  }
  this->bIsPropagated = bVar4;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}


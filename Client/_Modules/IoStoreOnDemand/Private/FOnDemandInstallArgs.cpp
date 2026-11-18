// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// ~FOnDemandInstallArgs @ 1445a9040

void __thiscall UE::IoStore::FOnDemandInstallArgs::~FOnDemandInstallArgs(FOnDemandInstallArgs *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  
  pwVar3 = (this->DebugName).Chars;
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = pwVar3 + -4;
    LOCK();
    iVar1 = *(int *)pwVar3;
    *(int *)pwVar3 = *(int *)pwVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar3);
    }
  }
  FOnDemandContentHandle::~FOnDemandContentHandle(&this->ContentHandle);
  pFVar2 = (this->PackageIds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->TagSets).AllocatorInstance.Data,(this->TagSets).ArrayNum);
  pFVar2 = (this->TagSets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MountId).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// operator() @ 148bc51c0

void __thiscall
TDefaultDelete<UE::IoStore::FOnDemandToc>::operator()
          (TDefaultDelete<UE::IoStore::FOnDemandToc> *this,FOnDemandToc *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FOnDemandToc *)0x0) {
    DestructItems<UE::IoStore::FOnDemandTocTagSet,int>
              ((FOnDemandTocTagSet *)(param_1->TagSets).AllocatorInstance.Data,
               (param_1->TagSets).ArrayNum);
    pFVar1 = (param_1->TagSets).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>
              ((FOnDemandTocAdditionalFile *)(param_1->AdditionalFiles).AllocatorInstance.Data,
               (param_1->AdditionalFiles).ArrayNum);
    pFVar1 = (param_1->AdditionalFiles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int>
              ((FOnDemandTocContainerEntry *)(param_1->Containers).AllocatorInstance.Data,
               (param_1->Containers).ArrayNum);
    pFVar1 = (param_1->Containers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Meta).TargetPlatform.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Meta).BuildVersion.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Header).HostGroupName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Header).ChunksDirectory.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Header).CompressionFormat.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xa0);
  }
  return;
}


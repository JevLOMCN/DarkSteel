// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~Params @ 14ee255c0

void __thiscall UE::Online::FStartMatchmaking::Params::~Params(Params *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<UE::Online::FFindSessionsSearchFilter,int>
            ((FFindSessionsSearchFilter *)(this->SessionSearchFilters).AllocatorInstance.Data,
             (this->SessionSearchFilters).ArrayNum);
  pFVar1 = (this->SessionSearchFilters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SessionCreationParameters).SessionSettings.CustomSettings.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SessionCreationParameters).SessionSettings.CustomSettings.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SessionCreationParameters).SessionSettings.CustomSettings);
  pFVar1 = (this->SessionCreationParameters).SessionIdOverride.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}


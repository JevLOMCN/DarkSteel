// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ~FOnlineSearchSettings @ 14ec55fa0

void __thiscall FOnlineSearchSettings::~FOnlineSearchSettings(FOnlineSearchSettings *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SearchParams).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SearchParams).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchParams);
  return;
}


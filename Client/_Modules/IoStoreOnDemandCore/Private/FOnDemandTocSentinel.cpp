// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 1

// IsValid @ 14458f250

bool __thiscall UE::IoStore::FOnDemandTocSentinel::IsValid(FOnDemandTocSentinel *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)this->Data - SentinelImg._0_8_;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(this->Data + 8) - SentinelImg._8_8_;
  }
  return lVar1 == 0;
}


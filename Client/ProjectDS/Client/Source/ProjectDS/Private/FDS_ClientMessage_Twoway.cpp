// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ~FDS_ClientMessage_Twoway @ 14b8b30f0

void __thiscall FDS_ClientMessage_Twoway::~FDS_ClientMessage_Twoway(FDS_ClientMessage_Twoway *this)

{
  void *pvVar1;
  
  client_msg_twoway::ClientMessagesTwoway::~ClientMessagesTwoway(&this->clientMsg);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->FailDel);
  pvVar1 = *(void **)&(this->FailDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FailDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SuccessDel);
  pvVar1 = *(void **)&(this->SuccessDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SuccessDel);
  return;
}


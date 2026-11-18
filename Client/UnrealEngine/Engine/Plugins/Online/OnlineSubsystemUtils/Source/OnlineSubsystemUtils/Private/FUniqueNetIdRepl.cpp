// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// FUniqueNetIdRepl @ 14ec530a0

FUniqueNetIdRepl * __thiscall
FUniqueNetIdRepl::FUniqueNetIdRepl
          (FUniqueNetIdRepl *this,TSharedRef<FUniqueNetId_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->ReplicationBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicationBytes).ArrayNum = 0;
  (this->ReplicationBytes).ArrayMax = 0;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ~FOnlineSession @ 14ec56070

void __thiscall FOnlineSession::~FOnlineSession(FOnlineSession *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionInfo).SharedReferenceCount.ReferenceController);
  FOnlineSessionSettings::~FOnlineSessionSettings(&this->SessionSettings);
  pFVar1 = (this->OwningUserName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningUserId).SharedReferenceCount.ReferenceController);
  return;
}


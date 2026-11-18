// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~FPreparedServiceChanges @ 14ee251e0

void __thiscall
UE::Online::FLobbyClientData::FPreparedServiceChanges::~FPreparedServiceChanges
          (FPreparedServiceChanges *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,enum_UE::Online::ELobbyMemberLeaveReason>,int>
            ((TTuple<TSharedRef<UE::Online::FLobbyMemberInternal,1>,UE::Online::ELobbyMemberLeaveReason>
              *)(this->LeavingMembers).AllocatorInstance.Data,(this->LeavingMembers).ArrayNum);
  pFVar1 = (this->LeavingMembers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
            ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
             (this->UpdatedMemberDataStorage).AllocatorInstance.Data,
             (this->UpdatedMemberDataStorage).ArrayNum);
  pFVar1 = (this->UpdatedMemberDataStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<UE::Online::FLobbyMemberInternal,1>,int>
            ((TSharedRef<UE::Online::FLobbyMemberInternal,1> *)
             (this->NewMemberDataStorage).AllocatorInstance.Data,
             (this->NewMemberDataStorage).ArrayNum);
  pFVar1 = (this->NewMemberDataStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToDebugString @ 14ec15510

FString * __thiscall
IOnlinePartyJoinInfo::ToDebugString(IOnlinePartyJoinInfo *this,FString *__return_storage_ptr__)

{
  undefined8 *puVar1;
  void *local_68 [2];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  void *local_48 [2];
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  (**(code **)(*(longlong *)this + 0x60))();
  (**(code **)(*(longlong *)this + 0x50))(this);
  (**(code **)(*(longlong *)this + 0x48))(this);
  (**(code **)(*(longlong *)this + 0x40))(this);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x10))(this,local_38);
  (**(code **)(*(longlong *)*puVar1 + 0x30))((longlong *)*puVar1,local_48);
  (**(code **)(*(longlong *)this + 0x28))(this);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x20))(this,local_58);
  (**(code **)(*(longlong *)*puVar1 + 0x38))((longlong *)*puVar1,local_68);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"SourceUserId(%s) SourceDisplayName(%s) PartyId(%s) HasKey(%d) HasPassword(%d) IsAcceptingMembers(%d) NotAcceptingReason(%d)"
            );
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return __return_storage_ptr__;
}


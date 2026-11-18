// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// InitializeDependency<UCommonInputSubsystem> @ 14a79bbe0

UCommonInputSubsystem * __thiscall
FSubsystemCollectionBase::InitializeDependency<UCommonInputSubsystem>
          (FSubsystemCollectionBase *this)

{
  int iVar1;
  UCommonInputSubsystem *pUVar2;
  UClass *pUVar3;
  UClass *local_res10 [3];
  
  local_res10[0] = Z_Construct_UClass_UCommonInputSubsystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar2 = (UCommonInputSubsystem *)InitializeDependency(this,(TSubclassOf<USubsystem>)local_res10);
  if (pUVar2 != (UCommonInputSubsystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UCommonInputSubsystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonInputSubsystem *)0x0;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// GetData @ 14a0e2d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar * __thiscall
TRigVMLazyValueBase::GetData(TRigVMLazyValueBase *this,FRigVMExecuteContext *param_1)

{
  uint uVar1;
  FRigVMExtendedExecuteContext *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  
  if (this->MemoryHandle == (FRigVMMemoryHandle *)0x0) {
    return (uchar *)0x0;
  }
  if (this->MemoryHandle->LazyBranch != (FRigVMLazyBranch *)0x0) {
    if (param_1->ExtendedExecuteContext == (FRigVMExtendedExecuteContext *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.ExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x7c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar4)();
        return puVar6;
      }
    }
    pFVar2 = param_1->ExtendedExecuteContext;
    pFVar3 = this->MemoryHandle;
    uVar1 = this->SliceHash;
    if (pFVar3->LazyBranch == (FRigVMLazyBranch *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLazy()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x88,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar4)();
        return puVar6;
      }
    }
    FRigVMLazyBranch::ExecuteIfRequired(pFVar3->LazyBranch,pFVar2,uVar1);
  }
  pFVar3 = this->MemoryHandle;
  if ((this->bFollowPropertyPath != false) && (pFVar3->PropertyPath != (FRigVMPropertyPath *)0x0)) {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
    return puVar6;
  }
  return pFVar3->Ptr;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// DestroyObject @ 14a085c10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>::operator=
              (pTVar1->RefValue,&pTVar1->OriginalValue);
    pFVar2 = (pTVar1->OriginalValue).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x18);
    return;
  }
  return;
}

// DestroyObject @ 14a085c70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<FName,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FName,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<FName,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FName,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 14a0d5dc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRigVMRegistry_NoLock,SharedPointerInternals::DefaultDeleter<FRigVMRegistry_NoLock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRigVMRegistry_NoLock,SharedPointerInternals::DefaultDeleter<FRigVMRegistry_NoLock>,1>
                *this)

{
  FRigVMRegistry_NoLock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRigVMRegistry_NoLock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a0d5dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}


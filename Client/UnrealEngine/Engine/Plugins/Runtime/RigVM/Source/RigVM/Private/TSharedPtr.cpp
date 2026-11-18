// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// TSharedPtr<FStructOnScope,1><FStructOnScope> @ 14a072e10

TSharedPtr<FStructOnScope,1> * __thiscall
TSharedPtr<FStructOnScope,1>::TSharedPtr<FStructOnScope,1><FStructOnScope>
          (TSharedPtr<FStructOnScope,1> *this,TRawPtrProxy<FStructOnScope> *param_1)

{
  FStructOnScope *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFStructOnScope__U__DefaultDeleter_VFStructOnScope___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_> @ 14a072e80

TSharedPtr<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,1>
* __thiscall
TSharedPtr<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,1>
::
operator=<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>
          (TSharedPtr<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,1>
           *this,TRawPtrProxy<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>
                 *param_1)

{
  TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TSharedPtr<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,1>
  local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TGuardValue_V__TArray_UFRigVMExternalVariableDef__V__TSizedDefaultAllocator__0CA_____V1___U__DefaultDeleter_U__TGuardValue_V__TArray_UFRigVMExternalVariableDef__V__TSizedDefaultAllocator__0CA_____V1____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object =
         (TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14a072f10

TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> * __thiscall
TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>::
operator=<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *this,
          TRawPtrProxy<TArray<FName,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TArray_VFName__V__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14a07e070

FRigVMRegistry_NoLock * __thiscall
TSharedPtr<FRigVMRegistry_NoLock,1>::operator->(TSharedPtr<FRigVMRegistry_NoLock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRigVMRegistry_NoLock *pFVar3;
  
  if (this->Object != (FRigVMRegistry_NoLock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRigVMRegistry_NoLock *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}


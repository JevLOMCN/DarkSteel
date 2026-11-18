// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// FRuntimeValidation @ 14d4b16c0

FRuntimeValidation * __thiscall
UE::StateTree::Debug::FRuntimeValidation::FRuntimeValidation
          (FRuntimeValidation *this,
          TNotNull<UE::StateTree::Debug::FRuntimeValidationInstanceData_*> param_1)

{
  this->RuntimeValidationData = param_1.Val;
  return this;
}

// GetInstanceData @ 14d4bd8c0

FRuntimeValidationInstanceData * __thiscall
UE::StateTree::Debug::FRuntimeValidation::GetInstanceData(FRuntimeValidation *this)

{
  return this->RuntimeValidationData;
}

// SetContext @ 14d4cfda0

void __thiscall
UE::StateTree::Debug::FRuntimeValidation::SetContext
          (FRuntimeValidation *this,UObject *param_1,UStateTree *param_2,bool param_3)

{
  FRuntimeValidationInstanceData *this_00;
  code *pcVar1;
  UStateTree *this_01;
  bool bVar2;
  FStateTreeInstanceStorage *pFVar3;
  undefined1 auStackX_8 [8];
  UObject *pUStackX_10;
  UStateTree *pUStackX_18;
  undefined1 auStackX_20 [8];
  undefined1 auStack_88 [8];
  FWeakObjectPtr FStack_80;
  FWeakObjectPtr FStack_78;
  UStateTree *pUStack_70;
  UObject *pUStack_68;
  TSharedPtr<FStateTreeInstanceData,1> TStack_60;
  UStateTree **ppUStack_50;
  FRuntimeValidationInstanceData *pFStack_48;
  UObject **ppUStack_40;
  FRuntimeValidationInstanceData *pFStack_38;
  
  this_00 = this->RuntimeValidationData;
  if (this_00 == (FRuntimeValidationInstanceData *)0x0) {
    return;
  }
  pUStackX_10 = param_1;
  pUStackX_18 = param_2;
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FStack_80.ObjectIndex = 0;
  FStack_80.ObjectSerialNumber = 0;
  pUStack_70 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&FStack_80,(FObjectPtr)&pUStack_70);
  pUStack_68 = pUStackX_10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_10);
  }
  FStack_78.ObjectIndex = 0;
  FStack_78.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStack_68 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStack_68);
  }
  FWeakObjectPtr::operator=(&FStack_78,(FObjectPtr)&pUStack_68);
  if (Debug::Private::bRuntimeValidationContext != false) {
    bVar2 = FWeakObjectPtr::IsValid(&(this_00->StateTree).WeakPtr);
    if (bVar2) {
      bVar2 = TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>::UEOpEquals<UStateTree_const_,bool>
                        (&this_00->StateTree,
                         (TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)&FStack_80);
      if ((!bVar2) && (this_00->bInstanceDataWriteAccessAcquired != false)) {
        ppUStack_50 = &pUStackX_18;
        pFStack_48 = this_00;
        `UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext'::__l8::<lambda_1>::
        operator()(&ppUStack_50);
        Debug::Private::bRuntimeValidationContext = false;
      }
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this_00->Owner).WeakPtr);
    if (bVar2) {
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        (&this_00->Owner,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&FStack_78
                        );
      if (!bVar2) {
        ppUStack_40 = &pUStackX_10;
        pFStack_38 = this_00;
        `UE::StateTree::Debug::FRuntimeValidationInstanceData::SetContext'::__l11::<lambda_2>::
        operator()(&ppUStack_40);
        Debug::Private::bRuntimeValidationContext = false;
      }
    }
  }
  FRuntimeValidationInstanceData::ValidateTreeNodes(this_00,pUStackX_18);
  this_01 = pUStackX_18;
  if ((Debug::Private::bRuntimeValidationInstanceData == false) ||
     (pUStackX_18 == (UStateTree *)0x0)) goto LAB_14d4cffd1;
  pFVar3 = FStateTreeInstanceData::GetStorage(&pUStackX_18->DefaultInstanceData);
  bVar2 = FStateTreeInstanceStorage::AreAllInstancesValid(pFVar3);
  if (!bVar2) {
    auStackX_20[0] = 0;
    `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l11::<lambda_1>
    ::operator()(auStackX_20);
    Debug::Private::bRuntimeValidationInstanceData = false;
  }
  UStateTree::GetSharedInstanceData(this_01,&TStack_60);
  if (TStack_60.Object == (FStateTreeInstanceData *)0x0) {
    auStackX_8[0] = 0;
    bVar2 = `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l12::
            <lambda_2>::operator()(auStackX_8);
    if (bVar2) goto LAB_14d4cff75;
  }
  else {
LAB_14d4cff75:
    if (TStack_60.Object == (FStateTreeInstanceData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = FStateTreeInstanceData::GetStorage(TStack_60.Object);
    bVar2 = FStateTreeInstanceStorage::AreAllInstancesValid(pFVar3);
    if (!bVar2) {
      `UE::StateTree::Debug::FRuntimeValidationInstanceData::ValidateInstanceData'::__l17::
      <lambda_3>::operator()(auStack_88);
      Debug::Private::bRuntimeValidationInstanceData = false;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_60.SharedReferenceCount.ReferenceController);
LAB_14d4cffd1:
  this_00->bInstanceDataWriteAccessAcquired =
       (bool)(this_00->bInstanceDataWriteAccessAcquired | param_3);
  (this_00->StateTree).WeakPtr = FStack_80;
  (this_00->Owner).WeakPtr = FStack_78;
  return;
}


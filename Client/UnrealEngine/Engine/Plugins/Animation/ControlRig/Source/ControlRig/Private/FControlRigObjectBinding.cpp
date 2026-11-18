// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// ~FControlRigObjectBinding @ 14a225660

void __thiscall FControlRigObjectBinding::~FControlRigObjectBinding(FControlRigObjectBinding *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FControlRigObjectBinding__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ControlRigUnbind).field_0x8,*(int *)&(this->ControlRigUnbind).field_0x10);
  pvVar1 = *(void **)&(this->ControlRigUnbind).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ControlRigUnbind);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ControlRigBind).field_0x8,*(int *)&(this->ControlRigBind).field_0x10);
  pvVar1 = *(void **)&(this->ControlRigBind).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ControlRigBind);
  return;
}

// BindToObject @ 14a241ed0

void __thiscall
FControlRigObjectBinding::BindToObject(FControlRigObjectBinding *this,UObject *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  UObject *local_res8;
  FDestructionSentinel local_38;
  
  local_res8 = GetBindableObject(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->BoundObject).WeakPtr,(FObjectPtr)&local_res8);
  FWeakObjectPtr::Get(&(this->BoundObject).WeakPtr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ControlRigBind,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->ControlRigBind).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->ControlRigBind).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->ControlRigBind).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->ControlRigBind).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->ControlRigBind).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ControlRigBind,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// GetBindableObject @ 14a25f520

UObject * __cdecl FControlRigObjectBinding::GetBindableObject(UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UClass *local_res8;
  
  while( true ) {
    if (param_1 == (UObject *)0x0) {
      return (UObject *)0x0;
    }
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x738);
      local_res8 = UControlRigComponent::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pUVar4 = (UObject *)(*pcVar2)(param_1,&local_res8);
      if (pUVar4 == (UObject *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x738);
        local_res8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        pUVar4 = (UObject *)(*pcVar2)(param_1,&local_res8);
      }
      return pUVar4;
    }
    pUVar3 = UControlRigComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return param_1;
    }
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) break;
    pUVar3 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return param_1;
    }
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
      return (UObject *)0x0;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_) {
      return (UObject *)0x0;
    }
    param_1 = *(UObject **)&param_1->field_0x20;
  }
  return param_1;
}

// GetBoundObject @ 14a25f980

UObject * __thiscall FControlRigObjectBinding::GetBoundObject(FControlRigObjectBinding *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->BoundObject).WeakPtr);
  return pUVar1;
}

// GetHostingActor @ 14a264450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FControlRigObjectBinding::GetHostingActor(FControlRigObjectBinding *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->BoundObject).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(AActor **)&pUVar2[4].field_0x8;
    }
  }
  return (AActor *)0x0;
}

// IsBoundToObject @ 14a273d80

bool __thiscall
FControlRigObjectBinding::IsBoundToObject(FControlRigObjectBinding *this,UObject *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&(this->BoundObject).WeakPtr);
    pUVar2 = GetBindableObject(param_1);
    if (pUVar1 == pUVar2) {
      return true;
    }
  }
  return false;
}

// OnControlRigBind @ 14a277910

FControlRigBind * __thiscall
FControlRigObjectBinding::OnControlRigBind(FControlRigObjectBinding *this)

{
  return &this->ControlRigBind;
}

// OnControlRigUnbind @ 14a277cb0

FControlRigUnbind * __thiscall
FControlRigObjectBinding::OnControlRigUnbind(FControlRigObjectBinding *this)

{
  return &this->ControlRigUnbind;
}

// UnbindFromObject @ 14a29f030

void __thiscall FControlRigObjectBinding::UnbindFromObject(FControlRigObjectBinding *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FDestructionSentinel local_38;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->BoundObject).WeakPtr = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ControlRigUnbind,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->ControlRigUnbind).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->ControlRigUnbind).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->ControlRigUnbind).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->ControlRigUnbind).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->ControlRigUnbind).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ControlRigUnbind,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}


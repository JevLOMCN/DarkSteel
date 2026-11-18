// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// ~FDS_ISKM_BoidsController_Chicken_Chick @ 14b865a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::~FDS_ISKM_BoidsController_Chicken_Chick
          (FDS_ISKM_BoidsController_Chicken_Chick *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
            ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
            ((FDS_ISKM_BoidsFSM_ExecutionContext *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// Initialize @ 14b87ae50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::Initialize(FDS_ISKM_BoidsController_Chicken_Chick *this)

{
  longlong *plVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakObjectPtr *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  TSharedRef<FWN_StateMachine,1> *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  uint uVar14;
  FWeakObjectPtr local_res10;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  FWN_StateMachine *local_c8;
  FSharedReferencer<1> local_c0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  TSharedRef<FWN_StateMachine,1> local_68;
  FReadAccessScope local_58;
  
  pTVar8 = MakeShared<FWN_StateMachine,1>(&local_68);
  local_c0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_c8 = pTVar8->Object;
  if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar1 = &this->_padding_;
  if ((FWN_StateMachine **)plVar1 != &local_c8) {
    *plVar1 = (longlong)local_c8;
    local_c8 = (FWN_StateMachine *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Idle);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Roaming);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Return);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Follow);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Idle_Idle,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Idle);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Idle_Return,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Return);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Idle_Roam,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Roaming);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Idle_Follow,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Follow);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Return_Idle,FDS_ISKM_BoidState::sName_Return,
             FDS_ISKM_BoidState::sName_Idle);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Roaming_Idle,FDS_ISKM_BoidState::sName_Roaming,
             FDS_ISKM_BoidState::sName_Idle);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Roaming_Follow,FDS_ISKM_BoidState::sName_Roaming,
             FDS_ISKM_BoidState::sName_Follow);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Follow_Idle,FDS_ISKM_BoidState::sName_Follow,
             FDS_ISKM_BoidState::sName_Idle);
  uVar14 = 0;
  bVar5 = false;
  if (0 < (int)this->_padding_) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = *(TReferenceControllerBase<1> **)(this->_padding_ + 8 + lVar13);
      this_00 = *(FWeakObjectPtr **)(this->_padding_ + lVar13);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (FWeakObjectPtr *)0x0) && (bVar6 = FWeakObjectPtr::IsValid(this_00), bVar6)) {
        local_res10 = *this_00;
        pUVar9 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar9 != (UObject *)0x0) {
          pUVar10 = Z_Construct_UClass_AWN_ISKM_BoidsActor_NoRegister();
          iVar2 = (int)pUVar10->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar10->_padding_)) {
            this_00[1].ObjectIndex = 3;
            bVar5 = true;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar14 < (int)this->_padding_);
    if (bVar5) goto LAB_14b87b4cf;
  }
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Escape);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Idle_Escape,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Escape);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Roaming_Escape,FDS_ISKM_BoidState::sName_Roaming,
             FDS_ISKM_BoidState::sName_Escape);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Escape_Idle,FDS_ISKM_BoidState::sName_Escape,
             FDS_ISKM_BoidState::sName_Idle);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Escape_Return,FDS_ISKM_BoidState::sName_Escape,
             FDS_ISKM_BoidState::sName_Return);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Escape_Escape,FDS_ISKM_BoidState::sName_Escape,
             FDS_ISKM_BoidState::sName_Escape);
LAB_14b87b4cf:
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_88);
  local_70 = &local_f0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Chicken_Chick____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = _vcall__80__flat______;
    puVar11[3] = this;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar13 = *plVar1;
  if ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8 !=
      (TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar13 + 0x50)) {
    local_e0 = (undefined1  [8])0x0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,&local_58);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_f0.DelegateAllocator + 0x50))
                (local_f0.DelegateAllocator,local_e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar13 + 0x50),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_b8);
    if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
      local_d0 = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_a0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  return;
}

// OnBoidAdded @ 14b882020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::OnBoidAdded
          (FDS_ISKM_BoidsController_Chicken_Chick *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  FDS_ISKM_BoidState_Roaming *pFVar3;
  FDS_ISKM_BoidState_Return *pFVar4;
  FDS_ISKM_BoidState_Escape *pFVar5;
  FDS_ISKM_BoidState_Follow *pFVar6;
  bool bVar7;
  UWN_ISKM_Profile *this_00;
  UClass *pUVar8;
  FWN_ISKM_AnimationInfo *pFVar9;
  FWN_ISKM_AnimationInfo *pFVar10;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_01;
  FDS_ISKM_BoidState_Idle *pFVar11;
  FDS_ISKM_BoidState_Idle *pFVar12;
  undefined1 auStackY_188 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_148;
  TRawPtrProxy<FDS_ISKM_BoidState_Idle> local_138;
  TRawPtrProxy<FDS_ISKM_BoidState_Roaming> local_130;
  TRawPtrProxy<FDS_ISKM_BoidState_Return> local_128;
  TRawPtrProxy<FDS_ISKM_BoidState_Escape> local_120;
  TRawPtrProxy<FDS_ISKM_BoidState_Follow> local_118 [2];
  TSharedPtr<FDS_ISKM_BoidState_Idle,1> local_108;
  TSharedPtr<FDS_ISKM_BoidState_Roaming,1> local_f8;
  TSharedPtr<FDS_ISKM_BoidState_Return,1> local_e8;
  TSharedPtr<FDS_ISKM_BoidState_Escape,1> local_d8;
  TSharedPtr<FDS_ISKM_BoidState_Follow,1> local_c8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_b8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_a8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_98;
  TSharedPtr<FDS_ISKM_BoidState,1> local_88;
  TSharedPtr<FDS_ISKM_BoidState,1> local_78;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  FName local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FDS_ISKM_BoidsController::OnBoidAdded((FDS_ISKM_BoidsController *)this,param_1,param_2);
  if (this->_padding_ == 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8533728931977625864>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken_Chick.cpp"
                       ,0x108,"false");
    if (bVar7) {
code_r0x00014b8827ef:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00 = (UWN_ISKM_Profile *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)(this->_padding_ + 0x338));
    if (this_00 != (UWN_ISKM_Profile *)0x0) {
      pUVar8 = Z_Construct_UClass_UWN_ISKM_Profile_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) {
        pFVar9 = UWN_ISKM_Profile::FindAnimationInfo(this_00,this->sAnimName_Walk);
        pFVar10 = UWN_ISKM_Profile::FindAnimationInfo(this_00,this->sAnimName_Run);
        this_01 = FDS_ISKM_BoidsController::GetExecutionContext
                            ((FDS_ISKM_BoidsController *)this,param_1);
        if (this_01 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
          return;
        }
        pFVar11 = ::operator_new(0x80);
        pFVar12 = (FDS_ISKM_BoidState_Idle *)0x0;
        local_138.Object = pFVar12;
        if (pFVar11 != (FDS_ISKM_BoidState_Idle *)0x0) {
          *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0;
          pFVar11->_padding_ = 0;
          pFVar11->_padding_ = 0;
          *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
          *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x43960000;
          *(undefined4 *)&pFVar11->_padding_ = 0x447a0000;
          *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x44fa0000;
          pFVar11->_padding_ = 0x42340000;
          *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
          *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x447a0000;
          *(undefined4 *)&pFVar11->_padding_ = 0x43960000;
          pFVar11->_padding_ = 0;
          (pFVar11->AnimationList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->AnimationList).ArrayNum = 0;
          (pFVar11->AnimationList).ArrayMax = 0;
          (pFVar11->AnimationTimeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->AnimationTimeList).ArrayNum = 0;
          (pFVar11->AnimationTimeList).ArrayMax = 0;
          pFVar11->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Idle__6B_;
          pFVar11->bShouldIdle = false;
          pFVar11->bShouldReturn = false;
          pFVar11->bShouldEscape = false;
          pFVar11->bShouldRomaing = false;
          pFVar11->bShouldFollow = false;
          *(FName *)((longlong)&pFVar11->_padding_ + 4) = FDS_ISKM_BoidState::sName_Idle;
          local_138.Object = pFVar11;
        }
        TSharedPtr<FDS_ISKM_BoidState_Idle,1>::
        TSharedPtr<FDS_ISKM_BoidState_Idle,1><FDS_ISKM_BoidState_Idle>(&local_108,&local_138);
        pFVar11 = local_108.Object;
        if ((local_108.Object == (FDS_ISKM_BoidState_Idle *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_68 = this->sAnimName_Idle1;
        FStack_60 = this->sAnimName_Idle2;
        local_58 = this->sAnimName_Idle3;
        FStack_50 = this->sAnimName_Idle4;
        local_48 = this->sAnimName_Idle5;
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.ArrayNum = 5;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,5,0,&local_148.AllocatorInstance,5,&local_148.ArrayMax);
        *(FName *)local_148.AllocatorInstance.Data = local_68;
        *(FName *)(local_148.AllocatorInstance.Data + 8) = FStack_60;
        *(FName *)(local_148.AllocatorInstance.Data + 0x10) = local_58;
        *(FName *)(local_148.AllocatorInstance.Data + 0x18) = FStack_50;
        *(FName *)(local_148.AllocatorInstance.Data + 0x20) = local_48;
        FDS_ISKM_BoidState_Idle::AddAnimationList(pFVar11,this_00,&local_148);
        if ((FName *)local_148.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        local_b8.Object = (FDS_ISKM_BoidState *)local_108.Object;
        local_b8.SharedReferenceCount.ReferenceController =
             local_108.SharedReferenceCount.ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        if (pFVar9 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar11 = ::operator_new(0x60);
          local_130.Object = (FDS_ISKM_BoidState_Roaming *)pFVar12;
          if (pFVar11 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = 0;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar11->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x44fa0000;
            pFVar11->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar11->_padding_ = 0x43960000;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Roaming__6B_;
            *(undefined2 *)&(pFVar11->AnimationList).AllocatorInstance.Data = 0;
            *(undefined1 *)((longlong)&(pFVar11->AnimationList).AllocatorInstance.Data + 2) = 0;
            *(FName *)((longlong)&pFVar11->_padding_ + 4) = FDS_ISKM_BoidState::sName_Roaming;
            local_130.Object = (FDS_ISKM_BoidState_Roaming *)pFVar11;
          }
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1>::
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1><FDS_ISKM_BoidState_Roaming>(&local_f8,&local_130)
          ;
          pFVar3 = local_f8.Object;
          if ((local_f8.Object == (FDS_ISKM_BoidState_Roaming *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar3->_padding_ + 4) = this->sAnimName_Walk;
          local_a8.Object = (FDS_ISKM_BoidState *)local_f8.Object;
          local_a8.SharedReferenceCount.ReferenceController =
               local_f8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar3->_padding_ + 4) = pFVar9->TotalTime;
          if (local_f8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
        }
        if (pFVar10 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar11 = ::operator_new(0x80);
          local_128.Object = (FDS_ISKM_BoidState_Return *)pFVar12;
          if (pFVar11 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = 0;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar11->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x44fa0000;
            pFVar11->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar11->_padding_ = 0x43960000;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Return__6B_;
            *(undefined1 *)&(pFVar11->AnimationList).AllocatorInstance.Data = 0;
            (pFVar11->AnimationList).ArrayNum = 0;
            (pFVar11->AnimationList).ArrayMax = 0;
            (pFVar11->AnimationTimeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar11->AnimationTimeList).ArrayNum = 0;
            (pFVar11->AnimationTimeList).ArrayMax = 0;
            pFVar11->bShouldIdle = false;
            pFVar11->bShouldReturn = false;
            pFVar11->bShouldEscape = false;
            pFVar11->bShouldRomaing = false;
            *(FName *)((longlong)&pFVar11->_padding_ + 4) = FDS_ISKM_BoidState::sName_Return;
            local_128.Object = (FDS_ISKM_BoidState_Return *)pFVar11;
          }
          TSharedPtr<FDS_ISKM_BoidState_Return,1>::
          TSharedPtr<FDS_ISKM_BoidState_Return,1><FDS_ISKM_BoidState_Return>(&local_e8,&local_128);
          pFVar4 = local_e8.Object;
          if ((local_e8.Object == (FDS_ISKM_BoidState_Return *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar4->_padding_ + 4) = this->sAnimName_Run;
          local_98.Object = (FDS_ISKM_BoidState *)local_e8.Object;
          local_98.SharedReferenceCount.ReferenceController =
               local_e8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar4->_padding_ + 4) = pFVar10->TotalTime;
          if (local_e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
          pFVar11 = ::operator_new(0x68);
          local_120.Object = (FDS_ISKM_BoidState_Escape *)pFVar12;
          if (pFVar11 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = 0;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar11->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x44fa0000;
            pFVar11->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar11->_padding_ = 0x43960000;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Escape__6B_;
            *(undefined2 *)&(pFVar11->AnimationList).AllocatorInstance.Data = 0;
            *(undefined1 *)((longlong)&(pFVar11->AnimationList).AllocatorInstance.Data + 2) = 0;
            *(undefined4 *)((longlong)&(pFVar11->AnimationList).AllocatorInstance.Data + 4) = 0;
            (pFVar11->AnimationList).ArrayNum = 10;
            (pFVar11->AnimationList).ArrayMax = 5;
            *(FName *)((longlong)&pFVar11->_padding_ + 4) = FDS_ISKM_BoidState::sName_Escape;
            local_120.Object = (FDS_ISKM_BoidState_Escape *)pFVar11;
          }
          TSharedPtr<FDS_ISKM_BoidState_Escape,1>::
          TSharedPtr<FDS_ISKM_BoidState_Escape,1><FDS_ISKM_BoidState_Escape>(&local_d8,&local_120);
          pFVar5 = local_d8.Object;
          if ((local_d8.Object == (FDS_ISKM_BoidState_Escape *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar5->_padding_ + 4) = this->sAnimName_Run;
          local_88.Object = (FDS_ISKM_BoidState *)local_d8.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_d8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar5->_padding_ + 4) = pFVar10->TotalTime;
          if (local_d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_88);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          pFVar11 = ::operator_new(0x60);
          if (pFVar11 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = 0;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar11->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x44fa0000;
            pFVar11->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar11->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar11->_padding_ = 0x43960000;
            pFVar11->_padding_ = 0;
            pFVar11->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Follow__6B_;
            *(undefined1 *)&(pFVar11->AnimationList).AllocatorInstance.Data = 0;
            *(undefined4 *)((longlong)&(pFVar11->AnimationList).AllocatorInstance.Data + 4) =
                 0x42c80000;
            *(FName *)((longlong)&pFVar11->_padding_ + 4) = FDS_ISKM_BoidState::sName_Follow;
            pFVar12 = pFVar11;
          }
          local_118[0].Object = (FDS_ISKM_BoidState_Follow *)pFVar12;
          TSharedPtr<FDS_ISKM_BoidState_Follow,1>::
          TSharedPtr<FDS_ISKM_BoidState_Follow,1><FDS_ISKM_BoidState_Follow>(&local_c8,local_118);
          pFVar6 = local_c8.Object;
          if ((local_c8.Object == (FDS_ISKM_BoidState_Follow *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar6->_padding_ + 4) = this->sAnimName_Run;
          local_78.Object = (FDS_ISKM_BoidState *)local_c8.Object;
          local_78.SharedReferenceCount.ReferenceController =
               local_c8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar6->_padding_ + 4) = pFVar10->TotalTime;
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
        }
        TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>
                        *)&this->_padding_,this_01);
        return;
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8533728931977625871>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken_Chick.cpp"
                       ,0x10f,"false");
    if (bVar7) goto code_r0x00014b8827ef;
  }
  return;
}

// OnBoundToActor @ 14b884540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::OnBoundToActor
          (FDS_ISKM_BoidsController_Chicken_Chick *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// OnCheckTransition @ 14b886d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::OnCheckTransition
          (FDS_ISKM_BoidsController_Chicken_Chick *this,FName param_1,FName param_2,FName param_3,
          float param_4,FWN_StateMachine_ExecutionContext *param_5)

{
  FWN_StateMachine *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  float fVar7;
  TSharedPtr<FDS_ISKM_BoidState,1> local_68;
  TSharedPtr<FDS_ISKM_BoidState,1> local_58;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  double local_30;
  double dStack_28;
  undefined8 local_20;
  
  if (param_5 == (FWN_StateMachine_ExecutionContext *)0x0) {
    return false;
  }
  if (param_1 == sName_Idle_Follow) {
    FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)param_5,&local_68,
               FDS_ISKM_BoidState::sName_Follow);
    if ((local_68.Object != (FDS_ISKM_BoidState *)0x0) &&
       (bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&param_5[0xf].CurrentStateIndex,
                           (void *)0x0), !bVar4)) {
      pFVar1 = param_5[6].StateMachine.Object;
      local_20._0_4_ = param_5[0x10].CurrentStateIndex;
      local_20._4_4_ = param_5[0x10].CurrentTransitionIndex;
      local_48 = *(double *)&(pFVar1->OnCheckTransitionCallback).field_0x10;
      dStack_40 = *(double *)&pFVar1->OnEnterTransitionCallback;
      local_38 = *(undefined8 *)&(pFVar1->OnEnterTransitionCallback).field_0x8;
      dVar6 = local_48 - (double)param_5[0x10].StateMachine.Object;
      dVar3 = dStack_40 -
              (double)param_5[0x10].StateMachine.SharedReferenceCount.ReferenceController;
      fVar7 = (float)SQRT(dVar3 * dVar3 + dVar6 * dVar6);
      if ((local_68.Object == (FDS_ISKM_BoidState *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (((local_68.Object)->ChaseRange <= fVar7 && fVar7 != (local_68.Object)->ChaseRange) &&
         ((local_68.Object)->ChaseApproachRange <= fVar7 &&
          fVar7 != (local_68.Object)->ChaseApproachRange)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        return true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    uVar5 = 0;
  }
  else if (param_1 == sName_Roaming_Follow) {
    FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)param_5,&local_58,
               FDS_ISKM_BoidState::sName_Follow);
    if ((local_58.Object != (FDS_ISKM_BoidState *)0x0) &&
       (bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&param_5[0xf].CurrentStateIndex,
                           (void *)0x0), !bVar4)) {
      pFVar1 = param_5[6].StateMachine.Object;
      local_30 = *(double *)&(pFVar1->OnCheckTransitionCallback).field_0x10;
      dStack_28 = *(double *)&pFVar1->OnEnterTransitionCallback;
      local_20 = *(undefined8 *)&(pFVar1->OnEnterTransitionCallback).field_0x8;
      dVar6 = local_30 - (double)param_5[0x10].StateMachine.Object;
      dVar3 = dStack_28 -
              (double)param_5[0x10].StateMachine.SharedReferenceCount.ReferenceController;
      fVar7 = (float)SQRT(dVar3 * dVar3 + dVar6 * dVar6);
      if ((local_58.Object == (FDS_ISKM_BoidState *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (((local_58.Object)->ChaseRange <= fVar7 && fVar7 != (local_58.Object)->ChaseRange) &&
         ((local_58.Object)->ChaseApproachRange <= fVar7 &&
          fVar7 != (local_58.Object)->ChaseApproachRange)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        return true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(param_5->_padding_ + 0x40))(param_5,param_1,param_2,param_3,param_4);
  }
  return (bool)uVar5;
}

// OnUnboundToActor @ 14b8947c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::OnUnboundToActor
          (FDS_ISKM_BoidsController_Chicken_Chick *this,AWN_ISKM_BoidsActor *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar2 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)this->_padding_,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x280,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)this->_padding_,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar2 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)this->_padding_,iVar2);
    iVar2 = *piVar1;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)this->_padding_,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// UpdateActor_PostUpdateBoids @ 14b89eed0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::UpdateActor_PostUpdateBoids
          (FDS_ISKM_BoidsController_Chicken_Chick *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  UWorld *pUVar8;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  double local_58;
  double dStack_50;
  double local_48;
  
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8533728931977625766>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken_Chick.cpp"
                       ,0xa6,"false");
    if (!bVar6) {
      return;
    }
code_r0x00014b89ef5c:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar8 = AActor::GetWorld((AActor *)this->_padding_);
  dVar5 = __real_407f400000000000;
  if (pUVar8 == (UWorld *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8533728931977625773>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken_Chick.cpp"
                       ,0xad,"false");
    if (bVar6) goto code_r0x00014b89ef5c;
  }
  else {
    uVar11 = 0;
    lVar2 = this->_padding_;
    iVar1 = *(int *)(lVar2 + 0x450);
    if (0 < (longlong)iVar1) {
      lVar12 = 0;
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < *(int *)(lVar2 + 0x450)) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(lVar2 + 0x448);
        if (((*(char *)(lVar3 + lVar10) != '\0') &&
            (pFVar9 = FDS_ISKM_BoidsController::GetExecutionContext
                                ((FDS_ISKM_BoidsController *)this,uVar11),
            pFVar9 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0)) &&
           (*(ulong64 *)(lVar3 + 0xa8 + lVar10) == GFrameCounter)) {
          local_88._s_0.X = (pFVar9->ExpectedTransform).Translation.XY.m128d_f64[0];
          local_88._s_0.Y = (pFVar9->ExpectedTransform).Translation.XY.m128d_f64[1];
          local_48 = (pFVar9->ExpectedTransform).Translation.ZW.m128d_f64[0];
          if ((pFVar9->AsyncCollision_Move).Object == (FWN_AsyncCollision *)0x0) {
            return;
          }
          local_70._s_0.Z = (double)pFVar9->StepHeight + local_48;
          local_88._s_0.Z = local_48 - dVar5;
          local_70._s_0.X = local_88._s_0.X;
          local_70._s_0.Y = local_88._s_0.Y;
          local_58 = local_88._s_0.X;
          dStack_50 = local_88._s_0.Y;
          if (((pFVar9->AsyncCollision_Move).Object == (FWN_AsyncCollision *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FWN_AsyncCollision::AsyncLineTraceByChannel
                    ((pFVar9->AsyncCollision_Move).Object,pUVar8,Single,
                     (TVector<double> *)&local_70._s_0,(TVector<double> *)&local_88._s_0,
                     ECC_Visibility,&FCollisionQueryParams::DefaultQueryParam,
                     &FCollisionResponseParams::DefaultResponseParam,0);
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 0xc0;
      } while (lVar12 < iVar1);
    }
  }
  return;
}

// UpdateActor_PreUpdateBoids @ 14b8a08a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Chick::UpdateActor_PreUpdateBoids
          (FDS_ISKM_BoidsController_Chicken_Chick *this,float param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  undefined1 auVar3 [16];
  TReferenceControllerBase<1> *pTVar4;
  FWeakObjectPtr *this_00;
  FWN_ISKM_BoidInfo *pFVar5;
  FDS_ISKM_BoidsTargetInfo *this_01;
  void *_Src;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  longlong lVar19;
  longlong *plVar20;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  longlong *plVar27;
  ForAnyElementType FVar28;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_02;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  uint uVar42;
  uint uVar43;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1c8 [4];
  int local_1c4;
  longlong local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  FWeakObjectPtr local_1a0;
  ForAnyElementType local_198;
  int local_190;
  int local_18c;
  uint local_188;
  longlong local_180;
  FWeakObjectPtr local_178;
  undefined8 local_170;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TTransform<double> local_148;
  FWeakObjectPtr local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  FWeakObjectPtr local_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  
  uVar24 = 0;
  local_1a0.ObjectIndex = 0;
  local_1a0.ObjectSerialNumber = 0;
  local_170 = 0;
  FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_170);
  dVar11 = __real_3ff0000000000000;
  local_148.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_148.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  if (0 < (int)this->_padding_) {
    uVar42 = (uint)__xmm_80000000000000008000000000000000;
    uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar29 = uVar24;
    do {
      uVar26 = (uint)uVar24;
      uVar13 = 0;
      if ((int)uVar26 < (int)this->_padding_) {
        uVar13 = ~uVar26 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(this->_padding_ + 8 + uVar29);
      this_00 = *(FWeakObjectPtr **)(this->_padding_ + uVar29);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (FWeakObjectPtr *)0x0) && (bVar12 = FWeakObjectPtr::IsValid(this_00), bVar12))
      {
        local_178 = *this_00;
        pUVar15 = FWeakObjectPtr::Get(&local_178);
        lVar22 = *(longlong *)(pUVar15 + 0xb);
        uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar22 != 0) {
          local_c0 = *(FWeakObjectPtr *)(lVar22 + 0x220);
          local_d0 = *(int *)(lVar22 + 0x210);
          iStack_cc = *(int *)(lVar22 + 0x214);
          iStack_c8 = *(int *)(lVar22 + 0x218);
          iStack_c4 = *(int *)(lVar22 + 0x21c);
          uVar30 = local_d0;
          uVar31 = iStack_cc;
          uVar32 = iStack_c8;
          uVar33 = iStack_c4;
          uVar10 = local_c0;
        }
        this_00[2].ObjectIndex = uVar30;
        this_00[2].ObjectSerialNumber = uVar31;
        this_00[3].ObjectIndex = uVar32;
        this_00[3].ObjectSerialNumber = uVar33;
        this_00[4] = (FWeakObjectPtr)uVar10;
        pUVar15 = FWeakObjectPtr::Get(&local_178);
        if (*(longlong *)(pUVar15 + 0xb) == 0) {
          pTVar18 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar18 = (TTransform<double> *)(*(longlong *)(pUVar15 + 0xb) + 0x1f0);
        }
        auVar37 = *(undefined1 (*) [16])(pTVar18->Rotation).XY.m128d_f64;
        auVar3 = *(undefined1 (*) [16])(pTVar18->Rotation).ZW.m128d_f64;
        dVar9 = auVar3._0_8_;
        dVar35 = dVar9 + dVar9;
        dVar38 = auVar3._8_8_;
        dVar41 = (double)CONCAT44(auVar37._12_4_ ^ uVar43,auVar37._8_4_ ^ uVar42);
        dVar41 = dVar41 + dVar41;
        dVar34 = auVar37._0_8_;
        dVar8 = auVar37._8_8_;
        dVar39 = dVar38 * dVar35 - dVar34 * dVar41;
        dVar40 = (double)CONCAT44(auVar3._4_4_ ^ uVar43,auVar3._0_4_ ^ uVar42);
        auVar3._8_4_ = SUB84(dVar39,0);
        auVar3._0_8_ = (dVar8 * dVar41 - dVar9 * dVar35) + dVar11;
        auVar3._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        *(undefined1 (*) [16])(this_00 + 5) = auVar3;
        dVar40 = dVar40 + dVar40;
        this_00[7] = (FWeakObjectPtr)(dVar34 * dVar35 + dVar38 * dVar41);
        dVar35 = dVar34 + dVar34;
        dVar9 = (dVar9 * dVar40 - dVar34 * dVar35) + dVar11;
        auVar37._8_4_ = SUB84(dVar9,0);
        auVar37._0_8_ = dVar8 * dVar35 + dVar38 * dVar40;
        auVar37._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(this_00 + 0xb) = auVar37;
        this_00[0xd] = (FWeakObjectPtr)(dVar38 * dVar35 - dVar8 * dVar40);
        FVar1 = this_00[0xb];
        FVar2 = this_00[0xc];
        local_d8.ObjectIndex = this_00[0xd].ObjectIndex ^ uVar42;
        local_d8.ObjectSerialNumber = this_00[0xd].ObjectSerialNumber ^ uVar43;
        this_00[8].ObjectIndex = FVar1.ObjectIndex ^ uVar42;
        this_00[8].ObjectSerialNumber = FVar1.ObjectSerialNumber ^ uVar43;
        this_00[9].ObjectIndex = FVar2.ObjectIndex ^ uVar42;
        this_00[9].ObjectSerialNumber = FVar2.ObjectSerialNumber ^ uVar43;
        this_00[10] = local_d8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar24 = (ulonglong)(uVar26 + 1);
      uVar29 = uVar29 + 0x10;
    } while ((int)(uVar26 + 1) < (int)this->_padding_);
  }
  local_1a8 = 0;
  iVar17 = *(int *)(this->_padding_ + 0x450);
  if (0 < iVar17) {
    uVar30 = (undefined4)__real_7fefffffffffffff;
    uVar24 = (ulonglong)__real_7fefffffffffffff >> 0x20;
    local_180 = 0;
    local_1c0 = 0;
    local_1c4 = iVar17;
    do {
      lVar22 = local_180;
      iVar14 = local_1a8;
      local_180 = lVar22;
      local_1a8 = iVar14;
      if (((local_1a8 < (int)this->_padding_) &&
          (this_02 = (FDS_ISKM_BoidsFSM_ExecutionContext *)(this->_padding_ + local_180),
          this_02 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0)) &&
         (FDS_ISKM_BoidState::sName_Follow != this_02->LastState)) {
        (this_02->FollowTargetInfo).TargetActor.WeakPtr = (FWeakObjectPtr)0x0;
        (this_02->FollowTargetInfo).TargetType = None;
        pFVar5 = this_02->BoidInfo;
        if (pFVar5 == (FWN_ISKM_BoidInfo *)0x0) {
          if (2 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
            local_180 = lVar22;
            iVar17 = local_1c4;
            local_1a8 = iVar14;
          }
        }
        else {
          local_160 = (pFVar5->Transform).Translation.XY.m128d_f64[0];
          dStack_158 = (pFVar5->Transform).Translation.XY.m128d_f64[1];
          local_150 = (pFVar5->Transform).Translation.ZW.m128d_f64[0];
          iVar17 = (int)this->_padding_;
          plVar20 = (longlong *)this->_padding_;
          plVar27 = plVar20 + (longlong)iVar17 * 2;
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_1b0 = 0;
          while( true ) {
            if ((int)this->_padding_ != iVar17) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res18);
            }
            if (plVar20 == plVar27) break;
            if ((*plVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)(*plVar20 + 8) == 3) {
              if ((uint)local_1b0 == local_1b0._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_1b8,(int *)((longlong)&local_1b0 + 4));
                local_1b0 = CONCAT44(local_1b0._4_4_,iVar14);
              }
              lVar19 = (longlong)(int)(uint)local_1b0;
              local_1b0 = CONCAT44(local_1b0._4_4_,(uint)local_1b0 + 1);
              *(longlong *)&local_1b8.Data[lVar19 * 0x10].field_0x0 = *plVar20;
              lVar22 = plVar20[1];
              *(longlong *)(local_1b8.Data + lVar19 * 0x10 + 8) = lVar22;
              if (lVar22 != 0) {
                LOCK();
                *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
                UNLOCK();
              }
            }
            plVar20 = plVar20 + 2;
          }
          uVar29 = (ulonglong)(int)(uint)local_1b0;
          local_168 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(local_1b8.Data + uVar29 * 0x10);
          local_188 = (uint)local_1b0;
          pTVar21 = local_168;
          FVar28.Data = local_1b8.Data;
          while( true ) {
            if ((uint)local_1b0 != (int)uVar29) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res20);
            }
            if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar28.Data == pTVar21) break;
            pTVar4 = (((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar28.Data)->SharedReferenceCount)
                     .ReferenceController;
            this_01 = ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar28.Data)->Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((this_01 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            if (pUVar15 == (UObject *)0x0) {
LAB_14b8a0f7d:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              uVar29 = (ulonglong)local_188;
              FVar28.Data = FVar28.Data + 0x10;
            }
            else {
              pUVar16 = Z_Construct_UClass_AWN_ISKM_BoidsActor_NoRegister();
              iVar17 = (int)pUVar16->_padding_;
              if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar17) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar17 * 8)
                  != &pUVar16->_padding_)) goto LAB_14b8a0f7d;
              local_198.Data = (FScriptContainerElement *)0x0;
              local_190 = *(int *)&pUVar15[0x1b].field_0x18;
              lVar22 = (longlong)local_190;
              _Src = *(void **)&pUVar15[0x1b].field_0x10;
              if (local_190 == 0) {
                local_18c = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc0,0x10,local_190,0,&local_198,local_190,&local_18c);
                memcpy(local_198.Data,_Src,lVar22 * 0xc0);
              }
              iVar17 = local_190;
              pFVar23 = local_198.Data + 0x40;
              pFVar25 = local_198.Data + (longlong)local_190 * 0xc0;
              uVar31 = uVar30;
              uVar32 = (int)uVar24;
              while( true ) {
                if (local_190 != iVar17) {
                  local_1c8[0] = 0;
                  `TCheckedPointerIterator<FWN_ISKM_BoidInfo,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_1c8);
                }
                if (pFVar23 + -0x40 == pFVar25) break;
                local_b8 = *(double *)(pFVar23 + 0x20);
                dStack_b0 = *(double *)(pFVar23 + 0x28);
                local_a8 = *(undefined8 *)(pFVar23 + 0x30);
                auVar36._8_8_ = dStack_b0;
                auVar36._0_8_ = dStack_b0;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (dStack_158 - dStack_b0) * (dStack_158 - dStack_b0) +
                               (local_160 - local_b8) * (local_160 - local_b8);
                auVar37 = sqrtpd(auVar36,auVar7);
                if (auVar37._0_8_ <= (double)CONCAT44(uVar32,uVar31) &&
                    (double)CONCAT44(uVar32,uVar31) != auVar37._0_8_) {
                  uVar31 = auVar37._0_4_;
                  uVar32 = auVar37._4_4_;
                  if ((this_01 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_1a0 = (this_01->TargetActor).WeakPtr;
                  local_148.Rotation.XY.m128d_f64 = *(double (*) [2])pFVar23;
                  local_148.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar23 + 0x10);
                  local_148.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar23 + 0x20);
                  local_148.Translation.ZW.m128d_f64 = *(double (*) [2])(pFVar23 + 0x30);
                  local_148.Scale3D.XY.m128d_f64 = *(double (*) [2])(pFVar23 + 0x40);
                  local_148.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pFVar23 + 0x50);
                }
                pFVar23 = pFVar23 + 0xc0;
              }
              if (local_198.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              uVar29 = (ulonglong)local_188;
              FVar28.Data = FVar28.Data + 0x10;
              pTVar21 = local_168;
            }
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::SetFollowTargetInfo
                    (this_02,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1a0,&local_148);
          DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
                    ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_1b8.Data,(uint)local_1b0);
          iVar17 = local_1c4;
          if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_1b8.Data !=
              (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
            FMemory::Free(local_1b8.Data);
            iVar17 = local_1c4;
          }
        }
      }
      local_1a8 = local_1a8 + 1;
      local_1c0 = local_1c0 + 1;
      local_180 = local_180 + 0x280;
    } while (local_1a8 < iVar17);
  }
  return;
}


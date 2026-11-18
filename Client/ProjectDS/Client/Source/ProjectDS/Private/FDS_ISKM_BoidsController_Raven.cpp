// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// ~FDS_ISKM_BoidsController_Raven @ 14b865a90

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
FDS_ISKM_BoidsController_Raven::~FDS_ISKM_BoidsController_Raven
          (FDS_ISKM_BoidsController_Raven *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatedPointTargetIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreePointIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController((FDS_ISKM_BoidsController *)this);
  return;
}

// Initialize @ 14b87c640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDS_ISKM_BoidsController_Raven::Initialize(FDS_ISKM_BoidsController_Raven *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TSharedRef<FWN_StateMachine,1> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  EDS_ISKM_BoidsTargetType local_res8 [2];
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  FWN_StateMachine *local_c8;
  FSharedReferencer<1> local_c0;
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  TSharedRef<FWN_StateMachine,1> local_58;
  FReadAccessScope local_48;
  
  pTVar9 = MakeShared<FWN_StateMachine,1>(&local_58);
  local_c0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_c8 = pTVar9->Object;
  if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar1 = &this->_padding_;
  uVar12 = 0;
  if ((FWN_StateMachine **)plVar1 != &local_c8) {
    *plVar1 = (longlong)local_c8;
    local_c8 = (FWN_StateMachine *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Idle);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Escape);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar1,FDS_ISKM_BoidState::sName_Return);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar1,sName_Escape_Idle,FDS_ISKM_BoidState::sName_Escape,
             FDS_ISKM_BoidState::sName_Idle);
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_f0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_f0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFDS_ISKM_BoidsController_Raven____A6A_NVFName__00MPEAVFWN_StateMachine_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[4] = _vcall__80__flat______;
    puVar10[3] = this;
    if ((this == (FDS_ISKM_BoidsController_Raven *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *plVar1;
  if ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8 !=
      (TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x50)) {
    local_e0 = (undefined1  [8])0x0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,&local_48);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_f0.DelegateAllocator + 0x50))
                (local_f0.DelegateAllocator,local_e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x50),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_a8);
    if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
      local_d0 = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e0);
  }
  local_res8[0] = PointObject;
  FDS_ISKM_BoidsController::GetTargetInfo((FDS_ISKM_BoidsController *)this,&local_b8,local_res8);
  iVar4 = local_b8.ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->FreePointIndices,local_b8.ArrayNum,Default)
  ;
  if (0 < iVar4) {
    uVar6 = rand();
    uVar7 = rand();
    uVar8 = rand();
    lVar2 = (longlong)(int)(uVar8 & 1 | (uVar7 & 0x7fff) * 2 | (uVar6 & 0x7fff) << 0x10) %
            (longlong)iVar4;
    uVar13 = uVar12;
    do {
      uVar7 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar7 < (this->FreePointIndices).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = (ulonglong)(uVar7 + 1);
      *(int *)((this->FreePointIndices).AllocatorInstance.Data + uVar13) = (int)lVar2;
      uVar13 = uVar13 + 4;
      lVar2 = (longlong)((int)lVar2 + 1) % (longlong)iVar4;
    } while ((int)(uVar7 + 1) < iVar4);
  }
  DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
            ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_b8.AllocatorInstance.Data,
             local_b8.ArrayNum);
  if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_b8.AllocatorInstance.Data !=
      (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_90);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  return;
}

// OnBoidAdded @ 14b883d30

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidsController_Raven::OnBoidAdded
          (FDS_ISKM_BoidsController_Raven *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  FDS_ISKM_BoidState_Idle *this_00;
  bool bVar3;
  uint uVar4;
  UWN_ISKM_Profile *this_01;
  UClass *pUVar5;
  FWN_ISKM_AnimationInfo *pFVar6;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_02;
  FDS_ISKM_BoidState_Escape_Fly_Landing *pFVar7;
  FDS_ISKM_BoidState_Escape_Fly_Landing *pFVar8;
  undefined1 auStackY_148 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_108;
  TSharedPtr<FDS_ISKM_BoidState_Escape_Fly_Landing,1> local_f8;
  TSharedPtr<FDS_ISKM_BoidState_Escape_Fly_Landing,1> local_e8;
  TRawPtrProxy<FDS_ISKM_BoidState_Idle> local_d8;
  TRawPtrProxy<FDS_ISKM_BoidState_Escape_Fly_Landing> local_d0;
  TRawPtrProxy<FDS_ISKM_BoidState_Escape_Fly_Landing> local_c8 [2];
  TSharedPtr<FDS_ISKM_BoidState_Idle,1> local_b8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_a8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_98;
  TSharedPtr<FDS_ISKM_BoidState,1> local_88;
  FName local_78;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FDS_ISKM_BoidsController::OnBoidAdded((FDS_ISKM_BoidsController *)this,param_1,param_2);
  pFVar8 = (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0;
  if ((this->AllocatedPointTargetIndices).ArrayNum <= param_1) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&this->AllocatedPointTargetIndices,param_1 + 1,Default);
    uVar4 = 0;
    if (param_1 < (this->AllocatedPointTargetIndices).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)
     ((this->AllocatedPointTargetIndices).AllocatorInstance.Data + (longlong)param_1 * 4) =
         0xffffffff;
  }
  if (this->_padding_ == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1917489704077360907>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Raven.cpp"
                       ,0xf5,"false");
    if (bVar3) {
code_r0x00014b8842f6:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_01 = (UWN_ISKM_Profile *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)(this->_padding_ + 0x338));
    if (this_01 != (UWN_ISKM_Profile *)0x0) {
      pUVar5 = Z_Construct_UClass_UWN_ISKM_Profile_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pFVar6 = UWN_ISKM_Profile::FindAnimationInfo(this_01,this->sAnimName_Fly1);
        this_02 = FDS_ISKM_BoidsController::GetExecutionContext
                            ((FDS_ISKM_BoidsController *)this,param_1);
        if (this_02 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
          return;
        }
        pFVar7 = ::operator_new(0x80);
        local_d8.Object = (FDS_ISKM_BoidState_Idle *)pFVar8;
        if (pFVar7 != (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) {
          *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          *(undefined4 *)&pFVar7->_padding_ = 0x44fa0000;
          *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0x43960000;
          *(undefined4 *)&pFVar7->_padding_ = 0x447a0000;
          *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0x44fa0000;
          pFVar7->_padding_ = 0x42340000;
          *(undefined4 *)&pFVar7->_padding_ = 0x44fa0000;
          *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0x447a0000;
          *(undefined4 *)&pFVar7->_padding_ = 0x43960000;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Idle__6B_;
          *(undefined4 *)&pFVar7->_padding_ = 0;
          *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 0;
          *(FName *)((longlong)&pFVar7->_padding_ + 4) = FDS_ISKM_BoidState::sName_Idle;
          local_d8.Object = (FDS_ISKM_BoidState_Idle *)pFVar7;
        }
        TSharedPtr<FDS_ISKM_BoidState_Idle,1>::
        TSharedPtr<FDS_ISKM_BoidState_Idle,1><FDS_ISKM_BoidState_Idle>(&local_b8,&local_d8);
        this_00 = local_b8.Object;
        if ((local_b8.Object == (FDS_ISKM_BoidState_Idle *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_78 = this->sAnimName_Idle1;
        FStack_70 = this->sAnimName_Idle2;
        local_68 = this->sAnimName_Idle3;
        FStack_60 = this->sAnimName_Idle4;
        local_58 = this->sAnimName_Idle5;
        FStack_50 = this->sAnimName_Idle6;
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 6;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,6,0,&local_108.AllocatorInstance,6,&local_108.ArrayMax);
        *(FName *)local_108.AllocatorInstance.Data = local_78;
        *(FName *)(local_108.AllocatorInstance.Data + 8) = FStack_70;
        *(FName *)(local_108.AllocatorInstance.Data + 0x10) = local_68;
        *(FName *)(local_108.AllocatorInstance.Data + 0x18) = FStack_60;
        *(FName *)(local_108.AllocatorInstance.Data + 0x20) = local_58;
        *(FName *)(local_108.AllocatorInstance.Data + 0x28) = FStack_50;
        FDS_ISKM_BoidState_Idle::AddAnimationList(this_00,this_01,&local_108);
        if ((FName *)local_108.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        local_a8.Object = (FDS_ISKM_BoidState *)local_b8.Object;
        local_a8.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_02,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (pFVar6 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar7 = ::operator_new(0xd0);
          if (pFVar7 != (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) {
            pFVar8 = FDS_ISKM_BoidState_Escape_Fly_Landing::FDS_ISKM_BoidState_Escape_Fly_Landing
                               (pFVar7,&FDS_ISKM_BoidState::sName_Escape);
          }
          local_d0.Object = pFVar8;
          TSharedPtr<FDS_ISKM_BoidState_Escape_Fly_Landing,1>::
          TSharedPtr<FDS_ISKM_BoidState_Escape_Fly_Landing,1><FDS_ISKM_BoidState_Escape_Fly_Landing>
                    (&local_f8,&local_d0);
          pFVar8 = local_f8.Object;
          if ((local_f8.Object == (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FDS_ISKM_BoidState_Escape_Fly_Landing::SetFlyAnimation
                    (pFVar8,this_01,&this->sAnimName_Fly1,&this->sAnimName_Fly2,
                     &this->sAnimName_Fly4);
          if ((pFVar8 == (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_98.Object = (FDS_ISKM_BoidState *)local_f8.Object;
          local_98.SharedReferenceCount.ReferenceController =
               local_f8.SharedReferenceCount.ReferenceController;
          *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0x41200000;
          *(undefined4 *)&pFVar8->_padding_ = 0;
          *(undefined4 *)&pFVar8->_padding_ = 0x3e99999a;
          *(undefined4 *)&pFVar8->_padding_ = 0x43c80000;
          if (local_f8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_02,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
          pFVar8 = ::operator_new(0xd0);
          local_c8[0].Object = (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0;
          if (pFVar8 != (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) {
            local_c8[0].Object =
                 FDS_ISKM_BoidState_Escape_Fly_Landing::FDS_ISKM_BoidState_Escape_Fly_Landing
                           (pFVar8,&FDS_ISKM_BoidState::sName_Return);
          }
          TSharedPtr<FDS_ISKM_BoidState_Escape_Fly_Landing,1>::
          TSharedPtr<FDS_ISKM_BoidState_Escape_Fly_Landing,1><FDS_ISKM_BoidState_Escape_Fly_Landing>
                    (&local_e8,local_c8);
          pFVar8 = local_e8.Object;
          if ((local_e8.Object == (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FDS_ISKM_BoidState_Escape_Fly_Landing::SetFlyAnimation
                    (pFVar8,this_01,&this->sAnimName_Fly1,&this->sAnimName_Fly2,
                     &this->sAnimName_Fly4);
          if ((pFVar8 == (FDS_ISKM_BoidState_Escape_Fly_Landing *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_88.Object = (FDS_ISKM_BoidState *)local_e8.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_e8.SharedReferenceCount.ReferenceController;
          *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0x41200000;
          *(undefined4 *)&pFVar8->_padding_ = 0;
          *(undefined4 *)&pFVar8->_padding_ = 0x3e99999a;
          *(undefined4 *)&pFVar8->_padding_ = 0x43c80000;
          if (local_e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_02,&local_88);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
        TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>
                        *)&this->_padding_,this_02);
        return;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1917489704077360900>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Raven.cpp"
                       ,0xfc,"false");
    if (bVar3) goto code_r0x00014b8842f6;
  }
  return;
}

// OnBoidRemoved @ 14b884350

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
FDS_ISKM_BoidsController_Raven::OnBoidRemoved
          (FDS_ISKM_BoidsController_Raven *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_00;
  
  this_00 = FDS_ISKM_BoidsController::GetExecutionContext((FDS_ISKM_BoidsController *)this,param_1);
  if (this_00 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    FDS_ISKM_BoidsFSM_ExecutionContext::Finalize(this_00,param_1,param_2);
  }
  if ((-1 < param_1) && (param_1 < (this->AllocatedPointTargetIndices).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->AllocatedPointTargetIndices).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = *(int *)((this->AllocatedPointTargetIndices).AllocatorInstance.Data +
                    (longlong)param_1 * 4);
    if (iVar2 != -1) {
      iVar6 = (this->FreePointIndices).ArrayNum;
      piVar1 = &(this->FreePointIndices).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->FreePointIndices).AllocatorInstance,piVar1);
      }
      (this->FreePointIndices).ArrayNum = iVar6 + 1;
      *(int *)((this->FreePointIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) = iVar2;
      uVar5 = 0;
      if (param_1 < (this->AllocatedPointTargetIndices).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)
       ((this->AllocatedPointTargetIndices).AllocatorInstance.Data + (longlong)param_1 * 4) =
           0xffffffff;
    }
  }
  return;
}

// OnBoundToActor @ 14b884720

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
FDS_ISKM_BoidsController_Raven::OnBoundToActor
          (FDS_ISKM_BoidsController_Raven *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// OnCheckTransition @ 14b886fa0

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
FDS_ISKM_BoidsController_Raven::OnCheckTransition
          (FDS_ISKM_BoidsController_Raven *this,FName param_1,FName param_2,FName param_3,
          float param_4,FWN_StateMachine_ExecutionContext *param_5)

{
  TSharedPtr<FWN_StateMachine,1> TVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ISKM_BoidsTargetInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [12];
  FWeakObjectPtr FVar11;
  double dVar12;
  FWN_StateMachine_ExecutionContext *this_01;
  int iVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar19;
  longlong lVar20;
  double dVar21;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 local_118 [8];
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> local_110;
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> local_100;
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> local_f0;
  TSharedPtr<FDS_ISKM_BoidState,1> local_e0;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_d0;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_c0;
  double local_b0;
  FWN_StateMachine *pFStack_a8;
  TReferenceControllerBase<1> *local_a0;
  double local_98;
  FWN_StateMachine *pFStack_90;
  TReferenceControllerBase<1> *local_88;
  
  this_01 = param_5;
  if (param_5 == (FWN_StateMachine_ExecutionContext *)0x0) {
    return false;
  }
  FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
            ((FDS_ISKM_BoidsFSM_ExecutionContext *)param_5,&local_e0,param_3);
  if (local_e0.Object == (FDS_ISKM_BoidState *)0x0) {
    uVar15 = 0;
    goto LAB_14b88769b;
  }
  if (param_1 != sName_Idle_Escape) {
    if (param_1 != sName_Idle_Return) {
      uVar15 = (**(code **)(this_01->_padding_ + 0x40))(this_01,param_1,param_2,param_3,param_4);
      goto LAB_14b88769b;
    }
    FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)this_01,&local_c0);
    if (local_c0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) {
LAB_14b887636:
      uVar15 = 0;
    }
    else {
      if ((local_c0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      bVar14 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                         (&(local_c0.Object)->TargetActor,(void *)0x0);
      if (bVar14) goto LAB_14b887636;
      FDS_ISKM_BoidsFSM_ExecutionContext::GetTargetInfo
                ((FDS_ISKM_BoidsFSM_ExecutionContext *)this_01,&local_100,InteractableObject);
      iVar13 = local_100.ArrayNum;
      dVar12 = __real_4039000000000000;
      pTVar19 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)
                (local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 0x10);
      FVar17.Data = local_100.AllocatorInstance.Data;
      while( true ) {
        if (local_100.ArrayNum != iVar13) {
          local_118[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_118);
        }
        if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar17.Data == pTVar19) {
          DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
                    ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_100.AllocatorInstance.Data,
                     local_100.ArrayNum);
          if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_100.AllocatorInstance.Data !=
              (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
          }
          goto LAB_14b887636;
        }
        pTVar3 = (((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar17.Data)->SharedReferenceCount).
                 ReferenceController;
        pFVar4 = ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar17.Data)->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar4 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        if ((local_c0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        TVar1 = this_01[10].StateMachine;
        pTVar5 = *(TReferenceControllerBase<1> **)&this_01[10].CurrentStateIndex;
        auVar10._4_8_ = unaff_XMM6._8_8_;
        auVar10._0_4_ = TVar1.Object._4_4_;
        auVar22._0_8_ = auVar10._0_8_ << 0x20;
        auVar22._8_4_ = (int)TVar1.SharedReferenceCount.ReferenceController;
        auVar22._12_4_ = TVar1.SharedReferenceCount.ReferenceController._4_4_;
        dVar9 = (pFVar4->TargetPos).field0_0x0._s_0.Y -
                ((local_c0.Object)->TargetPos).field0_0x0._s_0.Y;
        dVar21 = (pFVar4->TargetPos).field0_0x0._s_0.X -
                 ((local_c0.Object)->TargetPos).field0_0x0._s_0.X;
        local_98 = (double)this_01[8]._padding_;
        pFStack_90 = this_01[8].StateMachine.Object;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar9 * dVar9 + dVar21 * dVar21;
        unaff_XMM7 = sqrtpd(unaff_XMM7,auVar8);
        local_88 = this_01[8].StateMachine.SharedReferenceCount.ReferenceController;
        dVar9 = (double)TVar1.Object - local_98;
        dVar21 = auVar22._8_8_ - (double)pFStack_90;
        unaff_XMM6._0_8_ = dVar21 * dVar21 + dVar9 * dVar9;
        unaff_XMM6._8_8_ = TVar1.SharedReferenceCount.ReferenceController.ReferenceController;
        if ((local_e0.Object == (FDS_ISKM_BoidState *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        if (((double)(local_e0.Object)->ComebackDist < unaff_XMM7._0_8_) &&
           (dVar12 < unaff_XMM6._0_8_)) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        FVar17.Data = FVar17.Data + 0x10;
      }
      this_01[0xb]._padding_ = (longlong)TVar1.Object;
      this_01[0xb].StateMachine.Object =
           (FWN_StateMachine *)TVar1.SharedReferenceCount.ReferenceController;
      this_01[0xb].StateMachine.SharedReferenceCount.ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
                ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_100.AllocatorInstance.Data,
                 local_100.ArrayNum);
      if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_100.AllocatorInstance.Data !=
          (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      uVar15 = 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
    goto LAB_14b88769b;
  }
  FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo
            ((FDS_ISKM_BoidsFSM_ExecutionContext *)this_01,&local_d0);
  if (local_d0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) {
LAB_14b8873c7:
    uVar15 = 0;
  }
  else {
    if ((local_d0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    bVar14 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                       (&(local_d0.Object)->TargetActor,(void *)0x0);
    if (bVar14) goto LAB_14b8873c7;
    FDS_ISKM_BoidsFSM_ExecutionContext::GetTargetInfo
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)this_01,&local_110,InteractableObject);
    iVar13 = local_110.ArrayNum;
    dVar12 = __real_4039000000000000;
    pTVar19 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)
              (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 0x10);
    FVar17.Data = local_110.AllocatorInstance.Data;
    while( true ) {
      if (local_110.ArrayNum != iVar13) {
        param_5._0_1_ = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&param_5);
      }
      if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar17.Data == pTVar19) {
        DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
                  ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_110.AllocatorInstance.Data,
                   local_110.ArrayNum);
        if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_110.AllocatorInstance.Data !=
            (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        goto LAB_14b8873c7;
      }
      pTVar3 = (((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar17.Data)->SharedReferenceCount).
               ReferenceController;
      pFVar4 = ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)FVar17.Data)->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      if ((local_d0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      dVar9 = (pFVar4->TargetPos).field0_0x0._s_0.Y -
              ((local_d0.Object)->TargetPos).field0_0x0._s_0.Y;
      dVar21 = (pFVar4->TargetPos).field0_0x0._s_0.X -
               ((local_d0.Object)->TargetPos).field0_0x0._s_0.X;
      local_a0 = this_01[8].StateMachine.SharedReferenceCount.ReferenceController;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar9 * dVar9 + dVar21 * dVar21;
      unaff_XMM6 = sqrtpd(unaff_XMM6,auVar7);
      local_b0 = (double)this_01[8]._padding_;
      pFStack_a8 = this_01[8].StateMachine.Object;
      if ((local_e0.Object == (FDS_ISKM_BoidState *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      if ((unaff_XMM6._0_8_ < (double)(local_e0.Object)->RunAwayRange) &&
         (dVar9 = (double)this_01[10].StateMachine.SharedReferenceCount.ReferenceController -
                  (double)pFStack_a8, dVar21 = (double)this_01[10].StateMachine.Object - local_b0,
         dVar9 * dVar9 + dVar21 * dVar21 < dVar12)) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FVar17.Data = FVar17.Data + 0x10;
    }
    FDS_ISKM_BoidsFSM_ExecutionContext::GetTargetInfo
              ((FDS_ISKM_BoidsFSM_ExecutionContext *)this_01,&local_f0,PointObject);
    uVar2 = *(uint *)&this_01[6].StateMachine.SharedReferenceCount.ReferenceController;
    uVar18 = 0;
    uVar16 = uVar18;
    if ((int)uVar2 < (this->AllocatedPointTargetIndices).ArrayNum) {
      uVar16 = ~uVar2 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    uVar2 = *(uint *)((this->AllocatedPointTargetIndices).AllocatorInstance.Data +
                     (longlong)(int)uVar2 * 4);
    if (uVar2 == 0xffffffff) {
      uVar15 = 0;
    }
    else {
      uVar16 = uVar18;
      if ((int)uVar2 < local_f0.ArrayNum) {
        uVar16 = ~uVar2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      lVar20 = (longlong)(int)uVar2 * 0x10;
      TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>::operator->
                ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)
                 (local_f0.AllocatorInstance.Data + lVar20));
      if ((int)uVar2 < local_f0.ArrayNum) {
        uVar18 = ~uVar2 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      pTVar5 = *(TReferenceControllerBase<1> **)(local_f0.AllocatorInstance.Data + lVar20 + 8);
      this_00 = *(TWeakObjectPtr<AActor,FWeakObjectPtr> **)
                 &local_f0.AllocatorInstance.Data[lVar20].field_0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (TWeakObjectPtr<AActor,FWeakObjectPtr> *)0x0) &&
         (bVar14 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0), !bVar14))
      {
        FVar11 = this_00[3].WeakPtr;
        this_01[0xb]._padding_ = (longlong)this_00[2].WeakPtr;
        this_01[0xb].StateMachine.Object = (FWN_StateMachine *)FVar11;
        this_01[0xb].StateMachine.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)this_00[4].WeakPtr;
      }
      uVar15 = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_f0.AllocatorInstance.Data,
               local_f0.ArrayNum);
    if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_f0.AllocatorInstance.Data !=
        (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_110.AllocatorInstance.Data,
               local_110.ArrayNum);
    if ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)local_110.AllocatorInstance.Data !=
        (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.SharedReferenceCount.ReferenceController);
      goto LAB_14b88769b;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
LAB_14b88769b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  return (bool)uVar15;
}

// OnUnboundToActor @ 14b894a30

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
FDS_ISKM_BoidsController_Raven::OnUnboundToActor
          (FDS_ISKM_BoidsController_Raven *this,AWN_ISKM_BoidsActor *param_1)

{
  int *piVar1;
  int iVar2;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar3;
  
  iVar2 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  pFVar3 = (FDS_ISKM_BoidsFSM_ExecutionContext *)this->_padding_;
  if (-1 < *(int *)((longlong)&this->_padding_ + 4)) {
    DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>(pFVar3,iVar2);
    *(undefined4 *)&this->_padding_ = 0;
    return;
  }
  DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>(pFVar3,iVar2);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x280,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// UpdateActor_PostUpdateBoids @ 14b89fae0

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
FDS_ISKM_BoidsController_Raven::UpdateActor_PostUpdateBoids
          (FDS_ISKM_BoidsController_Raven *this,float param_1)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  FWN_BoidsNavSystem *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  UWorld *pUVar21;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int local_res18;
  uint local_res20;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_138;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [4];
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar21 = AActor::GetWorld((AActor *)this->_padding_);
    dVar16 = __real_407f400000000000;
    if (pUVar21 == (UWorld *)0x0) {
      bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1917489704077361060>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Raven.cpp"
                          ,0x5c,"false");
      if (bVar17) goto code_r0x00014b89fb78;
    }
    else {
      lVar5 = this->_padding_;
      local_res20 = 0;
      iVar4 = *(int *)(lVar5 + 0x450);
      if (0 < (longlong)iVar4) {
        local_148 = 0;
        local_138 = 0;
        local_158 = 0;
        do {
          uVar23 = ~local_res20 >> 0x1f;
          uVar18 = 0;
          if ((int)local_res20 < *(int *)(lVar5 + 0x450)) {
            uVar18 = uVar23;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar24 = *(longlong *)(lVar5 + 0x448);
          if (((*(char *)(lVar24 + local_138) != '\0') &&
              (pFVar22 = FDS_ISKM_BoidsController::GetExecutionContext
                                   ((FDS_ISKM_BoidsController *)this,local_res20),
              pFVar22 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0)) &&
             (*(ulong64 *)(lVar24 + 0xa8 + local_138) == GFrameCounter)) {
            if (pFVar22->LastState == FDS_ISKM_BoidState::sName_Idle) {
              uVar18 = 0;
              if ((int)local_res20 < (this->AllocatedPointTargetIndices).ArrayNum) {
                uVar18 = uVar23;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((*(int *)((this->AllocatedPointTargetIndices).AllocatorInstance.Data + local_158)
                   == -1) && (iVar19 = (this->FreePointIndices).ArrayNum, iVar19 != 0)) {
                if ((iVar19 < 1) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar19 = (this->FreePointIndices).ArrayNum;
                iVar25 = iVar19 + -1;
                uVar27 = *(undefined4 *)
                          ((this->FreePointIndices).AllocatorInstance.Data +
                          (longlong)iVar19 * 4 + -4);
                (this->FreePointIndices).ArrayNum = iVar25;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,&(this->FreePointIndices).AllocatorInstance,iVar25,
                           &(this->FreePointIndices).ArrayMax);
                uVar18 = 0;
                if ((int)local_res20 < (this->AllocatedPointTargetIndices).ArrayNum) {
                  uVar18 = uVar23;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(undefined4 *)
                 ((this->AllocatedPointTargetIndices).AllocatorInstance.Data + local_148 * 4) =
                     uVar27;
              }
            }
            if (pFVar22->LastState == FDS_ISKM_BoidState::sName_Return) {
              uVar18 = 0;
              if ((int)local_res20 < (this->AllocatedPointTargetIndices).ArrayNum) {
                uVar18 = uVar23;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(int *)((this->AllocatedPointTargetIndices).AllocatorInstance.Data +
                          local_148 * 4) != -1) {
                uVar18 = 0;
                if ((int)local_res20 < (this->AllocatedPointTargetIndices).ArrayNum) {
                  uVar18 = uVar23;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                piVar1 = &(this->FreePointIndices).ArrayMax;
                uVar27 = *(undefined4 *)
                          ((this->AllocatedPointTargetIndices).AllocatorInstance.Data +
                          local_148 * 4);
                iVar19 = (this->FreePointIndices).ArrayNum;
                if (iVar19 == *piVar1) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&(this->FreePointIndices).AllocatorInstance,piVar1);
                }
                (this->FreePointIndices).ArrayNum = iVar19 + 1;
                *(undefined4 *)
                 ((this->FreePointIndices).AllocatorInstance.Data + (longlong)iVar19 * 4) = uVar27;
                uVar18 = 0;
                if ((int)local_res20 < (this->AllocatedPointTargetIndices).ArrayNum) {
                  uVar18 = uVar23;
                }
                if ((uVar18 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(undefined4 *)
                 ((this->AllocatedPointTargetIndices).AllocatorInstance.Data + local_148 * 4) =
                     0xffffffff;
              }
            }
            dVar12 = (pFVar22->ExpectedTransform).Translation.XY.m128d_f64[0];
            dVar13 = (pFVar22->ExpectedTransform).Translation.XY.m128d_f64[1];
            dVar11 = (pFVar22->ExpectedTransform).Translation.ZW.m128d_f64[0];
            dVar14 = (pFVar22->DestPos).field0_0x0._s_0.X;
            dVar15 = (pFVar22->DestPos).field0_0x0._s_0.Y;
            dVar3 = (pFVar22->DestPos).field0_0x0._s_0.Z;
            if (pFVar22->bIsFlying == true) {
              if (((pFVar22->BoidsNavSystem).Object == (FWN_BoidsNavSystem *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar6 = (pFVar22->BoidsNavSystem).Object;
              iVar19 = (pFVar6->Route).ArrayNum;
              if (1 < iVar19 + -2) {
                local_150 = 0;
                local_res18 = 2;
                lVar24 = 0x18;
                uVar18 = 1;
                do {
                  uVar23 = 0;
                  if ((int)uVar18 < iVar19) {
                    uVar23 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar7 = (pFVar6->Route).AllocatorInstance.Data;
                  if (((dVar14 == *(double *)(pFVar7 + lVar24)) &&
                      (dVar15 == *(double *)(pFVar7 + lVar24 + 8))) &&
                     (dVar3 == *(double *)(pFVar7 + lVar24 + 0x10))) {
                    dVar10 = dVar14 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
                    uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
                    uVar28 = (undefined4)
                             ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                             0x20);
                    dVar26 = dVar15 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
                    local_a8[0]._16_8_ =
                         dVar3 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
                  }
                  else {
                    uVar23 = 0;
                    if ((int)uVar18 < (pFVar6->Route).ArrayNum) {
                      uVar23 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar8 = (pFVar6->Route).AllocatorInstance.Data;
                    uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
                    uVar28 = (undefined4)
                             ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                             0x20);
                    pFVar7 = pFVar8 + lVar24;
                    dVar10 = *(double *)pFVar7;
                    dVar26 = *(double *)(pFVar7 + 8);
                    local_a8[0]._16_8_ = *(undefined8 *)(pFVar8 + lVar24 + 0x10);
                  }
                  uVar23 = uVar18 + 1;
                  local_a8[0]._8_4_ = SUB84(dVar26,0);
                  local_a8[0]._0_8_ = dVar10;
                  local_a8[0]._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
                  uVar20 = 0;
                  if (local_res18 < (pFVar6->Route).ArrayNum) {
                    uVar20 = ~uVar23 >> 0x1f;
                  }
                  if (uVar20 == 0) {
                    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar17) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
                    uVar28 = (undefined4)
                             ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                             0x20);
                  }
                  pFVar7 = (pFVar6->Route).AllocatorInstance.Data;
                  lVar2 = lVar24 + 0x18;
                  if (((dVar12 == *(double *)(pFVar7 + lVar2)) &&
                      (dVar13 == *(double *)(pFVar7 + lVar24 + 0x20))) &&
                     (dVar11 == *(double *)(pFVar7 + lVar24 + 0x28))) {
                    dVar10 = dVar12 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
                    local_c0._s_0.Z = dVar11 + (double)CONCAT44(uVar28,uVar27);
                    dVar26 = dVar13 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
                  }
                  else {
                    uVar20 = 0;
                    if ((int)uVar23 < (pFVar6->Route).ArrayNum) {
                      uVar20 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar8 = (pFVar6->Route).AllocatorInstance.Data;
                    pFVar7 = pFVar8 + lVar2;
                    dVar10 = *(double *)pFVar7;
                    dVar26 = *(double *)(pFVar7 + 8);
                    local_c0._s_0.Z = (double)*(undefined8 *)(pFVar8 + lVar24 + 0x28);
                  }
                  local_c0._8_4_ = SUB84(dVar26,0);
                  local_c0._0_8_ = dVar10;
                  local_c0._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
                  uVar20 = 0;
                  if ((int)(uVar18 - 1) < (pFVar22->AsyncCollision_FlyLanding).ArrayNum) {
                    uVar20 = -uVar18 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar7 = (pFVar22->AsyncCollision_FlyLanding).AllocatorInstance.Data;
                  if ((*(longlong *)(pFVar7 + local_150) == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar17)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FWN_AsyncCollision::AsyncLineTraceByChannel
                            (*(FWN_AsyncCollision **)(pFVar7 + local_150),pUVar21,Single,
                             (TVector<double> *)&local_a8[0]._s_0,(TVector<double> *)&local_c0._s_0,
                             ECC_Visibility,&FCollisionQueryParams::DefaultQueryParam,
                             &FCollisionResponseParams::DefaultResponseParam,0);
                  local_150 = local_150 + 0x10;
                  iVar19 = (pFVar6->Route).ArrayNum;
                  local_res18 = local_res18 + 1;
                  lVar24 = lVar2;
                  uVar18 = uVar23;
                } while ((int)uVar23 < iVar19 + -2);
              }
            }
            local_d8._s_0.Z = (double)pFVar22->StepHeight + dVar11;
            local_f0._s_0.Z = dVar11 - dVar16;
            local_f0._s_0.X = dVar12;
            local_f0._s_0.Y = dVar13;
            local_d8._s_0.X = dVar12;
            local_d8._s_0.Y = dVar13;
            if (((pFVar22->AsyncCollision_Move).Object == (FWN_AsyncCollision *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FWN_AsyncCollision::AsyncLineTraceByChannel
                      ((pFVar22->AsyncCollision_Move).Object,pUVar21,Single,
                       (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_f0._s_0,
                       ECC_Visibility,&FCollisionQueryParams::DefaultQueryParam,
                       &FCollisionResponseParams::DefaultResponseParam,0);
          }
          local_res20 = local_res20 + 1;
          local_148 = local_148 + 1;
          local_138 = local_138 + 0xc0;
          local_158 = local_158 + 4;
        } while (local_148 < iVar4);
      }
    }
    return;
  }
  bVar17 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_1917489704077361067>,false,
                      "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Raven.cpp"
                      ,0x55,"false");
  if (!bVar17) {
    return;
  }
code_r0x00014b89fb78:
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// UpdateActor_PreUpdateBoids @ 14b8a18f0

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
FDS_ISKM_BoidsController_Raven::UpdateActor_PreUpdateBoids
          (FDS_ISKM_BoidsController_Raven *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  TReferenceControllerBase<1> *pTVar3;
  FWeakObjectPtr *this_00;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  UObject *pUVar12;
  TTransform<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  FWeakObjectPtr FVar21;
  double dVar22;
  double dVar23;
  FWeakObjectPtr FVar24;
  FWeakObjectPtr FVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  FWeakObjectPtr local_res8;
  
  dVar9 = __real_3ff0000000000000;
  uVar14 = 0;
  if (0 < (int)this->_padding_) {
    lVar15 = 0;
    uVar28 = (uint)__xmm_80000000000000008000000000000000;
    uVar29 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar11 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar15 + 8 + this->_padding_);
      this_00 = *(FWeakObjectPtr **)(lVar15 + this->_padding_);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (FWeakObjectPtr *)0x0) && (bVar10 = FWeakObjectPtr::IsValid(this_00), bVar10))
      {
        local_res8 = *this_00;
        pUVar12 = FWeakObjectPtr::Get(&local_res8);
        lVar4 = *(longlong *)(pUVar12 + 0xb);
        uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar4 != 0) {
          uVar16 = *(int *)(lVar4 + 0x210);
          uVar17 = *(int *)(lVar4 + 0x214);
          uVar18 = *(int *)(lVar4 + 0x218);
          uVar19 = *(int *)(lVar4 + 0x21c);
          uVar20 = *(FWeakObjectPtr *)(lVar4 + 0x220);
        }
        this_00[2].ObjectIndex = uVar16;
        this_00[2].ObjectSerialNumber = uVar17;
        this_00[3].ObjectIndex = uVar18;
        this_00[3].ObjectSerialNumber = uVar19;
        this_00[4] = (FWeakObjectPtr)uVar20;
        pUVar12 = FWeakObjectPtr::Get(&local_res8);
        if (*(longlong *)(pUVar12 + 0xb) == 0) {
          pTVar13 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar13 = (TTransform<double> *)(*(longlong *)(pUVar12 + 0xb) + 0x1f0);
        }
        auVar1 = *(undefined1 (*) [16])(pTVar13->Rotation).XY.m128d_f64;
        auVar2 = *(undefined1 (*) [16])(pTVar13->Rotation).ZW.m128d_f64;
        dVar22 = auVar2._0_8_;
        dVar23 = dVar22 + dVar22;
        dVar26 = (double)CONCAT44(auVar1._12_4_ ^ uVar29,auVar1._8_4_ ^ uVar28);
        dVar27 = auVar2._8_8_;
        dVar26 = dVar26 + dVar26;
        dVar7 = auVar1._0_8_;
        dVar8 = auVar1._8_8_;
        this_00[5] = (FWeakObjectPtr)((dVar26 * dVar8 - dVar23 * dVar22) + dVar9);
        this_00[6] = (FWeakObjectPtr)(dVar23 * dVar27 - dVar26 * dVar7);
        dVar6 = dVar7 + dVar7;
        this_00[7] = (FWeakObjectPtr)(dVar26 * dVar27 + dVar23 * dVar7);
        dVar23 = (double)CONCAT44(auVar2._4_4_ ^ uVar29,auVar2._0_4_ ^ uVar28);
        dVar23 = dVar23 + dVar23;
        FVar24 = (FWeakObjectPtr)((dVar23 * dVar22 - dVar6 * dVar7) + dVar9);
        FVar21 = (FWeakObjectPtr)(dVar6 * dVar27 - dVar23 * dVar8);
        this_00[0xb] = (FWeakObjectPtr)(dVar23 * dVar27 + dVar6 * dVar8);
        this_00[0xc] = FVar24;
        FVar25.ObjectIndex = FVar24.ObjectIndex ^ uVar28;
        FVar25.ObjectSerialNumber = FVar24.ObjectSerialNumber ^ uVar29;
        this_00[0xd] = FVar21;
        FVar24.ObjectIndex = FVar21.ObjectIndex ^ uVar28;
        FVar24.ObjectSerialNumber = FVar21.ObjectSerialNumber ^ uVar29;
        FVar21.ObjectIndex = this_00[0xb].ObjectIndex ^ uVar28;
        FVar21.ObjectSerialNumber = this_00[0xb].ObjectSerialNumber ^ uVar29;
        this_00[8] = FVar21;
        this_00[9] = FVar25;
        this_00[10] = FVar24;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar14 < (int)this->_padding_);
  }
  return;
}


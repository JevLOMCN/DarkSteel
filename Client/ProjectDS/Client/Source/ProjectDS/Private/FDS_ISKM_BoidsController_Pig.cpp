// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// ~FDS_ISKM_BoidsController_Pig @ 14b865a80

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
FDS_ISKM_BoidsController_Pig::~FDS_ISKM_BoidsController_Pig(FDS_ISKM_BoidsController_Pig *this)

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

// Initialize @ 14b87c3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FDS_ISKM_BoidsController_Pig::Initialize(FDS_ISKM_BoidsController_Pig *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FWN_StateMachine,1> *pTVar3;
  longlong *plVar4;
  FWN_StateMachine *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FWN_StateMachine,1> local_18;
  
  pTVar3 = MakeShared<FWN_StateMachine,1>(&local_18);
  local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  local_28 = pTVar3->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar4 = &this->_padding_;
  if ((FWN_StateMachine **)plVar4 != &local_28) {
    *plVar4 = (longlong)local_28;
    local_28 = (FWN_StateMachine *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar4,FDS_ISKM_BoidState::sName_Idle);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar4,FDS_ISKM_BoidState::sName_Roaming);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar4,FDS_ISKM_BoidState::sName_Return);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar4,sName_Idle_Idle,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Idle);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar4,sName_Idle_Roam,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Roaming);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar4,sName_Idle_Return,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Return);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar4,sName_Roaming_Idle,FDS_ISKM_BoidState::sName_Roaming,
             FDS_ISKM_BoidState::sName_Idle);
  if (*plVar4 == 0) {
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
  FWN_StateMachine::CreateTransition
            ((FWN_StateMachine *)*plVar4,sName_Return_Idle,FDS_ISKM_BoidState::sName_Return,
             FDS_ISKM_BoidState::sName_Idle);
  return;
}

// OnBoidAdded @ 14b8838e0

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
FDS_ISKM_BoidsController_Pig::OnBoidAdded
          (FDS_ISKM_BoidsController_Pig *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  FDS_ISKM_BoidState_Roaming *pFVar3;
  bool bVar4;
  UWN_ISKM_Profile *this_00;
  UClass *pUVar5;
  FWN_ISKM_AnimationInfo *pFVar6;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_01;
  FDS_ISKM_BoidState_Idle *pFVar7;
  FDS_ISKM_BoidState_Idle *pFVar8;
  undefined1 auStackY_118 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  TRawPtrProxy<FDS_ISKM_BoidState_Idle> local_c8;
  TRawPtrProxy<FDS_ISKM_BoidState_Roaming> local_c0;
  TSharedPtr<FDS_ISKM_BoidState_Idle,1> local_b8;
  TSharedPtr<FDS_ISKM_BoidState_Roaming,1> local_a8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_98;
  TSharedPtr<FDS_ISKM_BoidState,1> local_88;
  FName local_78;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FDS_ISKM_BoidsController::OnBoidAdded((FDS_ISKM_BoidsController *)this,param_1,param_2);
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1937077572445667443>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Pig.cpp"
                       ,0x73,"false");
    if (bVar4) {
code_r0x00014b883d19:
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
      pUVar5 = Z_Construct_UClass_UWN_ISKM_Profile_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pFVar6 = UWN_ISKM_Profile::FindAnimationInfo(this_00,this->sAnimName_Walk);
        UWN_ISKM_Profile::FindAnimationInfo(this_00,this->sAnimName_Run);
        this_01 = FDS_ISKM_BoidsController::GetExecutionContext
                            ((FDS_ISKM_BoidsController *)this,param_1);
        if (this_01 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
          return;
        }
        pFVar7 = ::operator_new(0x80);
        pFVar8 = (FDS_ISKM_BoidState_Idle *)0x0;
        local_c8.Object = pFVar8;
        if (pFVar7 != (FDS_ISKM_BoidState_Idle *)0x0) {
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
          (pFVar7->AnimationList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->AnimationList).ArrayNum = 0;
          (pFVar7->AnimationList).ArrayMax = 0;
          (pFVar7->AnimationTimeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->AnimationTimeList).ArrayNum = 0;
          (pFVar7->AnimationTimeList).ArrayMax = 0;
          pFVar7->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Idle__6B_;
          pFVar7->bShouldIdle = false;
          pFVar7->bShouldReturn = false;
          pFVar7->bShouldEscape = false;
          pFVar7->bShouldRomaing = false;
          pFVar7->bShouldFollow = false;
          *(FName *)((longlong)&pFVar7->_padding_ + 4) = FDS_ISKM_BoidState::sName_Idle;
          local_c8.Object = pFVar7;
        }
        TSharedPtr<FDS_ISKM_BoidState_Idle,1>::
        TSharedPtr<FDS_ISKM_BoidState_Idle,1><FDS_ISKM_BoidState_Idle>(&local_b8,&local_c8);
        pFVar7 = local_b8.Object;
        if ((local_b8.Object == (FDS_ISKM_BoidState_Idle *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
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
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 6;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,6,0,&local_d8.AllocatorInstance,6,&local_d8.ArrayMax);
        *(FName *)local_d8.AllocatorInstance.Data = local_78;
        *(FName *)(local_d8.AllocatorInstance.Data + 8) = FStack_70;
        *(FName *)(local_d8.AllocatorInstance.Data + 0x10) = local_68;
        *(FName *)(local_d8.AllocatorInstance.Data + 0x18) = FStack_60;
        *(FName *)(local_d8.AllocatorInstance.Data + 0x20) = local_58;
        *(FName *)(local_d8.AllocatorInstance.Data + 0x28) = FStack_50;
        FDS_ISKM_BoidState_Idle::AddAnimationList(pFVar7,this_00,&local_d8);
        if ((FName *)local_d8.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        local_98.Object = (FDS_ISKM_BoidState *)local_b8.Object;
        local_98.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (pFVar6 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar7 = ::operator_new(0x60);
          if (pFVar7 != (FDS_ISKM_BoidState_Idle *)0x0) {
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
            pFVar7->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Roaming__6B_;
            *(undefined2 *)&(pFVar7->AnimationList).AllocatorInstance.Data = 0;
            *(undefined1 *)((longlong)&(pFVar7->AnimationList).AllocatorInstance.Data + 2) = 0;
            *(FName *)((longlong)&pFVar7->_padding_ + 4) = FDS_ISKM_BoidState::sName_Roaming;
            pFVar8 = pFVar7;
          }
          local_c0.Object = (FDS_ISKM_BoidState_Roaming *)pFVar8;
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1>::
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1><FDS_ISKM_BoidState_Roaming>(&local_a8,&local_c0);
          pFVar3 = local_a8.Object;
          if ((local_a8.Object == (FDS_ISKM_BoidState_Roaming *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar3->_padding_ + 4) = this->sAnimName_Walk;
          local_88.Object = (FDS_ISKM_BoidState *)local_a8.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_a8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar3->_padding_ + 4) = pFVar6->TotalTime;
          if (local_a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_88);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
        }
        TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>
                        *)&this->_padding_,this_01);
        return;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1937077572445667450>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Pig.cpp"
                       ,0x7a,"false");
    if (bVar4) goto code_r0x00014b883d19;
  }
  return;
}

// OnBoundToActor @ 14b8846d0

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
FDS_ISKM_BoidsController_Pig::OnBoundToActor
          (FDS_ISKM_BoidsController_Pig *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// OnUnboundToActor @ 14b8949c0

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
FDS_ISKM_BoidsController_Pig::OnUnboundToActor
          (FDS_ISKM_BoidsController_Pig *this,AWN_ISKM_BoidsActor *param_1)

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

// UpdateActor_PostUpdateBoids @ 14b89f810

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
FDS_ISKM_BoidsController_Pig::UpdateActor_PostUpdateBoids
          (FDS_ISKM_BoidsController_Pig *this,float param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  UWorld *pUVar8;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  double local_68;
  double dStack_60;
  double local_58;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar8 = AActor::GetWorld((AActor *)this->_padding_);
    dVar5 = __real_407f400000000000;
    dVar4 = __real_4024000000000000;
    if (pUVar8 == (UWorld *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1937077572445667404>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Pig.cpp"
                         ,0x4c,"false");
      if (bVar6) goto code_r0x00014b89f89b;
    }
    else {
      uVar10 = 0;
      lVar1 = this->_padding_;
      lVar12 = (longlong)*(int *)(lVar1 + 0x450);
      if (0 < lVar12) {
        lVar11 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar1 + 0x450)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)(lVar1 + 0x448);
          if (((*(char *)(lVar11 + lVar2) != '\0') &&
              (pFVar9 = FDS_ISKM_BoidsController::GetExecutionContext
                                  ((FDS_ISKM_BoidsController *)this,uVar10),
              pFVar9 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0)) &&
             (*(ulong64 *)(lVar11 + 0xa8 + lVar2) == GFrameCounter)) {
            local_58 = (pFVar9->ExpectedTransform).Translation.ZW.m128d_f64[0];
            local_98._s_0.X = (pFVar9->ExpectedTransform).Translation.XY.m128d_f64[0];
            local_98._s_0.Y = (pFVar9->ExpectedTransform).Translation.XY.m128d_f64[1];
            local_98._s_0.Z = local_58 - dVar5;
            local_80._s_0.Z = (double)pFVar9->StepHeight + local_58 + dVar4;
            local_80._s_0.X = local_98._s_0.X;
            local_80._s_0.Y = local_98._s_0.Y;
            local_68 = local_98._s_0.X;
            dStack_60 = local_98._s_0.Y;
            if (((pFVar9->AsyncCollision_Move).Object == (FWN_AsyncCollision *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FWN_AsyncCollision::AsyncLineTraceByChannel
                      ((pFVar9->AsyncCollision_Move).Object,pUVar8,Single,
                       (TVector<double> *)&local_80._s_0,(TVector<double> *)&local_98._s_0,
                       ECC_Visibility,&FCollisionQueryParams::DefaultQueryParam,
                       &FCollisionResponseParams::DefaultResponseParam,0);
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0xc0;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
    return;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1937077572445667397>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Pig.cpp"
                     ,0x45,"false");
  if (!bVar6) {
    return;
  }
code_r0x00014b89f89b:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// UpdateActor_PreUpdateBoids @ 14b8a1610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FDS_ISKM_BoidsController_Pig::UpdateActor_PreUpdateBoids
          (FDS_ISKM_BoidsController_Pig *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  FDS_ISKM_BoidsTargetInfo *pFVar11;
  FDS_ISKM_BoidsTargetInfo *pFVar12;
  bool bVar13;
  UObject *pUVar14;
  TTransform<double> *pTVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  uint uVar21;
  double dVar22;
  uint uVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  FWeakObjectPtr local_res18 [2];
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  
  FDS_ISKM_BoidsController::GetMainPlayerInfo((FDS_ISKM_BoidsController *)this,&local_a8);
  pFVar11 = local_a8.Object;
  if (local_a8.Object != (FDS_ISKM_BoidsTargetInfo *)0x0) {
    local_res18[0] = ((local_a8.Object)->TargetActor).WeakPtr;
    bVar13 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar13) {
      pUVar14 = FWeakObjectPtr::Get(local_res18);
      lVar1 = *(longlong *)(pUVar14 + 0xb);
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_88 = *(double *)(lVar1 + 0x220);
        local_98 = *(undefined4 *)(lVar1 + 0x210);
        uStack_94 = *(undefined4 *)(lVar1 + 0x214);
        uStack_90 = *(undefined4 *)(lVar1 + 0x218);
        uStack_8c = *(undefined4 *)(lVar1 + 0x21c);
        uVar16 = local_98;
        uVar17 = uStack_94;
        uVar18 = uStack_90;
        uVar19 = uStack_8c;
        uVar20 = local_88;
      }
      *(undefined4 *)&(pFVar11->TargetPos).field0_0x0 = uVar16;
      *(undefined4 *)((longlong)&(pFVar11->TargetPos).field0_0x0 + 4) = uVar17;
      *(undefined4 *)((longlong)&(pFVar11->TargetPos).field0_0x0 + 8) = uVar18;
      *(undefined4 *)((longlong)&(pFVar11->TargetPos).field0_0x0 + 0xc) = uVar19;
      (pFVar11->TargetPos).field0_0x0._s_0.Z = (double)uVar20;
      pUVar14 = FWeakObjectPtr::Get(local_res18);
      pFVar12 = local_a8.Object;
      uVar10 = __xmm_80000000000000008000000000000000._4_4_;
      uVar9 = (uint)__xmm_80000000000000008000000000000000;
      dVar8 = __real_3ff0000000000000;
      if (*(longlong *)(pUVar14 + 0xb) == 0) {
        pTVar15 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar15 = (TTransform<double> *)(*(longlong *)(pUVar14 + 0xb) + 0x1f0);
      }
      dVar4 = (pTVar15->Rotation).ZW.m128d_f64[0];
      dVar5 = (pTVar15->Rotation).ZW.m128d_f64[1];
      dVar6 = (pTVar15->Rotation).XY.m128d_f64[0];
      dVar7 = (pTVar15->Rotation).XY.m128d_f64[1];
      dVar24 = dVar4 + dVar4;
      dVar22 = (double)CONCAT44((uint)((ulonglong)(dVar7 + dVar7) >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar7 + dVar7,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
      uVar21 = SUB84(dVar4 + dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar23 = (uint)((ulonglong)(dVar4 + dVar4) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      (pFVar11->TargetForward).field0_0x0._s_0.X =
           (dVar7 * dVar22 - dVar4 * dVar24) + __real_3ff0000000000000;
      (pFVar11->TargetForward).field0_0x0._s_0.Y = dVar5 * dVar24 - dVar6 * dVar22;
      dVar3 = dVar6 + dVar6;
      (pFVar11->TargetForward).field0_0x0._s_0.Z = dVar5 * dVar22 + dVar6 * dVar24;
      if ((local_a8.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pFVar12->TargetRight).field0_0x0._s_0.X =
           (double)CONCAT44(uVar23,uVar21) * dVar5 + dVar7 * dVar3;
      (pFVar12->TargetRight).field0_0x0._s_0.Y =
           ((double)CONCAT44(uVar23,uVar21) * dVar4 - dVar6 * dVar3) + dVar8;
      (pFVar12->TargetRight).field0_0x0._s_0.Z =
           dVar5 * dVar3 - (double)CONCAT44(uVar23,uVar21) * dVar7;
      if ((local_a8.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar20 = *(undefined8 *)&((local_a8.Object)->TargetRight).field0_0x0;
      uVar21 = *(uint *)((longlong)&((local_a8.Object)->TargetRight).field0_0x0 + 8) ^
               (uint)__xmm_80000000000000008000000000000000;
      uVar23 = *(uint *)((longlong)&((local_a8.Object)->TargetRight).field0_0x0 + 0xc) ^
               __xmm_80000000000000008000000000000000._4_4_;
      uVar25 = *(uint *)((longlong)&((local_a8.Object)->TargetRight).field0_0x0 + 0x10) ^
               _UNK_15066df78;
      uVar26 = *(uint *)((longlong)&((local_a8.Object)->TargetRight).field0_0x0 + 0x14) ^
               _UNK_15066df7c;
      if ((local_a8.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ((local_a8.Object)->TargetLeft).field0_0x0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)uVar20 >> 0x20) ^ uVar10,(uint)uVar20 ^ uVar9);
      *(uint *)((longlong)&((local_a8.Object)->TargetLeft).field0_0x0 + 8) = uVar21;
      *(uint *)((longlong)&((local_a8.Object)->TargetLeft).field0_0x0 + 0xc) = uVar23;
      *(uint *)((longlong)&((local_a8.Object)->TargetLeft).field0_0x0 + 0x10) = uVar25;
      *(uint *)((longlong)&((local_a8.Object)->TargetLeft).field0_0x0 + 0x14) = uVar26;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// ~FDS_ISKM_BoidsController_Chital @ 14b865a60

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
FDS_ISKM_BoidsController_Chital::~FDS_ISKM_BoidsController_Chital
          (FDS_ISKM_BoidsController_Chital *this)

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

// Initialize @ 14b87bc90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FDS_ISKM_BoidsController_Chital::Initialize(FDS_ISKM_BoidsController_Chital *this)

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
  FWN_StateMachine::CreateState((FWN_StateMachine *)*plVar4,FDS_ISKM_BoidState::sName_Escape);
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
            ((FWN_StateMachine *)*plVar4,sName_Idle_Escape,FDS_ISKM_BoidState::sName_Idle,
             FDS_ISKM_BoidState::sName_Escape);
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
            ((FWN_StateMachine *)*plVar4,sName_Return_Idle,FDS_ISKM_BoidState::sName_Return,
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
            ((FWN_StateMachine *)*plVar4,sName_Roaming_Escape,FDS_ISKM_BoidState::sName_Roaming,
             FDS_ISKM_BoidState::sName_Escape);
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
            ((FWN_StateMachine *)*plVar4,sName_Escape_Idle,FDS_ISKM_BoidState::sName_Escape,
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
            ((FWN_StateMachine *)*plVar4,sName_Escape_Return,FDS_ISKM_BoidState::sName_Escape,
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
            ((FWN_StateMachine *)*plVar4,sName_Escape_Escape,FDS_ISKM_BoidState::sName_Escape,
             FDS_ISKM_BoidState::sName_Escape);
  return;
}

// OnBoidAdded @ 14b882cd0

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
FDS_ISKM_BoidsController_Chital::OnBoidAdded
          (FDS_ISKM_BoidsController_Chital *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  FDS_ISKM_BoidState_Roaming *pFVar3;
  FDS_ISKM_BoidState_Escape *pFVar4;
  FDS_ISKM_BoidState_Return *pFVar5;
  bool bVar6;
  UWN_ISKM_Profile *this_00;
  UClass *pUVar7;
  FWN_ISKM_AnimationInfo *pFVar8;
  FWN_ISKM_AnimationInfo *pFVar9;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_01;
  FDS_ISKM_BoidState_Idle *pFVar10;
  FDS_ISKM_BoidState_Idle *pFVar11;
  undefined1 auStackY_168 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_128;
  TRawPtrProxy<FDS_ISKM_BoidState_Idle> local_118;
  TRawPtrProxy<FDS_ISKM_BoidState_Roaming> local_110;
  TRawPtrProxy<FDS_ISKM_BoidState_Escape> local_108;
  TRawPtrProxy<FDS_ISKM_BoidState_Return> local_100;
  TSharedPtr<FDS_ISKM_BoidState_Idle,1> local_f8;
  TSharedPtr<FDS_ISKM_BoidState_Roaming,1> local_e8;
  TSharedPtr<FDS_ISKM_BoidState_Escape,1> local_d8;
  TSharedPtr<FDS_ISKM_BoidState_Return,1> local_c8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_b8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_a8;
  TSharedPtr<FDS_ISKM_BoidState,1> local_98;
  TSharedPtr<FDS_ISKM_BoidState,1> local_88;
  FName local_78;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  FName local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FDS_ISKM_BoidsController::OnBoidAdded((FDS_ISKM_BoidsController *)this,param_1,param_2);
  if (this->_padding_ == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1304271346049482629>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chital.cpp"
                       ,0x7b,"false");
    if (bVar6) {
code_r0x00014b8833a4:
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
      pUVar7 = Z_Construct_UClass_UWN_ISKM_Profile_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        pFVar8 = UWN_ISKM_Profile::FindAnimationInfo(this_00,this->sAnimName_Walk);
        pFVar9 = UWN_ISKM_Profile::FindAnimationInfo(this_00,this->sAnimName_Run);
        this_01 = FDS_ISKM_BoidsController::GetExecutionContext
                            ((FDS_ISKM_BoidsController *)this,param_1);
        if (this_01 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
          return;
        }
        pFVar10 = ::operator_new(0x80);
        pFVar11 = (FDS_ISKM_BoidState_Idle *)0x0;
        local_118.Object = pFVar11;
        if (pFVar10 != (FDS_ISKM_BoidState_Idle *)0x0) {
          *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0;
          pFVar10->_padding_ = 0;
          pFVar10->_padding_ = 0;
          *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
          *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x43960000;
          *(undefined4 *)&pFVar10->_padding_ = 0x447a0000;
          *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x44fa0000;
          pFVar10->_padding_ = 0x42340000;
          *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
          *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x447a0000;
          *(undefined4 *)&pFVar10->_padding_ = 0x43960000;
          pFVar10->_padding_ = 0;
          (pFVar10->AnimationList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->AnimationList).ArrayNum = 0;
          (pFVar10->AnimationList).ArrayMax = 0;
          (pFVar10->AnimationTimeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->AnimationTimeList).ArrayNum = 0;
          (pFVar10->AnimationTimeList).ArrayMax = 0;
          pFVar10->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Idle__6B_;
          pFVar10->bShouldIdle = false;
          pFVar10->bShouldReturn = false;
          pFVar10->bShouldEscape = false;
          pFVar10->bShouldRomaing = false;
          pFVar10->bShouldFollow = false;
          *(FName *)((longlong)&pFVar10->_padding_ + 4) = FDS_ISKM_BoidState::sName_Idle;
          local_118.Object = pFVar10;
        }
        TSharedPtr<FDS_ISKM_BoidState_Idle,1>::
        TSharedPtr<FDS_ISKM_BoidState_Idle,1><FDS_ISKM_BoidState_Idle>(&local_f8,&local_118);
        pFVar10 = local_f8.Object;
        if ((local_f8.Object == (FDS_ISKM_BoidState_Idle *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
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
        local_48 = this->sAnimName_Idle7;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 7;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,7,0,&local_128.AllocatorInstance,7,&local_128.ArrayMax);
        *(FName *)local_128.AllocatorInstance.Data = local_78;
        *(FName *)(local_128.AllocatorInstance.Data + 8) = FStack_70;
        *(FName *)(local_128.AllocatorInstance.Data + 0x10) = local_68;
        *(FName *)(local_128.AllocatorInstance.Data + 0x18) = FStack_60;
        *(FName *)(local_128.AllocatorInstance.Data + 0x20) = local_58;
        *(FName *)(local_128.AllocatorInstance.Data + 0x28) = FStack_50;
        *(FName *)(local_128.AllocatorInstance.Data + 0x30) = local_48;
        FDS_ISKM_BoidState_Idle::AddAnimationList(pFVar10,this_00,&local_128);
        if ((FName *)local_128.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        local_b8.Object = (FDS_ISKM_BoidState *)local_f8.Object;
        local_b8.SharedReferenceCount.ReferenceController =
             local_f8.SharedReferenceCount.ReferenceController;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        if (pFVar8 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar10 = ::operator_new(0x60);
          local_110.Object = (FDS_ISKM_BoidState_Roaming *)pFVar11;
          if (pFVar10 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar10->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x44fa0000;
            pFVar10->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar10->_padding_ = 0x43960000;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Roaming__6B_;
            *(undefined2 *)&(pFVar10->AnimationList).AllocatorInstance.Data = 0;
            *(undefined1 *)((longlong)&(pFVar10->AnimationList).AllocatorInstance.Data + 2) = 0;
            *(FName *)((longlong)&pFVar10->_padding_ + 4) = FDS_ISKM_BoidState::sName_Roaming;
            local_110.Object = (FDS_ISKM_BoidState_Roaming *)pFVar10;
          }
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1>::
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1><FDS_ISKM_BoidState_Roaming>(&local_e8,&local_110)
          ;
          pFVar3 = local_e8.Object;
          if ((local_e8.Object == (FDS_ISKM_BoidState_Roaming *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar3->_padding_ + 4) = this->sAnimName_Walk;
          local_a8.Object = (FDS_ISKM_BoidState *)local_e8.Object;
          local_a8.SharedReferenceCount.ReferenceController =
               local_e8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar3->_padding_ + 4) = pFVar8->TotalTime;
          if (local_e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
        if (pFVar9 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar10 = ::operator_new(0x68);
          local_108.Object = (FDS_ISKM_BoidState_Escape *)pFVar11;
          if (pFVar10 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar10->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x44fa0000;
            pFVar10->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar10->_padding_ = 0x43960000;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Escape__6B_;
            *(undefined2 *)&(pFVar10->AnimationList).AllocatorInstance.Data = 0;
            *(undefined1 *)((longlong)&(pFVar10->AnimationList).AllocatorInstance.Data + 2) = 0;
            *(undefined4 *)((longlong)&(pFVar10->AnimationList).AllocatorInstance.Data + 4) = 0;
            (pFVar10->AnimationList).ArrayNum = 10;
            (pFVar10->AnimationList).ArrayMax = 5;
            *(FName *)((longlong)&pFVar10->_padding_ + 4) = FDS_ISKM_BoidState::sName_Escape;
            local_108.Object = (FDS_ISKM_BoidState_Escape *)pFVar10;
          }
          TSharedPtr<FDS_ISKM_BoidState_Escape,1>::
          TSharedPtr<FDS_ISKM_BoidState_Escape,1><FDS_ISKM_BoidState_Escape>(&local_d8,&local_108);
          pFVar4 = local_d8.Object;
          if ((local_d8.Object == (FDS_ISKM_BoidState_Escape *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar4->_padding_ + 4) = this->sAnimName_Run;
          local_98.Object = (FDS_ISKM_BoidState *)local_d8.Object;
          local_98.SharedReferenceCount.ReferenceController =
               local_d8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar4->_padding_ + 4) = pFVar9->TotalTime;
          if (local_d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          pFVar10 = ::operator_new(0x80);
          if (pFVar10 != (FDS_ISKM_BoidState_Idle *)0x0) {
            *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&pFVar10->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x44fa0000;
            pFVar10->_padding_ = 0x42340000;
            *(undefined4 *)&pFVar10->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&pFVar10->_padding_ = 0x43960000;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Return__6B_;
            *(undefined1 *)&(pFVar10->AnimationList).AllocatorInstance.Data = 0;
            (pFVar10->AnimationList).ArrayNum = 0;
            (pFVar10->AnimationList).ArrayMax = 0;
            (pFVar10->AnimationTimeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar10->AnimationTimeList).ArrayNum = 0;
            (pFVar10->AnimationTimeList).ArrayMax = 0;
            pFVar10->bShouldIdle = false;
            pFVar10->bShouldReturn = false;
            pFVar10->bShouldEscape = false;
            pFVar10->bShouldRomaing = false;
            *(FName *)((longlong)&pFVar10->_padding_ + 4) = FDS_ISKM_BoidState::sName_Return;
            pFVar11 = pFVar10;
          }
          local_100.Object = (FDS_ISKM_BoidState_Return *)pFVar11;
          TSharedPtr<FDS_ISKM_BoidState_Return,1>::
          TSharedPtr<FDS_ISKM_BoidState_Return,1><FDS_ISKM_BoidState_Return>(&local_c8,&local_100);
          pFVar5 = local_c8.Object;
          if ((local_c8.Object == (FDS_ISKM_BoidState_Return *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(FName *)((longlong)&pFVar5->_padding_ + 4) = this->sAnimName_Run;
          local_88.Object = (FDS_ISKM_BoidState *)local_c8.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_c8.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar5->_padding_ + 4) = pFVar9->TotalTime;
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_88);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
        }
        TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>
                        *)&this->_padding_,this_01);
        return;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1304271346049482622>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chital.cpp"
                       ,0x82,"false");
    if (bVar6) goto code_r0x00014b8833a4;
  }
  return;
}

// OnBoundToActor @ 14b884630

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
FDS_ISKM_BoidsController_Chital::OnBoundToActor
          (FDS_ISKM_BoidsController_Chital *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// OnUnboundToActor @ 14b8948e0

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
FDS_ISKM_BoidsController_Chital::OnUnboundToActor
          (FDS_ISKM_BoidsController_Chital *this,AWN_ISKM_BoidsActor *param_1)

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

// UpdateActor_PostUpdateBoids @ 14b89f1d0

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
FDS_ISKM_BoidsController_Chital::UpdateActor_PostUpdateBoids
          (FDS_ISKM_BoidsController_Chital *this,float param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  UWorld *pUVar7;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  double local_58;
  double dStack_50;
  double local_48;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar7 = AActor::GetWorld((AActor *)this->_padding_);
    dVar4 = __real_407f400000000000;
    if (pUVar7 == (UWorld *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1304271346049482668>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chital.cpp"
                         ,0x54,"false");
      if (bVar5) goto code_r0x00014b89f25b;
    }
    else {
      uVar9 = 0;
      lVar1 = this->_padding_;
      lVar11 = (longlong)*(int *)(lVar1 + 0x450);
      if (0 < lVar11) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar9 < *(int *)(lVar1 + 0x450)) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)(lVar1 + 0x448);
          if (((*(char *)(lVar10 + lVar2) != '\0') &&
              (pFVar8 = FDS_ISKM_BoidsController::GetExecutionContext
                                  ((FDS_ISKM_BoidsController *)this,uVar9),
              pFVar8 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0)) &&
             (*(ulong64 *)(lVar10 + 0xa8 + lVar2) == GFrameCounter)) {
            local_48 = (pFVar8->ExpectedTransform).Translation.ZW.m128d_f64[0];
            local_88._s_0.X = (pFVar8->ExpectedTransform).Translation.XY.m128d_f64[0];
            local_88._s_0.Y = (pFVar8->ExpectedTransform).Translation.XY.m128d_f64[1];
            local_70._s_0.Z = (double)pFVar8->StepHeight + local_48;
            local_88._s_0.Z = local_48 - dVar4;
            local_70._s_0.X = local_88._s_0.X;
            local_70._s_0.Y = local_88._s_0.Y;
            local_58 = local_88._s_0.X;
            dStack_50 = local_88._s_0.Y;
            if (((pFVar8->AsyncCollision_Move).Object == (FWN_AsyncCollision *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FWN_AsyncCollision::AsyncLineTraceByChannel
                      ((pFVar8->AsyncCollision_Move).Object,pUVar7,Single,
                       (TVector<double> *)&local_70._s_0,(TVector<double> *)&local_88._s_0,
                       ECC_Visibility,&FCollisionQueryParams::DefaultQueryParam,
                       &FCollisionResponseParams::DefaultResponseParam,0);
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0xc0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1304271346049482675>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chital.cpp"
                     ,0x4d,"false");
  if (!bVar5) {
    return;
  }
code_r0x00014b89f25b:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// UpdateActor_PreUpdateBoids @ 14b8a1050

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
FDS_ISKM_BoidsController_Chital::UpdateActor_PreUpdateBoids
          (FDS_ISKM_BoidsController_Chital *this,float param_1)

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


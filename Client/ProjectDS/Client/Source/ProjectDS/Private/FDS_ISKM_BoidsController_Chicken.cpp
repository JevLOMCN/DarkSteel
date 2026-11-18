// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// FDS_ISKM_BoidsController_Chicken @ 14b864220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDS_ISKM_BoidsController_Chicken * __thiscall
FDS_ISKM_BoidsController_Chicken::FDS_ISKM_BoidsController_Chicken
          (FDS_ISKM_BoidsController_Chicken *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Target).field0_0x0.DebugPtr = (AActor *)0x0;
  this->_padding_ = (longlong)&___7FDS_ISKM_BoidsController_Chicken__6B_;
  ::FName::FName(&this->sAnimName_Idle1,"AS_NPC_Ani_Chi_1_N_01_Lby_Std01");
  ::FName::FName(&this->sAnimName_Idle2,"AS_NPC_Ani_Chi_1_N_01_Lby_Std02");
  ::FName::FName(&this->sAnimName_Idle3,"AS_NPC_Ani_Chi_1_N_01_Lby_Std03");
  ::FName::FName(&this->sAnimName_Idle4,"AS_NPC_Ani_Chi_1_N_01_Lby_Std04");
  ::FName::FName(&this->sAnimName_Idle5,"AS_NPC_Ani_Chi_1_N_01_Lby_Std05");
  ::FName::FName(&this->sAnimName_Walk,"AS_NPC_Ani_Chi_1_N_01_Lby_Walk01");
  ::FName::FName(&this->sAnimName_Run,"AS_NPC_Ani_Chi_1_N_01_Lby_Run01");
  return this;
}

// ~FDS_ISKM_BoidsController_Chicken @ 14b865a20

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
FDS_ISKM_BoidsController_Chicken::~FDS_ISKM_BoidsController_Chicken
          (FDS_ISKM_BoidsController_Chicken *this)

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

// Initialize @ 14b87abc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FDS_ISKM_BoidsController_Chicken::Initialize(FDS_ISKM_BoidsController_Chicken *this)

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
            ((FWN_StateMachine *)*plVar4,sName_Roaming_Idle,FDS_ISKM_BoidState::sName_Roaming,
             FDS_ISKM_BoidState::sName_Idle);
  return;
}

// OnBoidAdded @ 14b881ae0

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
FDS_ISKM_BoidsController_Chicken::OnBoidAdded
          (FDS_ISKM_BoidsController_Chicken *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  FDS_ISKM_BoidState_Roaming *pFVar4;
  FDS_ISKM_BoidState_Return *pFVar5;
  bool bVar6;
  UWN_ISKM_Profile *this_00;
  UClass *pUVar7;
  FWN_ISKM_AnimationInfo *pFVar8;
  FWN_ISKM_AnimationInfo *pFVar9;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_01;
  FDS_ISKM_BoidState_Idle *pFVar10;
  FDS_ISKM_BoidState_Idle *pFVar11;
  TRawPtrProxy<FDS_ISKM_BoidState_Idle> local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_b8;
  TRawPtrProxy<FDS_ISKM_BoidState_Roaming> local_a8;
  TRawPtrProxy<FDS_ISKM_BoidState_Return> local_a0;
  TSharedPtr<FDS_ISKM_BoidState_Idle,1> local_98;
  TSharedPtr<FDS_ISKM_BoidState_Roaming,1> local_88;
  TSharedPtr<FDS_ISKM_BoidState_Return,1> local_78;
  TSharedPtr<FDS_ISKM_BoidState,1> local_68;
  TSharedPtr<FDS_ISKM_BoidState,1> local_58;
  TSharedPtr<FDS_ISKM_BoidState,1> local_48;
  
  FDS_ISKM_BoidsController::OnBoidAdded((FDS_ISKM_BoidsController *)this,param_1,param_2);
  if (this->_padding_ == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1140596533310259050>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken.cpp"
                       ,0x96,"false");
    if (!bVar6) {
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
        local_res8.Object = pFVar11;
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
          local_res8.Object = pFVar10;
        }
        TSharedPtr<FDS_ISKM_BoidState_Idle,1>::
        TSharedPtr<FDS_ISKM_BoidState_Idle,1><FDS_ISKM_BoidState_Idle>(&local_98,&local_res8);
        pFVar10 = local_98.Object;
        if ((local_98.Object == (FDS_ISKM_BoidState_Idle *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = this->sAnimName_Idle1;
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
        *(FName *)local_b8.AllocatorInstance.Data = FVar2;
        FDS_ISKM_BoidState_Idle::AddAnimationList(pFVar10,this_00,&local_b8);
        if ((FName *)local_b8.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        local_68.Object = (FDS_ISKM_BoidState *)local_98.Object;
        local_68.SharedReferenceCount.ReferenceController =
             local_98.SharedReferenceCount.ReferenceController;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (pFVar8 != (FWN_ISKM_AnimationInfo *)0x0) {
          pFVar10 = ::operator_new(0x60);
          local_a8.Object = (FDS_ISKM_BoidState_Roaming *)pFVar11;
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
            local_a8.Object = (FDS_ISKM_BoidState_Roaming *)pFVar10;
          }
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1>::
          TSharedPtr<FDS_ISKM_BoidState_Roaming,1><FDS_ISKM_BoidState_Roaming>(&local_88,&local_a8);
          pFVar4 = local_88.Object;
          if ((local_88.Object == (FDS_ISKM_BoidState_Roaming *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(FName *)((longlong)&pFVar4->_padding_ + 4) = this->sAnimName_Walk;
          local_58.Object = (FDS_ISKM_BoidState *)local_88.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_88.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar4->_padding_ + 4) = pFVar8->TotalTime;
          if (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
        }
        if (pFVar9 == (FWN_ISKM_AnimationInfo *)0x0) {
          return;
        }
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
        local_a0.Object = (FDS_ISKM_BoidState_Return *)pFVar11;
        TSharedPtr<FDS_ISKM_BoidState_Return,1>::
        TSharedPtr<FDS_ISKM_BoidState_Return,1><FDS_ISKM_BoidState_Return>(&local_78,&local_a0);
        pFVar5 = local_78.Object;
        if ((local_78.Object == (FDS_ISKM_BoidState_Return *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(FName *)((longlong)&pFVar5->_padding_ + 4) = this->sAnimName_Run;
        local_48.Object = (FDS_ISKM_BoidState *)local_78.Object;
        local_48.SharedReferenceCount.ReferenceController =
             local_78.SharedReferenceCount.ReferenceController;
        *(float *)((longlong)&pFVar5->_padding_ + 4) = pFVar9->TotalTime;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        return;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1140596533310259043>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken.cpp"
                       ,0x9d,"false");
    if (!bVar6) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnBoundToActor @ 14b8844f0

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
FDS_ISKM_BoidsController_Chicken::OnBoundToActor
          (FDS_ISKM_BoidsController_Chicken *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// OnUnboundToActor @ 14b8946c0

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
FDS_ISKM_BoidsController_Chicken::OnUnboundToActor
          (FDS_ISKM_BoidsController_Chicken *this,AWN_ISKM_BoidsActor *param_1)

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

// UpdateActor_PostUpdateBoids @ 14b89ebf0

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
FDS_ISKM_BoidsController_Chicken::UpdateActor_PostUpdateBoids
          (FDS_ISKM_BoidsController_Chicken *this,float param_1)

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
                      (&bGEnsureHasExecuted<_1140596533310259102>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken.cpp"
                       ,0x62,"false");
    if (!bVar6) {
      return;
    }
code_r0x00014b89ec7c:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar8 = AActor::GetWorld((AActor *)this->_padding_);
  dVar5 = __real_407f400000000000;
  if (pUVar8 == (UWorld *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1140596533310259095>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken.cpp"
                       ,0x69,"false");
    if (bVar6) goto code_r0x00014b89ec7c;
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

// UpdateActor_PreUpdateBoids @ 14b8a0470

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
FDS_ISKM_BoidsController_Chicken::UpdateActor_PreUpdateBoids
          (FDS_ISKM_BoidsController_Chicken *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWeakObjectPtr *this_00;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  FWeakObjectPtr FVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  UObject *pUVar19;
  TTransform<double> *pTVar20;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_01;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  TTransform<double> local_e8;
  
  uVar22 = 0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  uVar15 = _UNK_15066df7c;
  uVar14 = _UNK_15066df78;
  uVar18 = __xmm_80000000000000008000000000000000._4_4_;
  uVar21 = (uint)__xmm_80000000000000008000000000000000;
  dVar13 = __real_3ff0000000000000;
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar24 = uVar22;
  uVar25 = uVar22;
  if (0 < (int)this->_padding_) {
    do {
      uVar23 = (uint)uVar24;
      uVar17 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(uVar25 + 8 + this->_padding_);
      this_00 = *(FWeakObjectPtr **)(uVar25 + this->_padding_);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (FWeakObjectPtr *)0x0) && (bVar16 = FWeakObjectPtr::IsValid(this_00), bVar16))
      {
        local_res8 = *this_00;
        pUVar19 = FWeakObjectPtr::Get(&local_res8);
        lVar5 = *(longlong *)(pUVar19 + 0xb);
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar5 != 0) {
          uVar26 = *(int *)(lVar5 + 0x210);
          uVar27 = *(int *)(lVar5 + 0x214);
          uVar28 = *(int *)(lVar5 + 0x218);
          uVar29 = *(int *)(lVar5 + 0x21c);
          uVar30 = *(FWeakObjectPtr *)(lVar5 + 0x220);
        }
        this_00[2].ObjectIndex = uVar26;
        this_00[2].ObjectSerialNumber = uVar27;
        this_00[3].ObjectIndex = uVar28;
        this_00[3].ObjectSerialNumber = uVar29;
        this_00[4] = (FWeakObjectPtr)uVar30;
        pUVar19 = FWeakObjectPtr::Get(&local_res8);
        if (*(longlong *)(pUVar19 + 0xb) == 0) {
          pTVar20 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar20 = (TTransform<double> *)(*(longlong *)(pUVar19 + 0xb) + 0x1f0);
        }
        auVar1 = *(undefined1 (*) [16])(pTVar20->Rotation).XY.m128d_f64;
        auVar2 = *(undefined1 (*) [16])(pTVar20->Rotation).ZW.m128d_f64;
        dVar31 = auVar2._0_8_;
        dVar32 = dVar31 + dVar31;
        dVar35 = auVar2._8_8_;
        dVar34 = (double)CONCAT44(auVar1._12_4_ ^ uVar18,auVar1._8_4_ ^ uVar21);
        dVar34 = dVar34 + dVar34;
        dVar9 = auVar1._8_8_;
        dVar7 = auVar1._0_8_;
        this_00[5] = (FWeakObjectPtr)((dVar9 * dVar34 - dVar31 * dVar32) + dVar13);
        dVar33 = (double)CONCAT44(auVar2._4_4_ ^ uVar18,auVar2._0_4_ ^ uVar21);
        dVar33 = dVar33 + dVar33;
        this_00[6] = (FWeakObjectPtr)(dVar35 * dVar32 - dVar7 * dVar34);
        this_00[7] = (FWeakObjectPtr)(dVar35 * dVar34 + dVar7 * dVar32);
        dVar32 = dVar7 + dVar7;
        this_00[0xb] = (FWeakObjectPtr)(dVar9 * dVar32 + dVar35 * dVar33);
        this_00[0xc] = (FWeakObjectPtr)((dVar31 * dVar33 - dVar7 * dVar32) + dVar13);
        this_00[0xd] = (FWeakObjectPtr)(dVar35 * dVar32 - dVar9 * dVar33);
        uVar17 = this_00[0xc].ObjectIndex;
        uVar10 = this_00[0xc].ObjectSerialNumber;
        uVar11 = this_00[0xd].ObjectIndex;
        uVar12 = this_00[0xd].ObjectSerialNumber;
        FVar8.ObjectSerialNumber = this_00[0xb].ObjectSerialNumber ^ uVar18;
        FVar8.ObjectIndex = this_00[0xb].ObjectIndex ^ uVar21;
        this_00[8] = FVar8;
        this_00[9].ObjectIndex = uVar17 ^ uVar21;
        this_00[9].ObjectSerialNumber = uVar10 ^ uVar18;
        this_00[10].ObjectIndex = uVar11 ^ uVar14;
        this_00[10].ObjectSerialNumber = uVar12 ^ uVar15;
        if (this_00[1].ObjectIndex == 1) {
          local_res18 = local_res8;
          pUVar19 = FWeakObjectPtr::Get(&local_res8);
          if (*(longlong *)(pUVar19 + 0xb) == 0) {
            pTVar20 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            pTVar20 = (TTransform<double> *)(*(longlong *)(pUVar19 + 0xb) + 0x1f0);
          }
          local_e8.Rotation.XY.m128d_f64 = *&(pTVar20->Rotation).XY.m128d_f64;
          local_e8.Rotation.ZW.m128d_f64 = *&(pTVar20->Rotation).ZW.m128d_f64;
          local_e8.Translation.XY.m128d_f64 = *&(pTVar20->Translation).XY.m128d_f64;
          local_e8.Translation.ZW.m128d_f64 = *&(pTVar20->Translation).ZW.m128d_f64;
          local_e8.Scale3D.XY.m128d_f64 = *&(pTVar20->Scale3D).XY.m128d_f64;
          local_e8.Scale3D.ZW.m128d_f64 = *&(pTVar20->Scale3D).ZW.m128d_f64;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar25 = uVar25 + 0x10;
    } while ((int)(uVar23 + 1) < (int)this->_padding_);
  }
  iVar3 = *(int *)(this->_padding_ + 0x450);
  uVar24 = uVar22;
  if (0 < iVar3) {
    do {
      uVar21 = (uint)uVar22;
      if ((int)uVar21 < (int)this->_padding_) {
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_01 = (FDS_ISKM_BoidsFSM_ExecutionContext *)(this->_padding_ + uVar24);
        if ((this_01 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
           (FDS_ISKM_BoidState::sName_Follow != this_01->LastState)) {
          (this_01->FollowTargetInfo).TargetActor.WeakPtr = (FWeakObjectPtr)0x0;
          (this_01->FollowTargetInfo).TargetType = None;
          FDS_ISKM_BoidsFSM_ExecutionContext::SetFollowTargetInfo
                    (this_01,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18,&local_e8);
        }
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      uVar24 = uVar24 + 0x280;
    } while ((int)(uVar21 + 1) < iVar3);
  }
  return;
}


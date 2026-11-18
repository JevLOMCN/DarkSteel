// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// ~FDS_ISKM_BoidsController_Chicken_Hen @ 14b865a50

void __thiscall
FDS_ISKM_BoidsController_Chicken_Hen::~FDS_ISKM_BoidsController_Chicken_Hen
          (FDS_ISKM_BoidsController_Chicken_Hen *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x40);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x38);
  DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
            (*(TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> **)&this->field_0x20,*(int *)&this->field_0x28
            );
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
            (*(FDS_ISKM_BoidsFSM_ExecutionContext **)&this->field_0x10,*(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  return;
}

// Initialize @ 14b87bac0

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
FDS_ISKM_BoidsController_Chicken_Hen::Initialize(FDS_ISKM_BoidsController_Chicken_Hen *this)

{
  code *pcVar1;
  bool bVar2;
  
  FDS_ISKM_BoidsController_Chicken::Initialize((FDS_ISKM_BoidsController_Chicken *)this);
  if (*(longlong *)&this->field_0x30 == 0) {
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
  FWN_StateMachine::CreateState
            (*(FWN_StateMachine **)&this->field_0x30,FDS_ISKM_BoidState::sName_Escape);
  if (*(longlong *)&this->field_0x30 == 0) {
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
            (*(FWN_StateMachine **)&this->field_0x30,sName_Idle_Escape,
             FDS_ISKM_BoidState::sName_Idle,FDS_ISKM_BoidState::sName_Escape);
  if (*(longlong *)&this->field_0x30 == 0) {
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
            (*(FWN_StateMachine **)&this->field_0x30,sName_Roaming_Escape,
             FDS_ISKM_BoidState::sName_Roaming,FDS_ISKM_BoidState::sName_Escape);
  if (*(longlong *)&this->field_0x30 == 0) {
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
            (*(FWN_StateMachine **)&this->field_0x30,sName_Escape_Idle,
             FDS_ISKM_BoidState::sName_Escape,FDS_ISKM_BoidState::sName_Idle);
  if (*(longlong *)&this->field_0x30 == 0) {
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
            (*(FWN_StateMachine **)&this->field_0x30,sName_Escape_Return,
             FDS_ISKM_BoidState::sName_Escape,FDS_ISKM_BoidState::sName_Return);
  if (*(longlong *)&this->field_0x30 == 0) {
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
            (*(FWN_StateMachine **)&this->field_0x30,sName_Escape_Escape,
             FDS_ISKM_BoidState::sName_Escape,FDS_ISKM_BoidState::sName_Escape);
  return;
}

// OnBoidAdded @ 14b882a60

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
FDS_ISKM_BoidsController_Chicken_Hen::OnBoidAdded
          (FDS_ISKM_BoidsController_Chicken_Hen *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  FDS_ISKM_BoidState_Escape *pFVar4;
  bool bVar5;
  UWN_ISKM_Profile *this_00;
  UClass *pUVar6;
  FWN_ISKM_AnimationInfo *pFVar7;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_01;
  TRawPtrProxy<FDS_ISKM_BoidState_Escape> local_res8;
  TSharedPtr<FDS_ISKM_BoidState_Escape,1> local_28;
  TSharedPtr<FDS_ISKM_BoidState,1> local_18;
  
  FDS_ISKM_BoidsController_Chicken::OnBoidAdded
            ((FDS_ISKM_BoidsController_Chicken *)this,param_1,param_2);
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5505022968134107184>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken_Hen.cpp"
                       ,0x30,"false");
    if (!bVar5) {
      return;
    }
  }
  else {
    this_00 = (UWN_ISKM_Profile *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)
                         (*(longlong *)&this->field_0x8 + 0x338));
    if (this_00 != (UWN_ISKM_Profile *)0x0) {
      pUVar6 = Z_Construct_UClass_UWN_ISKM_Profile_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x90;
        FVar2.Number = *(uint *)&this->field_0x94;
        pFVar7 = UWN_ISKM_Profile::FindAnimationInfo(this_00,FVar2);
        this_01 = FDS_ISKM_BoidsController::GetExecutionContext
                            ((FDS_ISKM_BoidsController *)this,param_1);
        if (this_01 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
          return;
        }
        if (pFVar7 != (FWN_ISKM_AnimationInfo *)0x0) {
          local_res8.Object = ::operator_new(0x68);
          if (local_res8.Object != (FDS_ISKM_BoidState_Escape *)0x0) {
            *(undefined4 *)&(local_res8.Object)->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&(local_res8.Object)->_padding_ + 4) = 0x43960000;
            *(undefined4 *)&(local_res8.Object)->_padding_ = 0x447a0000;
            *(undefined4 *)((longlong)&(local_res8.Object)->_padding_ + 4) = 0x44fa0000;
            *(undefined4 *)&(local_res8.Object)->_padding_ = 0x42340000;
            *(undefined8 *)((longlong)&(local_res8.Object)->_padding_ + 4) = 0;
            (local_res8.Object)->_padding_ = 0;
            (local_res8.Object)->_padding_ = 0;
            *(undefined4 *)((longlong)&(local_res8.Object)->_padding_ + 4) = 0;
            (local_res8.Object)->_padding_ = 0;
            (local_res8.Object)->bShouldIdle = false;
            (local_res8.Object)->bShouldReturn = false;
            (local_res8.Object)->bFindRoute = false;
            (local_res8.Object)->LastEscapeCount = 0;
            *(undefined4 *)&(local_res8.Object)->_padding_ = 0x44fa0000;
            *(undefined4 *)((longlong)&(local_res8.Object)->_padding_ + 4) = 0x447a0000;
            *(undefined4 *)&(local_res8.Object)->_padding_ = 0x43960000;
            (local_res8.Object)->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Escape__6B_;
            (local_res8.Object)->LastCheckEscapeCount = 10;
            (local_res8.Object)->LimitIgnoreAngleFindRouteCount = 5;
            *(FName *)((longlong)&(local_res8.Object)->_padding_ + 4) =
                 FDS_ISKM_BoidState::sName_Escape;
          }
          TSharedPtr<FDS_ISKM_BoidState_Escape,1>::
          TSharedPtr<FDS_ISKM_BoidState_Escape,1><FDS_ISKM_BoidState_Escape>(&local_28,&local_res8);
          pFVar4 = local_28.Object;
          if ((local_28.Object == (FDS_ISKM_BoidState_Escape *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)((longlong)&pFVar4->_padding_ + 4) = *(undefined8 *)&this->field_0x90;
          local_18.Object = (FDS_ISKM_BoidState *)local_28.Object;
          local_18.SharedReferenceCount.ReferenceController =
               local_28.SharedReferenceCount.ReferenceController;
          *(float *)((longlong)&pFVar4->_padding_ + 4) = pFVar7->TotalTime;
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FDS_ISKM_BoidsFSM_ExecutionContext::AddState(this_01,&local_18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
        }
        TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>
                        *)&this->field_0x40,this_01);
        return;
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5505022968134107191>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\Controller\\DS_ISKM_BoidsController_Chicken_Hen.cpp"
                       ,0x37,"false");
    if (!bVar5) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnBoundToActor @ 14b8845e0

void __thiscall
FDS_ISKM_BoidsController_Chicken_Hen::OnBoundToActor
          (FDS_ISKM_BoidsController_Chicken_Hen *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    *(AWN_ISKM_BoidsActor **)&this->field_0x8 = param_1;
    return;
  }
  *(AWN_ISKM_BoidsActor **)&this->field_0x8 = param_1;
  return;
}

// OnUnboundToActor @ 14b8948d0

void __thiscall
FDS_ISKM_BoidsController_Chicken_Hen::OnUnboundToActor
          (FDS_ISKM_BoidsController_Chicken_Hen *this,AWN_ISKM_BoidsActor *param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(int *)&this->field_0x1c < 0) {
    DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
              (*(FDS_ISKM_BoidsFSM_ExecutionContext **)&this->field_0x10,*(int *)&this->field_0x18);
    *(undefined4 *)&this->field_0x18 = 0;
    if (*(int *)&this->field_0x1c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x280,0x10,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
    }
  }
  else {
    DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
              (*(FDS_ISKM_BoidsFSM_ExecutionContext **)&this->field_0x10,*(int *)&this->field_0x18);
    *(undefined4 *)&this->field_0x18 = 0;
  }
  if (*(int *)&this->field_0x2c < 0) {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              (*(TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> **)&this->field_0x20,
               *(int *)&this->field_0x28);
    *(undefined4 *)&this->field_0x28 = 0;
    if (*(int *)&this->field_0x2c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->field_0x20,0,(int *)&this->field_0x2c);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              (*(TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> **)&this->field_0x20,
               *(int *)&this->field_0x28);
    *(undefined4 *)&this->field_0x28 = 0;
  }
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x30 != &uStack_18) {
    *(undefined8 *)&this->field_0x30 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x38,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// UpdateActor_PostUpdateBoids @ 14b89f1c0

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
FDS_ISKM_BoidsController_Chicken_Hen::UpdateActor_PostUpdateBoids
          (FDS_ISKM_BoidsController_Chicken_Hen *this,float param_1)

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
  TVector<double>_u_0 TStack_88;
  TVector<double>_u_0 TStack_70;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  if (*(AActor **)&this->field_0x8 == (AActor *)0x0) {
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
  pUVar8 = AActor::GetWorld(*(AActor **)&this->field_0x8);
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
    lVar2 = *(longlong *)&this->field_0x8;
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
          TStack_88._s_0.X = (pFVar9->ExpectedTransform).Translation.XY.m128d_f64[0];
          TStack_88._s_0.Y = (pFVar9->ExpectedTransform).Translation.XY.m128d_f64[1];
          dStack_48 = (pFVar9->ExpectedTransform).Translation.ZW.m128d_f64[0];
          if ((pFVar9->AsyncCollision_Move).Object == (FWN_AsyncCollision *)0x0) {
            return;
          }
          TStack_70._s_0.Z = (double)pFVar9->StepHeight + dStack_48;
          TStack_88._s_0.Z = dStack_48 - dVar5;
          TStack_70._s_0.X = TStack_88._s_0.X;
          TStack_70._s_0.Y = TStack_88._s_0.Y;
          dStack_58 = TStack_88._s_0.X;
          dStack_50 = TStack_88._s_0.Y;
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
                     (TVector<double> *)&TStack_70._s_0,(TVector<double> *)&TStack_88._s_0,
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

// UpdateActor_PreUpdateBoids @ 14b8a1040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDS_ISKM_BoidsController_Chicken_Hen::UpdateActor_PreUpdateBoids
          (FDS_ISKM_BoidsController_Chicken_Hen *this,float param_1)

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
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_18;
  undefined8 uStackX_20;
  TTransform<double> TStack_e8;
  
  uVar22 = 0;
  FStackX_18.ObjectIndex = 0;
  FStackX_18.ObjectSerialNumber = 0;
  uStackX_20 = 0;
  FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&uStackX_20);
  uVar15 = _UNK_15066df7c;
  uVar14 = _UNK_15066df78;
  uVar18 = __xmm_80000000000000008000000000000000._4_4_;
  uVar21 = (uint)__xmm_80000000000000008000000000000000;
  dVar13 = __real_3ff0000000000000;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar24 = uVar22;
  uVar25 = uVar22;
  if (0 < *(int *)&this->field_0x28) {
    do {
      uVar23 = (uint)uVar24;
      uVar17 = 0;
      if ((int)uVar23 < *(int *)&this->field_0x28) {
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
      pTVar4 = *(TReferenceControllerBase<1> **)(uVar25 + 8 + *(longlong *)&this->field_0x20);
      this_00 = *(FWeakObjectPtr **)(uVar25 + *(longlong *)&this->field_0x20);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (FWeakObjectPtr *)0x0) && (bVar16 = FWeakObjectPtr::IsValid(this_00), bVar16))
      {
        FStackX_8 = *this_00;
        pUVar19 = FWeakObjectPtr::Get(&FStackX_8);
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
        pUVar19 = FWeakObjectPtr::Get(&FStackX_8);
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
          FStackX_18 = FStackX_8;
          pUVar19 = FWeakObjectPtr::Get(&FStackX_8);
          if (*(longlong *)(pUVar19 + 0xb) == 0) {
            pTVar20 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            pTVar20 = (TTransform<double> *)(*(longlong *)(pUVar19 + 0xb) + 0x1f0);
          }
          TStack_e8.Rotation.XY.m128d_f64 = *&(pTVar20->Rotation).XY.m128d_f64;
          TStack_e8.Rotation.ZW.m128d_f64 = *&(pTVar20->Rotation).ZW.m128d_f64;
          TStack_e8.Translation.XY.m128d_f64 = *&(pTVar20->Translation).XY.m128d_f64;
          TStack_e8.Translation.ZW.m128d_f64 = *&(pTVar20->Translation).ZW.m128d_f64;
          TStack_e8.Scale3D.XY.m128d_f64 = *&(pTVar20->Scale3D).XY.m128d_f64;
          TStack_e8.Scale3D.ZW.m128d_f64 = *&(pTVar20->Scale3D).ZW.m128d_f64;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar25 = uVar25 + 0x10;
    } while ((int)(uVar23 + 1) < *(int *)&this->field_0x28);
  }
  iVar3 = *(int *)(*(longlong *)&this->field_0x8 + 0x450);
  uVar24 = uVar22;
  if (0 < iVar3) {
    do {
      uVar21 = (uint)uVar22;
      if ((int)uVar21 < *(int *)&this->field_0x18) {
        uVar18 = 0;
        if ((int)uVar21 < *(int *)&this->field_0x18) {
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
        this_01 = (FDS_ISKM_BoidsFSM_ExecutionContext *)(*(longlong *)&this->field_0x10 + uVar24);
        if ((this_01 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
           (FDS_ISKM_BoidState::sName_Follow != this_01->LastState)) {
          (this_01->FollowTargetInfo).TargetActor.WeakPtr = (FWeakObjectPtr)0x0;
          (this_01->FollowTargetInfo).TargetType = None;
          FDS_ISKM_BoidsFSM_ExecutionContext::SetFollowTargetInfo
                    (this_01,(TWeakObjectPtr<AActor,FWeakObjectPtr>)FStackX_18,&TStack_e8);
        }
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      uVar24 = uVar24 + 0x280;
    } while ((int)(uVar21 + 1) < iVar3);
  }
  return;
}


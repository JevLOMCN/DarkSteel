// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// StaticStruct @ 147494860

UScriptStruct * __cdecl FAnimNode_StateMachine::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateMachine,(UObject *)pUVar1,
                         L"AnimNode_StateMachine");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.OuterSingleton;
}

// Initialize_AnyThread @ 147499ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::Initialize_AnyThread
          (FAnimNode_StateMachine *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  TArray<FPoseLink,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGraphTraversalCounter,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FBakedAnimationStateMachine *pFVar5;
  FScriptContainerElement *pFVar6;
  FAnimationActiveTransitionEntry *pFVar7;
  FTransitionEvent *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FAnimNode_TransitionResult *pFVar15;
  IAnimClassInterface *pIVar16;
  uint uVar17;
  int *piVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  
  pIVar16 = (IAnimClassInterface *)0x0;
  if (*(longlong *)param_1 != 0) {
    pIVar16 = *(IAnimClassInterface **)(*(longlong *)param_1 + 0x148);
  }
  pFVar5 = this->PRIVATE_MachineDescription;
  if (pFVar5 == (FBakedAnimationStateMachine *)0x0) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      return;
    }
  }
  else {
    piVar1 = &(pFVar5->States).ArrayNum;
    this->ElapsedTime = 0.0;
    this->CurrentState = -1;
    if (0 < *piVar1) {
      pTVar2 = &this->StatePoseLinks;
      piVar18 = &(this->StatePoseLinks).ArrayMax;
      (this->StatePoseLinks).ArrayNum = 0;
      if ((this->StatePoseLinks).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar18);
      }
      uVar20 = *piVar1;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      if (*piVar18 < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar20,&pTVar2->AllocatorInstance,(this->StatePoseLinks).ArrayNum,piVar18)
        ;
      }
      uVar20 = 0;
      if (0 < *piVar1) {
        lVar21 = 0;
        do {
          piVar18 = &(this->StatePoseLinks).ArrayMax;
          uVar17 = 0;
          if ((int)uVar20 < (pFVar5->States).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar11 = (this->StatePoseLinks).ArrayNum;
          pFVar6 = (pFVar5->States).AllocatorInstance.Data;
          if (iVar11 == *piVar18) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar18);
          }
          (this->StatePoseLinks).ArrayNum = iVar11 + 1;
          pFVar19 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
          DefaultConstructItems<FPoseLink,int>(pFVar19,1);
          if (*(int *)(pFVar6 + lVar21 + 0x38) != -1) {
            lVar14 = (**(code **)((longlong)*pIVar16 + 0x20))(pIVar16);
            *(int *)(pFVar19 + 8) = (*(int *)(lVar14 + 8) - *(int *)(pFVar6 + lVar21 + 0x38)) + -1;
          }
          if ((*(int *)(pFVar6 + lVar21 + 0x48) != -1) &&
             (pFVar15 = GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                                  (*(UObject **)(*(longlong *)param_1 + 0x140),pIVar16,
                                   *(int *)(pFVar6 + lVar21 + 0x48)),
             pFVar15 != (FAnimNode_TransitionResult *)0x0)) {
            (**(code **)pFVar15->_padding_)(pFVar15,param_1);
          }
          uVar17 = 0;
          if (0 < *(int *)(pFVar6 + lVar21 + 0x28)) {
            lVar14 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar17 < *(int *)(pFVar6 + lVar21 + 0x28)) {
                uVar12 = ~uVar17 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((*(int *)(lVar14 + *(longlong *)(pFVar6 + lVar21 + 0x20)) != -1) &&
                 (pFVar15 = GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                                      (*(UObject **)(*(longlong *)param_1 + 0x140),pIVar16,
                                       *(int *)(lVar14 + *(longlong *)(pFVar6 + lVar21 + 0x20))),
                 pFVar15 != (FAnimNode_TransitionResult *)0x0)) {
                (**(code **)pFVar15->_padding_)(pFVar15,param_1);
              }
              uVar17 = uVar17 + 1;
              lVar14 = lVar14 + 0x30;
            } while ((int)uVar17 < *(int *)(pFVar6 + lVar21 + 0x28));
          }
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 0x50;
        } while ((int)uVar20 < *piVar1);
      }
      (this->StatesUpdated).ArrayNum = 0;
      if ((this->StatesUpdated).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->StatesUpdated).AllocatorInstance,0,&(this->StatesUpdated).ArrayMax)
        ;
      }
      piVar18 = &(this->ActiveTransitionArray).ArrayMax;
      pFVar7 = (FAnimationActiveTransitionEntry *)
               (this->ActiveTransitionArray).AllocatorInstance.Data;
      iVar11 = (this->ActiveTransitionArray).ArrayNum;
      if ((this->ActiveTransitionArray).ArrayMax < 0) {
        DestructItems<FAnimationActiveTransitionEntry,int>(pFVar7,iVar11);
        (this->ActiveTransitionArray).ArrayNum = 0;
        if (*piVar18 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,0,&(this->ActiveTransitionArray).AllocatorInstance,0,piVar18);
        }
      }
      else {
        DestructItems<FAnimationActiveTransitionEntry,int>(pFVar7,iVar11);
        (this->ActiveTransitionArray).ArrayNum = 0;
      }
      piVar18 = &(this->QueuedTransitionEvents).ArrayMax;
      pFVar8 = (FTransitionEvent *)(this->QueuedTransitionEvents).AllocatorInstance.Data;
      iVar11 = (this->QueuedTransitionEvents).ArrayNum;
      if ((this->QueuedTransitionEvents).ArrayMax < 0) {
        DestructItems<FTransitionEvent,int>(pFVar8,iVar11);
        (this->QueuedTransitionEvents).ArrayNum = 0;
        if (*piVar18 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,&(this->QueuedTransitionEvents).AllocatorInstance,0,piVar18);
        }
      }
      else {
        DestructItems<FTransitionEvent,int>(pFVar8,iVar11);
        (this->QueuedTransitionEvents).ArrayNum = 0;
      }
      uVar20 = *piVar1;
      pTVar3 = &this->StateCacheBoneCounters;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      piVar18 = &(this->StateCacheBoneCounters).ArrayMax;
      (this->StateCacheBoneCounters).ArrayNum = 0;
      if ((this->StateCacheBoneCounters).ArrayMax < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar20,&pTVar3->AllocatorInstance,0,piVar18);
      }
      iVar11 = *piVar1;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar11,&pTVar3->AllocatorInstance,
                          &(this->StateCacheBoneCounters).ArrayNum,piVar18);
      DefaultConstructItems<FGraphTraversalCounter,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x10,iVar11);
      uVar20 = *piVar1;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      piVar18 = &(this->LastStateEntryTime).ArrayMax;
      piVar4 = &(this->LastStateEntryTime).ArrayNum;
      *piVar4 = 0;
      if (*piVar18 < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar20,&(this->LastStateEntryTime).AllocatorInstance,0,piVar18);
      }
      iVar11 = *piVar1;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar11,&(this->LastStateEntryTime).AllocatorInstance,piVar4,piVar18);
      memset((this->LastStateEntryTime).AllocatorInstance.Data + (longlong)iVar13 * 8,0,
             (longlong)iVar11 << 3);
      SetState(this,(FAnimationBaseContext *)param_1,pFVar5->InitialState,false);
      this->bFirstUpdate = true;
    }
  }
  return;
}

// CacheBones_AnyThread @ 14749a0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::CacheBones_AnyThread
          (FAnimNode_StateMachine *this,FAnimationCacheBonesContext *param_1)

{
  FBakedAnimationStateMachine *pFVar1;
  int iVar2;
  float fVar3;
  FAnimationBaseContext local_38;
  
  pFVar1 = this->PRIVATE_MachineDescription;
  if (pFVar1 == (FBakedAnimationStateMachine *)0x0) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      return;
    }
  }
  else {
    iVar2 = 0;
    if (0 < (pFVar1->States).ArrayNum) {
      do {
        fVar3 = GetStateWeight(this,iVar2);
        if (0.0 < fVar3) {
          local_38.AnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
          local_38.SharedContext = *(FAnimationUpdateSharedContext **)&param_1->field_0x8;
          local_38.bIsActive = (bool)param_1->field_0x10;
          local_38._17_3_ = *(undefined3 *)&param_1->field_0x11;
          local_38.CurrentNodeId = *(int *)&param_1->field_0x14;
          local_38.PreviousNodeId = *(int *)&param_1->field_0x18;
          local_38._28_4_ = *(undefined4 *)&param_1->field_0x1c;
          ConditionallyCacheBonesForState(this,iVar2,&local_38);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (pFVar1->States).ArrayNum);
    }
  }
  return;
}

// Update_AnyThread @ 14749a160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::Update_AnyThread
          (FAnimNode_StateMachine *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *pTVar3;
  FAnimInstanceProxy *pFVar4;
  FAnimNode_Base *pFVar5;
  code *pcVar6;
  bool bVar7;
  double dVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_AnimStateMachineUpdate> FVar16;
  FBakedAnimationState *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_AnimStateMachineFindTransition> FVar18;
  FAnimationTransitionBetweenStates *pFVar19;
  ForElementType<bool> FVar20;
  FAnimNodeFunctionRef *pFVar21;
  undefined1 *puVar22;
  UPackage *pUVar23;
  FNodeDataId *pFVar24;
  int iVar25;
  FBakedAnimationStateMachine *pFVar26;
  FScriptContainerElement *pFVar27;
  ForElementType<FSetElementId> FVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FName FVar31;
  ulonglong uVar32;
  FTransitionEvent *this_00;
  longlong lVar33;
  uint uVar34;
  int iVar35;
  FName FVar36;
  ForAnyElementType FVar37;
  uint uVar38;
  FAnimationUpdateContext *pFVar39;
  TReferenceControllerBase<1> *pTVar40;
  FBakedAnimationStateMachine *pFVar41;
  FTransitionEvent *pFVar42;
  ulonglong uVar43;
  byte bVar44;
  char cVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_3b8 [32];
  char local_358;
  undefined1 local_357;
  byte local_356;
  byte local_355;
  uint local_354;
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  FAnimationUpdateContext *local_340;
  FName local_338;
  FName local_330;
  undefined1 local_328 [4];
  uint local_324;
  uint local_320 [2];
  FName local_318;
  FColor_u_0 local_310 [2];
  undefined4 local_308 [2];
  FColor_u_0 local_300;
  FColor_u_0 local_2fc;
  uint local_2f8;
  FString local_2f0;
  FName local_2e0;
  longlong local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b0;
  FName local_2a0;
  FScopedGraphMessage local_290;
  char local_280;
  FAnimNode_StateMachine *local_278;
  FName local_270;
  int local_268;
  int local_264;
  LARGE_INTEGER local_260;
  FNodeDataId local_258;
  FName local_248;
  TStatIdData *local_240;
  FString local_238;
  FString local_228;
  TSharedRef<UE::Anim::IGraphMessage,1> local_218;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined8 local_1f4;
  FName *local_1e8;
  undefined4 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FName local_1a0;
  TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope> local_198;
  FNodeDataId local_180;
  FAnimationPotentialTransition local_170;
  ForElementType<bool> local_140;
  int local_130;
  int local_12c;
  undefined1 local_128 [48];
  undefined1 *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int iStack_cc;
  undefined1 local_c8 [8];
  ForElementType<FSetElementId> local_c0;
  int local_b8;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_340 = param_1;
  FAnimInstanceProxy::RecordMachineWeight
            ((FAnimInstanceProxy *)param_1->_padding_,this->StateMachineIndexInClass,
             param_1->CurrentWeight);
  if ((((this->bFirstUpdate == false) && (this->bReinitializeOnBecomingRelevant != false)) &&
      ((this->UpdateCounter).Counter != -1)) &&
     (((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff &&
      (bVar10 = FGraphTraversalCounter::WasSynchronizedCounter
                          (&this->UpdateCounter,
                           (FGraphTraversalCounter *)(param_1->_padding_ + 0x5a8)),
      pTVar9 = CVarAnimStateMachineRelevancyReset.Ref, !bVar10)))) {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_14749a202:
      lVar33 = 0;
    }
    else {
      bVar10 = IsInGameThread();
      lVar33 = 4;
      if (bVar10) goto LAB_14749a202;
    }
    if (*(int *)((longlong)pTVar9->ShadowedValue + lVar33) == 1) {
      local_208 = param_1->_padding_;
      local_200 = param_1->_padding_;
      local_1f8 = 1;
      local_1f4 = 0xffffffffffffffff;
      (**(code **)this->_padding_)(this,&local_208);
    }
  }
  lVar33 = param_1->_padding_;
  uVar34 = (this->QueuedTransitionEvents).ArrayNum - 1;
  (this->UpdateCounter).Counter = *(short *)(lVar33 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar33 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar33 + 0x5b2);
  dVar8 = __real_4170000000000000;
  if (-1 < (int)uVar34) {
    lVar33 = (longlong)(int)uVar34 * 0x50;
    do {
      uVar13 = 0;
      if ((int)uVar34 < (this->QueuedTransitionEvents).ArrayNum) {
        uVar13 = ~uVar34 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar30 = (this->QueuedTransitionEvents).AllocatorInstance.Data;
      QueryPerformanceCounter(&local_260);
      if (*(double *)(pFVar30 + lVar33 + 0x38) -
          (((double)local_260.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
          *(double *)(pFVar30 + lVar33 + 0x30)) <= 0.0) {
        if (5 < (byte)LogAnimTransitionRequests._0_1_) {
          pFVar26 = this->PRIVATE_MachineDescription;
          if ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) &&
             (pFVar26 = (FBakedAnimationStateMachine *)0x0, 2 < (byte)LogAnimation._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          }
          ::FName::ToString(&pFVar26->MachineName,&local_1b0);
          uVar13 = 0;
          if ((int)uVar34 < (this->QueuedTransitionEvents).ArrayNum) {
            uVar13 = ~uVar34 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ::FName::ToString((FName *)((this->QueuedTransitionEvents).AllocatorInstance.Data +
                                     lVar33 + 0x40),&local_1c0);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = 0;
        if ((int)uVar34 < (this->QueuedTransitionEvents).ArrayNum) {
          uVar13 = ~uVar34 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar30 = (this->QueuedTransitionEvents).AllocatorInstance.Data + lVar33;
        if (*(void **)(pFVar30 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar30 + 0x20));
        }
        iVar25 = (this->QueuedTransitionEvents).ArrayNum + ~uVar34;
        if (iVar25 != 0) {
          memmove(pFVar30,pFVar30 + 0x50,(longlong)iVar25 * 0x50);
        }
        piVar1 = &(this->QueuedTransitionEvents).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar33 = lVar33 + -0x50;
      uVar34 = uVar34 - 1;
      param_1 = local_340;
    } while (-1 < (int)uVar34);
  }
  iVar25 = (this->QueuedTransitionEvents).ArrayNum;
  piVar1 = &(this->QueuedTransitionEvents).ArrayMax;
  if (*piVar1 != iVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar25,&(this->QueuedTransitionEvents).AllocatorInstance,iVar25,piVar1);
  }
  pFVar26 = this->PRIVATE_MachineDescription;
  if (pFVar26 == (FBakedAnimationStateMachine *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  iVar25 = (pFVar26->States).ArrayNum;
  if (iVar25 == 0) {
    return;
  }
  if ((this->CurrentState < 0) || (iVar25 <= this->CurrentState)) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    local_270 = *(FName *)(*(longlong *)(param_1->_padding_ + 0x140) + 0x18);
    ::FName::ToString(&local_270,&local_228);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_228.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
    return;
  }
  FVar16 = StatPtr_STAT_AnimStateMachineUpdate;
  if (StatPtr_STAT_AnimStateMachineUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AnimStateMachineUpdate>)0x0) {
    pFVar15 = ::FName::FName(&local_1c8,"STAT_AnimStateMachineUpdate");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_AnimStateMachineUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimStateMachineUpdate,*pFVar15,
                        L"StateMachine Update","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar16;
  bVar44 = 0;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  local_355 = 0;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_14749a68a:
    local_318 = local_2c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_310[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_310[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar44 = 1;
      local_355 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_2d0.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_2d0.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                   ,0x1b3);
        bVar44 = 3;
        local_355 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14749a68a;
    local_330 = FVar31;
    local_318 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    local_355 = bVar44 | 4;
  }
  TVar2 = ((pFVar26->StatID).StatIdPtr)->Name;
  if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
    local_248 = pFVar26->MachineName;
    local_1e8 = &local_248;
    local_348[0] = 1;
    local_1e0 = local_308;
    local_1d8 = local_350;
    local_1d0 = local_348;
    local_350[0] = 1;
    local_308[0] = 2;
    `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Anim>'::__l2::<lambda_1>::operator()
              (&local_1e8);
    (pFVar26->StatID).StatIdPtr = local_240;
  }
  pTVar3 = (pFVar26->StatID).StatIdPtr;
  bVar44 = 0;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  local_356 = 0;
  FVar31 = *(FName *)&pTVar3->Name;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_14749a7c5:
    local_330 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_300.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_300._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar44 = 1;
      local_356 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_2c8.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_2c8.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c8,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                   ,0x1b6);
        bVar44 = 3;
        local_356 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14749a7c5;
    local_330 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    local_356 = bVar44 | 4;
  }
  if (this->bFirstUpdate != false) {
    pFVar4 = (FAnimInstanceProxy *)param_1->_padding_;
    pFVar17 = GetStateInfo(this);
    FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass(pFVar4,pFVar17->StartNotify);
  }
  local_354 = 0;
  do {
    local_170.TargetState = -1;
    local_170.CrossfadeTimeAdjustment = 0.0;
    local_170.TransitionRule = (FBakedStateExitTransition *)0x0;
    local_170.SourceTransitionIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_170.SourceTransitionIndices.ArrayNum = 0;
    local_170.SourceTransitionIndices.ArrayMax = 3;
    FVar18 = StatPtr_STAT_AnimStateMachineFindTransition;
    if (StatPtr_STAT_AnimStateMachineFindTransition ==
        (FThreadSafeStaticStat<FStat_STAT_AnimStateMachineFindTransition>)0x0) {
      pFVar15 = ::FName::FName(&local_1a0,"STAT_AnimStateMachineFindTransition");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_AnimStateMachineFindTransition>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimStateMachineFindTransition,
                          *pFVar15,L"StateMachine Find Transition","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar31 = *(FName *)FVar18;
    bVar12 = false;
    bVar10 = false;
    local_2a0.ComparisonIndex.Value = 0;
    local_2a0.Number = 0;
    if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_14749a95f:
      bVar7 = false;
      FVar31 = local_2a0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2fc.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2fc._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar12 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_2e0.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
          local_2e0.Number = FVar31.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                     ,0x1d5);
          bVar12 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14749a95f;
      local_338 = FVar31;
      local_2a0 = FVar31;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar12 = false;
      bVar7 = true;
    }
    uVar34 = this->CurrentState;
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_a8.ArrayNum = 0;
    pFVar26 = this->PRIVATE_MachineDescription;
    local_a8.ArrayMax = 4;
    uVar13 = 0;
    if ((int)uVar34 < (pFVar26->States).ArrayNum) {
      uVar13 = ~uVar34 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar39 = local_340;
    FindValidTransition(this,local_340,
                        (FBakedAnimationState *)
                        ((pFVar26->States).AllocatorInstance.Data + (longlong)(int)uVar34 * 0x50),
                        &local_170,&local_a8);
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FThreadStats::AddMessage(FVar31,CycleScopeEnd);
    }
    if ((((local_170.TargetState == -1) ||
         (local_170.TransitionRule == (FBakedStateExitTransition *)0x0)) ||
        ((local_170.TransitionRule)->TransitionIndex == -1)) ||
       ((pFVar19 = GetTransitionInfo(this,(local_170.TransitionRule)->TransitionIndex),
        local_170.TargetState == this->CurrentState &&
        (pFVar19->bAllowInertializationForSelfTransitions == 0)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
      pFVar26 = this->PRIVATE_MachineDescription;
      uVar34 = (local_170.TransitionRule)->TransitionIndex;
      uVar13 = 0;
      if ((int)uVar34 < (pFVar26->Transitions).ArrayNum) {
        uVar13 = ~uVar34 >> 0x1f;
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
      TransitionToState(this,pFVar39,
                        (FAnimationTransitionBetweenStates *)
                        ((pFVar26->Transitions).AllocatorInstance.Data +
                        (longlong)(int)uVar34 * 0x38),&local_170);
      local_354 = local_354 + 1;
    }
    uVar34 = local_354;
    if (local_170.SourceTransitionIndices.AllocatorInstance.SecondaryData !=
        (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_170.SourceTransitionIndices.AllocatorInstance.SecondaryData);
    }
    FVar31 = local_330;
  } while ((bVar10) && ((int)uVar34 < this->MaxTransitionsPerFrame));
  if (this->bFirstUpdate != false) {
    if (this->bSkipFirstUpdateTransition != false) {
      TArray<FAnimationActiveTransitionEntry,TSizedDefaultAllocator<32>_>::Reset
                (&this->ActiveTransitionArray,0);
    }
    this->bFirstUpdate = false;
  }
  uVar34 = 0;
  (this->StatesUpdated).ArrayNum = 0;
  if ((this->StatesUpdated).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->StatesUpdated).AllocatorInstance,0,&(this->StatesUpdated).ArrayMax);
  }
  uVar13 = (this->ActiveTransitionArray).ArrayNum;
  uVar32 = (ulonglong)uVar13;
  local_358 = '\0';
  cVar45 = '\0';
  if (0 < (int)uVar13) {
    local_d8 = ___xmm_00000000ffffffff0000002000000000;
    uStack_d0 = _UNK_150631d78;
    local_357 = 0;
    local_f8 = (undefined1 *)0x0;
    local_f0 = 0;
    local_ec = 4;
    local_e0 = 0;
    local_c0 = (ForElementType<FSetElementId>)0x0;
    local_b8 = 0;
    local_140.SecondaryData = (ForElementType<bool>)0x0;
    local_12c = 4;
    local_130 = 0;
    if (uVar13 != 4) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                (1,1,uVar13,&local_140,0,&local_12c);
    }
    do {
      FVar20 = (ForElementType<bool>)&local_140;
      if (local_140.SecondaryData != (ForElementType<bool>)0x0) {
        FVar20 = local_140.SecondaryData;
      }
      if ((ulonglong)FVar20 <= &local_357) {
        FVar20 = (ForElementType<bool>)&local_140;
        if (local_140.SecondaryData != (ForElementType<bool>)0x0) {
          FVar20 = local_140.SecondaryData;
        }
        if ((&local_357 < (undefined1 *)((longlong)FVar20 + (longlong)local_12c)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar25 = local_130;
      if (local_130 == local_12c) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                           (0x101,&local_140,&local_12c);
      }
      local_130 = iVar25 + 1;
      FVar20 = (ForElementType<bool>)&local_140;
      if (local_140.SecondaryData != (ForElementType<bool>)0x0) {
        FVar20 = local_140.SecondaryData;
      }
      *(undefined1 *)((longlong)iVar25 + (longlong)FVar20) = local_357;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
    iVar25 = (this->ActiveTransitionArray).ArrayNum;
    if (0 < iVar25) {
      do {
        uVar13 = 0;
        if ((int)uVar34 < (this->ActiveTransitionArray).ArrayNum) {
          uVar13 = ~uVar34 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar30 = (this->ActiveTransitionArray).AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)uVar34 < local_130) {
          uVar13 = ~uVar34 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar39 = local_340;
        FVar20 = (ForElementType<bool>)&local_140;
        if (local_140.SecondaryData != (ForElementType<bool>)0x0) {
          FVar20 = local_140.SecondaryData;
        }
        FAnimationActiveTransitionEntry::Update
                  ((FAnimationActiveTransitionEntry *)(pFVar30 + (longlong)(int)uVar34 * 200),
                   local_340,this->CurrentState,(bool *)((longlong)FVar20 + (longlong)(int)uVar34));
        iVar25 = (this->ActiveTransitionArray).ArrayNum;
        uVar34 = uVar34 + 1;
      } while ((int)uVar34 < iVar25);
    }
    uVar34 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar47 = __real_322bcc77;
    local_354 = 0;
    if (0 < iVar25) {
      local_2d8 = 0;
      do {
        lVar33 = local_2d8;
        uVar13 = local_354;
        uVar32 = 0;
        uVar29 = ~local_354 >> 0x1f;
        uVar38 = 0;
        if ((int)local_354 < local_130) {
          uVar38 = uVar29;
        }
        if ((uVar38 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar20 = (ForElementType<bool>)&local_140;
        if (local_140.SecondaryData != (ForElementType<bool>)0x0) {
          FVar20 = local_140.SecondaryData;
        }
        iVar25 = (this->ActiveTransitionArray).ArrayNum;
        if (*(char *)((longlong)FVar20 + lVar33) == '\0') {
          uVar38 = 0;
          if ((int)uVar13 < iVar25) {
            uVar38 = uVar29;
          }
          if ((uVar38 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UpdateTransitionStates
                    (this,pFVar39,
                     (FAnimationActiveTransitionEntry *)
                     ((this->ActiveTransitionArray).AllocatorInstance.Data +
                     (longlong)(int)uVar13 * 200));
        }
        else {
          uVar38 = 0;
          if ((int)uVar13 < iVar25) {
            uVar38 = uVar29;
          }
          if ((uVar38 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar38 = *(uint *)((this->ActiveTransitionArray).AllocatorInstance.Data +
                            lVar33 * 200 + 0x34);
          uVar29 = 0;
          local_324 = uVar38;
          if (((uVar38 != this->CurrentState) && (-1 < (int)uVar38)) &&
             ((int)uVar38 < (this->StatePoseLinks).ArrayNum)) {
            uVar14 = uVar29;
            if ((int)uVar38 < (this->StatePoseLinks).ArrayNum) {
              uVar14 = ~uVar38 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)((this->StatePoseLinks).AllocatorInstance.Data +
                        (longlong)(int)uVar38 * 0x10 + 8) != -1) {
              if (local_f0 != iStack_cc) {
                FVar28 = (ForElementType<FSetElementId>)local_c8;
                if (local_c0 != (ForElementType<FSetElementId>)0x0) {
                  FVar28 = local_c0;
                }
                for (iVar25 = *(int *)((longlong)FVar28 + (ulonglong)(local_b8 - 1U & uVar38) * 4);
                    iVar25 != -1; iVar25 = *(int *)(puVar22 + (longlong)iVar25 * 0xc + 4)) {
                  puVar22 = local_128;
                  if (local_f8 != (undefined1 *)0x0) {
                    puVar22 = local_f8;
                  }
                  if (*(uint *)(puVar22 + (longlong)iVar25 * 0xc) == uVar38) {
                    if (iVar25 != -1) goto LAB_14749b0a2;
                    break;
                  }
                  puVar22 = local_128;
                  if (local_f8 != (undefined1 *)0x0) {
                    puVar22 = local_f8;
                  }
                }
              }
              fVar46 = GetStateWeight(this,uVar38);
              if ((float)((uint)fVar46 & uVar34) <= fVar47) {
                uVar14 = uVar29;
                if ((int)uVar38 < (this->StatePoseLinks).ArrayNum) {
                  uVar14 = ~uVar38 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar21 = FAnimNode_StateResult::GetStateFullyBlendedOutFunction
                                    (*(FAnimNode_StateResult **)
                                      ((this->StatePoseLinks).AllocatorInstance.Data +
                                      (longlong)(int)uVar38 * 0x10));
                UE::Anim::CallFunctionHelper<FAnimExecutionContext,FAnimationBaseContext>
                          (pFVar21,(FAnimationBaseContext *)pFVar39,(FAnimNode_Base *)this);
                TSet<int,DefaultKeyFuncs<int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                ::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                            *)local_128,&local_268,(bool *)&local_324);
              }
            }
          }
LAB_14749b0a2:
          iVar25 = (this->ActiveTransitionArray).ArrayNum;
          if (uVar13 == iVar25 - 1U) {
            pFVar4 = (FAnimInstanceProxy *)pFVar39->_padding_;
            uVar38 = uVar29;
            if ((int)uVar13 < iVar25) {
              uVar38 = ~uVar13 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                      (pFVar4,*(int *)((this->ActiveTransitionArray).AllocatorInstance.Data +
                                      lVar33 * 200 + 0x3c));
            uVar38 = this->CurrentState;
            pFVar26 = this->PRIVATE_MachineDescription;
            pFVar4 = (FAnimInstanceProxy *)pFVar39->_padding_;
            if ((int)uVar38 < (pFVar26->States).ArrayNum) {
              uVar29 = ~uVar38 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                      (pFVar4,*(int *)((pFVar26->States).AllocatorInstance.Data +
                                      (longlong)(int)uVar38 * 0x50 + 0x44));
            uVar38 = 0;
            if ((int)uVar13 < (this->ActiveTransitionArray).ArrayNum) {
              uVar38 = ~uVar13 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar39 = local_340;
            local_2f8 = *(uint *)((this->ActiveTransitionArray).AllocatorInstance.Data +
                                 lVar33 * 200 + 0x30);
            uVar13 = local_354;
            if ((-1 < (int)local_2f8) && ((int)local_2f8 < (this->StatePoseLinks).ArrayNum)) {
              if ((1 < (this->ActiveTransitionArray).ArrayNum) && (uVar43 = uVar32, 0 < lVar33)) {
                do {
                  uVar38 = (uint)uVar32;
                  uVar13 = 0;
                  if ((int)uVar38 < (this->ActiveTransitionArray).ArrayNum) {
                    uVar13 = ~uVar38 >> 0x1f;
                  }
                  local_338 = (FName)lVar33;
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar13 = *(uint *)((this->ActiveTransitionArray).AllocatorInstance.Data +
                                    uVar43 + 0x34);
                  local_320[0] = uVar13;
                  if (((uVar13 != this->CurrentState) && (-1 < (int)uVar13)) &&
                     ((int)uVar13 < (this->StatePoseLinks).ArrayNum)) {
                    uVar29 = 0;
                    if ((int)uVar13 < (this->StatePoseLinks).ArrayNum) {
                      uVar29 = ~uVar13 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if (*(int *)((this->StatePoseLinks).AllocatorInstance.Data +
                                (longlong)(int)uVar13 * 0x10 + 8) != -1) {
                      if (local_f0 != iStack_cc) {
                        FVar28 = (ForElementType<FSetElementId>)local_c8;
                        if (local_c0 != (ForElementType<FSetElementId>)0x0) {
                          FVar28 = local_c0;
                        }
                        for (iVar25 = *(int *)((longlong)FVar28 +
                                              (ulonglong)(local_b8 - 1U & uVar13) * 4); iVar25 != -1
                            ; iVar25 = *(int *)(puVar22 + (longlong)iVar25 * 0xc + 4)) {
                          puVar22 = local_128;
                          if (local_f8 != (undefined1 *)0x0) {
                            puVar22 = local_f8;
                          }
                          if (*(uint *)(puVar22 + (longlong)iVar25 * 0xc) == uVar13) {
                            if (iVar25 != -1) goto LAB_14749b40e;
                            break;
                          }
                          puVar22 = local_128;
                          if (local_f8 != (undefined1 *)0x0) {
                            puVar22 = local_f8;
                          }
                        }
                      }
                      uVar29 = 0;
                      if ((int)uVar13 < (this->StatePoseLinks).ArrayNum) {
                        uVar29 = ~uVar13 >> 0x1f;
                      }
                      if ((uVar29 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pFVar21 = FAnimNode_StateResult::GetStateFullyBlendedOutFunction
                                          (*(FAnimNode_StateResult **)
                                            ((this->StatePoseLinks).AllocatorInstance.Data +
                                            (longlong)(int)uVar13 * 0x10));
                      UE::Anim::CallFunctionHelper<FAnimExecutionContext,FAnimationBaseContext>
                                (pFVar21,(FAnimationBaseContext *)pFVar39,(FAnimNode_Base *)this);
                      TSet<int,DefaultKeyFuncs<int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      ::Emplace<int_const_&>
                                ((TSet<int,DefaultKeyFuncs<int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                                  *)local_128,&local_264,(bool *)local_320);
                    }
                  }
LAB_14749b40e:
                  uVar32 = (ulonglong)(uVar38 + 1);
                  lVar33 = (longlong)local_338 + -1;
                  uVar43 = uVar43 + 200;
                } while (lVar33 != 0);
                local_338.ComparisonIndex.Value = 0;
                local_338.Number = 0;
                lVar33 = local_2d8;
              }
              uVar38 = local_2f8;
              pFVar39 = local_340;
              uVar13 = local_354;
              if ((int)local_2f8 < (this->StatePoseLinks).ArrayNum) {
                uVar29 = ~local_2f8;
                uVar13 = 0;
                if ((int)local_2f8 < (this->StatePoseLinks).ArrayNum) {
                  uVar13 = uVar29 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar39 = local_340;
                uVar13 = local_354;
                if (*(int *)((this->StatePoseLinks).AllocatorInstance.Data +
                            (longlong)(int)uVar38 * 0x10 + 8) != -1) {
                  uVar13 = 0;
                  if ((int)uVar38 < (this->StatePoseLinks).ArrayNum) {
                    uVar13 = uVar29 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar5 = *(FAnimNode_Base **)
                            ((this->StatePoseLinks).AllocatorInstance.Data +
                            (longlong)(int)uVar38 * 0x10);
                  if (CachedId_StateFullyBlendedInFunction.Index == -1) {
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x9d4c) < ::_TSS1) &&
                       (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
                      ::FName::FName(&AnimName_StateFullyBlendedInFunction,
                                     "StateFullyBlendedInFunction");
                      _Init_thread_footer(&::_TSS1);
                    }
                    if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
                        (UScriptStruct *)0x0) {
                      pUVar23 = Z_Construct_UPackage__Script_Engine();
                      Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
                           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,
                                           (UObject *)pUVar23,L"AnimNode_StateResult");
                    }
                    pFVar24 = UE::Anim::FNodeDataId::FNodeDataId
                                        (&local_180,AnimName_StateFullyBlendedInFunction,pFVar5,
                                         Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.
                                         OuterSingleton);
                    CachedId_StateFullyBlendedInFunction.Id = pFVar24->Id;
                    CachedId_StateFullyBlendedInFunction.Index = pFVar24->Index;
                  }
                  iVar25 = CachedId_StateFullyBlendedInFunction.Index;
                  FVar31 = CachedId_StateFullyBlendedInFunction.Id;
                  if ((pFVar5->NodeData == (FAnimNodeData *)0x0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("NodeData",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                                          ,0x3e1,L""), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_258.Id = FVar31;
                  local_258.Index = iVar25;
                  pFVar21 = FAnimNodeData::GetData
                                      (pFVar5->NodeData,&local_258,pFVar5,(UObject *)0x0);
                  pFVar39 = local_340;
                  UE::Anim::CallFunctionHelper<FAnimExecutionContext,FAnimationBaseContext>
                            (pFVar21,(FAnimationBaseContext *)local_340,(FAnimNode_Base *)this);
                  uVar13 = local_354;
                }
              }
            }
          }
          uVar38 = 0;
          if ((int)uVar13 < (this->ActiveTransitionArray).ArrayNum) {
            uVar38 = ~uVar13 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((this->ActiveTransitionArray).AllocatorInstance.Data[lVar33 * 200 + 0xc1] ==
               (FScriptContainerElement)0x1) &&
             ((this->ActiveTransitionArray).ArrayNum - 1U == uVar13)) {
            local_358 = '\x01';
          }
        }
        iVar25 = (this->ActiveTransitionArray).ArrayNum;
        local_354 = uVar13 + 1;
        local_2d8 = lVar33 + 1;
        FVar31 = local_330;
      } while ((int)local_354 < iVar25);
    }
    uVar34 = iVar25 - 1;
    if (-1 < (int)uVar34) {
      lVar33 = (longlong)(int)uVar34 * 200;
      do {
        uVar13 = 0;
        if ((int)uVar34 < (this->ActiveTransitionArray).ArrayNum) {
          uVar13 = ~uVar34 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((this->ActiveTransitionArray).AllocatorInstance.Data[lVar33 + 0xc2] ==
            (FScriptContainerElement)0x0) {
          uVar34 = uVar34 + 1;
          uVar13 = 0;
          if ((int)uVar34 <= (this->ActiveTransitionArray).ArrayNum) {
            uVar13 = ~uVar34 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar34 != 0) {
            TArray<FAnimationActiveTransitionEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->ActiveTransitionArray,0,uVar34);
          }
          break;
        }
        lVar33 = lVar33 + -200;
        uVar34 = uVar34 - 1;
      } while (-1 < (int)uVar34);
    }
    if (local_140.SecondaryData != (ForElementType<bool>)0x0) {
      FMemory::Free((void *)local_140.SecondaryData);
    }
    local_b8 = 0;
    if (local_c0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c0);
    }
    TSparseArray<TSparseSetElement<int>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<int>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)local_128);
    pFVar39 = local_340;
    cVar45 = local_358;
  }
  pTVar40 = (TReferenceControllerBase<1> *)0x0;
  if ((this->ActiveTransitionArray).ArrayNum == 0) {
    iVar25 = this->CurrentState;
    if (((this->PRIVATE_MachineDescription != (FBakedAnimationStateMachine *)0x0) && (-1 < iVar25))
       && (iVar25 < (this->PRIVATE_MachineDescription->States).ArrayNum)) {
      pFVar17 = GetStateInfo(this,iVar25);
      iVar25 = this->CurrentState;
      if (pFVar17->bIsAConduit != false) goto LAB_14749b9ed;
    }
    pFVar27 = (this->StatesUpdated).AllocatorInstance.Data;
    pFVar30 = pFVar27 + (longlong)(this->StatesUpdated).ArrayNum * 4;
    for (; pFVar27 != pFVar30; pFVar27 = pFVar27 + 4) {
      if (*(int *)pFVar27 == iVar25) goto LAB_14749b9ed;
    }
    local_290.SharedContext = (FAnimationUpdateSharedContext *)pFVar39->_padding_;
    local_290.MessageType.ComparisonIndex.Value = 0;
    local_290.MessageType.Number = 0;
    local_280 = cVar45;
    if (cVar45 != '\0') {
      local_218.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_218.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        local_218.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
        local_218.SharedReferenceCount.ReferenceController = _UNK_150651568;
        FVar36 = UE::Anim::FAnimInertializationSyncScope::TypeName;
      }
      else {
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)0x1;
        (local_218.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_218.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFAnimInertializationSyncScope_Anim_UE___00_SharedPointerInternals__6B_
        ;
        local_218.SharedReferenceCount.ReferenceController[1]._padding_ =
             (longlong)&___7FAnimInertializationSyncScope_Anim_UE__6B_;
        if ((local_218.SharedReferenceCount.ReferenceController + 1 ==
             (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar36 = UE::Anim::FAnimInertializationSyncScope::TypeName;
        LOCK();
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar40 = local_218.SharedReferenceCount.ReferenceController;
        local_218.Object = (IGraphMessage *)(local_218.SharedReferenceCount.ReferenceController + 1)
        ;
      }
      UE::Anim::FScopedGraphMessage::PushMessage
                (&local_290,(FAnimationBaseContext *)pFVar39,&local_218,FVar36);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
    }
    local_278 = this;
    UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope>::
    TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope><FAnimationUpdateContext_const_&,FAnimNode_StateMachine_*,int_&>
              (&local_198,this->bCreateNotifyMetaData,(FAnimationBaseContext *)pFVar39,pFVar39,
               &local_278,&this->CurrentState);
    uVar34 = this->CurrentState;
    uVar13 = 0;
    if ((int)uVar34 < (this->StatePoseLinks).ArrayNum) {
      uVar13 = ~uVar34 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FPoseLinkBase::Update
              ((FPoseLinkBase *)
               ((this->StatePoseLinks).AllocatorInstance.Data + (longlong)(int)uVar34 * 0x10),
               pFVar39);
    if (local_198.bCondition != false) {
      UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)&local_198);
    }
    if (local_280 != '\0') {
      UE::Anim::FScopedGraphMessage::PopMessage(&local_290);
    }
  }
LAB_14749b9ed:
  pFVar41 = (FBakedAnimationStateMachine *)0x0;
  iVar25 = (this->StatePoseLinks).ArrayNum;
  this->ElapsedTime = pFVar39->DeltaTime + this->ElapsedTime;
  pFVar26 = pFVar41;
  if (0 < iVar25) {
    do {
      iVar25 = (int)pFVar26;
      fVar47 = GetStateWeight(this,iVar25);
      if (0.0 < fVar47) {
        if (iVar25 == this->CurrentState) {
          fVar46 = this->ElapsedTime;
        }
        else {
          fVar46 = 0.0;
        }
        FAnimInstanceProxy::RecordStateWeight
                  ((FAnimInstanceProxy *)pFVar39->_padding_,this->StateMachineIndexInClass,iVar25,
                   fVar47,fVar46);
        FAnimTrace::OutputStateMachineState
                  ((FAnimationBaseContext *)pFVar39,this->StateMachineIndexInClass,iVar25,fVar47,
                   fVar46);
      }
      pFVar26 = (FBakedAnimationStateMachine *)(ulonglong)(iVar25 + 1U);
    } while ((int)(iVar25 + 1U) < (this->StatePoseLinks).ArrayNum);
  }
  pFVar26 = this->PRIVATE_MachineDescription;
  if ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) &&
     (pFVar26 = pFVar41, 2 < (byte)LogAnimation._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)pFVar39,*(uint *)((longlong)&pFVar39->_padding_ + 4),L"Name",
             &pFVar26->MachineName);
  uVar34 = this->CurrentState;
  pFVar26 = this->PRIVATE_MachineDescription;
  uVar13 = 0;
  if ((int)uVar34 < (pFVar26->States).ArrayNum) {
    uVar13 = ~uVar34 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)pFVar39,*(uint *)((longlong)&pFVar39->_padding_ + 4),
             L"Current State",
             (FName *)((pFVar26->States).AllocatorInstance.Data +
                      (longlong)(int)uVar34 * 0x50 + 0x30));
  iVar25 = (this->QueuedTransitionEvents).ArrayNum;
  bVar10 = true;
  this_00 = (FTransitionEvent *)(this->QueuedTransitionEvents).AllocatorInstance.Data;
  local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Data.ArrayNum = 0;
  local_2f0.Data.ArrayMax = 0;
  pFVar42 = this_00 + iVar25;
  while( true ) {
    if ((this->QueuedTransitionEvents).ArrayNum != iVar25) {
      `TCheckedPointerIterator<FTransitionEvent_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_328);
    }
    if (this_00 == pFVar42) break;
    if (bVar10) {
      bVar10 = false;
    }
    else {
      ::FString::AppendChars(&local_2f0,L",\n",2);
    }
    FTransitionEvent::ToDebugString(this_00,&local_238);
    iVar35 = local_238.Data.ArrayNum + -1;
    if (local_238.Data.ArrayNum == 0) {
      iVar35 = 0;
    }
    ::FString::AppendChars(&local_2f0,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar35);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  FVar37.Data = (FScriptContainerElement *)L"";
  if (local_2f0.Data.ArrayNum != 0) {
    FVar37.Data = local_2f0.Data.AllocatorInstance.Data;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)local_340,*(uint *)((longlong)&local_340->_padding_ + 4),
             L"Queued Transition Requests",(wchar_t *)FVar37.Data);
  FVar36 = local_318;
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  bVar44 = local_356;
  if ((local_356 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar44 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar44 & 4) != 0) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  bVar44 = local_355;
  if ((local_355 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar44 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar44 & 4) != 0) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  return;
}

// Evaluate_AnyThread @ 14749bdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::Evaluate_AnyThread(FAnimNode_StateMachine *this,FPoseContext *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uchar uVar4;
  int iVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FBakedAnimationState *pFVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine> FVar16;
  USkeleton *pUVar17;
  FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine_WorkerThread> *this_00;
  FAnimationActiveTransitionEntry *pFVar18;
  FName FVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FBakedAnimationStateMachine *local_a8;
  FName local_a0;
  FName local_98;
  int *local_88;
  FBakedAnimationStateMachine **local_80;
  FAnimNode_StateMachine *local_78;
  FPoseContext *local_70;
  FName local_68;
  FName local_60;
  FAnimationBaseContext local_58;
  
  local_a8 = this->PRIVATE_MachineDescription;
  if (local_a8 == (FBakedAnimationStateMachine *)0x0) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
    local_a8 = (FBakedAnimationStateMachine *)0x0;
LAB_14749c3b6:
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
    return;
  }
  iVar5 = this->CurrentState;
  if (((-1 < iVar5) && (iVar5 < (local_a8->States).ArrayNum)) &&
     (pFVar14 = GetStateInfo(this,iVar5), pFVar14->bIsAConduit != false)) {
    local_80 = &local_a8;
    local_78 = this;
    local_70 = param_1;
    `FAnimNode_StateMachine::Evaluate_AnyThread'::__l5::<lambda_1>::operator()(&local_80);
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
    return;
  }
  iVar5 = (local_a8->States).ArrayNum;
  if (((iVar5 == 0) || (this->CurrentState < 0)) || (iVar5 <= this->CurrentState))
  goto LAB_14749c3b6;
  bVar10 = IsInGameThread();
  uVar21 = 0;
  if (bVar10) {
    FVar16 = StatPtr_STAT_EvaluateAnimStateMachine;
    if (StatPtr_STAT_EvaluateAnimStateMachine ==
        (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine>)0x0) {
      pFVar15 = ::FName::FName(&local_60,"STAT_EvaluateAnimStateMachine");
      pwVar23 = L"EvaluateAnimStateMachine";
      this_00 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine_WorkerThread> *)
                &StatPtr_STAT_EvaluateAnimStateMachine;
      goto LAB_14749bf4b;
    }
  }
  else {
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine>)
             StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread;
    if (StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine_WorkerThread>)0x0) {
      pFVar15 = ::FName::FName(&local_68,"STAT_EvaluateAnimStateMachine_WorkerThread");
      pwVar23 = L"EvaluateAnimStateMachine_WorkerThread";
      this_00 = &StatPtr_STAT_EvaluateAnimStateMachine_WorkerThread;
LAB_14749bf4b:
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimStateMachine>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_00,*pFVar15,pwVar23,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar19 = *(FName *)FVar16;
  bVar8 = false;
  bVar10 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  bVar11 = false;
  bVar9 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar10 = true;
      bVar11 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_a0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                   ,0x3d8);
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      goto LAB_14749c03d;
    }
  }
  bVar8 = bVar11;
  bVar10 = bVar9;
  bVar9 = false;
  FVar19 = local_98;
LAB_14749c03d:
  piVar1 = &(this->ActiveTransitionArray).ArrayNum;
  if ((this->ActiveTransitionArray).ArrayNum < 1) {
    iVar5 = this->CurrentState;
    if ((((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) || (iVar5 < 0))
        || ((this->PRIVATE_MachineDescription->States).ArrayNum <= iVar5)) ||
       (pFVar14 = GetStateInfo(this,iVar5), pFVar14->bIsAConduit == false)) {
      local_58.AnimInstanceProxy = (FAnimInstanceProxy *)param_1->_padding_;
      local_58.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
      local_58._16_8_ = param_1->_padding_;
      local_58._24_8_ = param_1->_padding_;
      ConditionallyCacheBonesForState(this,this->CurrentState,&local_58);
      uVar13 = this->CurrentState;
      uVar20 = 0;
      if ((int)uVar13 < (this->StatePoseLinks).ArrayNum) {
        uVar20 = ~uVar13 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FPoseLink::Evaluate((FPoseLink *)
                          ((this->StatePoseLinks).AllocatorInstance.Data +
                          (longlong)(int)uVar13 * 0x10),param_1);
    }
  }
  else {
    pUVar17 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    if ((pUVar17 == (USkeleton *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Output.AnimInstanceProxy->GetSkeleton()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                            ,0x3dc,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar2 = &(this->StateCachedPoses).ArrayNum;
    if ((*piVar2 != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StateCachedPoses.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                            ,0x3de,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar5 = (this->StatePoseLinks).ArrayNum;
    local_88 = &(this->StateCachedPoses).ArrayMax;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar5,&(this->StateCachedPoses).AllocatorInstance,piVar2,local_88);
    memset((this->StateCachedPoses).AllocatorInstance.Data + (longlong)iVar12 * 8,0,
           (longlong)iVar5 << 3);
    uVar24 = uVar21;
    if (0 < *piVar1) {
      do {
        uVar20 = (uint)uVar21;
        uVar13 = 0;
        if ((int)uVar20 < (this->ActiveTransitionArray).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar18 = (FAnimationActiveTransitionEntry *)
                  ((this->ActiveTransitionArray).AllocatorInstance.Data + uVar24);
        if (pFVar18->bActive != false) {
          uVar4 = (pFVar18->LogicType).Value;
          if (uVar4 == '\0') {
            EvaluateTransitionStandardBlend(this,param_1,pFVar18,0 < (int)uVar20);
          }
          else if (uVar4 == '\x01') {
            EvaluateState(this,pFVar18->NextState,param_1);
          }
          else if (uVar4 == '\x02') {
            EvaluateTransitionCustomBlend(this,param_1,pFVar18,0 < (int)uVar20);
          }
        }
        uVar21 = (ulonglong)(uVar20 + 1);
        uVar24 = uVar24 + 200;
      } while ((int)(uVar20 + 1) < *piVar1);
    }
    FCompactPose::NormalizeRotations(&param_1->Pose);
    pFVar22 = (this->StateCachedPoses).AllocatorInstance.Data;
    iVar5 = (this->StateCachedPoses).ArrayNum;
    pFVar3 = pFVar22 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->StateCachedPoses).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FPoseContext_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar22 == pFVar3) break;
      pvVar6 = *(void **)pFVar22;
      if (pvVar6 != (void *)0x0) {
        UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
        ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                  ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                   ((longlong)pvVar6 + 0x58));
        ::operator_delete(pvVar6,0xa0);
      }
      pFVar22 = pFVar22 + 8;
    }
    (this->StateCachedPoses).ArrayNum = 0;
    if ((this->StateCachedPoses).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->StateCachedPoses).AllocatorInstance,0,local_88);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// GatherDebugData @ 14749c3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::GatherDebugData(FAnimNode_StateMachine *this,FNodeDebugData *param_1)

{
  FBakedAnimationStateMachine *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  UPackage *pUVar8;
  FBakedAnimationState *pFVar9;
  FNodeDebugData *pFVar10;
  FBakedAnimationStateMachine *pFVar11;
  uint uVar12;
  FBakedAnimationStateMachine *pFVar13;
  int iVar14;
  float fVar15;
  longlong local_res8;
  FName local_res18;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateMachine,(UObject *)pUVar8,
                         L"AnimNode_StateMachine");
  }
  local_res18 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.OuterSingleton)->
                       _padding_;
  ::FName::ToString(&local_res18,&local_a8);
  ::FString::PrintfImpl(&local_b8,L"%s<W:%.1f%%> %s");
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  pFVar9 = GetStateInfo(this);
  ::FName::ToString(&pFVar9->StateName,&local_68);
  pFVar13 = (FBakedAnimationStateMachine *)0x0;
  pFVar11 = this->PRIVATE_MachineDescription;
  if ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) &&
     (pFVar11 = pFVar13, 2 < (byte)LogAnimation._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  ::FName::ToString(&pFVar11->MachineName,&local_78);
  ::FString::PrintfImpl(&local_98,L"(%s->%s)");
  iVar14 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(&local_b8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar14);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar5.Data = local_b8.Data.AllocatorInstance.Data;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b8.Data.ArrayNum == 0) {
    local_d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_b8.Data.ArrayNum,
               &local_d8.Data.ArrayMax);
    memcpy(local_d8.Data.AllocatorInstance.Data,FVar5.Data,(longlong)local_b8.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_d8,false);
  if (0 < (this->StatePoseLinks).ArrayNum) {
    local_res8 = 0;
    pFVar11 = pFVar13;
    do {
      pFVar1 = this->PRIVATE_MachineDescription;
      uVar12 = (uint)pFVar13;
      uVar7 = 0;
      if ((int)uVar12 < (pFVar1->States).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
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
      ::FName::ToString((FName *)((pFVar1->States).AllocatorInstance.Data +
                                 (longlong)&(pFVar11->StatID).StatIdPtr),local_58);
      ::FString::PrintfImpl(&local_88,L"(State: %s)");
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
      uVar7 = 0;
      if ((int)uVar12 < (this->StatePoseLinks).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
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
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
      pFVar2 = (this->StatePoseLinks).AllocatorInstance.Data;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar14 = local_88.Data.ArrayNum;
      local_c8.Data.ArrayNum = iVar14;
      if (iVar14 == 0) {
        local_c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar14,0,(ForAnyElementType *)&local_c8,iVar14,&local_c8.Data.ArrayMax);
        memcpy(local_c8.Data.AllocatorInstance.Data,FVar5.Data,(longlong)iVar14 * 2);
      }
      fVar15 = GetStateWeight(this,uVar12);
      pFVar10 = FNodeDebugData::BranchFlow(param_1,fVar15,&local_c8);
      plVar3 = *(longlong **)(pFVar2 + local_res8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,pFVar10);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_res8 = local_res8 + 0x10;
      pFVar13 = (FBakedAnimationStateMachine *)(ulonglong)(uVar12 + 1);
      pFVar11 = (FBakedAnimationStateMachine *)&pFVar11[1].States.ArrayNum;
    } while ((int)(uVar12 + 1) < (this->StatePoseLinks).ArrayNum);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// LogInertializationRequestError @ 14749c9f0

void __thiscall
FAnimNode_StateMachine::LogInertializationRequestError
          (FAnimNode_StateMachine *this,FAnimationUpdateContext *param_1,int param_2,int param_3)

{
  return;
}

// FAnimNode_StateMachine @ 1474b17d0

FAnimNode_StateMachine * __thiscall
FAnimNode_StateMachine::FAnimNode_StateMachine(FAnimNode_StateMachine *this)

{
  this->MaxTransitionsPerFrame = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_StateMachine__6B_;
  this->CurrentState = -1;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  this->StateMachineIndexInClass = 0;
  this->MaxTransitionsRequests = 0x20;
  this->bSkipFirstUpdateTransition = true;
  this->bReinitializeOnBecomingRelevant = true;
  this->bCreateNotifyMetaData = true;
  this->bAllowConduitEntryStates = false;
  this->bFirstUpdate = true;
  this->ElapsedTime = 0.0;
  this->PRIVATE_MachineDescription = (FBakedAnimationStateMachine *)0x0;
  (this->ActiveTransitionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTransitionArray).ArrayNum = 0;
  (this->ActiveTransitionArray).ArrayMax = 0;
  (this->StatePoseLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatePoseLinks).ArrayNum = 0;
  (this->StatePoseLinks).ArrayMax = 0;
  (this->StatesUpdated).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatesUpdated).ArrayNum = 0;
  (this->StatesUpdated).ArrayMax = 0;
  (this->OnGraphStatesEntered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnGraphStatesEntered).ArrayNum = 0;
  (this->OnGraphStatesEntered).ArrayMax = 0;
  (this->OnGraphStatesExited).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnGraphStatesExited).ArrayNum = 0;
  (this->OnGraphStatesExited).ArrayMax = 0;
  (this->QueuedTransitionEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedTransitionEvents).ArrayNum = 0;
  (this->QueuedTransitionEvents).ArrayMax = 0;
  (this->StateCachedPoses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateCachedPoses).ArrayNum = 0;
  (this->StateCachedPoses).ArrayMax = 0;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->StateCacheBoneCounters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateCacheBoneCounters).ArrayNum = 0;
  (this->StateCacheBoneCounters).ArrayMax = 0;
  (this->LastStateEntryTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastStateEntryTime).ArrayNum = 0;
  (this->LastStateEntryTime).ArrayMax = 0;
  return this;
}

// ~FAnimNode_StateMachine @ 1474b4f30

void __thiscall FAnimNode_StateMachine::~FAnimNode_StateMachine(FAnimNode_StateMachine *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LastStateEntryTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StateCacheBoneCounters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StateCachedPoses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTransitionEvent,int>
            ((FTransitionEvent *)(this->QueuedTransitionEvents).AllocatorInstance.Data,
             (this->QueuedTransitionEvents).ArrayNum);
  pFVar1 = (this->QueuedTransitionEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)(this->OnGraphStatesExited).AllocatorInstance.Data,
             (this->OnGraphStatesExited).ArrayNum);
  pFVar1 = (this->OnGraphStatesExited).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)(this->OnGraphStatesEntered).AllocatorInstance.Data,
             (this->OnGraphStatesEntered).ArrayNum);
  pFVar1 = (this->OnGraphStatesEntered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatesUpdated).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatePoseLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimationActiveTransitionEntry,int>
            ((FAnimationActiveTransitionEntry *)(this->ActiveTransitionArray).AllocatorInstance.Data
             ,(this->ActiveTransitionArray).ArrayNum);
  pFVar1 = (this->ActiveTransitionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// CacheMachineDescription @ 1474c2020

void __thiscall
FAnimNode_StateMachine::CacheMachineDescription
          (FAnimNode_StateMachine *this,IAnimClassInterface *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  lVar4 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((-1 < this->StateMachineIndexInClass) &&
     (this->StateMachineIndexInClass < *(int *)(lVar4 + 8))) {
    plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    uVar1 = this->StateMachineIndexInClass;
    uVar6 = 0;
    if ((int)uVar1 < (int)plVar5[1]) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->PRIVATE_MachineDescription =
         (FBakedAnimationStateMachine *)((longlong)(int)uVar1 * 0x38 + *plVar5);
    return;
  }
  this->PRIVATE_MachineDescription = (FBakedAnimationStateMachine *)0x0;
  return;
}

// ClearAllTransitionEvents @ 1474c45c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimNode_StateMachine::ClearAllTransitionEvents(FAnimNode_StateMachine *this)

{
  int *piVar1;
  int iVar2;
  FTransitionEvent *pFVar3;
  FBakedAnimationStateMachine *this_00;
  FString local_18;
  
  if (5 < (byte)LogAnimTransitionRequests._0_1_) {
    this_00 = this->PRIVATE_MachineDescription;
    if (this_00 == (FBakedAnimationStateMachine *)0x0) {
      if (2 < (byte)LogAnimation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
      this_00 = (FBakedAnimationStateMachine *)0x0;
    }
    ::FName::ToString(&this_00->MachineName,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (FTransitionEvent *)(this->QueuedTransitionEvents).AllocatorInstance.Data;
  piVar1 = &(this->QueuedTransitionEvents).ArrayMax;
  iVar2 = (this->QueuedTransitionEvents).ArrayNum;
  if (-1 < (this->QueuedTransitionEvents).ArrayMax) {
    DestructItems<FTransitionEvent,int>(pFVar3,iVar2);
    (this->QueuedTransitionEvents).ArrayNum = 0;
    return;
  }
  DestructItems<FTransitionEvent,int>(pFVar3,iVar2);
  (this->QueuedTransitionEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->QueuedTransitionEvents).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearTransitionEvents @ 1474c46b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::ClearTransitionEvents(FAnimNode_StateMachine *this,FName *param_1)

{
  int *piVar1;
  TArray<FTransitionEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBakedAnimationStateMachine *this_00;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FString local_48;
  FString local_38;
  
  pTVar2 = &this->QueuedTransitionEvents;
  uVar8 = (this->QueuedTransitionEvents).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 0x50;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->QueuedTransitionEvents).ArrayNum) {
        uVar5 = uVar10;
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
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      if ((*(uint *)(pFVar9 + lVar7 + 0x40) == (param_1->ComparisonIndex).Value) &&
         (*(uint *)(pFVar9 + lVar7 + 0x44) == param_1->Number)) {
        if (5 < (byte)LogAnimTransitionRequests._0_1_) {
          this_00 = this->PRIVATE_MachineDescription;
          if (this_00 == (FBakedAnimationStateMachine *)0x0) {
            if (2 < (byte)LogAnimation._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            }
            this_00 = (FBakedAnimationStateMachine *)0x0;
          }
          ::FName::ToString(&this_00->MachineName,&local_38);
          ::FName::ToString(param_1,&local_48);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        uVar5 = 0;
        if ((int)uVar8 < (this->QueuedTransitionEvents).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (pTVar2->AllocatorInstance).Data + lVar7;
        if (*(void **)(pFVar9 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar9 + 0x20));
        }
        iVar6 = (this->QueuedTransitionEvents).ArrayNum + ~uVar8;
        if (iVar6 != 0) {
          memmove(pFVar9,pFVar9 + 0x50,(longlong)iVar6 * 0x50);
        }
        piVar1 = &(this->QueuedTransitionEvents).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar7 = lVar7 + -0x50;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  iVar6 = (this->QueuedTransitionEvents).ArrayNum;
  piVar1 = &(this->QueuedTransitionEvents).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,&pTVar2->AllocatorInstance,iVar6,piVar1);
  }
  return;
}

// ConditionallyCacheBonesForState @ 1474c5060

void __thiscall
FAnimNode_StateMachine::ConditionallyCacheBonesForState
          (FAnimNode_StateMachine *this,int param_1,FAnimationBaseContext *param_2)

{
  short sVar1;
  FAnimInstanceProxy *pFVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FAnimInstanceProxy *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  
  if ((param_1 < 0) || ((this->StateCacheBoneCounters).ArrayNum <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateCacheBoneCounters.IsValidIndex(StateIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                       ,0x133,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->AnimInstanceProxy;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->StateCacheBoneCounters).ArrayNum) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->StateCacheBoneCounters).AllocatorInstance.Data;
  lVar9 = (longlong)param_1 * 0x10;
  sVar1 = *(short *)(pFVar3 + lVar9 + 8);
  if ((((sVar1 == -1) || (uVar4 = *(ulong64 *)(pFVar3 + lVar9), uVar4 == 0xffffffffffffffff)) ||
      (sVar1 != (pFVar2->CachedBonesCounter).Counter)) ||
     (uVar4 != (pFVar2->CachedBonesCounter).LastSyncronizedFrame)) {
    uVar7 = 0;
    if (param_1 < (this->StateCacheBoneCounters).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->StateCacheBoneCounters).AllocatorInstance.Data;
    *(short *)(pFVar3 + lVar9 + 8) = (pFVar2->CachedBonesCounter).Counter;
    *(ulong64 *)(pFVar3 + lVar9) = (pFVar2->CachedBonesCounter).LastSyncronizedFrame;
    *(short *)(pFVar3 + lVar9 + 10) = (pFVar2->CachedBonesCounter).SkipFrames;
    local_48 = param_2->AnimInstanceProxy;
    local_40 = 0;
    local_38 = 1;
    uVar7 = 0;
    if (param_1 < (this->StatePoseLinks).ArrayNum) {
      uVar7 = uVar8;
    }
    local_34 = 0xffffffffffffffff;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FPoseLinkBase::CacheBones
              ((FPoseLinkBase *)((this->StatePoseLinks).AllocatorInstance.Data + lVar9),
               (FAnimationCacheBonesContext *)&local_48);
  }
  return;
}

// ConsumeMarkedTransitionEvents @ 1474c8c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimNode_StateMachine::ConsumeMarkedTransitionEvents(FAnimNode_StateMachine *this)

{
  int *piVar1;
  TArray<FTransitionEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBakedAnimationStateMachine *this_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FString local_48;
  FString local_38;
  
  pTVar2 = &this->QueuedTransitionEvents;
  uVar8 = (this->QueuedTransitionEvents).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 * 0x50;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->QueuedTransitionEvents).ArrayNum) {
        uVar5 = uVar7;
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
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar9[lVar10 + 0x48] == (FScriptContainerElement)0x0) &&
         (0 < *(int *)(pFVar9 + lVar10 + 0x28))) {
        if (5 < (byte)LogAnimTransitionRequests._0_1_) {
          this_00 = this->PRIVATE_MachineDescription;
          if (this_00 == (FBakedAnimationStateMachine *)0x0) {
            if (2 < (byte)LogAnimation._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            }
            this_00 = (FBakedAnimationStateMachine *)0x0;
          }
          ::FName::ToString(&this_00->MachineName,&local_38);
          uVar5 = 0;
          if ((int)uVar8 < (this->QueuedTransitionEvents).ArrayNum) {
            uVar5 = uVar7;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString((FName *)((pTVar2->AllocatorInstance).Data + lVar10 + 0x40),&local_48);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        uVar5 = 0;
        if ((int)uVar8 < (this->QueuedTransitionEvents).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (pTVar2->AllocatorInstance).Data + lVar10;
        if (*(void **)(pFVar9 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar9 + 0x20));
        }
        iVar6 = (this->QueuedTransitionEvents).ArrayNum + ~uVar8;
        if (iVar6 != 0) {
          memmove(pFVar9,pFVar9 + 0x50,(longlong)iVar6 * 0x50);
        }
        piVar1 = &(this->QueuedTransitionEvents).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar10 = lVar10 + -0x50;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  iVar6 = (this->QueuedTransitionEvents).ArrayNum;
  piVar1 = &(this->QueuedTransitionEvents).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,&pTVar2->AllocatorInstance,iVar6,piVar1);
  }
  return;
}

// EvaluateState @ 1474cdf80

FPoseContext * __thiscall
FAnimNode_StateMachine::EvaluateState
          (FAnimNode_StateMachine *this,int param_1,FPoseContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseContext *pFVar4;
  FPoseContext *pFVar5;
  FBakedAnimationState *pFVar6;
  longlong lVar7;
  uint uVar8;
  FAnimationBaseContext local_38;
  
  lVar7 = (longlong)param_1;
  if (((this->StateCachedPoses).ArrayNum != (this->StatePoseLinks).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StateCachedPoses.Num() == StatePoseLinks.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                         ,0x635,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPoseContext *)(*pcVar1)();
    return pFVar4;
  }
  pFVar4 = (FPoseContext *)0x0;
  uVar8 = (uint)~param_1 >> 0x1f;
  uVar3 = 0;
  if (param_1 < (this->StateCachedPoses).ArrayNum) {
    uVar3 = uVar8;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPoseContext *)(*pcVar1)();
    return pFVar4;
  }
  pFVar5 = *(FPoseContext **)((this->StateCachedPoses).AllocatorInstance.Data + lVar7 * 8);
  if (pFVar5 == (FPoseContext *)0x0) {
    pFVar5 = ::operator_new(0xa0);
    if (((pFVar5 == (FPoseContext *)0x0) ||
        (pFVar4 = FPoseContext::FPoseContext(pFVar5,param_2,false), pFVar5 = pFVar4,
        pFVar4 == (FPoseContext *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachePosePtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                           ,0x63b,L""), pFVar5 = pFVar4, bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPoseContext *)(*pcVar1)();
      return pFVar4;
    }
    uVar3 = 0;
    if (param_1 < (this->StateCachedPoses).ArrayNum) {
      uVar3 = uVar8;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPoseContext *)(*pcVar1)();
      return pFVar4;
    }
    *(FPoseContext **)((this->StateCachedPoses).AllocatorInstance.Data + lVar7 * 8) = pFVar5;
    if (((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) || (param_1 < 0))
       || (((this->PRIVATE_MachineDescription->States).ArrayNum <= param_1 ||
           (pFVar6 = GetStateInfo(this,param_1), pFVar6->bIsAConduit == false)))) {
      local_38.AnimInstanceProxy = (FAnimInstanceProxy *)param_2->_padding_;
      local_38.SharedContext = (FAnimationUpdateSharedContext *)param_2->_padding_;
      local_38._16_8_ = param_2->_padding_;
      local_38._24_8_ = param_2->_padding_;
      ConditionallyCacheBonesForState(this,param_1,&local_38);
      uVar3 = 0;
      if (param_1 < (this->StatePoseLinks).ArrayNum) {
        uVar3 = uVar8;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPoseContext *)(*pcVar1)();
        return pFVar4;
      }
      FPoseLink::Evaluate((FPoseLink *)
                          ((this->StatePoseLinks).AllocatorInstance.Data + lVar7 * 0x10),pFVar5);
    }
  }
  return pFVar5;
}

// EvaluateTransitionCustomBlend @ 1474ce1a0

void __thiscall
FAnimNode_StateMachine::EvaluateTransitionCustomBlend
          (FAnimNode_StateMachine *this,FPoseContext *param_1,
          FAnimationActiveTransitionEntry *param_2,bool param_3)

{
  FBlendedCurve *pFVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  FAnimNode_TransitionPoseEvaluator *this_00;
  FBoneContainer *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  bool bVar20;
  uint uVar21;
  FPoseContext *pFVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 local_128 [56];
  FBlendedCurve FStack_f0;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_d0;
  bool local_90;
  
  if (*(int *)&(param_2->CustomTransitionGraph).field_0x8 != -1) {
    iVar24 = 0;
    while ((-1 < iVar24 && (iVar24 < (param_2->PoseEvaluators).ArrayNum))) {
      if ((iVar24 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(FAnimNode_TransitionPoseEvaluator **)
                 ((param_2->PoseEvaluators).AllocatorInstance.Data + (longlong)iVar24 * 8);
      if (((this_00->EvaluatorMode).Value == '\0') || (0 < this_00->CacheFramesRemaining)) {
        if ((!param_3) || ((this_00->DataSource).Value != '\0')) {
          lVar23 = 0x34;
          if ((this_00->DataSource).Value != '\0') {
            lVar23 = 0x30;
          }
          pFVar22 = EvaluateState(this,*(int *)((param_2->SourceTransitionIndices).AllocatorInstance
                                                .InlineData + lVar23 + -0x68),param_1);
          FAnimNode_TransitionPoseEvaluator::CachePose(this_00,pFVar22);
          goto LAB_1474ce29e;
        }
        FAnimNode_TransitionPoseEvaluator::CachePose(this_00,param_1);
        iVar24 = iVar24 + 1;
      }
      else {
LAB_1474ce29e:
        iVar24 = iVar24 + 1;
      }
    }
    lVar23 = param_1->_padding_;
    uVar26 = 0;
    local_90 = param_1->bExpectsAdditivePose != false;
    local_128._8_8_ = 0;
    local_128[0x10] = 1;
    local_128._20_8_ = 0xffffffffffffffff;
    local_128._32_8_ = 0;
    local_128._40_8_ = 0;
    local_128._48_8_ = 0;
    FStack_f0._0_8_ = (void *)0x0;
    FStack_f0._8_8_ = 0;
    FStack_f0._16_1_ = 0;
    FStack_f0._24_8_ = 0;
    TStack_d0.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_d0.UniqueTypedBoneIndices.ArrayNum = 0;
    TStack_d0.UniqueTypedBoneIndices.ArrayMax = 0;
    TStack_d0.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_d0.AttributeIdentifiers.ArrayNum = 0;
    TStack_d0.AttributeIdentifiers.ArrayMax = 0;
    TStack_d0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_d0.Values.ArrayNum = 0;
    TStack_d0.Values.ArrayMax = 0;
    TStack_d0.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_d0.UniqueTypes.ArrayNum = 0;
    TStack_d0.UniqueTypes.ArrayMax = 0;
    local_128._0_8_ = lVar23;
    if ((*(longlong *)(lVar23 + 0x660) == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = *(FBoneContainer **)(lVar23 + 0x660);
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_128 + 0x20),pFVar5);
    FBlendedCurve::InitFrom(&FStack_f0,pFVar5);
    local_128._20_8_ = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    FPoseLink::Evaluate(&param_2->CustomTransitionGraph,(FPoseContext *)local_128);
    uVar4 = *(uint *)&(param_1->Pose).field_0x8;
    uVar27 = uVar26;
    if (uVar4 != 0) {
      do {
        uVar25 = (uint)uVar26;
        uVar21 = 0;
        if ((int)uVar25 < (int)local_128._40_4_) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar7 = *(undefined8 *)(local_128._32_8_ + uVar27);
        uVar8 = ((undefined8 *)(local_128._32_8_ + uVar27))[1];
        puVar3 = (undefined8 *)(local_128._32_8_ + 0x10 + uVar27);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (undefined8 *)(local_128._32_8_ + 0x20 + uVar27);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar3 = (undefined8 *)(local_128._32_8_ + 0x30 + uVar27);
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        puVar3 = (undefined8 *)(local_128._32_8_ + 0x40 + uVar27);
        uVar15 = *puVar3;
        uVar16 = puVar3[1];
        puVar3 = (undefined8 *)(local_128._32_8_ + 0x50 + uVar27);
        uVar17 = *puVar3;
        uVar18 = puVar3[1];
        uVar21 = 0;
        if ((int)uVar25 < *(int *)&(param_1->Pose).field_0x8) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar23 = *(longlong *)&param_1->Pose;
        uVar26 = (ulonglong)(uVar25 + 1);
        *(undefined8 *)(lVar23 + uVar27) = uVar7;
        ((undefined8 *)(lVar23 + uVar27))[1] = uVar8;
        puVar3 = (undefined8 *)(lVar23 + 0x10 + uVar27);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3 = (undefined8 *)(lVar23 + 0x20 + uVar27);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        puVar3 = (undefined8 *)(lVar23 + 0x30 + uVar27);
        *puVar3 = uVar13;
        puVar3[1] = uVar14;
        puVar3 = (undefined8 *)(lVar23 + 0x40 + uVar27);
        *puVar3 = uVar15;
        puVar3[1] = uVar16;
        puVar3 = (undefined8 *)(lVar23 + 0x50 + uVar27);
        *puVar3 = uVar17;
        puVar3[1] = uVar18;
        uVar27 = uVar27 + 0x60;
      } while (uVar25 + 1 != uVar4);
    }
    uVar7 = FStack_f0._0_8_;
    pFVar1 = &param_1->Curve;
    if (pFVar1 != &FStack_f0) {
      uVar19 = FStack_f0._8_4_;
      lVar23 = (longlong)(int)FStack_f0._8_4_;
      puVar2 = &(param_1->Curve).field_0xc;
      *(undefined4 *)&(param_1->Curve).field_0x8 = FStack_f0._8_4_;
      if ((FStack_f0._8_4_ == 0) && (*(int *)puVar2 == 0)) {
        *(undefined4 *)puVar2 = 0;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,FStack_f0._8_4_,*(int *)puVar2,
                   (ForElementType<UE::Anim::FCurveElement> *)pFVar1,FStack_f0._8_4_,(int *)puVar2);
        if (uVar19 != 0) {
          memcpy(*(void **)pFVar1,(void *)uVar7,lVar23 << 4);
        }
      }
    }
    (param_1->Curve).field_0x10 = FStack_f0._16_1_;
    UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::CopyFrom
              ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
               &param_1->CustomAttributes,&TStack_d0);
    UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
    ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_d0);
  }
  return;
}

// EvaluateTransitionStandardBlend @ 1474ce5a0

void __thiscall
FAnimNode_StateMachine::EvaluateTransitionStandardBlend
          (FAnimNode_StateMachine *this,FPoseContext *param_1,
          FAnimationActiveTransitionEntry *param_2,bool param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  FBoneContainer *pFVar4;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  FPoseContext *pFVar9;
  FPoseContext *pFVar10;
  undefined1 local_c8 [32];
  FBaseCompactPose<TMemStackAllocator<0>_> local_a8;
  FBlendedCurve FStack_90;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_70;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_60;
  ForAnyElementType local_50;
  undefined8 local_48;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_40;
  bool local_30;
  
  if (param_3) {
    lVar3 = param_1->_padding_;
    local_30 = param_1->bExpectsAdditivePose != false;
    local_c8._8_8_ = 0;
    local_c8[0x10] = 1;
    local_c8._20_8_ = 0xffffffffffffffff;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8.BoneContainer = (FBoneContainer *)0x0;
    FStack_90._0_8_ = 0;
    FStack_90._8_8_ = 0;
    FStack_90._16_1_ = 0;
    FStack_90._24_8_ = 0;
    TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_70.ArrayNum = 0;
    TStack_70.ArrayMax = 0;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    local_c8._0_8_ = lVar3;
    if (*(longlong *)(lVar3 + 0x660) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = *(FBoneContainer **)(lVar3 + 0x660);
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_c8 + 0x20),pFVar4);
    FBlendedCurve::InitFrom(&FStack_90,pFVar4);
    uVar7 = local_c8._0_8_;
    local_c8._20_8_ = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    if (local_c8._0_8_ != param_1->_padding_) {
      if (*(longlong *)(local_c8._0_8_ + 0x660) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar4 = *(FBoneContainer **)(uVar7 + 0x660);
      FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_c8 + 0x20),pFVar4);
      FBlendedCurve::InitFrom(&FStack_90,pFVar4);
    }
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)(local_c8 + 0x20),
               (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)&param_1->Pose);
    local_a8.BoneContainer = *(FBoneContainer **)&(param_1->Pose).field_0x10;
    TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&FStack_90,
               (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&param_1->Curve);
    FStack_90._16_1_ = (param_1->Curve).field_0x10;
    FStack_90._24_8_ = *(undefined8 *)&(param_1->Curve).field_0x18;
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (&TStack_70,
               (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               &param_1->CustomAttributes);
    TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    operator=(&local_60,
              (TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)&(param_1->CustomAttributes).field_0x10);
    puVar1 = &(param_1->CustomAttributes).field_0x20;
    if (&local_50 != (ForAnyElementType *)puVar1) {
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)local_50.Data,(int)local_48);
      iVar2 = *(int *)&(param_1->CustomAttributes).field_0x28;
      pTVar5 = *(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 **)puVar1;
      local_48._0_4_ = iVar2;
      if ((iVar2 == 0) && (local_48._4_4_ == 0)) {
        local_48 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,local_48._4_4_,&local_50,iVar2,(int *)((longlong)&local_48 + 4));
        ConstructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  (local_50.Data,pTVar5,iVar2);
      }
    }
    TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
              (&local_40,
               (TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
               &(param_1->CustomAttributes).field_0x30);
    local_30 = param_1->bExpectsAdditivePose;
    pFVar9 = EvaluateState(this,param_2->NextState,param_1);
    EvaluateTransitionStandardBlendInternal(this,param_1,param_2,(FPoseContext *)local_c8,pFVar9);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)local_50.Data,(int)local_48);
    if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        local_50.Data !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_50.Data);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
               local_60.AllocatorInstance.Data,local_60.ArrayNum);
    if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
        local_60.AllocatorInstance.Data !=
        (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)TStack_70.AllocatorInstance.Data,
               TStack_70.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)TStack_70.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
      return;
    }
  }
  else {
    pFVar9 = EvaluateState(this,param_2->PreviousState,param_1);
    pFVar10 = EvaluateState(this,param_2->NextState,param_1);
    EvaluateTransitionStandardBlendInternal(this,param_1,param_2,pFVar9,pFVar10);
  }
  return;
}

// EvaluateTransitionStandardBlendInternal @ 1474ce8a0

void __thiscall
FAnimNode_StateMachine::EvaluateTransitionStandardBlendInternal
          (FAnimNode_StateMachine *this,FPoseContext *param_1,
          FAnimationActiveTransitionEntry *param_2,FPoseContext *param_3,FPoseContext *param_4)

{
  undefined1 *puVar1;
  uchar *puVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  uchar *puVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  UBlendProfile *pUVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  FPoseContext *pFVar49;
  bool bVar50;
  uint uVar51;
  USkeleton *pUVar52;
  FSkeletonRemappingRegistry *this_00;
  undefined8 *puVar53;
  FSkeletonRemapping *this_01;
  longlong *plVar54;
  uint uVar55;
  uint uVar56;
  longlong lVar57;
  ulonglong uVar58;
  longlong lVar59;
  double *pdVar60;
  longlong lVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  float fVar65;
  double dVar66;
  double dVar67;
  double dVar76;
  double dVar77;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar68;
  double dVar69;
  double dVar78;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint uVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  float fVar87;
  float fVar88;
  uint local_238 [2];
  FPoseContext *local_230;
  FPoseContext *local_228;
  undefined1 local_220 [8];
  FAnimationActiveTransitionEntry *local_218;
  FSkeletonRemapping *local_210;
  int local_208 [2];
  longlong local_200;
  uint local_1f8;
  longlong local_1f0;
  int local_1e8 [2];
  float local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  int *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  float *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [16];
  TArrayView<int_const_,int> local_188;
  TArrayView<float_const_,int> local_178;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_168;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_158;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_118 [3];
  
  fVar88 = __real_3f800000 - param_2->Alpha;
  fVar8 = param_2->Alpha;
  local_230 = param_4;
  local_228 = param_3;
  local_218 = param_2;
  if ((param_2->BlendProfile).field0_0x0.DebugPtr == (UBlendProfile *)0x0) {
    uVar9 = *(uint *)&(param_1->Pose).field_0x8;
    uVar63 = 0;
    if (uVar9 != 0) {
      dVar67 = (double)fVar88;
      dVar19 = (double)fVar88;
      dVar69 = (double)fVar8;
      dVar77 = (double)fVar8;
      dVar76 = (double)fVar88;
      dVar78 = (double)fVar88;
      dVar30 = (double)fVar8;
      dVar33 = (double)fVar8;
      uVar58 = uVar63;
      do {
        uVar55 = (uint)uVar63;
        uVar51 = ~uVar55 >> 0x1f;
        uVar56 = 0;
        if ((int)uVar55 < *(int *)&(local_228->Pose).field_0x8) {
          uVar56 = uVar51;
        }
        if ((uVar56 == 0) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar57 = *(longlong *)&local_228->Pose;
        pdVar60 = (double *)(uVar58 + 0x40 + lVar57);
        dVar84 = *pdVar60;
        pdVar3 = (double *)(uVar58 + 0x50 + lVar57);
        dVar66 = *pdVar3;
        pdVar4 = (double *)(uVar58 + 0x20 + lVar57);
        dVar68 = *pdVar4;
        pdVar5 = (double *)(uVar58 + 0x30 + lVar57);
        dVar79 = *pdVar5;
        dVar85 = *(double *)(uVar58 + lVar57);
        pdVar6 = (double *)(uVar58 + 0x10 + lVar57);
        dVar86 = *pdVar6;
        uVar83 = 0;
        uVar56 = uVar83;
        if ((int)uVar55 < *(int *)&(param_1->Pose).field_0x8) {
          uVar56 = uVar51;
        }
        dVar26 = pdVar60[1] * dVar19;
        dVar31 = pdVar3[1] * dVar78;
        dVar34 = pdVar4[1] * dVar19;
        dVar38 = pdVar5[1] * dVar78;
        dVar42 = ((double *)(uVar58 + lVar57))[1] * dVar19;
        dVar46 = pdVar6[1] * dVar78;
        if ((uVar56 == 0) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar57 = *(longlong *)&param_1->Pose;
        auVar41._8_4_ = SUB84(dVar42,0);
        auVar41._0_8_ = dVar85 * dVar67;
        auVar41._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        *(undefined1 (*) [16])(uVar58 + lVar57) = auVar41;
        auVar45._8_4_ = SUB84(dVar46,0);
        auVar45._0_8_ = dVar86 * dVar76;
        auVar45._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        *(undefined1 (*) [16])(uVar58 + 0x10 + lVar57) = auVar45;
        auVar32._8_4_ = SUB84(dVar34,0);
        auVar32._0_8_ = dVar68 * dVar67;
        auVar32._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        *(undefined1 (*) [16])(uVar58 + 0x20 + lVar57) = auVar32;
        auVar37._8_4_ = SUB84(dVar38,0);
        auVar37._0_8_ = dVar79 * dVar76;
        auVar37._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        *(undefined1 (*) [16])(uVar58 + 0x30 + lVar57) = auVar37;
        auVar25._8_4_ = SUB84(dVar26,0);
        auVar25._0_8_ = dVar84 * dVar67;
        auVar25._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        *(undefined1 (*) [16])(uVar58 + 0x40 + lVar57) = auVar25;
        auVar29._8_4_ = SUB84(dVar31,0);
        auVar29._0_8_ = dVar66 * dVar76;
        auVar29._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        *(undefined1 (*) [16])(uVar58 + 0x50 + lVar57) = auVar29;
        uVar56 = uVar83;
        if ((int)uVar55 < *(int *)&(param_1->Pose).field_0x8) {
          uVar56 = uVar51;
        }
        if ((uVar56 == 0) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_210 = *(FSkeletonRemapping **)&param_1->Pose;
        if ((int)uVar55 < *(int *)&(local_230->Pose).field_0x8) {
          uVar83 = uVar51;
        }
        if ((uVar83 == 0) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar63 = (ulonglong)(uVar55 + 1);
        pdVar60 = (double *)((longlong)&(local_210->SourceSkeleton).WeakPtr.ObjectIndex + uVar58);
        lVar57 = *(longlong *)&local_230->Pose;
        pdVar3 = (double *)
                 ((longlong)&(local_210->SourceToTargetBoneIndexes).AllocatorInstance.Data + uVar58)
        ;
        pdVar4 = (double *)(uVar58 + 0x10 + lVar57);
        dVar85 = *(double *)(uVar58 + lVar57) * dVar69;
        dVar86 = ((double *)(uVar58 + lVar57))[1] * dVar77;
        dVar66 = *pdVar4 * dVar30;
        dVar68 = pdVar4[1] * dVar33;
        dVar84 = *pdVar3 * dVar66 + *pdVar60 * dVar85;
        dVar79 = pdVar3[1] * dVar68 + pdVar60[1] * dVar86;
        uVar62 = -(ulonglong)(0.0 <= dVar79 + dVar84);
        uVar64 = -(ulonglong)(0.0 <= dVar84 + dVar79);
        uVar51 = (uint)(uVar64 >> 0x20);
        uVar56 = (uint)(uVar62 >> 0x20);
        auVar74._0_8_ = (ulonglong)dVar85 & uVar62;
        auVar74._8_4_ = (undefined4)((ulonglong)dVar86 & uVar64);
        auVar74._12_4_ = (undefined4)(((ulonglong)dVar86 & uVar64) >> 0x20);
        auVar82._0_4_ = ~(uint)uVar62 & SUB84(0.0 - dVar85,0);
        auVar82._4_4_ = ~uVar56 & (uint)((ulonglong)(0.0 - dVar85) >> 0x20);
        auVar82._8_4_ = ~(uint)uVar64 & SUB84(0.0 - dVar86,0);
        auVar82._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar86) >> 0x20);
        pdVar60 = (double *)((longlong)&(local_210->SourceSkeleton).WeakPtr.ObjectIndex + uVar58);
        dVar84 = pdVar60[1];
        pdVar3 = (double *)((longlong)&(local_210->SourceSkeleton).WeakPtr.ObjectIndex + uVar58);
        *pdVar3 = SUB168(auVar82 | auVar74,0) + *pdVar60;
        pdVar3[1] = SUB168(auVar82 | auVar74,8) + dVar84;
        auVar75._0_4_ = ~(uint)uVar62 & SUB84(0.0 - dVar66,0);
        auVar75._4_4_ = ~uVar56 & (uint)((ulonglong)(0.0 - dVar66) >> 0x20);
        auVar75._8_4_ = ~(uint)uVar64 & SUB84(0.0 - dVar68,0);
        auVar75._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar68) >> 0x20);
        auVar22._8_4_ = (int)((ulonglong)dVar68 & uVar64);
        auVar22._0_8_ = (ulonglong)dVar66 & uVar62;
        auVar22._12_4_ = (int)(((ulonglong)dVar68 & uVar64) >> 0x20);
        pdVar60 = (double *)
                  ((longlong)&(local_210->SourceToTargetBoneIndexes).AllocatorInstance.Data + uVar58
                  );
        dVar84 = pdVar60[1];
        pdVar3 = (double *)
                 ((longlong)&(local_210->SourceToTargetBoneIndexes).AllocatorInstance.Data + uVar58)
        ;
        *pdVar3 = SUB168(auVar75 | auVar22,0) + *pdVar60;
        pdVar3[1] = SUB168(auVar75 | auVar22,8) + dVar84;
        pdVar60 = (double *)(uVar58 + 0x20 + lVar57);
        pdVar3 = (double *)(uVar58 + 0x30 + lVar57);
        dVar66 = *pdVar3;
        dVar68 = pdVar3[1];
        pdVar3 = (double *)
                 ((longlong)&(local_210->TargetToSourceBoneIndexes).AllocatorInstance.Data + uVar58)
        ;
        dVar84 = pdVar60[1] * dVar77 + pdVar3[1];
        auVar17._8_4_ = SUB84(dVar84,0);
        auVar17._0_8_ = *pdVar60 * dVar69 + *pdVar3;
        auVar17._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
        *(undefined1 (*) [16])
         ((longlong)&(local_210->TargetToSourceBoneIndexes).AllocatorInstance.Data + uVar58) =
             auVar17;
        pdVar60 = (double *)
                  ((longlong)&(local_210->RetargetingTable).AllocatorInstance.Data + uVar58);
        dVar84 = pdVar60[1];
        pdVar3 = (double *)
                 ((longlong)&(local_210->RetargetingTable).AllocatorInstance.Data + uVar58);
        *pdVar3 = dVar66 * dVar30 + *pdVar60;
        pdVar3[1] = dVar68 * dVar33 + dVar84;
        pdVar60 = (double *)(uVar58 + 0x40 + lVar57);
        pdVar3 = (double *)(uVar58 + 0x50 + lVar57);
        dVar66 = *pdVar3;
        dVar68 = pdVar3[1];
        pdVar3 = (double *)((longlong)&local_210[1].SourceSkeleton.WeakPtr.ObjectIndex + uVar58);
        dVar84 = pdVar60[1] * dVar77 + pdVar3[1];
        auVar18._8_4_ = SUB84(dVar84,0);
        auVar18._0_8_ = *pdVar60 * dVar69 + *pdVar3;
        auVar18._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
        *(undefined1 (*) [16])((longlong)&local_210[1].SourceSkeleton.WeakPtr.ObjectIndex + uVar58)
             = auVar18;
        pdVar60 = (double *)
                  ((longlong)&local_210[1].SourceToTargetBoneIndexes.AllocatorInstance.Data + uVar58
                  );
        dVar84 = pdVar60[1];
        pdVar3 = (double *)
                 ((longlong)&local_210[1].SourceToTargetBoneIndexes.AllocatorInstance.Data + uVar58)
        ;
        *pdVar3 = dVar66 * dVar30 + *pdVar60;
        pdVar3[1] = dVar68 * dVar33 + dVar84;
        uVar58 = uVar58 + 0x60;
        param_2 = local_218;
      } while (uVar55 + 1 != uVar9);
    }
  }
  else {
    lVar57 = param_1->_padding_;
    if ((*(longlong *)(lVar57 + 0x660) == 0) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar50)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pUVar11 = (param_2->BlendProfile).field0_0x0.DebugPtr;
    lVar57 = *(longlong *)(lVar57 + 0x660);
    pcVar12 = *(code **)pUVar11->_padding_;
    local_1f0 = lVar57;
    pUVar52 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    (*pcVar12)(&pUVar11->_padding_,&local_1d8,pUVar52);
    this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
    pUVar52 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
    plVar54 = &((param_2->BlendProfile).field0_0x0.DebugPtr)->_padding_;
    puVar53 = (undefined8 *)(**(code **)(*plVar54 + 0x38))(plVar54,local_198);
    this_01 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                        (this_00,(USkeleton *)*puVar53,pUVar52);
    local_210 = this_01;
    bVar50 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
    if ((bVar50) && (bVar50 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), bVar50))
    {
      uVar9 = *(uint *)&(param_1->Pose).field_0x8;
      uVar63 = 0;
      if (uVar9 != 0) {
        local_200 = 0;
        uVar58 = uVar63;
        do {
          uVar55 = (uint)uVar63;
          uVar56 = 0;
          fVar65 = fVar88;
          fVar87 = fVar8;
          if (((int)uVar55 < 0) || ((this_01->TargetToSourceBoneIndexes).ArrayNum <= (int)uVar55)) {
LAB_1474cec9b:
            local_208[0] = -1;
          }
          else {
            uVar51 = 0;
            if ((int)uVar55 < (this_01->TargetToSourceBoneIndexes).ArrayNum) {
              uVar51 = ~uVar55 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar51 = *(uint *)((this_01->TargetToSourceBoneIndexes).AllocatorInstance.Data +
                              local_200 * 4);
            if (((int)uVar51 < 0) || (*(int *)(local_1f0 + 0x88) <= (int)uVar51))
            goto LAB_1474cec9b;
            uVar83 = 0;
            if ((int)uVar51 < *(int *)(local_1f0 + 0x88)) {
              uVar83 = ~uVar51 >> 0x1f;
            }
            if ((uVar83 == 0) &&
               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_208[0] = *(int *)(*(longlong *)(local_1f0 + 0x80) + (longlong)(int)uVar51 * 4);
            if (local_208[0] != -1) {
              plVar54 = &((param_2->BlendProfile).field0_0x0.DebugPtr)->_padding_;
              uVar51 = (**(code **)(*plVar54 + 0x10))(plVar54,local_208,local_1f0,local_1d8);
              if (uVar51 != 0xffffffff) {
                if (((param_2->StateBlendData).ArrayNum < 2) &&
                   (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar50)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_218 = (FAnimationActiveTransitionEntry *)
                            (param_2->StateBlendData).AllocatorInstance.Data;
                local_1f8 = ~uVar51;
                uVar83 = uVar56;
                if ((int)uVar51 < *(int *)((longlong)local_218 + 0xa8)) {
                  uVar83 = local_1f8 >> 0x1f;
                }
                if ((uVar83 == 0) &&
                   (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar50)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar65 = *(float *)(*(longlong *)((longlong)local_218 + 0xa0) +
                                   (longlong)(int)uVar51 * 4);
                if (((param_2->StateBlendData).ArrayNum < 1) &&
                   (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar50)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_218 = (FAnimationActiveTransitionEntry *)
                            (param_2->StateBlendData).AllocatorInstance.Data;
                uVar83 = uVar56;
                if ((int)uVar51 < *(int *)&(local_218->PoseEvaluators).AllocatorInstance.Data) {
                  uVar83 = local_1f8 >> 0x1f;
                }
                if ((uVar83 == 0) &&
                   (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar50)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar87 = *(float *)(*(longlong *)&local_218->InterruptNotify +
                                   (longlong)(int)uVar51 * 4);
              }
            }
          }
          uVar51 = ~uVar55 >> 0x1f;
          if ((int)uVar55 < *(int *)&(local_228->Pose).field_0x8) {
            uVar56 = uVar51;
          }
          if ((uVar56 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          dVar66 = (double)fVar65;
          dVar76 = (double)fVar65;
          lVar57 = *(longlong *)&local_228->Pose;
          pdVar60 = (double *)(uVar58 + 0x50 + lVar57);
          dVar78 = *pdVar60;
          pdVar3 = (double *)(uVar58 + 0x20 + lVar57);
          dVar30 = *pdVar3;
          pdVar4 = (double *)(uVar58 + 0x30 + lVar57);
          dVar33 = *pdVar4;
          dVar69 = *(double *)(uVar58 + lVar57);
          pdVar5 = (double *)(uVar58 + 0x10 + lVar57);
          dVar77 = *pdVar5;
          dVar67 = (double)fVar65;
          dVar19 = (double)fVar65;
          pdVar6 = (double *)(uVar58 + 0x40 + lVar57);
          dVar84 = *pdVar6;
          uVar83 = 0;
          uVar56 = uVar83;
          if ((int)uVar55 < *(int *)&(param_1->Pose).field_0x8) {
            uVar56 = uVar51;
          }
          dVar68 = pdVar6[1] * dVar76;
          dVar79 = pdVar60[1] * dVar19;
          dVar85 = pdVar3[1] * dVar76;
          dVar86 = pdVar4[1] * dVar19;
          dVar76 = ((double *)(uVar58 + lVar57))[1] * dVar76;
          dVar19 = pdVar5[1] * dVar19;
          if ((uVar56 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar57 = *(longlong *)&param_1->Pose;
          auVar43._8_4_ = SUB84(dVar76,0);
          auVar43._0_8_ = dVar69 * dVar66;
          auVar43._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
          *(undefined1 (*) [16])(uVar58 + lVar57) = auVar43;
          auVar47._8_4_ = SUB84(dVar19,0);
          auVar47._0_8_ = dVar77 * dVar67;
          auVar47._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])(uVar58 + 0x10 + lVar57) = auVar47;
          auVar35._8_4_ = SUB84(dVar85,0);
          auVar35._0_8_ = dVar30 * dVar66;
          auVar35._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
          *(undefined1 (*) [16])(uVar58 + 0x20 + lVar57) = auVar35;
          auVar39._8_4_ = SUB84(dVar86,0);
          auVar39._0_8_ = dVar33 * dVar67;
          auVar39._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
          *(undefined1 (*) [16])(uVar58 + 0x30 + lVar57) = auVar39;
          auVar23._8_4_ = SUB84(dVar68,0);
          auVar23._0_8_ = dVar84 * dVar66;
          auVar23._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
          *(undefined1 (*) [16])(uVar58 + 0x40 + lVar57) = auVar23;
          auVar27._8_4_ = SUB84(dVar79,0);
          auVar27._0_8_ = dVar78 * dVar67;
          auVar27._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
          *(undefined1 (*) [16])(uVar58 + 0x50 + lVar57) = auVar27;
          uVar56 = uVar83;
          if ((int)uVar55 < *(int *)&(param_1->Pose).field_0x8) {
            uVar56 = uVar51;
          }
          if ((uVar56 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_218 = *(FAnimationActiveTransitionEntry **)&param_1->Pose;
          if ((int)uVar55 < *(int *)&(local_230->Pose).field_0x8) {
            uVar83 = uVar51;
          }
          if ((uVar83 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar63 = (ulonglong)(uVar55 + 1);
          local_200 = local_200 + 1;
          puVar2 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x68);
          lVar57 = *(longlong *)&local_230->Pose;
          puVar7 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x58);
          dVar78 = (double)fVar87;
          dVar30 = (double)fVar87;
          pdVar60 = (double *)(uVar58 + 0x10 + lVar57);
          dVar84 = *(double *)(uVar58 + lVar57) * dVar78;
          dVar66 = ((double *)(uVar58 + lVar57))[1] * dVar30;
          dVar33 = (double)fVar87;
          dVar69 = (double)fVar87;
          dVar19 = *pdVar60 * dVar33;
          dVar76 = pdVar60[1] * dVar69;
          dVar67 = *(double *)puVar7 * dVar19 + *(double *)puVar2 * dVar84;
          dVar77 = *(double *)(puVar7 + 8) * dVar76 + *(double *)(puVar2 + 8) * dVar66;
          uVar62 = -(ulonglong)(0.0 <= dVar77 + dVar67);
          uVar64 = -(ulonglong)(0.0 <= dVar67 + dVar77);
          uVar51 = (uint)(uVar64 >> 0x20);
          uVar56 = (uint)(uVar62 >> 0x20);
          auVar70._0_8_ = (ulonglong)dVar84 & uVar62;
          auVar70._8_4_ = (undefined4)((ulonglong)dVar66 & uVar64);
          auVar70._12_4_ = (undefined4)(((ulonglong)dVar66 & uVar64) >> 0x20);
          auVar80._0_4_ = ~(uint)uVar62 & SUB84(0.0 - dVar84,0);
          auVar80._4_4_ = ~uVar56 & (uint)((ulonglong)(0.0 - dVar84) >> 0x20);
          auVar80._8_4_ = ~(uint)uVar64 & SUB84(0.0 - dVar66,0);
          auVar80._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar66) >> 0x20);
          puVar2 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x68);
          dVar67 = *(double *)(puVar2 + 8);
          puVar7 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x68);
          *(double *)puVar7 = SUB168(auVar80 | auVar70,0) + *(double *)puVar2;
          *(double *)(puVar7 + 8) = SUB168(auVar80 | auVar70,8) + dVar67;
          auVar71._0_4_ = ~(uint)uVar62 & SUB84(0.0 - dVar19,0);
          auVar71._4_4_ = ~uVar56 & (uint)((ulonglong)(0.0 - dVar19) >> 0x20);
          auVar71._8_4_ = ~(uint)uVar64 & SUB84(0.0 - dVar76,0);
          auVar71._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar76) >> 0x20);
          auVar20._8_4_ = (int)((ulonglong)dVar76 & uVar64);
          auVar20._0_8_ = (ulonglong)dVar19 & uVar62;
          auVar20._12_4_ = (int)(((ulonglong)dVar76 & uVar64) >> 0x20);
          puVar2 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x58);
          dVar67 = *(double *)(puVar2 + 8);
          puVar7 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x58);
          *(double *)puVar7 = SUB168(auVar71 | auVar20,0) + *(double *)puVar2;
          *(double *)(puVar7 + 8) = SUB168(auVar71 | auVar20,8) + dVar67;
          pdVar60 = (double *)(uVar58 + 0x20 + lVar57);
          pdVar3 = (double *)(uVar58 + 0x30 + lVar57);
          dVar19 = *pdVar3;
          dVar76 = pdVar3[1];
          pdVar3 = (double *)
                   ((longlong)(&(local_218->SourceTransitionIndices).AllocatorInstance + -3) +
                   uVar58);
          dVar67 = pdVar60[1] * dVar30 + pdVar3[1];
          auVar13._8_4_ = SUB84(dVar67,0);
          auVar13._0_8_ = *pdVar60 * dVar78 + *pdVar3;
          auVar13._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          *(undefined1 (*) [16])
           ((longlong)(&(local_218->SourceTransitionIndices).AllocatorInstance + -3) + uVar58) =
               auVar13;
          puVar2 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x38);
          dVar67 = *(double *)(puVar2 + 8);
          puVar7 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x38);
          *(double *)puVar7 = dVar19 * dVar33 + *(double *)puVar2;
          *(double *)(puVar7 + 8) = dVar76 * dVar69 + dVar67;
          pdVar60 = (double *)(uVar58 + 0x40 + lVar57);
          pdVar3 = (double *)(uVar58 + 0x50 + lVar57);
          dVar19 = *pdVar3;
          dVar76 = pdVar3[1];
          puVar2 = (local_218->SourceTransitionIndices).AllocatorInstance.InlineData +
                   (uVar58 - 0x28);
          dVar67 = pdVar60[1] * dVar30 + *(double *)(puVar2 + 8);
          auVar14._8_4_ = SUB84(dVar67,0);
          auVar14._0_8_ = *pdVar60 * dVar78 + *(double *)puVar2;
          auVar14._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          *(undefined1 (*) [16])
           ((local_218->SourceTransitionIndices).AllocatorInstance.InlineData + (uVar58 - 0x28)) =
               auVar14;
          pdVar60 = (double *)
                    ((longlong)(&(local_218->SourceTransitionIndices).AllocatorInstance + -1) +
                    uVar58);
          dVar67 = pdVar60[1];
          pdVar3 = (double *)
                   ((longlong)(&(local_218->SourceTransitionIndices).AllocatorInstance + -1) +
                   uVar58);
          *pdVar3 = dVar19 * dVar33 + *pdVar60;
          pdVar3[1] = dVar76 * dVar69 + dVar67;
          uVar58 = uVar58 + 0x60;
          this_01 = local_210;
        } while (uVar55 + 1 != uVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0);
        goto LAB_1474cf6bf;
      }
    }
    else {
      uVar9 = *(uint *)&(param_1->Pose).field_0x8;
      uVar56 = 0;
      uVar55 = 0;
      if (uVar9 != 0) {
        do {
          plVar54 = &((param_2->BlendProfile).field0_0x0.DebugPtr)->_padding_;
          local_238[0] = uVar56;
          uVar51 = (**(code **)(*plVar54 + 0x10))(plVar54,local_238,lVar57,local_1d8);
          fVar65 = fVar88;
          fVar87 = fVar8;
          if (uVar51 != 0xffffffff) {
            if (((param_2->StateBlendData).ArrayNum < 2) &&
               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_210 = (FSkeletonRemapping *)(param_2->StateBlendData).AllocatorInstance.Data;
            uVar83 = uVar55;
            if ((int)uVar51 < *(int *)((longlong)local_210 + 0xa8)) {
              uVar83 = ~uVar51 >> 0x1f;
            }
            if ((uVar83 == 0) &&
               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar65 = *(float *)(*(longlong *)((longlong)local_210 + 0xa0) +
                               (longlong)(int)uVar51 * 4);
            if (((param_2->StateBlendData).ArrayNum < 1) &&
               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_210 = (FSkeletonRemapping *)(param_2->StateBlendData).AllocatorInstance.Data;
            uVar83 = uVar55;
            if ((int)uVar51 < local_210[1].TargetSkeleton.WeakPtr.ObjectIndex) {
              uVar83 = ~uVar51 >> 0x1f;
            }
            if ((uVar83 == 0) &&
               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar87 = *(float *)((longlong)local_210[1].SourceSkeleton.WeakPtr +
                               (longlong)(int)uVar51 * 4);
          }
          pFVar49 = local_228;
          lVar57 = (longlong)(int)local_238[0];
          uVar51 = uVar55;
          if ((int)local_238[0] < *(int *)&(local_228->Pose).field_0x8) {
            uVar51 = ~local_238[0] >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar61 = *(longlong *)&pFVar49->Pose;
          lVar59 = (longlong)(int)local_238[0];
          lVar57 = lVar57 * 0x60;
          dVar68 = (double)fVar65;
          dVar78 = (double)fVar65;
          pdVar60 = (double *)(lVar57 + 0x50 + lVar61);
          dVar30 = *pdVar60;
          pdVar3 = (double *)(lVar57 + 0x20 + lVar61);
          dVar33 = *pdVar3;
          pdVar4 = (double *)(lVar57 + 0x30 + lVar61);
          dVar69 = *pdVar4;
          dVar77 = *(double *)(lVar57 + lVar61);
          pdVar5 = (double *)(lVar57 + 0x10 + lVar61);
          dVar84 = *pdVar5;
          dVar67 = (double)fVar65;
          dVar19 = (double)fVar65;
          pdVar6 = (double *)(lVar57 + 0x40 + lVar61);
          dVar66 = *pdVar6;
          uVar83 = 0;
          dVar76 = pdVar6[1] * dVar78;
          uVar51 = uVar83;
          if ((int)local_238[0] < *(int *)&(param_1->Pose).field_0x8) {
            uVar51 = ~local_238[0] >> 0x1f;
          }
          dVar79 = pdVar60[1] * dVar19;
          dVar85 = pdVar3[1] * dVar78;
          dVar86 = pdVar4[1] * dVar19;
          dVar78 = ((double *)(lVar57 + lVar61))[1] * dVar78;
          dVar19 = pdVar5[1] * dVar19;
          if ((uVar51 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar57 = *(longlong *)&param_1->Pose;
          lVar59 = lVar59 * 0x60;
          auVar44._8_4_ = SUB84(dVar78,0);
          auVar44._0_8_ = dVar77 * dVar68;
          auVar44._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
          *(undefined1 (*) [16])(lVar59 + lVar57) = auVar44;
          auVar48._8_4_ = SUB84(dVar19,0);
          auVar48._0_8_ = dVar84 * dVar67;
          auVar48._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])(lVar59 + 0x10 + lVar57) = auVar48;
          auVar36._8_4_ = SUB84(dVar85,0);
          auVar36._0_8_ = dVar33 * dVar68;
          auVar36._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
          *(undefined1 (*) [16])(lVar59 + 0x20 + lVar57) = auVar36;
          auVar40._8_4_ = SUB84(dVar86,0);
          auVar40._0_8_ = dVar69 * dVar67;
          auVar40._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
          *(undefined1 (*) [16])(lVar59 + 0x30 + lVar57) = auVar40;
          auVar24._8_4_ = SUB84(dVar76,0);
          auVar24._0_8_ = dVar66 * dVar68;
          auVar24._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
          *(undefined1 (*) [16])(lVar59 + 0x40 + lVar57) = auVar24;
          auVar28._8_4_ = SUB84(dVar79,0);
          auVar28._0_8_ = dVar30 * dVar67;
          auVar28._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
          *(undefined1 (*) [16])(lVar59 + 0x50 + lVar57) = auVar28;
          lVar57 = (longlong)(int)local_238[0];
          uVar51 = uVar83;
          if ((int)local_238[0] < *(int *)&(param_1->Pose).field_0x8) {
            uVar51 = ~local_238[0] >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar61 = (longlong)(int)local_238[0];
          pdVar60 = (double *)(lVar57 * 0x60 + *(longlong *)&param_1->Pose);
          if ((int)local_238[0] < *(int *)&(local_230->Pose).field_0x8) {
            uVar83 = ~local_238[0] >> 0x1f;
          }
          if ((uVar83 == 0) &&
             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar50)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar56 = uVar56 + 1;
          lVar61 = lVar61 * 0x60;
          dVar76 = (double)fVar87;
          dVar78 = (double)fVar87;
          lVar57 = *(longlong *)&local_230->Pose;
          pdVar3 = (double *)(lVar61 + 0x10 + lVar57);
          dVar30 = (double)fVar87;
          dVar33 = (double)fVar87;
          dVar84 = *(double *)(lVar61 + lVar57) * dVar76;
          dVar66 = ((double *)(lVar61 + lVar57))[1] * dVar78;
          dVar67 = *pdVar3 * dVar30;
          dVar19 = pdVar3[1] * dVar33;
          dVar69 = pdVar60[2] * dVar67 + *pdVar60 * dVar84;
          dVar77 = pdVar60[3] * dVar19 + pdVar60[1] * dVar66;
          uVar63 = -(ulonglong)(0.0 <= dVar77 + dVar69);
          uVar58 = -(ulonglong)(0.0 <= dVar69 + dVar77);
          uVar83 = (uint)(uVar58 >> 0x20);
          uVar51 = (uint)(uVar63 >> 0x20);
          auVar72._0_8_ = (ulonglong)dVar84 & uVar63;
          auVar72._8_4_ = (undefined4)((ulonglong)dVar66 & uVar58);
          auVar72._12_4_ = (undefined4)(((ulonglong)dVar66 & uVar58) >> 0x20);
          auVar81._0_4_ = ~(uint)uVar63 & SUB84(0.0 - dVar84,0);
          auVar81._4_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar84) >> 0x20);
          auVar81._8_4_ = ~(uint)uVar58 & SUB84(0.0 - dVar66,0);
          auVar81._12_4_ = ~uVar83 & (uint)((ulonglong)(0.0 - dVar66) >> 0x20);
          *pdVar60 = SUB168(auVar81 | auVar72,0) + *pdVar60;
          pdVar60[1] = SUB168(auVar81 | auVar72,8) + pdVar60[1];
          auVar73._0_4_ = ~(uint)uVar63 & SUB84(0.0 - dVar67,0);
          auVar73._4_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar67) >> 0x20);
          auVar73._8_4_ = ~(uint)uVar58 & SUB84(0.0 - dVar19,0);
          auVar73._12_4_ = ~uVar83 & (uint)((ulonglong)(0.0 - dVar19) >> 0x20);
          auVar21._8_4_ = (int)((ulonglong)dVar19 & uVar58);
          auVar21._0_8_ = (ulonglong)dVar67 & uVar63;
          auVar21._12_4_ = (int)(((ulonglong)dVar19 & uVar58) >> 0x20);
          pdVar60[2] = SUB168(auVar73 | auVar21,0) + pdVar60[2];
          pdVar60[3] = SUB168(auVar73 | auVar21,8) + pdVar60[3];
          pdVar3 = (double *)(lVar61 + 0x20 + lVar57);
          pdVar4 = (double *)(lVar61 + 0x30 + lVar57);
          dVar19 = *pdVar4;
          dVar69 = pdVar4[1];
          dVar67 = pdVar3[1] * dVar78 + pdVar60[5];
          auVar15._8_4_ = SUB84(dVar67,0);
          auVar15._0_8_ = *pdVar3 * dVar76 + pdVar60[4];
          auVar15._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          *(undefined1 (*) [16])(pdVar60 + 4) = auVar15;
          pdVar60[6] = dVar19 * dVar30 + pdVar60[6];
          pdVar60[7] = dVar69 * dVar33 + pdVar60[7];
          pdVar3 = (double *)(lVar61 + 0x40 + lVar57);
          pdVar4 = (double *)(lVar61 + 0x50 + lVar57);
          dVar19 = *pdVar4;
          dVar69 = pdVar4[1];
          dVar67 = pdVar3[1] * dVar78 + pdVar60[9];
          auVar16._8_4_ = SUB84(dVar67,0);
          auVar16._0_8_ = *pdVar3 * dVar76 + pdVar60[8];
          auVar16._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          *(undefined1 (*) [16])(pdVar60 + 8) = auVar16;
          pdVar60[10] = dVar19 * dVar30 + pdVar60[10];
          pdVar60[0xb] = dVar69 * dVar33 + pdVar60[0xb];
          lVar57 = local_1f0;
        } while (uVar56 != uVar9);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0);
  }
LAB_1474cf6bf:
  pFVar49 = local_228;
  fVar88 = __real_3f800000;
  fVar87 = __real_3f800000 - param_2->Alpha;
  TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&param_1->Curve,
             (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&local_228->Curve);
  fVar8 = __real_322bcc77;
  fVar65 = (float)((uint)(fVar87 - fVar88) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (param_1->Curve).field_0x10 = (pFVar49->Curve).field_0x10;
  if (fVar8 < fVar65) {
    iVar10 = *(int *)&(param_1->Curve).field_0x8;
    lVar57 = *(longlong *)&param_1->Curve;
    lVar61 = (longlong)iVar10 * 0x10 + lVar57;
    while( true ) {
      if (*(int *)&(param_1->Curve).field_0x8 != iVar10) {
        `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_220);
      }
      if (lVar57 == lVar61) break;
      *(float *)(lVar57 + 8) = fVar87 * *(float *)(lVar57 + 8);
      lVar57 = lVar57 + 0x10;
    }
  }
  pFVar49 = local_230;
  if (__real_3727c5ac < param_2->Alpha) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&local_230->Curve,
               (<lambda_1>)param_2->Alpha);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)
              &(param_1->CustomAttributes).field_0x10,
             *(int *)&(param_1->CustomAttributes).field_0x18);
  *(undefined4 *)&(param_1->CustomAttributes).field_0x18 = 0;
  if (*(int *)&(param_1->CustomAttributes).field_0x1c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&(param_1->CustomAttributes).field_0x10,0,
               (int *)&(param_1->CustomAttributes).field_0x1c);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&param_1->CustomAttributes,
             *(int *)&(param_1->CustomAttributes).field_0x8);
  *(undefined4 *)&(param_1->CustomAttributes).field_0x8 = 0;
  if (*(int *)&(param_1->CustomAttributes).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&param_1->CustomAttributes,0,
               (int *)&(param_1->CustomAttributes).field_0xc);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               **)&(param_1->CustomAttributes).field_0x20,
             *(int *)&(param_1->CustomAttributes).field_0x28);
  puVar1 = &(param_1->CustomAttributes).field_0x2c;
  *(undefined4 *)&(param_1->CustomAttributes).field_0x28 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&(param_1->CustomAttributes).field_0x20,0,(int *)puVar1
              );
  }
  *(undefined4 *)&(param_1->CustomAttributes).field_0x38 = 0;
  if (*(int *)&(param_1->CustomAttributes).field_0x3c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&(param_1->CustomAttributes).field_0x30,0,
               (int *)&(param_1->CustomAttributes).field_0x3c);
  }
  local_1dc = param_2->Alpha;
  local_1c8 = local_1e8;
  local_1e0 = fVar88 - local_1dc;
  local_1b8 = &local_1e0;
  local_1e8[0] = 0;
  local_1e8[1] = 1;
  iStack_1c0 = 2;
  iStack_1b0 = 2;
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
            (&local_158,
             (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &local_228->CustomAttributes);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
            (local_118,
             (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &pFVar49->CustomAttributes);
  local_188._12_4_ = uStack_1bc;
  local_188.ArrayNum = iStack_1c0;
  local_1a8 = &local_158;
  local_178._12_4_ = uStack_1ac;
  local_178.ArrayNum = iStack_1b0;
  local_188.DataPtr = local_1c8;
  uStack_1a0 = 2;
  local_168._12_4_ = uStack_19c;
  local_168.ArrayNum = 2;
  local_178.DataPtr = local_1b8;
  local_168.DataPtr = (FStackAttributeContainer *)local_1a8;
  UE::Anim::Attributes::BlendAttributes(&local_168,&local_178,&local_188,&param_1->CustomAttributes)
  ;
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(local_118);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_158);
  return;
}

// FindValidTransition @ 1474d3b00

bool __thiscall
FAnimNode_StateMachine::FindValidTransition
          (FAnimNode_StateMachine *this,FAnimationUpdateContext *param_1,
          FBakedAnimationState *param_2,FAnimationPotentialTransition *param_3,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  TArray<int,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ForElementType<int> FVar11;
  FAnimNode_TransitionResult *pFVar12;
  longlong lVar13;
  FAnimationTransitionBetweenStates *pFVar14;
  FAnimNode_AssetPlayerRelevancyBase *pFVar15;
  longlong *plVar16;
  float *pfVar17;
  FBakedAnimationState *pFVar18;
  FExposedValueHandler *pFVar19;
  ForElementType<int> FVar20;
  ForElementType<int> FVar21;
  uint uVar22;
  FBakedStateExitTransition *pFVar23;
  FBakedAnimationStateMachine *pFVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_res8;
  uint local_108 [2];
  ForElementType<int> local_100;
  longlong local_f8;
  IAnimClassInterface *local_f0;
  FBakedAnimationState *local_e8;
  longlong local_e0;
  FReadAccessScope local_d8;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8 [4];
  
  pFVar24 = this->PRIVATE_MachineDescription;
  uVar22 = 0;
  if (0 < (pFVar24->States).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)uVar22 < (pFVar24->States).ArrayNum) {
        uVar8 = ~uVar22 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((FBakedAnimationState *)
          ((pFVar24->States).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x50) == param_2)
      goto LAB_1474d3b9e;
      pFVar24 = this->PRIVATE_MachineDescription;
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < (pFVar24->States).ArrayNum);
  }
  uVar22 = 0xffffffff;
LAB_1474d3b9e:
  FVar21 = (param_4->AllocatorInstance).SecondaryData;
  FVar11 = (ForElementType<int>)param_4;
  if (FVar21 != (ForElementType<int>)0x0) {
    FVar11 = FVar21;
  }
  FVar20 = (ForElementType<int>)((longlong)FVar11 + (longlong)param_4->ArrayNum * 4);
  for (; FVar11 != FVar20; FVar11 = (ForElementType<int>)((longlong)FVar11 + 4)) {
    if (*(uint *)FVar11 == uVar22) {
      return false;
    }
  }
  FVar11 = (ForElementType<int>)param_4;
  if (FVar21 != (ForElementType<int>)0x0) {
    FVar11 = FVar21;
  }
  local_108[0] = uVar22;
  if ((ulonglong)FVar11 <= local_108) {
    FVar11 = (ForElementType<int>)param_4;
    if (FVar21 != (ForElementType<int>)0x0) {
      FVar11 = FVar21;
    }
    if ((local_108 < (uint *)((longlong)FVar11 + (longlong)param_4->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar9 = param_4->ArrayNum;
  if (iVar9 == param_4->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar9 + 1;
  FVar21 = (param_4->AllocatorInstance).SecondaryData;
  FVar11 = (ForElementType<int>)param_4;
  if (FVar21 != (ForElementType<int>)0x0) {
    FVar11 = FVar21;
  }
  *(uint *)((longlong)FVar11 + (longlong)iVar9 * 4) = local_108[0];
  lVar13 = param_1->_padding_;
  if (lVar13 == 0) {
    local_f0 = (IAnimClassInterface *)0x0;
  }
  else {
    local_f0 = *(IAnimClassInterface **)(lVar13 + 0x148);
  }
  pFVar12 = GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                      (*(UObject **)(lVar13 + 0x140),local_f0,param_2->EntryRuleNodeIndex);
  if (pFVar12 != (FAnimNode_TransitionResult *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar12->NativeTransitionDelegate,&local_d8);
    if (((*(int *)&(pFVar12->NativeTransitionDelegate).field_0x10 == 0) ||
        (plVar16 = *(longlong **)&(pFVar12->NativeTransitionDelegate).field_0x8,
        plVar16 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar16 + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      pFVar19 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)pFVar12);
      FExposedValueHandler::Execute(pFVar19,(FAnimationBaseContext *)param_1);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      bVar5 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                        (&pFVar12->NativeTransitionDelegate);
      pFVar12->bCanEnterTransition = bVar5;
    }
    if (pFVar12->bCanEnterTransition == false) {
      return false;
    }
  }
  lVar13 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x140) + 0x180))();
  uVar22 = 0;
  dVar3 = *(double *)(lVar13 + 0x8f8);
  iVar9 = (param_2->Transitions).ArrayNum;
  local_e0 = (longlong)iVar9;
  if (0 < iVar9) {
    local_res8 = 0;
    local_f8 = 0;
    do {
      lVar13 = local_f8;
      uVar8 = 0;
      if ((int)uVar22 < (param_2->Transitions).ArrayNum) {
        uVar8 = ~uVar22 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar23 = (FBakedStateExitTransition *)
                ((param_2->Transitions).AllocatorInstance.Data + lVar13);
      if (pFVar23->CanTakeDelegateIndex != -1) {
        local_100 = (ForElementType<int>)&pFVar23->TransitionIndex;
        pFVar14 = GetTransitionInfo(this,pFVar23->TransitionIndex);
        uVar8 = pFVar14->NextState;
        local_e8 = GetStateInfo(this,uVar8);
        if (0.0 < pFVar14->MinTimeBeforeReentry || pFVar14->MinTimeBeforeReentry == 0.0) {
          uVar10 = 0;
          if ((int)uVar8 < (this->LastStateEntryTime).ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (dVar3 - *(double *)
                       ((this->LastStateEntryTime).AllocatorInstance.Data + (longlong)(int)uVar8 * 8
                       ) < (double)pFVar14->MinTimeBeforeReentry) goto LAB_1474d4100;
        }
        pFVar12 = GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                            (*(UObject **)(param_1->_padding_ + 0x140),local_f0,
                             pFVar23->CanTakeDelegateIndex);
        fVar27 = 0.0;
        if ((pFVar23->SyncGroupNameToRequireValidMarkersRule == (FName)0x0) ||
           (bVar5 = FAnimInstanceProxy::IsSyncGroupValid
                              ((FAnimInstanceProxy *)param_1->_padding_,
                               pFVar23->SyncGroupNameToRequireValidMarkersRule), bVar5)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pFVar12->NativeTransitionDelegate,&local_c0);
          if ((*(int *)&(pFVar12->NativeTransitionDelegate).field_0x10 == 0) ||
             ((plVar16 = *(longlong **)&(pFVar12->NativeTransitionDelegate).field_0x8,
              plVar16 == (longlong *)0x0 ||
              (cVar7 = (**(code **)(*plVar16 + 0x38))(), cVar7 == '\0')))) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_c0);
            if (pFVar23->bAutomaticRemainingTimeRule == false) {
              pFVar19 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)pFVar12);
              FExposedValueHandler::Execute(pFVar19,(FAnimationBaseContext *)param_1);
            }
            else {
              bVar5 = false;
              pFVar15 = GetRelevantAssetPlayerInterfaceFromState
                                  (this,(FAnimInstanceProxy *)param_1->_padding_,param_2);
              if ((pFVar15 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) &&
                 (plVar16 = (longlong *)(**(code **)(*(longlong *)pFVar15 + 0xa0))(),
                 plVar16 != (longlong *)0x0)) {
                pcVar4 = *(code **)(*(longlong *)pFVar15 + 0xa8);
                fVar25 = (float)(**(code **)(*plVar16 + 0x2c0))(plVar16);
                fVar27 = (float)(*pcVar4)(pFVar15);
                fVar25 = fVar25 - fVar27;
                cVar7 = (**(code **)(*(longlong *)pFVar15 + 0xd0))(pFVar15);
                if ((cVar7 != '\0') &&
                   ((((0.0 < fVar25 &&
                      (pfVar17 = (float *)(**(code **)(*(longlong *)pFVar15 + 0xf8))(pFVar15),
                      pfVar17 != (float *)0x0)) && (*(char *)(pfVar17 + 2) != '\0')) &&
                    (fVar27 = pfVar17[1],
                    fVar26 = (float)(**(code **)(*(longlong *)pFVar15 + 0xa8))(pFVar15),
                    (fVar26 - fVar27) * *pfVar17 < 0.0)))) {
                  fVar25 = 0.0;
                }
                pFVar18 = GetStateInfo(this,pFVar14->NextState);
                if (pFVar18->bIsAConduit == false) {
                  fVar26 = pFVar14->CrossfadeDuration;
                }
                else {
                  fVar26 = 0.0;
                }
                fVar27 = pFVar23->AutomaticRuleTriggerTime;
                if (pFVar23->AutomaticRuleTriggerTime < 0.0) {
                  fVar27 = fVar26;
                }
                fVar27 = fVar27 - fVar25;
                bVar5 = 0.0 <= fVar27;
              }
              pFVar12->bCanEnterTransition = bVar5;
            }
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_c0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pFVar12->NativeTransitionDelegate,local_a8);
            if (*(int *)&(pFVar12->NativeTransitionDelegate).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pFVar12->NativeTransitionDelegate).field_0x8;
            }
            bVar5 = (bool)(**(code **)(*plVar16 + 0x60))();
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(local_a8);
            pFVar12->bCanEnterTransition = bVar5;
          }
        }
        else {
          pFVar12->bCanEnterTransition = false;
        }
        lVar13 = local_f8;
        if (pFVar12->bCanEnterTransition == pFVar23->bDesiredTransitionReturnValue) {
          if (local_e8->bIsAConduit == false) {
            pTVar1 = &param_3->SourceTransitionIndices;
            param_3->TargetState = -1;
            param_3->CrossfadeTimeAdjustment = 0.0;
            piVar2 = &(param_3->SourceTransitionIndices).ArrayMax;
            param_3->TransitionRule = (FBakedStateExitTransition *)0x0;
            (param_3->SourceTransitionIndices).ArrayNum = 0;
            if (*piVar2 < 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
            }
            FVar11 = local_100;
            param_3->TransitionRule = pFVar23;
            param_3->CrossfadeTimeAdjustment = fVar27;
            param_3->TargetState = uVar8;
            FVar21 = (param_3->SourceTransitionIndices).AllocatorInstance.SecondaryData;
            FVar20 = FVar21;
            if (FVar21 == (ForElementType<int>)0x0) {
              FVar20 = (ForElementType<int>)pTVar1;
            }
            if ((ulonglong)FVar20 <= (ulonglong)local_100) {
              if (FVar21 == (ForElementType<int>)0x0) {
                FVar21 = (ForElementType<int>)pTVar1;
              }
              if (((ulonglong)local_100 < (ulonglong)((longlong)FVar21 + (longlong)*piVar2 * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            iVar9 = (param_3->SourceTransitionIndices).ArrayNum;
            if (iVar9 == *piVar2) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&pTVar1->AllocatorInstance,piVar2);
            }
            (param_3->SourceTransitionIndices).ArrayNum = iVar9 + 1;
            FVar21 = (param_3->SourceTransitionIndices).AllocatorInstance.SecondaryData;
            if (FVar21 == (ForElementType<int>)0x0) {
              FVar21 = (ForElementType<int>)pTVar1;
            }
            *(int *)((longlong)FVar21 + (longlong)iVar9 * 4) = *(int *)FVar11;
            return true;
          }
          bVar5 = FindValidTransition(this,param_1,local_e8,param_3,param_4);
          lVar13 = local_f8;
          if (bVar5) {
            FVar21 = (param_3->SourceTransitionIndices).AllocatorInstance.SecondaryData;
            pTVar1 = &param_3->SourceTransitionIndices;
            FVar11 = FVar21;
            if (FVar21 == (ForElementType<int>)0x0) {
              FVar11 = (ForElementType<int>)pTVar1;
            }
            FVar20 = (ForElementType<int>)&pFVar23->TransitionIndex;
            if ((ulonglong)FVar11 <= &pFVar23->TransitionIndex) {
              if (FVar21 == (ForElementType<int>)0x0) {
                FVar21 = (ForElementType<int>)pTVar1;
              }
              FVar20 = local_100;
              if (((ulonglong)local_100 <
                   (ulonglong)
                   ((longlong)FVar21 + (longlong)(param_3->SourceTransitionIndices).ArrayMax * 4))
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            iVar9 = (param_3->SourceTransitionIndices).ArrayNum;
            piVar2 = &(param_3->SourceTransitionIndices).ArrayMax;
            if (iVar9 == *piVar2) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&pTVar1->AllocatorInstance,piVar2);
            }
            (param_3->SourceTransitionIndices).ArrayNum = iVar9 + 1;
            FVar21 = (param_3->SourceTransitionIndices).AllocatorInstance.SecondaryData;
            if (FVar21 == (ForElementType<int>)0x0) {
              FVar21 = (ForElementType<int>)pTVar1;
            }
            *(int *)((longlong)FVar21 + (longlong)iVar9 * 4) = *(int *)FVar20;
            return true;
          }
        }
      }
LAB_1474d4100:
      local_res8 = local_res8 + 1;
      local_f8 = lVar13 + 0x30;
      uVar22 = uVar22 + 1;
    } while (local_res8 < local_e0);
  }
  return false;
}

// GetCurrentStateName @ 1474d8d50

FName __thiscall FAnimNode_StateMachine::GetCurrentStateName(FAnimNode_StateMachine *this)

{
  FBakedAnimationState *pFVar1;
  FName in_RDX;
  
  if ((-1 < this->CurrentState) &&
     (this->CurrentState < (this->PRIVATE_MachineDescription->States).ArrayNum)) {
    pFVar1 = GetStateInfo(this);
    *(FName *)in_RDX = pFVar1->StateName;
    return in_RDX;
  }
  *(FName *)in_RDX = (FName)0x0;
  return in_RDX;
}

// GetMachineDescription @ 1474da420

/* WARNING: Enum "Type": Some values do not have unique names */

FBakedAnimationStateMachine * __thiscall
FAnimNode_StateMachine::GetMachineDescription(FAnimNode_StateMachine *this)

{
  FBakedAnimationStateMachine *pFVar1;
  
  pFVar1 = this->PRIVATE_MachineDescription;
  if (pFVar1 == (FBakedAnimationStateMachine *)0x0) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
    pFVar1 = (FBakedAnimationStateMachine *)0x0;
  }
  return pFVar1;
}

// GetRelevantAnimTimeRemaining @ 1474dda00

float __thiscall
FAnimNode_StateMachine::GetRelevantAnimTimeRemaining
          (FAnimNode_StateMachine *this,FAnimInstanceProxy *param_1,int param_2)

{
  code *pcVar1;
  FBakedAnimationState *pFVar2;
  FAnimNode_AssetPlayerRelevancyBase *pFVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  pFVar2 = GetStateInfo(this,param_2);
  pFVar3 = GetRelevantAssetPlayerInterfaceFromState(this,param_1,pFVar2);
  if (pFVar3 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
    lVar4 = (**(code **)(*(longlong *)pFVar3 + 0xa0))(pFVar3);
    if (lVar4 != 0) {
      pcVar1 = *(code **)(*(longlong *)pFVar3 + 200);
      fVar5 = (float)(**(code **)(*(longlong *)pFVar3 + 0xb8))(pFVar3);
      fVar6 = (float)(*pcVar1)(pFVar3);
      return fVar5 - fVar6;
    }
  }
  return __real_7f7fffff;
}

// GetRelevantAnimTimeRemainingFraction @ 1474ddaa0

float __thiscall
FAnimNode_StateMachine::GetRelevantAnimTimeRemainingFraction
          (FAnimNode_StateMachine *this,FAnimInstanceProxy *param_1,int param_2)

{
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  pFVar1 = GetStateInfo(this,param_2);
  pFVar2 = GetRelevantAssetPlayerInterfaceFromState(this,param_1,pFVar1);
  if (pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
    lVar3 = (**(code **)(*(longlong *)pFVar2 + 0xa0))(pFVar2);
    if (lVar3 != 0) {
      fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 0xb8))(pFVar2);
      if (0.0 < fVar4) {
        fVar5 = (float)(**(code **)(*(longlong *)pFVar2 + 200))(pFVar2);
        return (fVar4 - fVar5) / fVar4;
      }
    }
  }
  return __real_3f800000;
}

// GetRelevantAssetPlayerInterfaceFromState @ 1474ddb50

FAnimNode_AssetPlayerRelevancyBase * __thiscall
FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState
          (FAnimNode_StateMachine *this,FAnimInstanceProxy *param_1,FBakedAnimationState *param_2)

{
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  UPackage *pUVar6;
  FAnimNode_Base *pFVar7;
  UClass *pUVar8;
  int iVar9;
  UAnimInstance *this_01;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FAnimNode_Base *pFVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pFVar10 = (param_2->PlayerNodeIndices).AllocatorInstance.Data;
  iVar3 = (param_2->PlayerNodeIndices).ArrayNum;
  pFVar12 = (FAnimNode_Base *)0x0;
  fVar14 = 0.0;
  pFVar1 = pFVar10 + (longlong)iVar3 * 4;
  while( true ) {
    if ((param_2->PlayerNodeIndices).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar10 == pFVar1) break;
    iVar9 = *(int *)pFVar10;
    if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
                           (UObject *)pUVar6,L"AnimNode_AssetPlayerRelevancyBase");
    }
    pFVar7 = FAnimInstanceProxy::GetNodeFromIndexUntyped
                       (param_1,iVar9,
                        Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.
                        OuterSingleton);
    if (((pFVar7 != (FAnimNode_Base *)0x0) &&
        (cVar4 = (**(code **)(pFVar7->_padding_ + 0xd8))(pFVar7), cVar4 == '\0')) &&
       (fVar13 = (float)(**(code **)(pFVar7->_padding_ + 0xe8))(pFVar7), fVar14 < fVar13)) {
      fVar14 = (float)(**(code **)(pFVar7->_padding_ + 0xe8))(pFVar7);
      pFVar12 = pFVar7;
    }
    pFVar10 = pFVar10 + 4;
  }
  pFVar10 = (param_2->LayerNodeIndices).AllocatorInstance.Data;
  iVar3 = (param_2->LayerNodeIndices).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar3 * 4;
  do {
    if ((param_2->LayerNodeIndices).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar10 == pFVar1) {
      return (FAnimNode_AssetPlayerRelevancyBase *)pFVar12;
    }
    iVar9 = *(int *)pFVar10;
    if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,(UObject *)pUVar6,
                           L"AnimNode_LinkedAnimGraph");
    }
    pFVar7 = FAnimInstanceProxy::GetNodeFromIndexUntyped
                       (param_1,iVar9,
                        Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton);
    if (pFVar7 != (FAnimNode_Base *)0x0) {
      this_00 = (FObjectPtr_u_0 *)(pFVar7 + 3);
      if ((pFVar7[3]._padding_ != 0) && ((*(uint *)(pFVar7[3]._padding_ + 8) >> 0x1e & 1) == 0)) {
        if (this_00->Handle == (UObject *)0x0) {
LAB_1474ddcdf:
          this_01 = (UAnimInstance *)0x0;
        }
        else {
          pUVar8 = Z_Construct_UClass_UAnimInstance_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
          if (!bVar5) goto LAB_1474ddcdf;
          this_01 = (UAnimInstance *)this_00->Handle;
        }
        if (this_01 != (UAnimInstance *)0x0) {
          iVar9 = *(int *)pFVar10;
          local_res20.ComparisonIndex.Value = 0;
          local_res20.Number = 0;
          if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar6 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer,
                                 (UObject *)pUVar6,L"AnimNode_LinkedAnimLayer");
          }
          pFVar7 = FAnimInstanceProxy::GetNodeFromIndexUntyped
                             (param_1,iVar9,
                              Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.
                              OuterSingleton);
          local_res20 = DefaultAnimGraphName;
          if (pFVar7 != (FAnimNode_Base *)0x0) {
            local_res20 = (FName)pFVar7[0xc]._padding_;
          }
          UAnimInstance::GetInstanceRelevantAssetPlayers(this_01,local_60,&local_res20);
          iVar9 = (int)local_60[0]._8_8_;
          pFVar2 = local_60[0].AllocatorInstance.Data + (longlong)iVar9 * 8;
          FVar11.Data = local_60[0].AllocatorInstance.Data;
          while( true ) {
            if ((int)local_60[0]._8_8_ != iVar9) {
              `TCheckedPointerIterator<FAnimNode_AssetPlayerRelevancyBase_const_*,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (FVar11.Data == pFVar2) break;
            pFVar7 = *(FAnimNode_Base **)FVar11.Data;
            cVar4 = (**(code **)(pFVar7->_padding_ + 0xd8))(pFVar7);
            if ((cVar4 == '\0') &&
               (fVar13 = (float)(**(code **)(pFVar7->_padding_ + 0xe8))(pFVar7), fVar14 < fVar13)) {
              fVar14 = (float)(**(code **)(pFVar7->_padding_ + 0xe8))(pFVar7);
              pFVar12 = pFVar7;
            }
            FVar11.Data = FVar11.Data + 8;
          }
          if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].AllocatorInstance.Data);
          }
        }
      }
    }
    pFVar10 = pFVar10 + 4;
  } while( true );
}

// GetStateIndex @ 1474dfb10

int __thiscall
FAnimNode_StateMachine::GetStateIndex(FAnimNode_StateMachine *this,FBakedAnimationState *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FBakedAnimationStateMachine *pFVar6;
  
  pFVar6 = this->PRIVATE_MachineDescription;
  uVar5 = 0;
  if (0 < (pFVar6->States).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (pFVar6->States).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((FBakedAnimationState *)
          ((pFVar6->States).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50) == param_1) {
        return uVar5;
      }
      pFVar6 = this->PRIVATE_MachineDescription;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (pFVar6->States).ArrayNum);
  }
  return -1;
}

// GetStateIndex @ 1474dfbd0

int __thiscall FAnimNode_StateMachine::GetStateIndex(FAnimNode_StateMachine *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FBakedAnimationStateMachine *pFVar6;
  uint uVar7;
  
  pFVar6 = this->PRIVATE_MachineDescription;
  uVar7 = 0;
  if (0 < (pFVar6->States).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (pFVar6->States).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((pFVar6->States).AllocatorInstance.Data + lVar5 + 0x30) == param_1) {
        return uVar7;
      }
      pFVar6 = this->PRIVATE_MachineDescription;
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x50;
    } while ((int)uVar7 < (pFVar6->States).ArrayNum);
  }
  return -1;
}

// GetStateInfo @ 1474dfde0

FBakedAnimationState * __thiscall FAnimNode_StateMachine::GetStateInfo(FAnimNode_StateMachine *this)

{
  uint uVar1;
  FBakedAnimationStateMachine *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBakedAnimationState *pFVar6;
  
  uVar1 = this->CurrentState;
  pFVar2 = this->PRIVATE_MachineDescription;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->States).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBakedAnimationState *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FBakedAnimationState *)
         ((pFVar2->States).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x50);
}

// GetStateInfo @ 1474dfe60

FBakedAnimationState * __thiscall
FAnimNode_StateMachine::GetStateInfo(FAnimNode_StateMachine *this,int param_1)

{
  FBakedAnimationStateMachine *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBakedAnimationState *pFVar5;
  
  pFVar1 = this->PRIVATE_MachineDescription;
  uVar4 = 0;
  if (param_1 < (pFVar1->States).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBakedAnimationState *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FBakedAnimationState *)
         ((pFVar1->States).AllocatorInstance.Data + (longlong)param_1 * 0x50);
}

// GetStateWeight @ 1474dfee0

float __thiscall FAnimNode_StateMachine::GetStateWeight(FAnimNode_StateMachine *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = __real_3f800000;
  iVar1 = (this->ActiveTransitionArray).ArrayNum;
  lVar6 = (longlong)iVar1;
  if (iVar1 < 1) {
    if (param_1 != this->CurrentState) {
      return 0.0;
    }
    return __real_3f800000;
  }
  uVar8 = 0;
  fVar11 = 0.0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ActiveTransitionArray).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar9 = (float)(*pcVar3)();
        return fVar9;
      }
      pFVar2 = (this->ActiveTransitionArray).AllocatorInstance.Data;
      fVar10 = fVar9 - *(float *)(pFVar2 + lVar7 + 4);
      if ((int)uVar8 < 1) {
        if (*(int *)(pFVar2 + lVar7 + 0x34) == param_1) {
          fVar11 = fVar11 + fVar10;
        }
      }
      else {
        fVar11 = fVar11 * fVar10;
      }
      if (*(int *)(pFVar2 + lVar7 + 0x30) == param_1) {
        fVar11 = fVar11 + *(float *)(pFVar2 + lVar7 + 4);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 200;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (fVar9 <= fVar11) {
    fVar11 = fVar9;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  return fVar11;
}

// GetTransitionInfo @ 1474e03a0

FAnimationTransitionBetweenStates * __thiscall
FAnimNode_StateMachine::GetTransitionInfo(FAnimNode_StateMachine *this,int param_1)

{
  FBakedAnimationStateMachine *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimationTransitionBetweenStates *pFVar5;
  
  pFVar1 = this->PRIVATE_MachineDescription;
  uVar4 = 0;
  if (param_1 < (pFVar1->Transitions).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimationTransitionBetweenStates *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FAnimationTransitionBetweenStates *)
         ((pFVar1->Transitions).AllocatorInstance.Data + (longlong)param_1 * 0x38);
}

// IsAConduitState @ 1474e9b70

bool __thiscall FAnimNode_StateMachine::IsAConduitState(FAnimNode_StateMachine *this,int param_1)

{
  FBakedAnimationState *pFVar1;
  
  if (((this->PRIVATE_MachineDescription != (FBakedAnimationStateMachine *)0x0) && (-1 < param_1))
     && (param_1 < (this->PRIVATE_MachineDescription->States).ArrayNum)) {
    pFVar1 = GetStateInfo(this,param_1);
    return pFVar1->bIsAConduit;
  }
  return false;
}

// IsTransitionActive @ 1474e9fb0

bool __thiscall FAnimNode_StateMachine::IsTransitionActive(FAnimNode_StateMachine *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->ActiveTransitionArray).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ActiveTransitionArray).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->ActiveTransitionArray).AllocatorInstance.Data;
      pFVar6 = pFVar1 + lVar8 + 0x68;
      if (*(FScriptContainerElement **)(pFVar1 + lVar8 + 0x78) != (FScriptContainerElement *)0x0) {
        pFVar6 = *(FScriptContainerElement **)(pFVar1 + lVar8 + 0x78);
      }
      pFVar1 = pFVar6 + (longlong)*(int *)(pFVar1 + lVar8 + 0x80) * 4;
      for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
        if (*(int *)pFVar6 == param_1) {
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 200;
    } while ((int)uVar7 < (this->ActiveTransitionArray).ArrayNum);
  }
  return false;
}

// IsValidTransitionIndex @ 1474ea7e0

bool __thiscall
FAnimNode_StateMachine::IsValidTransitionIndex(FAnimNode_StateMachine *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->PRIVATE_MachineDescription->Transitions).ArrayNum)) {
    return true;
  }
  return false;
}

// QueryAndMarkTransitionEvent @ 1474f2480

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnimNode_StateMachine::QueryAndMarkTransitionEvent
          (FAnimNode_StateMachine *this,int param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FBakedAnimationStateMachine *this_00;
  FScriptContainerElement *pFVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<int> FVar12;
  int local_res10 [2];
  FNameEntryId local_58;
  uint uStack_54;
  FString local_48;
  FString local_38;
  
  pFVar11 = (this->QueuedTransitionEvents).AllocatorInstance.Data;
  local_58 = (*param_2).ComparisonIndex;
  uStack_54 = (*param_2).Number;
  pFVar9 = pFVar11;
  do {
    if (pFVar9 == pFVar11 + (longlong)(this->QueuedTransitionEvents).ArrayNum * 0x50) {
      return false;
    }
    if ((*(uint *)(pFVar9 + 0x40) == local_58.Value) && (*(uint *)(pFVar9 + 0x44) == uStack_54)) {
      pFVar8 = pFVar9;
      if (*(FScriptContainerElement **)(pFVar9 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar8 = *(FScriptContainerElement **)(pFVar9 + 0x20);
      }
      pFVar1 = pFVar8 + (longlong)*(int *)(pFVar9 + 0x28) * 4;
      while( true ) {
        if (pFVar8 == pFVar1) {
          uVar3 = (uint)(((longlong)pFVar9 - (longlong)pFVar11) / 0x50);
          if (uVar3 == 0xffffffff) {
            return false;
          }
          local_res10[0] = param_1;
          if (5 < (byte)LogAnimTransitionRequests._0_1_) {
            this_00 = this->PRIVATE_MachineDescription;
            if ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) &&
               (this_00 = (FBakedAnimationStateMachine *)0x0, 2 < (byte)LogAnimation._0_1_)) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            }
            ::FName::ToString(&this_00->MachineName,&local_38);
            ::FName::ToString(param_2,&local_48);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          uVar6 = 0;
          if ((int)uVar3 < (this->QueuedTransitionEvents).ArrayNum) {
            uVar6 = ~uVar3 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar9 = (this->QueuedTransitionEvents).AllocatorInstance.Data +
                   (longlong)(int)uVar3 * 0x50;
          pFVar11 = *(FScriptContainerElement **)(pFVar9 + 0x20);
          if (*(FScriptContainerElement **)(pFVar9 + 0x20) == (FScriptContainerElement *)0x0) {
            pFVar11 = pFVar9;
          }
          pFVar9 = pFVar11 + (longlong)*(int *)(pFVar9 + 0x28) * 4;
          goto joined_r0x0001474f26b1;
        }
        if (*(int *)pFVar8 == param_1) break;
        pFVar8 = pFVar8 + 4;
      }
    }
    pFVar9 = pFVar9 + 0x50;
  } while( true );
joined_r0x0001474f26b1:
  if (pFVar11 == pFVar9) {
LAB_1474f26ef:
    uVar6 = 0;
    if ((int)uVar3 < (this->QueuedTransitionEvents).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FVar12 = (ForElementType<int>)
             ((longlong)(this->QueuedTransitionEvents).AllocatorInstance.Data +
             (longlong)(int)uVar3 * 0x50);
    FVar10 = *(ForElementType<int> *)((longlong)FVar12 + 0x20);
    if (*(ForElementType<int> *)((longlong)FVar12 + 0x20) == (ForElementType<int>)0x0) {
      FVar10 = FVar12;
    }
    if ((((ulonglong)FVar10 <= local_res10) &&
        (local_res10 < (int *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar12 + 0x2c) * 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar7 = *(int *)((longlong)FVar12 + 0x28);
    if (iVar7 == *(int *)((longlong)FVar12 + 0x2c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)FVar12,(int *)((longlong)FVar12 + 0x2c));
    }
    *(int *)((longlong)FVar12 + 0x28) = iVar7 + 1;
    FVar10 = *(ForElementType<int> *)((longlong)FVar12 + 0x20);
    if (*(ForElementType<int> *)((longlong)FVar12 + 0x20) == (ForElementType<int>)0x0) {
      FVar10 = FVar12;
    }
    *(int *)((longlong)FVar10 + (longlong)iVar7 * 4) = local_res10[0];
    return true;
  }
  if (*(int *)pFVar11 == local_res10[0]) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7844275454201562641>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                       ,0x611,
                       "!QueuedTransitionEvents[EventIndex].ConsumedTransitions.Contains(TransitionIndex)"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    goto LAB_1474f26ef;
  }
  pFVar11 = pFVar11 + 4;
  goto joined_r0x0001474f26b1;
}

// QueryTransitionEvent @ 1474f2820

bool __thiscall
FAnimNode_StateMachine::QueryTransitionEvent
          (FAnimNode_StateMachine *this,int param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uStack_14;
  
  pFVar3 = (this->QueuedTransitionEvents).AllocatorInstance.Data;
  uStack_14 = (*param_2).Number;
  pFVar4 = pFVar3 + (longlong)(this->QueuedTransitionEvents).ArrayNum * 0x50;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 0x50) {
    if ((*(uint *)(pFVar3 + 0x40) == (*param_2).ComparisonIndex.Value) &&
       (*(uint *)(pFVar3 + 0x44) == uStack_14)) {
      pFVar2 = pFVar3;
      if (*(FScriptContainerElement **)(pFVar3 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar2 = *(FScriptContainerElement **)(pFVar3 + 0x20);
      }
      pFVar1 = pFVar2 + (longlong)*(int *)(pFVar3 + 0x28) * 4;
      if (pFVar2 == pFVar1) goto LAB_1474f28a6;
      while (*(int *)pFVar2 != param_1) {
        pFVar2 = pFVar2 + 4;
        if (pFVar2 == pFVar1) {
          return pFVar3 != (FScriptContainerElement *)0x0;
        }
      }
    }
  }
  pFVar3 = (FScriptContainerElement *)0x0;
LAB_1474f28a6:
  return pFVar3 != (FScriptContainerElement *)0x0;
}

// RequestTransitionEvent @ 1474f5650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnimNode_StateMachine::RequestTransitionEvent
          (FAnimNode_StateMachine *this,FTransitionEvent *param_1)

{
  int *piVar1;
  TArray<FTransitionEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  ETransitionRequestOverwriteMode EVar3;
  void *pvVar4;
  FTransitionEvent *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FBakedAnimationStateMachine *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<int> FVar14;
  uint uVar15;
  ForElementType<int> _Src;
  ForElementType<int> FVar16;
  FScriptContainerElement *pFVar17;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FTransitionEvent local_78;
  
  if ((param_1->TimeToLive <= 0.0) || (this->MaxTransitionsRequests < 1)) {
LAB_1474f5837:
    bVar8 = false;
  }
  else {
    pTVar2 = &this->QueuedTransitionEvents;
    FTransitionEvent::FTransitionEvent(&local_78,param_1);
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    for (pFVar13 = pFVar17;
        pFVar13 != pFVar17 + (longlong)(this->QueuedTransitionEvents).ArrayNum * 0x50;
        pFVar13 = pFVar13 + 0x50) {
      if ((*(uint *)(pFVar13 + 0x40) == local_78.EventName.ComparisonIndex.Value) &&
         (*(uint *)(pFVar13 + 0x44) == local_78.EventName.Number)) {
        uVar7 = (uint)(((longlong)pFVar13 - (longlong)pFVar17) / 0x50);
        if (local_78.ConsumedTransitions.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0
           ) {
          FMemory::Free((void *)local_78.ConsumedTransitions.AllocatorInstance.SecondaryData);
        }
        if ((uVar7 == 0xffffffff) || (EVar3 = param_1->OverwriteMode, EVar3 == Append))
        goto LAB_1474f56e6;
        if (EVar3 == Ignore) {
          if (5 < (byte)LogAnimTransitionRequests._0_1_) {
            pFVar11 = this->PRIVATE_MachineDescription;
            if (pFVar11 == (FBakedAnimationStateMachine *)0x0) {
              if (2 < (byte)LogAnimation._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              }
              pFVar11 = (FBakedAnimationStateMachine *)0x0;
            }
            ::FName::ToString(&pFVar11->MachineName,&local_e8);
            ::FName::ToString(&param_1->EventName,&local_f8);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (EVar3 == Overwrite) {
            if (5 < (byte)LogAnimTransitionRequests._0_1_) {
              pFVar11 = GetMachineDescription(this);
              ::FName::ToString(&pFVar11->MachineName,&local_c8);
              ::FName::ToString(&param_1->EventName,&local_d8);
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
            }
            uVar15 = 0;
            if ((int)uVar7 < (this->QueuedTransitionEvents).ArrayNum) {
              uVar15 = ~uVar7 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            FVar16 = (ForElementType<int>)
                     ((longlong)(int)uVar7 * 0x50 + (longlong)(pTVar2->AllocatorInstance).Data);
            if (FVar16 != (ForElementType<int>)param_1) {
              FVar14 = (param_1->ConsumedTransitions).AllocatorInstance.SecondaryData;
              piVar1 = (int *)((longlong)FVar16 + 0x2c);
              iVar10 = (param_1->ConsumedTransitions).ArrayNum;
              _Src = (ForElementType<int>)param_1;
              if (FVar14 != (ForElementType<int>)0x0) {
                _Src = FVar14;
              }
              *(int *)((longlong)FVar16 + 0x28) = iVar10;
              if ((iVar10 == 0) && (*piVar1 == 0)) {
                *piVar1 = 8;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (4,4,iVar10,*piVar1,(ForElementType<int> *)FVar16,iVar10,piVar1);
                if (iVar10 != 0) {
                  FVar14 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
                  if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0)
                  {
                    FVar14 = FVar16;
                  }
                  memcpy((void *)FVar14,(void *)_Src,(longlong)iVar10 << 2);
                }
              }
            }
            *(double *)((longlong)FVar16 + 0x30) = param_1->CreationTime;
            *(double *)((longlong)FVar16 + 0x38) = param_1->TimeToLive;
            *(FName *)((longlong)FVar16 + 0x40) = param_1->EventName;
            *(ETransitionRequestQueueMode *)((longlong)FVar16 + 0x48) = param_1->QueueMode;
            *(ETransitionRequestOverwriteMode *)((longlong)FVar16 + 0x49) = param_1->OverwriteMode;
            return true;
          }
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7844275454201562594>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                             ,0x5e2,"false");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        goto LAB_1474f5837;
      }
    }
    if (local_78.ConsumedTransitions.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_78.ConsumedTransitions.AllocatorInstance.SecondaryData);
    }
LAB_1474f56e6:
    if (5 < (byte)LogAnimTransitionRequests._0_1_) {
      pFVar11 = this->PRIVATE_MachineDescription;
      if ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) &&
         (pFVar11 = (FBakedAnimationStateMachine *)0x0, 2 < (byte)LogAnimation._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
      ::FName::ToString(&pFVar11->MachineName,&local_a8);
      ::FName::ToString(&param_1->EventName,&local_b8);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if ((this->MaxTransitionsRequests < (this->QueuedTransitionEvents).ArrayNum) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7844275454201562571>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                           ,0x5cb,"QueuedTransitionEvents.Num() <= MaxTransitionsRequests"), bVar8))
    {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if ((this->QueuedTransitionEvents).ArrayNum == this->MaxTransitionsRequests) {
      if (2 < (byte)LogAnimTransitionRequests._0_1_) {
        pFVar11 = GetMachineDescription(this);
        ::FName::ToString(&pFVar11->MachineName,&local_88);
        ::FName::ToString(&param_1->EventName,&local_98);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimTransitionRequests);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (((this->QueuedTransitionEvents).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar12 = (longlong)(this->QueuedTransitionEvents).ArrayNum;
      pFVar17 = (pTVar2->AllocatorInstance).Data;
      pvVar4 = *(void **)(pFVar17 + lVar12 * 0x50 + -0x30);
      *(undefined8 *)(pFVar17 + lVar12 * 0x50 + -0x30) = 0;
      *(undefined4 *)(pFVar17 + lVar12 * 0x50 + -0x28) = 0;
      *(undefined4 *)(pFVar17 + lVar12 * 0x50 + -0x24) = 8;
      iVar10 = (this->QueuedTransitionEvents).ArrayNum;
      pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x50;
      if (*(void **)(pFVar17 + -0x30) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar17 + -0x30));
      }
      iVar10 = (this->QueuedTransitionEvents).ArrayNum - iVar10;
      if (iVar10 != 0) {
        memmove(pFVar17 + -0x50,pFVar17,(longlong)iVar10 * 0x50);
      }
      piVar1 = &(this->QueuedTransitionEvents).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
    }
    pFVar5 = (FTransitionEvent *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->QueuedTransitionEvents).ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    iVar10 = (this->QueuedTransitionEvents).ArrayNum;
    piVar1 = &(this->QueuedTransitionEvents).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    (this->QueuedTransitionEvents).ArrayNum = iVar10 + 1;
    memmove(pFVar17 + 0x50,pFVar17,(longlong)iVar10 * 0x50);
    FTransitionEvent::FTransitionEvent((FTransitionEvent *)(pTVar2->AllocatorInstance).Data,param_1)
    ;
    bVar8 = true;
  }
  return bVar8;
}

// SetState @ 1474f8f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::SetState
          (FAnimNode_StateMachine *this,FAnimationBaseContext *param_1,int param_2,bool param_3)

{
  FObjectPtr_u_0 *this_00;
  undefined8 uVar1;
  int iVar2;
  FBakedAnimationStateMachine *pFVar3;
  FAnimInstanceProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_Stat_StateMachineSetState> FVar13;
  UPackage *pUVar14;
  FNodeDataId *pFVar15;
  FAnimNodeFunctionRef *pFVar16;
  FBakedAnimationState *pFVar17;
  FAnimNode_Base *pFVar18;
  UClass *pUVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  FName FVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  UAnimInstance *this_01;
  ForAnyElementType FVar26;
  uint uVar27;
  int *piVar28;
  FNameEntryId FVar29;
  float fVar30;
  uint uVar31;
  FScriptContainerElement local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  char local_133;
  FName local_130;
  FName local_128;
  FColor_u_0 local_120;
  uint local_11c;
  int local_118;
  FName local_110;
  FName local_108;
  TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> local_f8;
  int *local_e8;
  FNodeDataId local_d8;
  FNodeDataId local_c8;
  FAnimInstanceProxy *local_b8;
  FAnimationUpdateSharedContext *local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  FName local_98 [2];
  FAnimationBaseContext local_88;
  FNodeDataId local_68;
  FNodeDataId local_5c [3];
  
  uVar31 = 0;
  FVar13 = StatPtr_Stat_StateMachineSetState;
  if (StatPtr_Stat_StateMachineSetState ==
      (FThreadSafeStaticStat<FStat_Stat_StateMachineSetState>)0x0) {
    pFVar12 = ::FName::FName(local_98,"Stat_StateMachineSetState");
    FVar13 = (FThreadSafeStaticStat<FStat_Stat_StateMachineSetState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_StateMachineSetState,*pFVar12,
                        L"StateMachine SetState","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar13;
  bVar10 = false;
  bVar11 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar7 = false;
      bVar8 = false;
    }
    else {
      local_120.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar10 = false;
      bVar11 = true;
      if (CpuChannel->Enabled < 0) {
        bVar7 = false;
        bVar8 = true;
      }
      else {
        local_110.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_110.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                   ,0x4a9);
        bVar7 = true;
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar10 = true;
      goto LAB_1474f90f7;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  local_130 = local_108;
  FVar23 = local_108;
LAB_1474f90f7:
  local_118 = this->CurrentState;
  lVar24 = (longlong)local_118;
  if ((param_2 != local_118) || (param_3)) {
    if ((local_118 != -1) && (local_118 < (this->OnGraphStatesExited).ArrayNum)) {
      if ((local_118 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
      ExecuteIfBound((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
                      *)((this->OnGraphStatesExited).AllocatorInstance.Data + lVar24 * 0x18),this,
                     this->CurrentState,param_2);
    }
    uVar20 = this->CurrentState;
    if ((-1 < (int)uVar20) && ((int)uVar20 < (this->StatePoseLinks).ArrayNum)) {
      uVar27 = uVar31;
      if ((int)uVar20 < (this->StatePoseLinks).ArrayNum) {
        uVar27 = ~uVar20 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((this->StatePoseLinks).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10 + 8)
          != -1) {
        uVar20 = this->CurrentState;
        uVar27 = 0;
        if ((int)uVar20 < (this->StatePoseLinks).ArrayNum) {
          uVar27 = ~uVar20 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar18 = *(FAnimNode_Base **)
                   ((this->StatePoseLinks).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10);
        if (CachedId_StateExitFunction.Index == -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            ::FName::FName(&AnimName_StateExitFunction,"StateExitFunction");
            _Init_thread_footer(&::_TSS1);
          }
          if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar14 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar14,
                                 L"AnimNode_StateResult");
          }
          pFVar15 = UE::Anim::FNodeDataId::FNodeDataId
                              (&local_68,AnimName_StateExitFunction,pFVar18,
                               Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.
                               OuterSingleton);
          CachedId_StateExitFunction.Id = pFVar15->Id;
          FVar29 = CachedId_StateExitFunction.Id.ComparisonIndex.Value;
          uVar20 = CachedId_StateExitFunction.Id.Number;
          CachedId_StateExitFunction.Index = pFVar15->Index;
        }
        else {
          FVar29 = CachedId_StateExitFunction.Id.ComparisonIndex.Value;
          uVar20 = CachedId_StateExitFunction.Id.Number;
        }
        iVar21 = CachedId_StateExitFunction.Index;
        if ((pFVar18->NodeData == (FAnimNodeData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NodeData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                                ,0x3e1,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_d8.Id.Number = uVar20;
        local_d8.Id.ComparisonIndex.Value = FVar29.Value;
        local_d8.Index = iVar21;
        pFVar16 = FAnimNodeData::GetData(pFVar18->NodeData,&local_d8,pFVar18,(UObject *)0x0);
        UE::Anim::CallFunctionHelper<FAnimExecutionContext,FAnimationBaseContext>
                  (pFVar16,param_1,(FAnimNode_Base *)this);
      }
    }
    pFVar3 = this->PRIVATE_MachineDescription;
    local_137 = (FScriptContainerElement)0x0;
    if ((-1 < param_2) && (param_2 < (pFVar3->States).ArrayNum)) {
      uVar20 = 0;
      if (param_2 < (pFVar3->States).ArrayNum) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_137 = (pFVar3->States).AllocatorInstance.Data[(longlong)param_2 * 0x50 + 0x4c];
    }
    fVar30 = GetStateWeight(this,param_2);
    local_133 = 0.0 < fVar30;
    if (((((this->PRIVATE_MachineDescription != (FBakedAnimationStateMachine *)0x0) &&
          (-1 < param_2)) && (param_2 < (this->PRIVATE_MachineDescription->States).ArrayNum)) &&
        ((pFVar17 = GetStateInfo(this,param_2), pFVar17->bIsAConduit != false &&
         (this->bAllowConduitEntryStates == false)))) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7844275454201562273>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                            ,0x4a1,"!IsAConduitState(NewStateIndex) || bAllowConduitEntryStates"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar20 = (this->PRIVATE_MachineDescription->States).ArrayNum - 1;
    if (param_2 < (int)uVar20) {
      uVar20 = param_2;
    }
    uVar27 = uVar31;
    if (0 < (int)uVar20) {
      uVar27 = uVar20;
    }
    this->CurrentState = uVar27;
    if ((uVar27 != param_2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentState == NewStateIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                            ,0x4a3,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this->ElapsedTime = 0.0;
    lVar24 = (**(code **)(*(longlong *)param_1->AnimInstanceProxy->AnimInstanceObject + 0x180))();
    uVar20 = this->CurrentState;
    uVar1 = *(undefined8 *)(lVar24 + 0x8f8);
    if ((int)uVar20 < (this->LastStateEntryTime).ArrayNum) {
      uVar31 = ~uVar20 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined8 *)((this->LastStateEntryTime).AllocatorInstance.Data + (longlong)(int)uVar20 * 8) =
         uVar1;
    pFVar17 = GetStateInfo(this,this->CurrentState);
    pFVar25 = (pFVar17->PlayerNodeIndices).AllocatorInstance.Data;
    iVar21 = (pFVar17->PlayerNodeIndices).ArrayNum;
    pFVar5 = pFVar25 + (longlong)iVar21 * 4;
    while( true ) {
      if ((pFVar17->PlayerNodeIndices).ArrayNum != iVar21) {
        local_136 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_136);
      }
      if (pFVar25 == pFVar5) break;
      iVar2 = *(int *)pFVar25;
      pFVar4 = param_1->AnimInstanceProxy;
      if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar14 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
                             (UObject *)pUVar14,L"AnimNode_AssetPlayerRelevancyBase");
      }
      pFVar18 = FAnimInstanceProxy::GetNodeFromIndexUntyped
                          (pFVar4,iVar2,
                           Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.
                           OuterSingleton);
      if (pFVar18 != (FAnimNode_Base *)0x0) {
        (**(code **)(pFVar18->_padding_ + 0xf0))(pFVar18);
      }
      pFVar25 = pFVar25 + 4;
    }
    uVar27 = 0;
    uVar31 = this->CurrentState;
    lVar24 = (longlong)(int)uVar31;
    pFVar3 = this->PRIVATE_MachineDescription;
    uVar20 = uVar27;
    if ((int)uVar31 < (pFVar3->States).ArrayNum) {
      uVar20 = ~uVar31 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pFVar3->States).AllocatorInstance.Data;
    local_11c = *(uint *)(pFVar5 + lVar24 * 0x50 + 0x18);
    uVar22 = (ulonglong)(int)local_11c;
    piVar28 = *(int **)(pFVar5 + lVar24 * 0x50 + 0x10);
    local_e8 = piVar28 + uVar22;
    while( true ) {
      piVar9 = local_e8;
      if (*(int *)(pFVar5 + lVar24 * 0x50 + 0x18) != (int)uVar22) {
        local_135 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_135);
      }
      FVar23 = local_130;
      if (piVar28 == piVar9) break;
      iVar21 = *piVar28;
      pFVar4 = param_1->AnimInstanceProxy;
      if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar14 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,(UObject *)pUVar14,
                             L"AnimNode_LinkedAnimGraph");
      }
      pFVar18 = FAnimInstanceProxy::GetNodeFromIndexUntyped
                          (pFVar4,iVar21,
                           Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.
                           OuterSingleton);
      if (pFVar18 != (FAnimNode_Base *)0x0) {
        this_00 = (FObjectPtr_u_0 *)(pFVar18 + 3);
        if ((pFVar18[3]._padding_ != 0) && ((*(uint *)(pFVar18[3]._padding_ + 8) >> 0x1e & 1) == 0))
        {
          this_01 = (UAnimInstance *)0x0;
          if (this_00->Handle != (UObject *)0x0) {
            pUVar19 = Z_Construct_UClass_UAnimInstance_NoRegister();
            bVar11 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar19);
            if (bVar11) {
              this_01 = (UAnimInstance *)this_00->Handle;
            }
          }
          if (this_01 != (UAnimInstance *)0x0) {
            pFVar4 = param_1->AnimInstanceProxy;
            iVar21 = *piVar28;
            local_128.ComparisonIndex.Value = 0;
            local_128.Number = 0;
            if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar14 = Z_Construct_UPackage__Script_Engine();
              Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer,
                                   (UObject *)pUVar14,L"AnimNode_LinkedAnimLayer");
            }
            pFVar18 = FAnimInstanceProxy::GetNodeFromIndexUntyped
                                (pFVar4,iVar21,
                                 Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.
                                 OuterSingleton);
            local_128 = DefaultAnimGraphName;
            if (pFVar18 != (FAnimNode_Base *)0x0) {
              local_128 = (FName)pFVar18[0xc]._padding_;
            }
            UAnimInstance::GetMutableInstanceRelevantAssetPlayers(this_01,&local_f8,&local_128);
            iVar21 = local_f8.ArrayNum;
            pFVar25 = local_f8.AllocatorInstance.Data + (longlong)iVar21 * 8;
            FVar26.Data = local_f8.AllocatorInstance.Data;
            while( true ) {
              if (local_f8.ArrayNum != iVar21) {
                local_134 = 0;
                `TCheckedPointerIterator<FAnimNode_AssetPlayerRelevancyBase_*,int,0>::operator!='::
                __l2::<lambda_1>::operator()(&local_134);
              }
              if (FVar26.Data == pFVar25) break;
              (**(code **)(**(longlong **)FVar26.Data + 0xf0))();
              FVar26.Data = FVar26.Data + 8;
            }
            if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.AllocatorInstance.Data);
            }
          }
        }
      }
      uVar22 = (ulonglong)local_11c;
      piVar28 = piVar28 + 1;
    }
    if (((local_133 == '\0') || (local_137 != (FScriptContainerElement)0x0)) &&
       ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0 ||
        (((param_2 < 0 || ((this->PRIVATE_MachineDescription->States).ArrayNum <= param_2)) ||
         (pFVar17 = GetStateInfo(this,param_2), pFVar17->bIsAConduit == false)))))) {
      local_a8 = 1;
      local_b8 = param_1->AnimInstanceProxy;
      local_b0 = param_1->SharedContext;
      uVar31 = uVar27;
      if (param_2 < (this->StatePoseLinks).ArrayNum) {
        uVar31 = (uint)~param_2 >> 0x1f;
      }
      local_a4 = 0xffffffffffffffff;
      if ((uVar31 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FPoseLinkBase::Initialize
                ((FPoseLinkBase *)
                 ((this->StatePoseLinks).AllocatorInstance.Data + (longlong)param_2 * 0x10),
                 (FAnimationInitializeContext *)&local_b8);
      if (((param_1->AnimInstanceProxy->CachedBonesCounter).Counter != -1) &&
         ((param_1->AnimInstanceProxy->CachedBonesCounter).LastSyncronizedFrame !=
          0xffffffffffffffff)) {
        local_88.AnimInstanceProxy = param_1->AnimInstanceProxy;
        local_88.SharedContext = param_1->SharedContext;
        local_88.bIsActive = param_1->bIsActive;
        local_88._17_3_ = *(undefined3 *)&param_1->field_0x11;
        local_88.CurrentNodeId = param_1->CurrentNodeId;
        local_88.PreviousNodeId = param_1->PreviousNodeId;
        local_88._28_4_ = *(undefined4 *)&param_1->field_0x1c;
        ConditionallyCacheBonesForState(this,param_2,&local_88);
      }
    }
    uVar31 = this->CurrentState;
    if ((-1 < (int)uVar31) && ((int)uVar31 < (this->StatePoseLinks).ArrayNum)) {
      uVar20 = uVar27;
      if ((int)uVar31 < (this->StatePoseLinks).ArrayNum) {
        uVar20 = ~uVar31 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((this->StatePoseLinks).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x10 + 8)
          != -1) {
        uVar31 = this->CurrentState;
        if ((int)uVar31 < (this->StatePoseLinks).ArrayNum) {
          uVar27 = ~uVar31 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar18 = *(FAnimNode_Base **)
                   ((this->StatePoseLinks).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x10);
        if (CachedId_StateEntryFunction.Index == -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            ::FName::FName(&AnimName_StateEntryFunction,"StateEntryFunction");
            _Init_thread_footer(&::_TSS1);
          }
          if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar14 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar14,
                                 L"AnimNode_StateResult");
          }
          pFVar15 = UE::Anim::FNodeDataId::FNodeDataId
                              (local_5c,AnimName_StateEntryFunction,pFVar18,
                               Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.
                               OuterSingleton);
          CachedId_StateEntryFunction.Id = pFVar15->Id;
          FVar29 = CachedId_StateEntryFunction.Id.ComparisonIndex.Value;
          uVar31 = CachedId_StateEntryFunction.Id.Number;
          CachedId_StateEntryFunction.Index = pFVar15->Index;
        }
        else {
          FVar29 = CachedId_StateEntryFunction.Id.ComparisonIndex.Value;
          uVar31 = CachedId_StateEntryFunction.Id.Number;
        }
        iVar21 = CachedId_StateEntryFunction.Index;
        if ((pFVar18->NodeData == (FAnimNodeData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NodeData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                                ,0x3e1,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_c8.Id.Number = uVar31;
        local_c8.Id.ComparisonIndex.Value = FVar29.Value;
        local_c8.Index = iVar21;
        pFVar16 = FAnimNodeData::GetData(pFVar18->NodeData,&local_c8,pFVar18,(UObject *)0x0);
        UE::Anim::CallFunctionHelper<FAnimExecutionContext,FAnimationBaseContext>
                  (pFVar16,param_1,(FAnimNode_Base *)this);
      }
    }
    iVar21 = this->CurrentState;
    if ((iVar21 != -1) && (iVar21 < (this->OnGraphStatesEntered).ArrayNum)) {
      if ((iVar21 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
      ExecuteIfBound((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
                      *)((this->OnGraphStatesEntered).AllocatorInstance.Data +
                        (longlong)iVar21 * 0x18),this,local_118,this->CurrentState);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// SetStateInternal @ 1474f9b90

void __thiscall FAnimNode_StateMachine::SetStateInternal(FAnimNode_StateMachine *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FBakedAnimationState *pFVar4;
  int iVar5;
  
  if (((this->PRIVATE_MachineDescription != (FBakedAnimationStateMachine *)0x0) && (-1 < param_1))
     && (param_1 < (this->PRIVATE_MachineDescription->States).ArrayNum)) {
    pFVar4 = GetStateInfo(this,param_1);
    if ((pFVar4->bIsAConduit != false) && (this->bAllowConduitEntryStates == false)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7844275454201562273>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                         ,0x4a1,"!IsAConduitState(NewStateIndex) || bAllowConduitEntryStates");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  iVar5 = (this->PRIVATE_MachineDescription->States).ArrayNum + -1;
  if (param_1 < iVar5) {
    iVar5 = param_1;
  }
  iVar3 = 0;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  this->CurrentState = iVar3;
  if (iVar3 != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentState == NewStateIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_StateMachine.cpp"
                       ,0x4a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ElapsedTime = 0.0;
  return;
}

// TransitionToState @ 1474fc790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FAnimNode_StateMachine::TransitionToState
          (FAnimNode_StateMachine *this,FAnimationUpdateContext *param_1,
          FAnimationTransitionBetweenStates *param_2,FAnimationPotentialTransition *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimInstanceProxy *pFVar3;
  FScriptContainerElement *pFVar4;
  UBlendProfile *pUVar5;
  UCurveFloat *pUVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FBakedAnimationState *pFVar14;
  FBakedStateExitTransition *pFVar15;
  FAnimationActiveTransitionEntry *this_00;
  IInertializationRequester *pIVar16;
  FText *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  FString *pFVar22;
  ForElementType<int> _Dst;
  FBakedAnimationStateMachine *pFVar23;
  uint uVar24;
  longlong lVar25;
  ForElementType<int> _Src;
  float fVar26;
  float fVar27;
  undefined1 auStackY_1b8 [32];
  float local_168 [2];
  TObjectPtr<UBlendProfile>_u_0 local_160;
  undefined2 local_158;
  TObjectPtr<UCurveFloat>_u_0 local_150;
  undefined8 local_148;
  FText local_140;
  FString local_130;
  undefined4 local_120;
  UObject *local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  TArray<int,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar2 = (this->ActiveTransitionArray).ArrayNum;
  if (0 < iVar2) {
    uVar24 = iVar2 - 1;
    uVar10 = 0;
    if ((int)uVar24 < iVar2) {
      uVar10 = ~uVar24 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((this->ActiveTransitionArray).AllocatorInstance.Data[(longlong)(int)uVar24 * 200 + 0xc2] !=
        (FScriptContainerElement)0x0) {
      iVar2 = (this->ActiveTransitionArray).ArrayNum;
      pFVar3 = (FAnimInstanceProxy *)param_1->_padding_;
      uVar24 = iVar2 - 1;
      uVar10 = 0;
      if ((int)uVar24 < iVar2) {
        uVar10 = ~uVar24 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
                (pFVar3,*(int *)((this->ActiveTransitionArray).AllocatorInstance.Data +
                                (longlong)(int)uVar24 * 200 + 0x40));
    }
  }
  iVar2 = this->CurrentState;
  uVar10 = param_2->NextState;
  pFVar3 = (FAnimInstanceProxy *)param_1->_padding_;
  pFVar14 = GetStateInfo(this,iVar2);
  FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass(pFVar3,pFVar14->EndNotify);
  pFVar3 = (FAnimInstanceProxy *)param_1->_padding_;
  pFVar14 = GetStateInfo(this,uVar10);
  FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass(pFVar3,pFVar14->StartNotify);
  uVar24 = (this->ActiveTransitionArray).ArrayNum - 1;
  if (-1 < (int)uVar24) {
    lVar25 = (longlong)(int)uVar24 * 200;
    do {
      uVar11 = 0;
      if ((int)uVar24 < (this->ActiveTransitionArray).ArrayNum) {
        uVar11 = ~uVar24 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(uint *)((this->ActiveTransitionArray).AllocatorInstance.Data + lVar25 + 0x34) == uVar10)
      break;
      lVar25 = lVar25 + -200;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  if ((((this->PRIVATE_MachineDescription != (FBakedAnimationStateMachine *)0x0) && (-1 < iVar2)) &&
      (iVar2 < (this->PRIVATE_MachineDescription->States).ArrayNum)) &&
     (pFVar14 = GetStateInfo(this,iVar2), pFVar14->bIsAConduit != false)) goto LAB_1474fcf70;
  pFVar15 = (FBakedStateExitTransition *)0x0;
  fVar27 = 0.0;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 3;
  if (param_3 != (FAnimationPotentialTransition *)0x0) {
    fVar27 = param_3->CrossfadeTimeAdjustment;
    pFVar15 = param_3->TransitionRule;
    if (&local_a8 != &param_3->SourceTransitionIndices) {
      iVar12 = (param_3->SourceTransitionIndices).ArrayNum;
      _Src = (param_3->SourceTransitionIndices).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<int>)0x0) {
        _Src = (ForElementType<int>)&param_3->SourceTransitionIndices;
      }
      local_a8.ArrayNum = iVar12;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,iVar12,3,&local_a8.AllocatorInstance,iVar12,&local_a8.ArrayMax);
      _Dst = (ForElementType<int>)&local_a8;
      if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        _Dst = local_a8.AllocatorInstance.SecondaryData;
      }
      if (iVar12 != 0) {
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar12 << 2);
      }
    }
  }
  fVar26 = GetStateWeight(this,uVar10);
  iVar12 = (this->ActiveTransitionArray).ArrayNum;
  piVar1 = &(this->ActiveTransitionArray).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8c8,&(this->ActiveTransitionArray).AllocatorInstance,piVar1);
  }
  (this->ActiveTransitionArray).ArrayNum = iVar12 + 1;
  this_00 = FAnimationActiveTransitionEntry::FAnimationActiveTransitionEntry
                      ((FAnimationActiveTransitionEntry *)
                       ((this->ActiveTransitionArray).AllocatorInstance.Data +
                       (longlong)iVar12 * 200),uVar10,fVar26,iVar2,param_2,fVar27);
  if (((param_2->LogicType).Value == '\x02') && (pFVar15 != (FBakedStateExitTransition *)0x0)) {
    FAnimationActiveTransitionEntry::InitializeCustomGraphLinks(this_00,param_1,pFVar15);
  }
  if ((this_00->BlendProfile).field0_0x0.DebugPtr != (UBlendProfile *)0x0) {
    piVar1 = &(this_00->StateBlendData).ArrayNum;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,8,2,&(this_00->StateBlendData).AllocatorInstance,piVar1,
                        &(this_00->StateBlendData).ArrayMax);
    memset((this_00->StateBlendData).AllocatorInstance.Data + (longlong)iVar12 * 0x60,0,0xc0);
    if ((*piVar1 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this_00->StateBlendData).AllocatorInstance.Data;
    iVar12 = (**(code **)(((this_00->BlendProfile).field0_0x0.DebugPtr)->_padding_ + 0x30))();
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar12,(ForAnyElementType *)(pFVar4 + 0x40),(int *)(pFVar4 + 0x48),
                        (int *)(pFVar4 + 0x4c));
    memset((void *)(*(longlong *)(pFVar4 + 0x40) + (longlong)iVar13 * 4),0,(longlong)iVar12 << 2);
    if ((*piVar1 < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this_00->StateBlendData).AllocatorInstance.Data;
    iVar12 = (**(code **)(((this_00->BlendProfile).field0_0x0.DebugPtr)->_padding_ + 0x30))();
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar12,(ForAnyElementType *)(pFVar4 + 0xa0),(int *)(pFVar4 + 0xa8),
                        (int *)(pFVar4 + 0xac));
    memset((void *)(*(longlong *)(pFVar4 + 0xa0) + (longlong)iVar13 * 4),0,(longlong)iVar12 << 2);
  }
  pFVar23 = this->PRIVATE_MachineDescription;
  if ((param_2->LogicType).Value == '\x01') {
LAB_1474fccae:
    pIVar16 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                        ((FAnimationBaseContext *)param_1);
    if (pIVar16 == (IInertializationRequester *)0x0) {
      (**(code **)(this->_padding_ + 0xa0))(this,param_1,iVar2,uVar10);
    }
    else {
      local_168[0] = -1.0;
      local_160 = (TObjectPtr<UBlendProfile>_u_0)0x0;
      local_158 = 0;
      local_150 = (TObjectPtr<UCurveFloat>_u_0)0x0;
      local_148 = 0;
      FText::FText(&local_140);
      local_168[0] = param_2->CrossfadeDuration;
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      local_120 = 0xffffffff;
      local_118 = (UObject *)0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (param_2->BlendProfile).field0_0x0.DebugPtr, pUVar5 != (UBlendProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_160 = (param_2->BlendProfile).field0_0x0;
      local_158 = CONCAT11(param_2->BlendMode,1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 = (param_2->CustomCurve).field0_0x0.DebugPtr, pUVar6 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_150 = (param_2->CustomCurve).field0_0x0;
      pFVar14 = GetStateInfo(this,param_2->NextState);
      pFVar17 = FText::FromName(&local_e8,&pFVar14->StateName);
      pFVar14 = GetStateInfo(this,param_2->PreviousState);
      pFVar18 = FText::FromName(&local_d8,&pFVar14->StateName);
      pFVar23 = this->PRIVATE_MachineDescription;
      if ((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) &&
         (pFVar23 = (FBakedAnimationStateMachine *)0x0, 2 < (byte)LogAnimation._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
      pFVar19 = FText::FromName(&local_c8,&pFVar23->MachineName);
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"AnimNode_StateMachine",L"InertializationRequestDescription",
                           L"\"{0}\" Transition from \"{1}\" to \"{2}\"");
      pFVar21 = FTextFormat::FTextFormat(&local_b8,pFVar20,Default);
      pFVar17 = FText::Format<FText,FText,FText>(&local_108,pFVar21,pFVar19,pFVar18,pFVar17);
      pFVar22 = FText::ToString(pFVar17);
      if (&local_130 != pFVar22) {
        iVar2 = (pFVar22->Data).ArrayNum;
        pFVar4 = (pFVar22->Data).AllocatorInstance.Data;
        local_130.Data.ArrayNum = iVar2;
        if ((iVar2 == 0) && (local_130.Data.ArrayMax == 0)) {
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,local_130.Data.ArrayMax,(ForAnyElementType *)&local_130,iVar2,
                     &local_130.Data.ArrayMax);
          if (iVar2 != 0) {
            memcpy(local_130.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar2 * 2);
          }
        }
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      local_120 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      pUVar7 = *(UObject **)(param_1->_padding_ + 0x140);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_118 = pUVar7;
      (**(code **)((longlong)*pIVar16 + 0x20))(pIVar16,local_168);
      (**(code **)((longlong)*pIVar16 + 0x30))
                (pIVar16,param_1->_padding_,*(undefined4 *)((longlong)&param_1->_padding_ + 4));
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_140.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
      }
    }
  }
  else if ((param_2->bAllowInertializationForSelfTransitions != 0) && (0.0 < fVar26)) {
    uVar24 = 0;
    if ((int)uVar10 < (pFVar23->States).ArrayNum) {
      uVar24 = ~uVar10 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pFVar23->States).AllocatorInstance.Data[(longlong)(int)uVar10 * 0x50 + 0x4c] !=
        (FScriptContainerElement)0x0) goto LAB_1474fccae;
  }
  TArray<int,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this_00->SourceTransitionIndices,&local_a8);
  if ((this->bFirstUpdate == false) || (this->bSkipFirstUpdateTransition == false)) {
    FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass
              ((FAnimInstanceProxy *)param_1->_padding_,this_00->StartNotify);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
LAB_1474fcf70:
  ConsumeMarkedTransitionEvents(this);
  SetState(this,(FAnimationBaseContext *)param_1,uVar10,
           param_2->bAllowInertializationForSelfTransitions);
  return;
}

// UpdateState @ 147500e80

void __thiscall
FAnimNode_StateMachine::UpdateState
          (FAnimNode_StateMachine *this,int param_1,FAnimationUpdateContext *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FBakedAnimationState *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint local_res10 [2];
  FAnimNode_StateMachine *local_res20;
  TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope> local_28;
  
  if (param_1 != -1) {
    pFVar8 = (this->StatesUpdated).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)(this->StatesUpdated).ArrayNum * 4;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 4) {
      if (*(int *)pFVar8 == param_1) {
        return;
      }
    }
    local_res10[0] = param_1;
    if ((((this->PRIVATE_MachineDescription == (FBakedAnimationStateMachine *)0x0) || (param_1 < 0))
        || ((this->PRIVATE_MachineDescription->States).ArrayNum <= param_1)) ||
       (pFVar7 = GetStateInfo(this,param_1), pFVar7->bIsAConduit == false)) {
      local_res20 = this;
      UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope>::
      TOptionalScopedGraphMessage<UE::Anim::FActiveStateMachineScope><FAnimationUpdateContext_const_&,FAnimNode_StateMachine_*,int_&>
                (&local_28,this->bCreateNotifyMetaData,(FAnimationBaseContext *)param_2,param_2,
                 &local_res20,(int *)local_res10);
      pFVar2 = (this->StatesUpdated).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar2 + (longlong)(this->StatesUpdated).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->StatesUpdated).ArrayNum;
      piVar1 = &(this->StatesUpdated).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->StatesUpdated).AllocatorInstance,piVar1);
      }
      (this->StatesUpdated).ArrayNum = iVar5 + 1;
      *(uint *)((this->StatesUpdated).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0]
      ;
      lVar9 = (longlong)(int)local_res10[0];
      uVar6 = 0;
      if ((int)local_res10[0] < (this->StatePoseLinks).ArrayNum) {
        uVar6 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FPoseLinkBase::Update
                ((FPoseLinkBase *)((this->StatePoseLinks).AllocatorInstance.Data + lVar9 * 0x10),
                 param_2);
      if (local_28.bCondition != false) {
        UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)&local_28);
      }
    }
  }
  return;
}

// UpdateTransitionStates @ 147501070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_StateMachine::UpdateTransitionStates
          (FAnimNode_StateMachine *this,FAnimationUpdateContext *param_1,
          FAnimationActiveTransitionEntry *param_2)

{
  uchar uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  TReferenceControllerBase<1> *pTVar12;
  FAnimationUpdateContext *pFVar13;
  FName FVar14;
  FScopedGraphMessage local_1f8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_1e8;
  FAnimationUpdateContext local_1d8;
  FAnimationUpdateContext local_1a8;
  FAnimationUpdateContext local_178;
  FAnimationUpdateContext local_148;
  FAnimationUpdateContext local_118;
  FAnimationUpdateContext local_e8;
  FAnimationUpdateContext local_b8;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  FAnimationUpdateContext local_58;
  
  if (param_2->bActive != false) {
    uVar1 = (param_2->LogicType).Value;
    if (uVar1 == '\0') {
      local_1d8.CurrentWeight = GetStateWeight(this,param_2->PreviousState);
      local_1d8.CurrentWeight = local_1d8.CurrentWeight * param_1->CurrentWeight;
      uVar6 = param_1->RootMotionWeightModifier;
      local_1d8.DeltaTime = param_1->DeltaTime;
      local_1d8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
      local_1d8.RootMotionWeightModifier = (float)uVar6;
      if (param_2->PreviousState == this->CurrentState) {
        pFVar13 = &local_1a8;
        local_1a8.CurrentWeight = local_1d8.CurrentWeight;
        local_1a8.RootMotionWeightModifier = (float)uVar6;
        local_1a8._padding_ = param_1->_padding_;
        local_1a8._padding_ = param_1->_padding_;
        local_1a8._padding_ = param_1->_padding_;
        local_1a8._padding_ = param_1->_padding_;
        local_1a8._40_8_ = local_1d8._40_8_;
      }
      else {
        local_118._padding_ = param_1->_padding_ & 0xffffffffffffff00;
        pFVar13 = &local_118;
        local_118.CurrentWeight = local_1d8.CurrentWeight;
        local_118.RootMotionWeightModifier = (float)uVar6;
        local_118._padding_ = param_1->_padding_;
        local_118._padding_ = param_1->_padding_;
        local_118._padding_ = param_1->_padding_;
        local_118._40_8_ = local_1d8._40_8_;
      }
      UpdateState(this,param_2->PreviousState,pFVar13);
      local_1a8.CurrentWeight = GetStateWeight(this,param_2->NextState);
      local_1a8.CurrentWeight = local_1a8.CurrentWeight * param_1->CurrentWeight;
      iVar11 = param_2->NextState;
      uVar7 = param_1->RootMotionWeightModifier;
      local_1a8.DeltaTime = param_1->DeltaTime;
      local_1a8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
      local_e8._padding_ = param_1->_padding_;
      local_e8._padding_ = param_1->_padding_;
      local_58._padding_ = param_1->_padding_;
      local_e8._padding_ = param_1->_padding_;
      local_1a8.RootMotionWeightModifier = (float)uVar7;
      if (iVar11 == this->CurrentState) {
        local_58.CurrentWeight = local_1a8.CurrentWeight;
        local_58.RootMotionWeightModifier = (float)uVar7;
        local_58._padding_ = local_e8._padding_;
        local_58._padding_ = local_e8._padding_;
        local_58._padding_ = local_e8._padding_;
        local_58._40_8_ = local_1a8._40_8_;
        UpdateState(this,iVar11,&local_58);
      }
      else {
        local_e8._padding_ = local_58._padding_ & 0xffffffffffffff00;
        local_e8.CurrentWeight = local_1a8.CurrentWeight;
        local_e8.RootMotionWeightModifier = (float)uVar7;
        local_e8._40_8_ = local_1a8._40_8_;
        UpdateState(this,iVar11,&local_e8);
      }
    }
    else if (uVar1 == '\x01') {
      local_1f8.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      local_1f8.MessageType.ComparisonIndex.Value = 0;
      local_1f8.MessageType.Number = 0;
      local_1e8.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_1e8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        local_1e8.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
        local_1e8.SharedReferenceCount.ReferenceController = _UNK_150651568;
        FVar14 = UE::Anim::FAnimInertializationSyncScope::TypeName;
      }
      else {
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)0x1;
        (local_1e8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_1e8.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFAnimInertializationSyncScope_Anim_UE___00_SharedPointerInternals__6B_
        ;
        local_1e8.SharedReferenceCount.ReferenceController[1]._padding_ =
             (longlong)&___7FAnimInertializationSyncScope_Anim_UE__6B_;
        if ((local_1e8.SharedReferenceCount.ReferenceController + 1 ==
             (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar14 = UE::Anim::FAnimInertializationSyncScope::TypeName;
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar12 = local_1e8.SharedReferenceCount.ReferenceController;
        local_1e8.Object = (IGraphMessage *)(local_1e8.SharedReferenceCount.ReferenceController + 1)
        ;
      }
      UE::Anim::FScopedGraphMessage::PushMessage
                (&local_1f8,(FAnimationBaseContext *)param_1,&local_1e8,FVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      pFVar13 = &local_1d8;
      if (param_2->NextState == this->CurrentState) {
        local_1d8.CurrentWeight = param_1->CurrentWeight;
        local_1d8.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
        local_1d8.DeltaTime = param_1->DeltaTime;
        local_1d8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
        local_1d8._padding_ = param_1->_padding_;
        local_1d8._padding_ = param_1->_padding_;
        local_1d8._padding_ = param_1->_padding_;
        local_1d8._padding_ = param_1->_padding_;
      }
      else {
        local_148.CurrentWeight = param_1->CurrentWeight;
        local_148.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
        local_148.DeltaTime = param_1->DeltaTime;
        local_148._44_4_ = *(undefined4 *)&param_1->field_0x2c;
        local_148._padding_ = param_1->_padding_ & 0xffffffffffffff00;
        pFVar13 = &local_148;
        local_148._padding_ = param_1->_padding_;
        local_148._padding_ = param_1->_padding_;
        local_148._padding_ = param_1->_padding_;
      }
      UpdateState(this,param_2->NextState,pFVar13);
      UE::Anim::FScopedGraphMessage::PopMessage(&local_1f8);
    }
    else if ((uVar1 == '\x02') && (*(int *)&(param_2->CustomTransitionGraph).field_0x8 != -1)) {
      FPoseLinkBase::Update((FPoseLinkBase *)&param_2->CustomTransitionGraph,param_1);
      fVar8 = __real_3f800000;
      iVar11 = 0;
      while ((-1 < iVar11 && (iVar11 < (param_2->PoseEvaluators).ArrayNum))) {
        if ((iVar11 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)
                 ((param_2->PoseEvaluators).AllocatorInstance.Data + (longlong)iVar11 * 8);
        if ((*(char *)(lVar3 + 0x91) == '\0') ||
           ((*(char *)(lVar3 + 0x91) == '\x02' && (0 < *(int *)(lVar3 + 0x8c))))) {
LAB_1475011a0:
          lVar10 = 0x34;
          local_68 = param_2->Alpha;
          bVar9 = *(char *)(lVar3 + 0x90) != '\0';
          if (bVar9) {
            lVar10 = 0x30;
          }
          iVar2 = *(int *)((param_2->SourceTransitionIndices).AllocatorInstance.InlineData +
                          lVar10 + -0x68);
          if (!bVar9) {
            local_68 = fVar8 - local_68;
          }
          uVar5 = param_1->RootMotionWeightModifier;
          uStack_60._0_4_ = param_1->DeltaTime;
          uStack_60._4_4_ = *(undefined4 *)&param_1->field_0x2c;
          local_68 = local_68 * param_1->CurrentWeight;
          fStack_64 = (float)uVar5;
          if (iVar2 != this->CurrentState) {
            local_178._padding_ = param_1->_padding_ & 0xffffffffffffff00;
            local_178.CurrentWeight = local_68;
            local_178.RootMotionWeightModifier = (float)uVar5;
            local_178._padding_ = param_1->_padding_;
            local_178._padding_ = param_1->_padding_;
            local_178._padding_ = param_1->_padding_;
            local_178._40_8_ = uStack_60;
            UpdateState(this,iVar2,&local_178);
            goto LAB_147501237;
          }
          local_b8.CurrentWeight = local_68;
          local_b8.RootMotionWeightModifier = (float)uVar5;
          local_b8._padding_ = param_1->_padding_;
          local_b8._padding_ = param_1->_padding_;
          local_b8._padding_ = param_1->_padding_;
          local_b8._padding_ = param_1->_padding_;
          local_b8._40_8_ = uStack_60;
          UpdateState(this,iVar2,&local_b8);
          iVar11 = iVar11 + 1;
        }
        else {
          if ((*(short *)(lVar3 + 0xa0) == -1) ||
             (((*(longlong *)(lVar3 + 0x98) == -1 ||
               (*(short *)(lVar3 + 0xa0) != *(short *)(param_1->_padding_ + 0x5a0))) ||
              (*(longlong *)(lVar3 + 0x98) != *(longlong *)(param_1->_padding_ + 0x598)))))
          goto LAB_1475011a0;
LAB_147501237:
          iVar11 = iVar11 + 1;
        }
      }
    }
  }
  return;
}

// operator() @ 15050a160

bool __thiscall
`FAnimNode_StateMachine::Evaluate_AnyThread'::__l5::<lambda_1>::operator()(void *this)

{
  FAnimNode_StateMachine *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FBakedAnimationState *pFVar7;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7844275454201562057>);
  if (bVar5) {
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(**(longlong **)((longlong)this + 0x10) + 0x140),&local_48,
               (UObject *)0x0,None);
    this_00 = *(FAnimNode_StateMachine **)((longlong)this + 8);
    if ((this_00->CurrentState < 0) ||
       ((this_00->PRIVATE_MachineDescription->States).ArrayNum <= this_00->CurrentState)) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      pFVar7 = FAnimNode_StateMachine::GetStateInfo(this_00);
      local_res10 = pFVar7->StateName;
    }
    ::FName::ToString(&local_res10,&local_28);
    ::FName::ToString((FName *)**(undefined8 **)this,&local_38);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7844275454201562057>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15050a279;
    }
  }
  bVar5 = false;
LAB_15050a279:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}


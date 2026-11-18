// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// GetTypeID @ 14d558d50

FCameraObjectTypeID * __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::GetTypeID
          (FPersistentBlendStackCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d55a530

bool __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::IsKindOf
          (FPersistentBlendStackCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != FBlendStackCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnRun @ 14d577bc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::OnRun
          (FPersistentBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,TSizedDefaultAllocator<32>_>
  local_38;
  FResolvedEntry *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> local_18;
  
  if ((int)this->_padding_ != (this->EntryExtraInfos).ArrayNum) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6916092038958022445>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\PersistentBlendStackCameraNode.cpp"
                       ,0xd3,"Entries.Num() == EntryExtraInfos.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FBlendStackCameraNodeEvaluator::ResolveEntries
            ((FBlendStackCameraNodeEvaluator *)this,param_1,&local_38);
  iStack_20 = local_38.ArrayNum;
  local_28 = (FResolvedEntry *)local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = local_28;
  InternalUpdate(this,&local_18,param_1,param_2);
  FBlendStackCameraNodeEvaluator::OnRunFinished((FBlendStackCameraNodeEvaluator *)this,param_2);
  DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int>
            ((FResolvedEntry *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FResolvedEntry *)local_38.AllocatorInstance.Data != (FResolvedEntry *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// FindEnterTransition @ 14d5a40f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraRigTransition * __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FindEnterTransition
          (FPersistentBlendStackCameraNodeEvaluator *this,FBlendStackCameraInsertParams *param_1)

{
  UCameraRigAsset *pUVar1;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *pTVar2;
  UCameraRigTransition *pUVar3;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_48;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_38;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_28;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_18;
  
  pUVar3 = (param_1->TransitionOverride).field0_0x0.DebugPtr;
  if (pUVar3 == (UCameraRigTransition *)0x0) {
    local_48.Object = (param_1->EvaluationContext).Object;
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    pUVar1 = (param_1->CameraRig).field0_0x0.DebugPtr;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = (FCameraEvaluationContext *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2 = TArrayView<TObjectPtr<UCameraRigTransition>_const_,int>::
             TArrayView<TObjectPtr<UCameraRigTransition>_const_,int><TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&((param_1->CameraRig).field0_0x0.DebugPtr)->EnterTransitions);
    local_28.DataPtr = pTVar2->DataPtr;
    local_28.ArrayNum = pTVar2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
    pUVar3 = FCameraRigTransitionFinder::FindTransition
                       (&local_28,&local_38,(UCameraRigAsset *)0x0,(UCameraAsset *)0x0,false,
                        &local_48,pUVar1,(UCameraAsset *)0x0);
  }
  return pUVar3;
}

// FindExitTransition @ 14d5a4540

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraRigTransition * __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FindExitTransition
          (FPersistentBlendStackCameraNodeEvaluator *this,FCameraRigEntry *param_1,
          UCameraRigTransition *param_2)

{
  <unnamed_type_Flags> <Var1;
  UCameraRigAsset *pUVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *pTVar5;
  UCameraRigTransition *pUVar6;
  bool bVar7;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_48;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_38;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_28;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_18;
  
  if (param_2 != (UCameraRigTransition *)0x0) {
    return param_2;
  }
  pUVar2 = (param_1->CameraRig).field0_0x0.DebugPtr;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
  local_48.Object = (FCameraEvaluationContext *)0x0;
  local_38.Object = (FCameraEvaluationContext *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d5a45c3;
      }
      LOCK();
      aVar4 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_48.Object = (param_1->EvaluationContext).Object;
    }
  }
LAB_14d5a45c3:
  pTVar5 = TArrayView<TObjectPtr<UCameraRigTransition>_const_,int>::
           TArrayView<TObjectPtr<UCameraRigTransition>_const_,int><TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_>
                     (&local_18,&((param_1->CameraRig).field0_0x0.DebugPtr)->ExitTransitions);
  local_28.DataPtr = pTVar5->DataPtr;
  local_28.ArrayNum = pTVar5->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
  pUVar6 = FCameraRigTransitionFinder::FindTransition
                     (&local_28,&local_48,pUVar2,(UCameraAsset *)0x0,(param_1->Flags).bIsFrozen,
                      &local_38,(UCameraRigAsset *)0x0,(UCameraAsset *)0x0);
  return pUVar6;
}

// Insert @ 14d5b05c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FBlendStackEntryID __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::Insert
          (FPersistentBlendStackCameraNodeEvaluator *this,FBlendStackCameraInsertParams *param_1)

{
  TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  UCameraRigAsset *pUVar3;
  code *pcVar4;
  uint uVar5;
  atomic<int> aVar6;
  FBlendStackCameraInsertParams *pFVar7;
  FPersistentBlendStackCameraNodeEvaluator *this_00;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  atomic<int> aVar11;
  int iVar12;
  UClass *pUVar13;
  UBlendStackRootCameraNode *pUVar14;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *pTVar15;
  UCameraRigTransition *pUVar16;
  UBlendCameraNode *pUVar17;
  UObject *pUVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  UObject *pUVar22;
  UObject *pUVar23;
  longlong lVar24;
  longlong *in_R8;
  longlong *plVar25;
  UObject *pUVar26;
  undefined1 auStackY_1678 [32];
  undefined4 local_1628;
  undefined4 uStack_1624;
  undefined4 local_1620;
  longlong local_1618;
  longlong local_1610;
  FScriptContainerElement *local_1608;
  longlong local_1600;
  undefined8 local_15f8;
  undefined8 local_15f0;
  FBlendStackCameraInsertParams *local_15e8;
  FPersistentBlendStackCameraNodeEvaluator *local_15e0;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_15d8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_15c8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_15b8;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_15a8;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_1598;
  undefined1 local_1588 [128];
  FCameraRigEntry local_1508;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14d5b05e2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1678;
  pUVar23 = (UObject *)0x0;
  uVar10 = 0;
  local_15e8 = param_1;
  local_15e0 = this;
  if ((*(char *)((longlong)in_R8 + 0x24) == '\0') && (0 < (int)this->_padding_)) {
    local_1610 = 0;
    local_1618 = 0;
    local_1600 = 0;
    pUVar22 = pUVar23;
    do {
      lVar20 = local_1600;
      lVar24 = local_1610;
      uVar21 = (uint)pUVar22;
      uVar9 = uVar10;
      if ((int)uVar21 < (int)this->_padding_) {
        uVar9 = ~uVar21 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (FBlendStackEntryID)uVar10;
      }
      lVar20 = lVar20 + this->_padding_;
      uVar9 = uVar10;
      if ((int)uVar21 < (this->EntryExtraInfos).ArrayNum) {
        uVar9 = ~uVar21 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (FBlendStackEntryID)uVar10;
      }
      local_1608 = (this->EntryExtraInfos).AllocatorInstance.Data + lVar24;
      if (((*(byte *)(lVar20 + 0x14b0) & 8) == 0) && (*(longlong *)(lVar20 + 0x18) == in_R8[2])) {
        pUVar22 = *(UObject **)(lVar20 + 0x10);
        pUVar18 = pUVar22;
        pUVar26 = pUVar23;
        if (pUVar22 != (UObject *)0x0) {
          aVar6 = *(atomic<int> *)&pUVar22->field_0x8;
          do {
            pUVar18 = pUVar23;
            if (aVar6 == (atomic<int>)0x0) goto LAB_14d5b0721;
            LOCK();
            aVar11 = *(atomic<int> *)&pUVar22->field_0x8;
            bVar8 = aVar6 == aVar11;
            if (bVar8) {
              *(atomic<int> *)&pUVar22->field_0x8 = (atomic<int>)((int)aVar6 + 1);
              aVar11 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar11;
          } while (!bVar8);
          pUVar18 = pUVar22;
          pUVar26 = *(UObject **)(lVar20 + 8);
        }
LAB_14d5b0721:
        pUVar22 = (UObject *)*in_R8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pUVar18);
        if ((pUVar22 == pUVar26) && (*(int *)local_1608 == (int)in_R8[4])) {
          *(undefined4 *)&(local_15e8->EvaluationContext).Object = 0xffffffff;
          goto LAB_14d5b0c0b;
        }
      }
      pUVar22 = (UObject *)(ulonglong)(uVar21 + 1);
      local_1618 = local_1618 + 1;
      local_1610 = local_1610 + 0xc;
      local_1600 = local_1600 + 0x14c0;
    } while ((int)(uVar21 + 1) < (int)this->_padding_);
  }
  if (this->_padding_ != 0) {
    pUVar13 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar13);
    if (bVar8) {
      pUVar23 = (UObject *)this->_padding_;
    }
  }
  local_15f8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (pUVar23,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = Z_Construct_UClass_UBlendStackRootCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1588,pUVar13);
  local_1588._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1588._56_8_ = (UPackage *)0x0;
  local_1588._16_4_ = 0;
  local_1588._20_4_ = 0;
  local_1588._24_4_ = RF_NoFlags;
  local_1588._40_8_ = (UObject *)0x0;
  local_1588[0x20] = false;
  local_1588._8_8_ = pUVar23;
  pUVar14 = (UBlendStackRootCameraNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1588);
  if (local_1588._64_8_ != 0) {
    plVar25 = (longlong *)(local_1588 + 0x50);
    if ((longlong *)local_1588._104_8_ != (longlong *)0x0) {
      plVar25 = (longlong *)local_1588._104_8_;
    }
    (**(code **)(*plVar25 + 0x10))(plVar25);
  }
  lVar24 = in_R8[2];
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar23 = *(UObject **)(lVar24 + 200), pUVar23 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar23);
  }
  (pUVar14->RootNode).field0_0x0 = *(TObjectPtr<UCameraNode>_u_0 *)(lVar24 + 200);
  pUVar16 = (UCameraRigTransition *)in_R8[3];
  if (pUVar16 == (UCameraRigTransition *)0x0) {
    local_15d8.Object = (FCameraEvaluationContext *)*in_R8;
    pUVar3 = (UCameraRigAsset *)in_R8[2];
    local_15d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
    if (local_15d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_15d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_15d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_15b8.Object = (FCameraEvaluationContext *)0x0;
    local_15b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar15 = TArrayView<TObjectPtr<UCameraRigTransition>_const_,int>::
              TArrayView<TObjectPtr<UCameraRigTransition>_const_,int><TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_>
                        (&local_1598,
                         (TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_> *)
                         (in_R8[2] + 0xf0));
    local_15a8.DataPtr = pTVar15->DataPtr;
    local_15a8.ArrayNum = pTVar15->ArrayNum;
    local_15a8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    pUVar16 = FCameraRigTransitionFinder::FindTransition
                        (&local_15a8,&local_15b8,(UCameraRigAsset *)0x0,(UCameraAsset *)0x0,false,
                         &local_15d8,pUVar3,(UCameraAsset *)0x0);
    if (pUVar16 != (UCameraRigTransition *)0x0) goto LAB_14d5b08c3;
  }
  else {
LAB_14d5b08c3:
    pUVar17 = (pUVar16->Blend).field0_0x0.DebugPtr;
    if (pUVar17 != (UBlendCameraNode *)0x0) goto LAB_14d5b08f3;
  }
  local_15f0 = 0;
  pUVar17 = (UBlendCameraNode *)
            NewObject<UPopBlendCameraNode>
                      ((UObject *)pUVar14,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_14d5b08f3:
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UBlendCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  (pUVar14->Blend).field0_0x0.DebugPtr = pUVar17;
  FBlendStackCameraNodeEvaluator::FCameraRigEntry::FCameraRigEntry(&local_1508);
  local_15c8.Object = (FCameraEvaluationContext *)*in_R8;
  local_15c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
  if (local_15c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_15c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_15c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBlendStackCameraNodeEvaluator::InitializeEntry
            ((FBlendStackCameraNodeEvaluator *)this,&local_1508,(UCameraRigAsset *)in_R8[2],
             &local_15c8,pUVar14,false);
  local_1628 = (undefined4)in_R8[4];
  local_1620 = (uint)local_1620._2_2_ << 0x10;
  uStack_1624 = 1;
  if (((int)this->_padding_ != (this->EntryExtraInfos).ArrayNum) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6916092038958022580>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\PersistentBlendStackCameraNode.cpp"
                         ,0x4c,"Entries.Num() == EntryExtraInfos.Num()"), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (FBlendStackEntryID)uVar10;
  }
  uVar9 = (this->EntryExtraInfos).ArrayNum;
  pTVar1 = &this->EntryExtraInfos;
  uVar21 = uVar10;
  if (0 < (int)uVar9) {
    do {
      iVar12 = (uVar9 >> 1) + uVar21;
      if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0xc) <= (int)in_R8[4]) {
        uVar21 = (uVar9 & 1) + iVar12;
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  plVar25 = &this->_padding_;
  if ((((FCameraRigEntry *)this->_padding_ <= &local_1508) &&
      (&local_1508 < (FCameraRigEntry *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (FBlendStackEntryID)uVar10;
  }
  iVar12 = (int)this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar12 == *piVar2) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x14c0,0x10,(ForAnyElementType *)plVar25,piVar2);
  }
  *(int *)&this->_padding_ = iVar12 + 1;
  lVar24 = (longlong)(int)uVar21 * 0x14c0;
  local_1608 = (FScriptContainerElement *)lVar24;
  memmove((void *)(*plVar25 + lVar24 + 0x14c0),(void *)(*plVar25 + lVar24),
          (longlong)(int)(iVar12 - uVar21) * 0x14c0);
  FBlendStackCameraNodeEvaluator::FCameraRigEntry::FCameraRigEntry
            ((FCameraRigEntry *)(*plVar25 + lVar24),&local_1508);
  pFVar19 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar19 <= (FScriptContainerElement *)&local_1628) &&
      ((FScriptContainerElement *)&local_1628 <
       pFVar19 + (longlong)(this->EntryExtraInfos).ArrayMax * 0xc)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (FBlendStackEntryID)uVar10;
  }
  iVar12 = (this->EntryExtraInfos).ArrayNum;
  piVar2 = &(this->EntryExtraInfos).ArrayMax;
  if (iVar12 == *piVar2) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar19 = (pTVar1->AllocatorInstance).Data;
  (this->EntryExtraInfos).ArrayNum = iVar12 + 1;
  lVar24 = (longlong)(int)uVar21 * 0xc;
  pFVar19 = pFVar19 + lVar24;
  memmove(pFVar19 + 0xc,pFVar19,(longlong)(int)(iVar12 - uVar21) * 0xc);
  this_00 = local_15e0;
  pFVar19 = (pTVar1->AllocatorInstance).Data;
  *(ulonglong *)(pFVar19 + lVar24) = CONCAT44(uStack_1624,local_1628);
  *(int *)(pFVar19 + lVar24 + 8) = local_1620;
  bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&local_15e0->_padding_);
  if (bVar8) {
    if ((int)uVar21 < (int)this->_padding_) {
      uVar10 = ~uVar21 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (FBlendStackEntryID)uVar10;
    }
    FBlendStackCameraNodeEvaluator::BroadcastCameraRigEvent
              ((FBlendStackCameraNodeEvaluator *)this_00,Pushed,
               (FCameraRigEntry *)(*plVar25 + (longlong)local_1608),(UCameraRigTransition *)0x0);
  }
  pFVar7 = local_15e8;
  *(uint *)&(local_15e8->EvaluationContext).Object = local_1508.EntryID.Value;
  FBlendStackCameraNodeEvaluator::FCameraRigEntry::~FCameraRigEntry(&local_1508);
  local_15e8 = pFVar7;
LAB_14d5b0c0b:
  return (FBlendStackEntryID)(uint)local_15e8;
}

// InternalUpdate @ 14d5b3a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::InternalUpdate
          (FPersistentBlendStackCameraNodeEvaluator *this,
          TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FCameraNodeEvaluationResult *this_00;
  FCameraRigEntry *pFVar3;
  FScriptContainerElement *pFVar4;
  FCameraNodeEvaluator *this_01;
  FCameraNodeEvaluator *this_02;
  code *pcVar5;
  double dVar6;
  TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
  *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar13;
  FCameraPoseFlags FVar14;
  undefined3 uVar15;
  FPersistentBlendStackCameraNodeEvaluator *pFVar16;
  FPersistentBlendStackCameraNodeEvaluator *this_03;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<int> FVar21;
  int iVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FCameraVariableTable *pFVar26;
  ForElementType<int> FVar27;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  FPersistentBlendStackCameraNodeEvaluator *local_140;
  FCameraNodeEvaluationParams local_138;
  FScriptContainerElement *local_110;
  FCameraVariableTable *local_108;
  FCameraNodeEvaluationResult *local_100;
  FResolvedEntry *local_f8;
  FCameraNodeBlendResult local_f0;
  FCameraBlendedParameterUpdateResult local_e0;
  FCameraNodeEvaluationParams *local_d8;
  FResolvedEntry *local_d0;
  FCameraNodePreBlendResult local_c8;
  FCameraBlendedParameterUpdateParams local_b8;
  FCameraNodeBlendParams local_a8;
  FCameraNodePreBlendParams local_98;
  FCameraEvaluationContext *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  ForElementType<int> local_68;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_f8 = param_1->DataPtr;
  local_d0 = local_f8 + param_1->ArrayNum;
  local_68.SecondaryData = (ForElementType<int>)0x0;
  local_50 = 0;
  local_4c = 4;
  local_140 = this;
  local_100 = param_3;
  local_d8 = param_2;
  if (local_f8 != local_d0) {
    pFVar26 = &param_3->VariableTable;
    FVar27 = (ForElementType<int>)&local_f8->EntryIndex;
    local_108 = pFVar26;
    do {
      uVar25 = *(uint *)FVar27;
      lVar23 = (longlong)(int)uVar25;
      pFVar3 = local_f8->Entry;
      uVar18 = 0;
      if ((int)uVar25 < (local_140->EntryExtraInfos).ArrayNum) {
        uVar18 = ~uVar25 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar26 = &param_3->VariableTable;
      }
      pFVar4 = (local_140->EntryExtraInfos).AllocatorInstance.Data;
      if (((pFVar3->Flags).bIsFrozen) ||
         (((TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)((longlong)FVar27 + -0x10))
          ->Object == (FCameraEvaluationContext *)0x0)) {
        FCameraVariableTable::InternalOverride
                  (pFVar26,&(pFVar3->Result).VariableTable,None,(FCameraVariableTableFlags *)0x0,
                   false,(FCameraVariableTableFlags *)0x0);
        FCameraNodeEvaluationResult::OverrideAll(param_3,&pFVar3->Result,false);
      }
      else {
        local_138.Evaluator = param_2->Evaluator;
        local_78 = (param_2->EvaluationContext).Object;
        pTStack_70 = (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
        if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_70->SharedReferenceCount =
               (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_138.EvaluationType = param_2->EvaluationType;
        local_138.DeltaTime = param_2->DeltaTime;
        local_138.EvaluationContext.Object =
             ((TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)
             ((longlong)FVar27 + -0x10))->Object;
        local_138.bIsFirstFrame = param_2->bIsFirstFrame;
        local_138.bIsActiveCameraRig = param_2->bIsActiveCameraRig;
        local_138.EvaluationContext.SharedReferenceCount.ReferenceController =
             ((FSharedReferencer<1> *)((longlong)FVar27 + -8))->ReferenceController;
        if (local_138.EvaluationContext.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_138.EvaluationContext.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_138.EvaluationContext.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_70);
        this_00 = &pFVar3->Result;
        local_138.bIsFirstFrame = (pFVar3->Flags).bIsFirstFrame;
        FCameraNodeEvaluationResult::Reset(this_00);
        dVar6 = (param_3->CameraPose).Location.field0_0x0._s_0.Y;
        pFVar26 = &(pFVar3->Result).VariableTable;
        (this_00->CameraPose).Location.field0_0x0._s_0.X =
             (param_3->CameraPose).Location.field0_0x0._s_0.X;
        (pFVar3->Result).CameraPose.Location.field0_0x0._s_0.Y = dVar6;
        dVar6 = (param_3->CameraPose).Rotation.Pitch;
        (pFVar3->Result).CameraPose.Location.field0_0x0._s_0.Z =
             (param_3->CameraPose).Location.field0_0x0._s_0.Z;
        (pFVar3->Result).CameraPose.Rotation.Pitch = dVar6;
        dVar6 = (param_3->CameraPose).Rotation.Roll;
        (pFVar3->Result).CameraPose.Rotation.Yaw = (param_3->CameraPose).Rotation.Yaw;
        (pFVar3->Result).CameraPose.Rotation.Roll = dVar6;
        fVar8 = (param_3->CameraPose).FieldOfView;
        fVar9 = (param_3->CameraPose).FocalLength;
        (pFVar3->Result).CameraPose.TargetDistance = (param_3->CameraPose).TargetDistance;
        (pFVar3->Result).CameraPose.FieldOfView = fVar8;
        (pFVar3->Result).CameraPose.FocalLength = fVar9;
        fVar8 = (param_3->CameraPose).Aperture;
        fVar9 = (param_3->CameraPose).ShutterSpeed;
        fVar10 = (param_3->CameraPose).FocusDistance;
        (pFVar3->Result).CameraPose.OrthographicWidth = (param_3->CameraPose).OrthographicWidth;
        (pFVar3->Result).CameraPose.Aperture = fVar8;
        (pFVar3->Result).CameraPose.ShutterSpeed = fVar9;
        (pFVar3->Result).CameraPose.FocusDistance = fVar10;
        fVar8 = (param_3->CameraPose).SensorHeight;
        fVar9 = (param_3->CameraPose).SensorHorizontalOffset;
        fVar10 = (param_3->CameraPose).SensorVerticalOffset;
        (pFVar3->Result).CameraPose.SensorWidth = (param_3->CameraPose).SensorWidth;
        (pFVar3->Result).CameraPose.SensorHeight = fVar8;
        (pFVar3->Result).CameraPose.SensorHorizontalOffset = fVar9;
        (pFVar3->Result).CameraPose.SensorVerticalOffset = fVar10;
        fVar8 = (param_3->CameraPose).SqueezeFactor;
        fVar9 = (param_3->CameraPose).Overscan;
        iVar22 = (param_3->CameraPose).DiaphragmBladeCount;
        (pFVar3->Result).CameraPose.ISO = (param_3->CameraPose).ISO;
        (pFVar3->Result).CameraPose.SqueezeFactor = fVar8;
        (pFVar3->Result).CameraPose.Overscan = fVar9;
        (pFVar3->Result).CameraPose.DiaphragmBladeCount = iVar22;
        fVar8 = (param_3->CameraPose).FarClippingPlane;
        fVar9 = (param_3->CameraPose).PhysicalCameraBlendWeight;
        bVar17 = (param_3->CameraPose).EnablePhysicalCamera;
        bVar11 = (param_3->CameraPose).ConstrainAspectRatio;
        bVar12 = (param_3->CameraPose).OverrideAspectRatioAxisConstraint;
        TVar13.Value = (param_3->CameraPose).AspectRatioAxisConstraint.Value;
        (pFVar3->Result).CameraPose.NearClippingPlane = (param_3->CameraPose).NearClippingPlane;
        (pFVar3->Result).CameraPose.FarClippingPlane = fVar8;
        (pFVar3->Result).CameraPose.PhysicalCameraBlendWeight = fVar9;
        (pFVar3->Result).CameraPose.EnablePhysicalCamera = bVar17;
        (pFVar3->Result).CameraPose.ConstrainAspectRatio = bVar11;
        (pFVar3->Result).CameraPose.OverrideAspectRatioAxisConstraint = bVar12;
        (pFVar3->Result).CameraPose.AspectRatioAxisConstraint =
             (TEnumAsByte<EAspectRatioAxisConstraint>)TVar13.Value;
        FVar14 = (param_3->CameraPose).ChangedFlags;
        uVar15 = *(undefined3 *)&(param_3->CameraPose).field_0x85;
        (pFVar3->Result).CameraPose.ProjectionMode =
             (TEnumAsByte<ECameraProjectionMode::Type>)(param_3->CameraPose).ProjectionMode.Value;
        (pFVar3->Result).CameraPose.ChangedFlags = FVar14;
        *(undefined3 *)&(pFVar3->Result).CameraPose.field_0x85 = uVar15;
        FCameraVariableTable::InternalOverride
                  (pFVar26,&param_3->VariableTable,PublicOnly,(FCameraVariableTableFlags *)0x0,false
                   ,(FCameraVariableTableFlags *)0x0);
        FCameraRigJoints::OverrideAll(&(pFVar3->Result).CameraRigJoints,&param_3->CameraRigJoints);
        FPostProcessSettings::operator=
                  (&(pFVar3->Result).PostProcessSettings.PostProcessSettings,
                   &(param_3->PostProcessSettings).PostProcessSettings);
        FCameraVariableTable::InternalOverride
                  (pFVar26,&(pFVar3->ContextResult).VariableTable,None,
                   (FCameraVariableTableFlags *)0x0,false,(FCameraVariableTableFlags *)0x0);
        FCameraContextDataTable::OverrideAll
                  (&(pFVar3->Result).ContextDataTable,&(pFVar3->ContextResult).ContextDataTable);
        if (((param_3->bIsCameraCut != false) || ((pFVar3->ContextResult).bIsCameraCut != false)) ||
           ((pFVar3->Flags).bForceCameraCut)) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        (pFVar3->Result).bIsCameraCut = bVar17;
        local_b8.EvaluationParams = &local_138;
        (pFVar3->Result).bIsValid = true;
        iVar22 = (pFVar3->EvaluatorHierarchy).FlattenedHierarchy.ArrayNum;
        pFVar24 = (pFVar3->EvaluatorHierarchy).FlattenedHierarchy.AllocatorInstance.Data;
        pFVar20 = pFVar24 + (longlong)iVar22 * 8;
        local_110 = pFVar20;
        local_e0.VariableTable = pFVar26;
        local_b8.LastCameraPose = &this_00->CameraPose;
        while( true ) {
          if ((pFVar3->EvaluatorHierarchy).FlattenedHierarchy.ArrayNum != iVar22) {
            local_148[0] = 0;
            `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_148);
            pFVar20 = local_110;
          }
          if (pFVar24 == pFVar20) break;
          if (((*(FCameraNodeEvaluator **)pFVar24)->PrivateFlags & NeedsParameterUpdate) != None) {
            FCameraNodeEvaluator::UpdateParameters
                      (*(FCameraNodeEvaluator **)pFVar24,&local_b8,&local_e0);
            pFVar20 = local_110;
          }
          pFVar24 = pFVar24 + 8;
        }
        this_01 = (FCameraNodeEvaluator *)pFVar3->RootEvaluator->BlendEvaluator;
        if ((this_01 == (FCameraNodeEvaluator *)0x0) ||
           (FCameraNodeEvaluator::Run(this_01,&local_138,this_00),
           this_01 == (FCameraNodeEvaluator *)0x0)) {
          FCameraVariableTable::InternalOverride
                    (local_108,&(pFVar3->Result).VariableTable,InputOnly,
                     (FCameraVariableTableFlags *)0x0,false,(FCameraVariableTableFlags *)0x0);
        }
        else {
          local_98.EvaluationParams = &local_138;
          local_98.ChildVariableTable = &(pFVar3->Result).VariableTable;
          local_c8.VariableTable = local_108;
          local_98.VariableTableFilter = InputOnly;
          local_c8.bIsBlendFull = false;
          local_c8.bIsBlendFinished = false;
          local_98.LastCameraPose = &this_00->CameraPose;
          FBlendCameraNodeEvaluator::BlendParameters
                    ((FBlendCameraNodeEvaluator *)this_01,&local_98,&local_c8);
        }
        this_02 = pFVar3->RootEvaluator->RootEvaluator;
        if (this_02 != (FCameraNodeEvaluator *)0x0) {
          FCameraNodeEvaluator::Run(this_02,&local_138,this_00);
        }
        param_3 = local_100;
        if (this_01 == (FCameraNodeEvaluator *)0x0) {
          FCameraNodeEvaluationResult::OverrideAll(local_100,this_00,false);
        }
        else {
          local_a8.ChildParams = &local_138;
          local_f0.BlendedResult = local_100;
          local_f0.bIsBlendFull = false;
          local_f0.bIsBlendFinished = false;
          local_a8.ChildResult = this_00;
          FBlendCameraNodeEvaluator::BlendResults
                    ((FBlendCameraNodeEvaluator *)this_01,&local_a8,&local_f0);
          pFVar4[lVar23 * 0xc + 9] = (FScriptContainerElement)local_f0.bIsBlendFinished;
          pFVar4[lVar23 * 0xc + 8] = (FScriptContainerElement)local_f0.bIsBlendFull;
        }
        if (*(int *)(pFVar4 + lVar23 * 0xc + 4) == 1) {
          if ((pFVar4[lVar23 * 0xc + 8] != (FScriptContainerElement)0x0) &&
             (pFVar4[lVar23 * 0xc + 9] != (FScriptContainerElement)0x0)) {
            *(undefined4 *)(pFVar4 + lVar23 * 0xc + 4) = 0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_138.EvaluationContext.SharedReferenceCount.ReferenceController);
            param_2 = local_d8;
            goto LAB_14d5b3f81;
          }
        }
        else if (((*(int *)(pFVar4 + lVar23 * 0xc + 4) == 2) &&
                 (pFVar4[lVar23 * 0xc + 8] != (FScriptContainerElement)0x0)) &&
                (pFVar4[lVar23 * 0xc + 9] != (FScriptContainerElement)0x0)) {
          FVar21 = (ForElementType<int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<int>)0x0) {
            FVar21 = local_68.SecondaryData;
          }
          if ((ulonglong)FVar21 <= (ulonglong)FVar27) {
            FVar21 = (ForElementType<int>)&local_68;
            if (local_68.SecondaryData != (ForElementType<int>)0x0) {
              FVar21 = local_68.SecondaryData;
            }
            if (((ulonglong)FVar27 < (ulonglong)((longlong)FVar21 + (longlong)local_4c * 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (local_50 == local_4c) {
            local_50 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_68,&local_4c);
          }
          lVar23 = (longlong)local_50;
          FVar21 = (ForElementType<int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<int>)0x0) {
            FVar21 = local_68.SecondaryData;
          }
          local_50 = local_50 + 1;
          *(uint *)((longlong)FVar21 + lVar23 * 4) = *(uint *)FVar27;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.EvaluationContext.SharedReferenceCount.ReferenceController);
        param_2 = local_d8;
      }
LAB_14d5b3f81:
      pFVar26 = &param_3->VariableTable;
      local_f8 = local_f8 + 1;
      FVar27 = (ForElementType<int>)((longlong)FVar27 + 0x20);
    } while (local_f8 != local_d0);
  }
  pFVar16 = local_140;
  if (((param_2->EvaluationType != IK) && (param_2->EvaluationType != ViewRotationPreview)) &&
     (uVar25 = local_50 - 1, -1 < (int)uVar25)) {
    pTVar1 = &local_140->EntryExtraInfos;
    pTVar7 = &local_140->EntryExtraInfos;
    lVar23 = (longlong)(int)uVar25 * 4;
    do {
      this_03 = local_140;
      uVar18 = 0;
      if ((int)uVar25 < local_50) {
        uVar18 = ~uVar25 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar27 = (ForElementType<int>)&local_68;
      if (local_68.SecondaryData != (ForElementType<int>)0x0) {
        FVar27 = local_68.SecondaryData;
      }
      FBlendStackCameraNodeEvaluator::PopEntry
                ((FBlendStackCameraNodeEvaluator *)this_03,*(int *)(lVar23 + (longlong)FVar27));
      uVar18 = 0;
      if ((int)uVar25 < local_50) {
        uVar18 = ~uVar25 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar27 = (ForElementType<int>)&local_68;
      if (local_68.SecondaryData != (ForElementType<int>)0x0) {
        FVar27 = local_68.SecondaryData;
      }
      uVar18 = *(uint *)(lVar23 + (longlong)FVar27);
      uVar19 = 0;
      if ((int)uVar18 < (pFVar16->EntryExtraInfos).ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0xc;
      iVar22 = (pFVar16->EntryExtraInfos).ArrayNum + ~uVar18;
      if (iVar22 != 0) {
        memmove(pFVar4,pFVar4 + 0xc,(longlong)iVar22 * 0xc);
      }
      piVar2 = &(pFVar16->EntryExtraInfos).ArrayNum;
      *piVar2 = *piVar2 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,&pTVar1->AllocatorInstance,(pFVar16->EntryExtraInfos).ArrayNum,
                 &pTVar7->ArrayMax);
      lVar23 = lVar23 + -4;
      uVar25 = uVar25 - 1;
    } while (-1 < (int)uVar25);
  }
  if (local_68.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  return;
}

// Remove @ 14d5cac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::Remove
          (FPersistentBlendStackCameraNodeEvaluator *this,FBlendStackCameraRemoveParams *param_1)

{
  ForElementType<int> FVar1;
  FCameraEvaluationContext *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FCameraEvaluationContext *pFVar9;
  ForElementType<int> FVar10;
  FCameraEvaluationContext *pFVar11;
  FCameraEvaluationContext *pFVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  uint *local_98;
  ForElementType<int> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  uint local_68;
  uint local_64;
  undefined1 local_60 [8];
  ForElementType<int> local_58;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar11 = (FCameraEvaluationContext *)0x0;
  local_3c = 4;
  local_58.SecondaryData = (ForElementType<int>)0x0;
  local_40 = 0;
  if ((param_1->EntryID).Value == 0xffffffff) {
    local_68 = (uint)this->_padding_;
    FVar10 = local_90;
    while (uVar4 = local_68 - 1, local_90 = FVar10, local_68 = uVar4, -1 < (int)uVar4) {
      iVar6 = (int)this->_padding_;
      local_90 = (ForElementType<int>)(longlong)iVar6;
      uVar7 = 0;
      if ((int)uVar4 < iVar6) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_98 = (uint *)(ulonglong)uVar4;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar10 = local_90;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_90 = FVar10;
      lVar13 = (ulonglong)uVar4 * 0x14c0 + this->_padding_;
      FVar10 = local_90;
      if (*(UCameraRigAsset **)(lVar13 + 0x18) == (param_1->CameraRig).field0_0x0.DebugPtr) {
        pFVar2 = *(FCameraEvaluationContext **)(lVar13 + 0x10);
        pFVar9 = pFVar2;
        pFVar12 = pFVar11;
        if (pFVar2 != (FCameraEvaluationContext *)0x0) {
          iVar6 = *(int *)&pFVar2->field_0x8;
          do {
            pFVar9 = pFVar11;
            if (iVar6 == 0) goto LAB_14d5cae45;
            LOCK();
            iVar8 = *(int *)&pFVar2->field_0x8;
            bVar5 = iVar6 == iVar8;
            if (bVar5) {
              *(int *)&pFVar2->field_0x8 = iVar6 + 1;
              iVar8 = iVar6;
            }
            UNLOCK();
            iVar6 = iVar8;
          } while (!bVar5);
          pFVar9 = pFVar2;
          pFVar12 = *(FCameraEvaluationContext **)(lVar13 + 8);
        }
LAB_14d5cae45:
        pFVar2 = (param_1->EvaluationContext).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar9);
        FVar10 = local_90;
        if (pFVar2 == pFVar12) {
          FVar10 = (ForElementType<int>)&local_58;
          if (local_58.SecondaryData != (ForElementType<int>)0x0) {
            FVar10 = local_58.SecondaryData;
          }
          if ((ulonglong)FVar10 <= &local_68) {
            FVar10 = (ForElementType<int>)&local_58;
            if (local_58.SecondaryData != (ForElementType<int>)0x0) {
              FVar10 = local_58.SecondaryData;
            }
            if (&local_68 < (uint *)((longlong)FVar10 + (longlong)local_3c * 4)) {
              local_80 = (longlong)local_40;
              local_78 = 4;
              local_98 = &local_68;
              local_90 = (ForElementType<int>)&local_58;
              if (local_58.SecondaryData != (ForElementType<int>)0x0) {
                local_90 = local_58.SecondaryData;
              }
              local_88 = (longlong)local_3c;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          iVar6 = local_40;
          if (local_40 == local_3c) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,&local_58,&local_3c);
          }
          local_40 = iVar6 + 1;
          FVar10 = (ForElementType<int>)&local_58;
          if (local_58.SecondaryData != (ForElementType<int>)0x0) {
            FVar10 = local_58.SecondaryData;
          }
          *(uint *)((longlong)FVar10 + (longlong)iVar6 * 4) = local_68;
          FVar10 = local_90;
        }
      }
    }
  }
  else {
    local_64 = FBlendStackCameraNodeEvaluator::IndexOfEntry
                         ((FBlendStackCameraNodeEvaluator *)this,
                          (FBlendStackEntryID)(param_1->EntryID).Value);
    if (local_64 != 0xffffffff) {
      FVar10 = (ForElementType<int>)&local_58;
      if (local_58.SecondaryData != (ForElementType<int>)0x0) {
        FVar10 = local_58.SecondaryData;
      }
      if ((ulonglong)FVar10 <= &local_64) {
        FVar10 = (ForElementType<int>)&local_58;
        if (local_58.SecondaryData != (ForElementType<int>)0x0) {
          FVar10 = local_58.SecondaryData;
        }
        if (&local_64 < (uint *)((longlong)FVar10 + (longlong)local_3c * 4)) {
          local_80 = (longlong)local_40;
          local_78 = 4;
          local_98 = &local_64;
          local_90 = (ForElementType<int>)&local_58;
          if (local_58.SecondaryData != (ForElementType<int>)0x0) {
            local_90 = local_58.SecondaryData;
          }
          local_88 = (longlong)local_3c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      iVar6 = local_40;
      if (local_40 == local_3c) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_58,&local_3c);
      }
      local_40 = iVar6 + 1;
      FVar10 = (ForElementType<int>)&local_58;
      if (local_58.SecondaryData != (ForElementType<int>)0x0) {
        FVar10 = local_58.SecondaryData;
      }
      *(uint *)((longlong)FVar10 + (longlong)iVar6 * 4) = local_64;
    }
  }
  iVar6 = local_40;
  FVar10 = (ForElementType<int>)&local_58;
  if (local_58.SecondaryData != (ForElementType<int>)0x0) {
    FVar10 = local_58.SecondaryData;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar10 + (longlong)local_40 * 4);
  while( true ) {
    if (local_40 != iVar6) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_60);
    }
    if (FVar10 == FVar1) break;
    RemoveEntry(this,*(int *)FVar10,(param_1->TransitionOverride).field0_0x0.DebugPtr,
                param_1->bRemoveImmediately);
    FVar10 = (ForElementType<int>)((longlong)FVar10 + 4);
  }
  if (local_58.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  return;
}

// RemoveAll @ 14d5cafc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::RemoveAll
          (FPersistentBlendStackCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,bool param_2)

{
  ForElementType<int> FVar1;
  FCameraEvaluationContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FCameraEvaluationContext *pFVar8;
  FCameraEvaluationContext *pFVar9;
  uint uVar10;
  ForElementType<int> FVar11;
  FCameraEvaluationContext *pFVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  uint *local_88;
  ForElementType<int> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  uint local_58;
  undefined1 local_54 [4];
  ForElementType<int> local_50;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar9 = (FCameraEvaluationContext *)0x0;
  local_50.SecondaryData = (ForElementType<int>)0x0;
  local_34 = 4;
  uVar10 = (int)this->_padding_ - 1;
  local_38 = 0;
  local_58 = uVar10;
  if (-1 < (int)uVar10) {
    do {
      iVar7 = (int)this->_padding_;
      uVar5 = 0;
      if ((int)uVar10 < iVar7) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      local_58 = uVar10;
      if (uVar5 == 0) {
        local_88 = (uint *)(ulonglong)uVar10;
        local_80 = (ForElementType<int>)(longlong)iVar7;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar13 = (ulonglong)uVar10 * 0x14c0 + this->_padding_;
      pFVar2 = *(FCameraEvaluationContext **)(lVar13 + 0x10);
      pFVar8 = pFVar2;
      pFVar12 = pFVar9;
      if (pFVar2 != (FCameraEvaluationContext *)0x0) {
        iVar7 = *(int *)&pFVar2->field_0x8;
        do {
          pFVar8 = pFVar9;
          if (iVar7 == 0) goto LAB_14d5cb0a5;
          LOCK();
          iVar6 = *(int *)&pFVar2->field_0x8;
          bVar4 = iVar7 == iVar6;
          if (bVar4) {
            *(int *)&pFVar2->field_0x8 = iVar7 + 1;
            iVar6 = iVar7;
          }
          UNLOCK();
          iVar7 = iVar6;
        } while (!bVar4);
        pFVar8 = pFVar2;
        pFVar12 = *(FCameraEvaluationContext **)(lVar13 + 8);
      }
LAB_14d5cb0a5:
      pFVar2 = param_1->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      if (pFVar2 == pFVar12) {
        FVar11 = (ForElementType<int>)&local_50;
        if (local_50.SecondaryData != (ForElementType<int>)0x0) {
          FVar11 = local_50.SecondaryData;
        }
        if ((ulonglong)FVar11 <= &local_58) {
          FVar11 = (ForElementType<int>)&local_50;
          if (local_50.SecondaryData != (ForElementType<int>)0x0) {
            FVar11 = local_50.SecondaryData;
          }
          if (&local_58 < (uint *)((longlong)FVar11 + (longlong)(int)local_34 * 4)) {
            local_70 = (longlong)(int)local_38;
            local_68 = 4;
            local_88 = &local_58;
            local_80 = (ForElementType<int>)&local_50;
            if (local_50.SecondaryData != (ForElementType<int>)0x0) {
              local_80 = local_50.SecondaryData;
            }
            local_78 = (longlong)(int)local_34;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        uVar10 = local_38;
        if (local_38 == local_34) {
          uVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_50,(int *)&local_34);
        }
        local_38 = uVar10 + 1;
        FVar11 = (ForElementType<int>)&local_50;
        if (local_50.SecondaryData != (ForElementType<int>)0x0) {
          FVar11 = local_50.SecondaryData;
        }
        *(uint *)((longlong)FVar11 + (longlong)(int)uVar10 * 4) = local_58;
      }
      uVar10 = local_58 - 1;
    } while (-1 < (int)uVar10);
    pFVar9 = (FCameraEvaluationContext *)(ulonglong)local_38;
    local_58 = uVar10;
  }
  iVar7 = (int)pFVar9;
  FVar11 = (ForElementType<int>)&local_50;
  if (local_50.SecondaryData != (ForElementType<int>)0x0) {
    FVar11 = local_50.SecondaryData;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar11 + (longlong)iVar7 * 4);
  while( true ) {
    if ((int)pFVar9 != iVar7) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_54);
    }
    if (FVar11 == FVar1) break;
    RemoveEntry(this,*(int *)FVar11,(UCameraRigTransition *)0x0,param_2);
    pFVar9 = (FCameraEvaluationContext *)(ulonglong)local_38;
    FVar11 = (ForElementType<int>)((longlong)FVar11 + 4);
  }
  if (local_50.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveEntry @ 14d5cb4f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::RemoveEntry
          (FPersistentBlendStackCameraNodeEvaluator *this,int param_1,UCameraRigTransition *param_2,
          bool param_3)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  byte bVar1;
  FScriptContainerElement *pFVar2;
  UCameraRigAsset *pUVar3;
  UCameraNode *pUVar4;
  FBlendCameraNodeEvaluator *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  atomic<int> aVar11;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *pTVar12;
  FInterruptedBlendCameraNodeEvaluator *this_01;
  FReverseBlendCameraNodeEvaluator *this_02;
  FInterruptedBlendCameraNodeEvaluator *this_03;
  longlong lVar13;
  longlong lVar14;
  FCameraNodeEvaluatorBuilder local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_e8;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  FCameraNodeEvaluatorBuildParams local_c8;
  FCameraNodeBlendInterruptionParams local_c0;
  FCameraNodeEvaluatorInitializeParams local_b8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_58;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_48;
  TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> local_38;
  
  lVar13 = (longlong)param_1;
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6916092038958022513>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\PersistentBlendStackCameraNode.cpp"
                         ,0x8f,"Entries.IsValidIndex(EntryIndex)"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_3) {
    FBlendStackCameraNodeEvaluator::PopEntry((FBlendStackCameraNodeEvaluator *)this,param_1);
    TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
    ::RemoveAt(&this->EntryExtraInfos,param_1,Default);
    return;
  }
  uVar10 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = lVar13 * 0x14c0 + this->_padding_;
  uVar10 = 0;
  if (param_1 < (this->EntryExtraInfos).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->EntryExtraInfos).AllocatorInstance.Data;
  if (param_2 == (UCameraRigTransition *)0x0) {
    local_e8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar14 + 0x10);
    bVar1 = *(byte *)(lVar14 + 0x14b0);
    pUVar3 = *(UCameraRigAsset **)(lVar14 + 0x18);
    local_e8.Object = (FCameraEvaluationContext *)0x0;
    local_58.Object = (FCameraEvaluationContext *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5cb68b;
        }
        LOCK();
        aVar11 = (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar7 == aVar11;
        if (bVar8) {
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar8);
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_e8.Object = *(FCameraEvaluationContext **)(lVar14 + 8);
      }
    }
LAB_14d5cb68b:
    pTVar12 = TArrayView<TObjectPtr<UCameraRigTransition>_const_,int>::
              TArrayView<TObjectPtr<UCameraRigTransition>_const_,int><TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>_>
                        (&local_38,
                         (TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)(lVar14 + 0x18) + 0x100));
    local_48.DataPtr = pTVar12->DataPtr;
    local_48.ArrayNum = pTVar12->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
    param_2 = FCameraRigTransitionFinder::FindTransition
                        (&local_48,&local_e8,pUVar3,(UCameraAsset *)0x0,(bool)(bVar1 >> 3 & 1),
                         &local_58,(UCameraRigAsset *)0x0,(UCameraAsset *)0x0);
    if (param_2 == (UCameraRigTransition *)0x0) goto LAB_14d5cb8e2;
  }
  pUVar4 = (UCameraNode *)(param_2->Blend).field0_0x0.DebugPtr;
  if (pUVar4 != (UCameraNode *)0x0) {
    if (*(int *)(pFVar2 + lVar13 * 0xc + 4) == 2) {
      return;
    }
    local_c8.Builder = &local_res8;
    this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)(lVar14 + 0x28);
    local_res8.Storage = (FCameraNodeEvaluatorStorage *)this_00;
    this_01 = (FInterruptedBlendCameraNodeEvaluator *)
              FCameraNodeEvaluatorBuildParams::BuildEvaluator(&local_c8,pUVar4);
    if (this_01 == (FInterruptedBlendCameraNodeEvaluator *)0x0) {
      this_01 = (FInterruptedBlendCameraNodeEvaluator *)0x0;
    }
    else {
      cVar9 = (**(code **)(this_01->_padding_ + 8))
                        (this_01,&FBlendCameraNodeEvaluator::PrivateTypeID);
      if ((cVar9 == '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsKindOf<Type>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                             ,0x123,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_b8.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_d0.ReferenceController = *(TReferenceControllerBase<1> **)(lVar14 + 0x10);
    local_b8.Evaluator = (FCameraSystemEvaluator *)this->_padding_;
    local_b8.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_b8.LastActiveCameraRigInfo.InstanceID.Value = 0xffffffff;
    local_b8.LastActiveCameraRigInfo.InstanceID.Layer = None;
    local_b8.LastActiveCameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_b8.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_b8.LastActiveCameraRigInfo.CameraRig.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_b8.LastActiveCameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
    local_b8.LastActiveCameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
    local_b8.Layer = Main;
    local_b8.Hierarchy = (FCameraNodeEvaluatorHierarchy *)0x0;
    if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = (local_d0.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5cb7e6;
        }
        LOCK();
        aVar11 = (local_d0.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar7 == aVar11;
        if (bVar8) {
          (local_d0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar8);
      local_b8.EvaluationContext.Object = *(FCameraEvaluationContext **)(lVar14 + 8);
    }
LAB_14d5cb7e6:
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_b8.EvaluationContext.SharedReferenceCount,&local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    local_b8.Layer = *(ECameraRigLayer *)((longlong)&this->_padding_ + 4);
    FCameraNodeEvaluator::Initialize
              ((FCameraNodeEvaluator *)this_01,&local_b8,
               (FCameraNodeEvaluationResult *)(lVar14 + 0xab0));
    bVar8 = FBlendCameraNodeEvaluator::SetReversed((FBlendCameraNodeEvaluator *)this_01,true);
    if (!bVar8) {
      this_02 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                          (this_00,0x28,8);
      this_01 = (FInterruptedBlendCameraNodeEvaluator *)
                FReverseBlendCameraNodeEvaluator::FReverseBlendCameraNodeEvaluator
                          (this_02,(FBlendCameraNodeEvaluator *)this_01);
      TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
                (this_00,(FCameraNodeEvaluator *)this_01);
    }
    if (*(int *)(pFVar2 + lVar13 * 0xc + 4) == 1) {
      pFVar5 = *(FBlendCameraNodeEvaluator **)(*(longlong *)(lVar14 + 0x48) + 0x20);
      local_c0.InterruptedBlend = pFVar5;
      bVar8 = FBlendCameraNodeEvaluator::InitializeFromInterruption
                        ((FBlendCameraNodeEvaluator *)this_01,&local_c0);
      if (!bVar8) {
        this_03 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                            (this_00,0xa30,0x10);
        this_01 = FInterruptedBlendCameraNodeEvaluator::FInterruptedBlendCameraNodeEvaluator
                            (this_03,(FBlendCameraNodeEvaluator *)this_01,pFVar5);
        TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
                  (this_00,(FCameraNodeEvaluator *)this_01);
      }
    }
    FBlendStackRootCameraNodeEvaluator::SetBlendEvaluator
              (*(FBlendStackRootCameraNodeEvaluator **)(lVar14 + 0x48),
               (FBlendCameraNodeEvaluator *)this_01);
    *(undefined4 *)(pFVar2 + lVar13 * 0xc + 4) = 2;
    *(undefined2 *)(pFVar2 + lVar13 * 0xc + 8) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.EvaluationContext.SharedReferenceCount.ReferenceController);
    return;
  }
LAB_14d5cb8e2:
  FBlendStackCameraNodeEvaluator::PopEntry((FBlendStackCameraNodeEvaluator *)this,param_1);
  TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->EntryExtraInfos,param_1,Default);
  return;
}


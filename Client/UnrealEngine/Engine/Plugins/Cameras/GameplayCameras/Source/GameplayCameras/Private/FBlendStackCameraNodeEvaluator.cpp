// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 23

// FBlendStackCameraNodeEvaluator @ 14d542860

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::FBlendStackCameraNodeEvaluator
          (FBlendStackCameraNodeEvaluator *this)

{
  *(undefined8 *)&(this->OnCameraRigEventDelegate).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
  this->OwningEvaluator = (FCameraSystemEvaluator *)0x0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->NextEntryID = 0;
  this->Layer = None;
  *(undefined8 *)&this->OnCameraRigEventDelegate = 0;
  *(undefined8 *)&(this->OnCameraRigEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCameraRigEventDelegate).field_0x10 = 0;
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// ~FBlendStackCameraNodeEvaluator @ 14d544490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::~FBlendStackCameraNodeEvaluator
          (FBlendStackCameraNodeEvaluator *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  iVar1 = (this->Entries).ArrayNum;
  this->_padding_ = (longlong)&___7FBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
  PopEntries(this,iVar1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCameraRigEventDelegate).field_0x8,
             *(int *)&(this->OnCameraRigEventDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnCameraRigEventDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCameraRigEventDelegate);
  DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int>
            ((FCameraRigEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// BroadcastCameraRigEvent @ 14d5494f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::BroadcastCameraRigEvent
          (FBlendStackCameraNodeEvaluator *this,EBlendStackCameraRigEventType param_1,
          FCameraRigEntry *param_2,UCameraRigTransition *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  UCameraRigAsset *pUVar4;
  FBlendStackRootCameraNodeEvaluator *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  ECameraRigLayer EVar11;
  bool bVar12;
  char cVar13;
  atomic<int> aVar14;
  uint uVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  uint local_res8;
  undefined4 uStackX_c;
  FCameraEvaluationContext *local_res18;
  FDestructionSentinel local_a8;
  EBlendStackCameraRigEventType local_88;
  FBlendStackCameraNodeEvaluator *local_80;
  undefined8 local_78;
  FCameraEvaluationContext *local_70;
  TReferenceControllerBase<1> *local_68;
  UCameraRigAsset *pUStack_60;
  FCameraNodeEvaluationResult *local_58;
  FBlendStackRootCameraNodeEvaluator *pFStack_50;
  UCameraRigTransition *local_48;
  
  pUVar4 = (param_2->CameraRig).field0_0x0.DebugPtr;
  local_70 = (FCameraEvaluationContext *)0x0;
  local_68 = (TReferenceControllerBase<1> *)0x0;
  pUStack_60 = (UCameraRigAsset *)0x0;
  local_58 = (FCameraNodeEvaluationResult *)0x0;
  pFStack_50 = (FBlendStackRootCameraNodeEvaluator *)0x0;
  local_48 = (UCameraRigTransition *)0x0;
  local_78 = CONCAT35(local_78._5_3_,0xffffffff);
  pFVar5 = param_2->RootEvaluator;
  local_88 = param_1;
  local_80 = this;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar19 = (param_2->EvaluationContext).WeakReferenceCount.ReferenceController;
  local_res18 = (FCameraEvaluationContext *)0x0;
  if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
    local_res8 = (param_2->EntryID).Value;
    EVar11 = this->Layer;
    local_res18 = (FCameraEvaluationContext *)0x0;
  }
  else {
    aVar3 = pTVar19->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_res8 = (param_2->EntryID).Value;
        EVar11 = this->Layer;
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d5495e3;
      }
      LOCK();
      aVar14 = pTVar19->SharedReferenceCount;
      bVar20 = aVar3 == aVar14;
      if (bVar20) {
        pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar14 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar14;
    } while (!bVar20);
    local_res8 = (param_2->EntryID).Value;
    local_res18 = (param_2->EvaluationContext).Object;
    EVar11 = this->Layer;
    LOCK();
    pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14d5495e3:
  uStackX_c = CONCAT31(uStackX_c._1_3_,EVar11);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  pTVar9 = local_68;
  local_78 = CONCAT44(uStackX_c,local_res8);
  local_70 = local_res18;
  pTVar17 = pTVar19;
  pTVar10 = local_68;
  if (pTVar19 != local_68) {
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = pTVar19;
    if (local_68 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_68->SharedReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        plVar7 = &local_68->_padding_;
        local_68 = pTVar19;
        (**(code **)*plVar7)(pTVar9);
        LOCK();
        paVar1 = &pTVar9->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        pTVar10 = local_68;
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          pTVar10 = local_68;
        }
      }
    }
  }
  local_68 = pTVar10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUStack_60 = pUVar4;
  local_58 = &param_2->Result;
  pFStack_50 = pFVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UCameraRigTransition *)0x0))
  {
    GC::MarkAsReachable((UObject *)param_3);
  }
  local_48 = param_3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCameraRigEventDelegate,(FWriteAccessScope *)&local_a8);
  puVar2 = &(this->OnCameraRigEventDelegate).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  bVar20 = false;
  uVar16 = *(int *)&(this->OnCameraRigEventDelegate).field_0x10 - 1;
  if (-1 < (int)uVar16) {
    lVar18 = (longlong)(int)uVar16 << 4;
    bVar20 = false;
    do {
      uVar15 = 0;
      if ((int)uVar16 < *(int *)&(this->OnCameraRigEventDelegate).field_0x10) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)&(this->OnCameraRigEventDelegate).field_0x8;
      if (((*(int *)(lVar6 + 8 + lVar18) == 0) ||
          (plVar7 = *(longlong **)(lVar6 + lVar18), plVar7 == (longlong *)0x0)) ||
         (cVar13 = (**(code **)(*plVar7 + 0x68))(), cVar13 == '\0')) {
        bVar20 = true;
      }
      lVar18 = lVar18 + -0x10;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  puVar2 = &(this->OnCameraRigEventDelegate).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + -1;
  if (bVar20) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnCameraRigEventDelegate
               ,false);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  return;
}

// BuildDetailedDebugBlock @ 14d54c660

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackCameraDebugBlock * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::BuildDetailedDebugBlock
          (FBlendStackCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FLinearColor *param_2,FLinearColor *param_3,FCameraDebugBlockBuilder *param_4)

{
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *pTVar2;
  FScriptContainerElement *pFVar3;
  FCameraNodeEvaluator *this_00;
  code *pcVar4;
  FCameraDebugBlockBuilder *this_01;
  bool bVar5;
  uint uVar6;
  FBlendStackCameraDebugBlock *pFVar7;
  FCameraDebugBlock *this_02;
  FCameraDebugBlock *pFVar8;
  FCameraNodeEvaluationResultDebugBlock *pFVar9;
  FCameraPoseDebugBlock *pFVar10;
  FVariableTableDebugBlock *pFVar11;
  FContextDataTableDebugBlock *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FName local_res8;
  FCameraDebugBlockBuildParams *local_res10;
  FLinearColor *local_res18;
  FLinearColor *local_res20;
  FString local_68;
  FLinearColor_u_0 local_58;
  
  this_01 = param_4;
  pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_4->Storage;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pFVar7 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (pTVar2,0x48,8);
  uVar13 = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar7->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar7->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar7->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar7->_padding_ = 0;
  pFVar7->_padding_ = (longlong)&___7FBlendStackCameraDebugBlock_Cameras_UE__6B_;
  *(undefined8 *)&(pFVar7->StartEndColors).field_0x0 = 0;
  *(undefined8 *)&(pFVar7->StartEndColors).field_0x8 = 0;
  *(undefined8 *)&(pFVar7->StartEndColors).field_0x10 = 0;
  *(undefined8 *)&(pFVar7->StartEndColors).field_0x18 = 0;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (pTVar2,(FCameraDebugBlock *)pFVar7);
  if (0 < (this->Entries).ArrayNum) {
    param_4 = (FCameraDebugBlockBuilder *)0x0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FBlendStackCameraDebugBlock *)(*pcVar4)();
        return pFVar7;
      }
      pFVar14 = (FScriptContainerElement *)
                ((longlong)&param_4->Storage + (longlong)(this->Entries).AllocatorInstance.Data);
      LerpLinearColorUsingHSV
                ((FLinearColor *)&local_58._s_0,param_2,param_3,uVar13,(this->Entries).ArrayNum);
      pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_01->Storage;
      this_02 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                          (pTVar2,0x58,8);
      pTVar1 = &this_02[1].Children;
      this_02[1]._padding_ = 0;
      this_02[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_02[1].Attachments.ArrayNum = 0;
      this_02[2]._padding_ = 0;
      this_02->_padding_ = (longlong)&___7FBlendStackEntryCameraDebugBlock_Cameras_UE__6B_;
      (this_02->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_02->Attachments).ArrayNum = 0;
      (this_02->Attachments).ArrayMax = 0;
      (this_02->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_02->Children).ArrayNum = 0;
      (this_02->Children).ArrayMax = 0;
      this_02[1].Attachments.ArrayMax = -1;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      this_02[1].Children.ArrayNum = 0;
      this_02[1].Children.ArrayMax = 0;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                (pTVar2,this_02);
      *(uint *)&this_02[1]._padding_ = uVar13;
      *(undefined8 *)((longlong)&this_02[1]._padding_ + 4) = local_58._0_8_;
      *(undefined8 *)((longlong)&this_02[1].Attachments.AllocatorInstance.Data + 4) = local_58._8_8_
      ;
      this_02[1].Attachments.ArrayMax = *(int *)pFVar14;
      if (*(longlong *)(pFVar14 + 0x18) == 0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res8 = *(FName *)(*(longlong *)(pFVar14 + 0x18) + 0x18);
        ::FName::ToString(&local_res8,&local_68);
      }
      if (pTVar1 != (TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)
                    &local_68) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_68.Data.AllocatorInstance.Data;
        this_02[1].Children.ArrayNum = local_68.Data.ArrayNum;
        this_02[1].Children.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      *(byte *)&this_02[2]._padding_ = (byte)pFVar14[0x14b0] >> 3 & 1;
      FCameraDebugBlock::AddChild((FCameraDebugBlock *)pFVar7,this_02);
      if ((*(longlong *)(pFVar14 + 0x48) == 0) ||
         (this_00 = *(FCameraNodeEvaluator **)(*(longlong *)(pFVar14 + 0x48) + 0x20),
         this_00 == (FCameraNodeEvaluator *)0x0)) {
        pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_01->Storage;
        pFVar8 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                           (pTVar2,0x28,8);
        pFVar8->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
        (pFVar8->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Attachments).ArrayNum = 0;
        (pFVar8->Attachments).ArrayMax = 0;
        (pFVar8->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Children).ArrayNum = 0;
        (pFVar8->Children).ArrayMax = 0;
        TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                  (pTVar2,pFVar8);
        FCameraDebugBlock::AddChild(this_02,pFVar8);
      }
      else {
        FCameraDebugBlockBuilder::StartParentDebugBlockOverride(this_01,this_02);
        FCameraNodeEvaluator::BuildDebugBlocks(this_00,local_res10,this_01);
        FCameraDebugBlockBuilder::EndParentDebugBlockOverride(this_01);
      }
      pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_01->Storage;
      pFVar9 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                         (pTVar2,0x30,8);
      pFVar9 = FCameraNodeEvaluationResultDebugBlock::FCameraNodeEvaluationResultDebugBlock(pFVar9);
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                (pTVar2,(FCameraDebugBlock *)pFVar9);
      FCameraDebugBlock::AddChild(this_02,(FCameraDebugBlock *)pFVar9);
      FCameraNodeEvaluationResultDebugBlock::Initialize
                (pFVar9,(FCameraNodeEvaluationResult *)(pFVar14 + 0xab0),this_01);
      pFVar10 = FCameraNodeEvaluationResultDebugBlock::GetCameraPoseDebugBlock(pFVar9);
      ::FString::operator=
                (&pFVar10->ShowUnchangedCVarName,L"GameplayCameras.Debug.BlendStack.ShowUnchanged");
      pFVar11 = FCameraNodeEvaluationResultDebugBlock::GetVariableTableDebugBlock(pFVar9);
      ::FString::operator=
                (&pFVar11->ShowVariableIDsCVarName,
                 L"GameplayCameras.Debug.BlendStack.ShowVariableIDs");
      pFVar12 = FCameraNodeEvaluationResultDebugBlock::GetContextDataTableDebugBlock(pFVar9);
      ::FString::operator=
                (&pFVar12->ShowDataIDsCVarName,L"GameplayCameras.Debug.BlendStack.ShowDataIDs");
      uVar13 = uVar13 + 1;
      param_4 = (FCameraDebugBlockBuilder *)&param_4[0x84].VisitFlags;
      param_2 = local_res18;
      param_3 = local_res20;
    } while ((int)uVar13 < (this->Entries).ArrayNum);
  }
  return pFVar7;
}

// FreezeEntry @ 14d554740

/* WARNING: Removing unreachable block (ram,0x00014d554804) */
/* WARNING: Removing unreachable block (ram,0x00014d554810) */
/* WARNING: Removing unreachable block (ram,0x00014d554824) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::FreezeEntry
          (FBlendStackCameraNodeEvaluator *this,FCameraRigEntry *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FBlendCameraNodeEvaluator *pFVar3;
  FCameraNodeEvaluator *this_00;
  FCameraEvaluationContext *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  FCameraEvaluationContext *pFVar7;
  FCameraEvaluationContext *pFVar8;
  bool bVar9;
  undefined8 local_48 [2];
  FCameraNodeEvaluatorTeardownParams local_38;
  
  pFVar7 = (FCameraEvaluationContext *)0x0;
  if (param_1->RootEvaluator != (FBlendStackRootCameraNodeEvaluator *)0x0) {
    pFVar3 = param_1->RootEvaluator->BlendEvaluator;
    if (pFVar3 != (FBlendCameraNodeEvaluator *)0x0) {
      (**(code **)(*(longlong *)pFVar3 + 0x88))(pFVar3);
      *(undefined8 *)&pFVar3->field_0x10 = 0;
    }
    this_00 = param_1->RootEvaluator->RootEvaluator;
    if (this_00 != (FCameraNodeEvaluator *)0x0) {
      local_38.Evaluator = this->OwningEvaluator;
      pFVar4 = (FCameraEvaluationContext *)
               (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
      local_38.Layer = Main;
      local_38.EvaluationContext.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar8 = pFVar4;
      if (pFVar4 != (FCameraEvaluationContext *)0x0) {
        aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
        do {
          pFVar8 = pFVar7;
          if (aVar2 == (atomic<int>)0x0) goto LAB_14d5547e5;
          LOCK();
          aVar6 = *(atomic<int> *)&pFVar4->field_0x8;
          bVar9 = aVar2 == aVar6;
          if (bVar9) {
            *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
            aVar6 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar6;
        } while (!bVar9);
        pFVar7 = (param_1->EvaluationContext).Object;
        pFVar8 = pFVar4;
      }
LAB_14d5547e5:
      if (pFVar8 != (FCameraEvaluationContext *)0x0) {
        local_38.EvaluationContext.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar8;
      }
      local_38.EvaluationContext.Object = pFVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_38.Layer = this->Layer;
      FCameraNodeEvaluator::Teardown(this_00,&local_38);
      FCameraNodeEvaluatorStorage::DestroyEvaluatorTree(&param_1->EvaluatorStorage,this_00,true);
      param_1->RootEvaluator->RootEvaluator = (FCameraNodeEvaluator *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.EvaluationContext.SharedReferenceCount.ReferenceController);
    }
  }
  FCameraNodeEvaluatorHierarchy::Reset(&param_1->EvaluatorHierarchy);
  (param_1->RootNode).field0_0x0.DebugPtr = (UBlendStackRootCameraNode *)0x0;
  if (&param_1->EvaluationContext !=
      (TWeakPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)local_48) {
    pTVar5 = (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
    (param_1->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
    (param_1->EvaluationContext).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  (param_1->Flags).bIsFrozen = true;
  return;
}

// GetActiveCameraRigEvaluationInfo @ 14d555ef0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigEvaluationInfo * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::GetActiveCameraRigEvaluationInfo
          (FBlendStackCameraNodeEvaluator *this,FCameraRigEvaluationInfo *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  UCameraRigAsset *pUVar2;
  FCameraRigInstanceID FVar3;
  int iVar4;
  ECameraRigLayer EVar5;
  int iVar6;
  FCameraEvaluationContext *pFVar7;
  FCameraEvaluationContext *pFVar8;
  FCameraEvaluationContext *pFVar9;
  FCameraEvaluationContext *pFVar10;
  bool bVar11;
  uint local_res8;
  undefined4 uStackX_c;
  
  pFVar9 = (FCameraEvaluationContext *)0x0;
  if ((this->Entries).ArrayNum < 1) {
    (__return_storage_ptr__->InstanceID).Value = 0xffffffff;
    (__return_storage_ptr__->InstanceID).Layer = None;
    (__return_storage_ptr__->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
    (__return_storage_ptr__->EvaluationContext).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
    __return_storage_ptr__->LastResult = (FCameraNodeEvaluationResult *)0x0;
    __return_storage_ptr__->RootEvaluator = (FCameraNodeEvaluator *)0x0;
    return __return_storage_ptr__;
  }
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  pFVar10 = pFVar9;
  if (*(longlong *)(pFVar1 + 0x48) != 0) {
    pFVar10 = *(FCameraEvaluationContext **)(*(longlong *)(pFVar1 + 0x48) + 0x28);
  }
  pUVar2 = *(UCameraRigAsset **)(pFVar1 + 0x18);
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  pFVar8 = *(FCameraEvaluationContext **)(pFVar1 + 0x10);
  pFVar7 = pFVar8;
  if (pFVar8 == (FCameraEvaluationContext *)0x0) {
LAB_14d555f75:
    local_res8 = *(uint *)pFVar1;
    EVar5 = this->Layer;
    pFVar8 = pFVar7;
  }
  else {
    iVar4 = *(int *)&pFVar8->field_0x8;
    do {
      pFVar7 = pFVar9;
      if (iVar4 == 0) goto LAB_14d555f75;
      LOCK();
      iVar6 = *(int *)&pFVar8->field_0x8;
      bVar11 = iVar4 == iVar6;
      if (bVar11) {
        *(int *)&pFVar8->field_0x8 = iVar4 + 1;
        iVar6 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar6;
    } while (!bVar11);
    local_res8 = *(uint *)pFVar1;
    pFVar9 = *(FCameraEvaluationContext **)(pFVar1 + 8);
    EVar5 = this->Layer;
    LOCK();
    *(int *)&pFVar8->field_0x8 = *(int *)&pFVar8->field_0x8 + 1;
    UNLOCK();
  }
  uStackX_c = CONCAT31(uStackX_c._1_3_,EVar5);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  FVar3._4_4_ = uStackX_c;
  FVar3.Value = local_res8;
  __return_storage_ptr__->InstanceID = FVar3;
  (__return_storage_ptr__->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar8;
  (__return_storage_ptr__->EvaluationContext).Object = pFVar9;
  (__return_storage_ptr__->CameraRig).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  __return_storage_ptr__->LastResult = (FCameraNodeEvaluationResult *)(pFVar1 + 0xab0);
  __return_storage_ptr__->RootEvaluator = (FCameraNodeEvaluator *)pFVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetCameraRigEvaluationInfo @ 14d5563d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigEvaluationInfo * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::GetCameraRigEvaluationInfo
          (FBlendStackCameraNodeEvaluator *this,FCameraRigEvaluationInfo *__return_storage_ptr__,
          FBlendStackEntryID param_1)

{
  int iVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  uint uVar4;
  FCameraRigInstanceID FVar5;
  bool bVar6;
  ECameraRigLayer EVar7;
  uint uVar8;
  int iVar9;
  FCameraRigEvaluationInfo *pFVar10;
  FCameraEvaluationContext *pFVar11;
  FCameraEvaluationContext *pFVar12;
  FCameraEvaluationContext *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FCameraEvaluationContext *pFVar16;
  uint local_res8;
  undefined4 uStackX_c;
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar15 = (this->Entries).AllocatorInstance.Data;
  pFVar14 = pFVar15;
  do {
    if (pFVar14 == pFVar15 + (longlong)iVar1 * 0x14c0) {
LAB_14d556411:
      (__return_storage_ptr__->InstanceID).Value = 0xffffffff;
      (__return_storage_ptr__->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
      (__return_storage_ptr__->EvaluationContext).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
      __return_storage_ptr__->LastResult = (FCameraNodeEvaluationResult *)0x0;
      __return_storage_ptr__->RootEvaluator = (FCameraNodeEvaluator *)0x0;
      (__return_storage_ptr__->InstanceID).Layer = None;
      return __return_storage_ptr__;
    }
    if (*(uint *)pFVar14 == param_1.Value) {
      uVar4 = (uint)(((longlong)pFVar14 - (longlong)pFVar15) / 0x14c0);
      if (uVar4 != 0xffffffff) {
        pFVar13 = (FCameraEvaluationContext *)0x0;
        uVar8 = 0;
        if ((int)uVar4 < iVar1) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FCameraRigEvaluationInfo *)(*pcVar3)();
          return pFVar10;
        }
        pFVar15 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x14c0;
        pFVar16 = pFVar13;
        if (*(longlong *)(pFVar15 + 0x48) != 0) {
          pFVar16 = *(FCameraEvaluationContext **)(*(longlong *)(pFVar15 + 0x48) + 0x28);
        }
        pUVar2 = *(UCameraRigAsset **)(pFVar15 + 0x18);
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0))
        {
          GC::MarkAsReachable((UObject *)pUVar2);
        }
        pFVar12 = *(FCameraEvaluationContext **)(pFVar15 + 0x10);
        pFVar11 = pFVar12;
        if (pFVar12 == (FCameraEvaluationContext *)0x0) break;
        iVar1 = *(int *)&pFVar12->field_0x8;
        goto joined_r0x00014d556503;
      }
      goto LAB_14d556411;
    }
    pFVar14 = pFVar14 + 0x14c0;
  } while( true );
LAB_14d556525:
  local_res8 = *(uint *)pFVar15;
  EVar7 = this->Layer;
  pFVar12 = pFVar11;
  goto LAB_14d556531;
  while( true ) {
    LOCK();
    iVar9 = *(int *)&pFVar12->field_0x8;
    bVar6 = iVar1 == iVar9;
    if (bVar6) {
      *(int *)&pFVar12->field_0x8 = iVar1 + 1;
      iVar9 = iVar1;
    }
    UNLOCK();
    iVar1 = iVar9;
    if (bVar6) break;
joined_r0x00014d556503:
    pFVar11 = pFVar13;
    if (iVar1 == 0) goto LAB_14d556525;
  }
  local_res8 = *(uint *)pFVar15;
  pFVar13 = *(FCameraEvaluationContext **)(pFVar15 + 8);
  EVar7 = this->Layer;
  LOCK();
  *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
  UNLOCK();
LAB_14d556531:
  uStackX_c = CONCAT31(uStackX_c._1_3_,EVar7);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  FVar5._4_4_ = uStackX_c;
  FVar5.Value = local_res8;
  __return_storage_ptr__->InstanceID = FVar5;
  (__return_storage_ptr__->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar12;
  (__return_storage_ptr__->EvaluationContext).Object = pFVar13;
  (__return_storage_ptr__->CameraRig).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  __return_storage_ptr__->LastResult = (FCameraNodeEvaluationResult *)(pFVar15 + 0xab0);
  __return_storage_ptr__->RootEvaluator = (FCameraNodeEvaluator *)pFVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTypeID @ 14d558cb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::GetTypeID(FBlendStackCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// HasAnyRunningCameraRig @ 14d558e50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::HasAnyRunningCameraRig
          (FBlendStackCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  int iVar1;
  FCameraEvaluationContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar7 = (this->Entries).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x14c0;
  do {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar7 + 0x10);
    pFVar6 = (FCameraEvaluationContext *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d558ec0;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar9 = aVar3 == aVar4;
        if (bVar9) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar9);
      pFVar6 = *(FCameraEvaluationContext **)(pFVar7 + 8);
    }
LAB_14d558ec0:
    pFVar2 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pFVar2 == pFVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    pFVar7 = pFVar7 + 0x14c0;
  } while( true );
}

// IndexOfEntry @ 14d558ff0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::IndexOfEntry
          (FBlendStackCameraNodeEvaluator *this,FBlendStackEntryID param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->Entries).ArrayNum * 0x14c0) {
      return -1;
    }
    if (*(uint *)pFVar2 == param_1.Value) break;
    pFVar2 = pFVar2 + 0x14c0;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x14c0);
}

// InitializeEntry @ 14d559b20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::InitializeEntry
          (FBlendStackCameraNodeEvaluator *this,FCameraRigEntry *param_1,UCameraRigAsset *param_2,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_3,
          UBlendStackRootCameraNode *param_4,bool param_5)

{
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  uint uVar4;
  FCameraEvaluationContext *pFVar5;
  UCameraRigAsset *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  FBlendStackRootCameraNodeEvaluator *this_00;
  int *piVar12;
  char *pcVar13;
  FCameraRigEvaluationInfo *pFVar14;
  int iVar15;
  char *pcVar16;
  FCameraNodeEvaluatorInitializeParams local_d8;
  TObjectPtr<UCameraNode_const_>_u_0 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FCameraRigEvaluationInfo local_58;
  
  FCameraNodeEvaluatorHierarchy::Reset(&param_1->EvaluatorHierarchy);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (UBlendStackRootCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)param_4);
  }
  local_70 = &param_2->_padding_;
  local_78.DebugPtr = (UCameraNode *)param_4;
  this_00 = (FBlendStackRootCameraNodeEvaluator *)
            FCameraNodeEvaluatorStorage::BuildEvaluatorTree
                      (&param_1->EvaluatorStorage,
                       (FCameraNodeEvaluatorTreeBuildParams *)&local_78.ObjectPtr);
  FCameraVariableTable::Initialize
            (&(param_1->ContextResult).VariableTable,
             (FCameraVariableTableAllocationInfo *)&param_2->_padding_);
  FCameraContextDataTable::Initialize
            (&(param_1->ContextResult).ContextDataTable,
             (FCameraContextDataTableAllocationInfo *)&param_2->_padding_);
  FCameraVariableTable::Initialize
            (&(param_1->Result).VariableTable,
             (FCameraVariableTableAllocationInfo *)&param_2->_padding_);
  FCameraContextDataTable::Initialize
            (&(param_1->Result).ContextDataTable,
             (FCameraContextDataTableAllocationInfo *)&param_2->_padding_);
  if ((param_3->Object == (FCameraEvaluationContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = param_3->Object;
  FCameraVariableTable::OverrideAll
            (&(param_1->ContextResult).VariableTable,&(pFVar5->InitialResult).VariableTable,true);
  FCameraContextDataTable::InternalOverride
            (&(param_1->ContextResult).ContextDataTable,&(pFVar5->InitialResult).ContextDataTable,
             None);
  if (((param_5) && (pFVar5 = param_3->Object, pFVar5 != (FCameraEvaluationContext *)0x0)) &&
     (*(int *)&(pFVar5->ConditionalResults).field_0x8 !=
      *(int *)&(pFVar5->ConditionalResults).field_0x34)) {
    piVar12 = *(int **)&(pFVar5->ConditionalResults).field_0x40;
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)&(pFVar5->ConditionalResults).field_0x38;
    }
    iVar15 = *piVar12;
    if (iVar15 != -1) {
      do {
        pcVar13 = (char *)((longlong)iVar15 * 0xa20 + *(longlong *)&pFVar5->ConditionalResults);
        if (*pcVar13 == '\0') {
          pcVar16 = pcVar13 + 0x10;
          if (pcVar13 == (char *)0x0) {
            pcVar16 = (char *)0x0;
          }
          if (pcVar16 != (char *)0x0) {
            FCameraVariableTable::OverrideAll
                      (&(param_1->ContextResult).VariableTable,
                       (FCameraVariableTable *)(pcVar16 + 0x88),true);
            FCameraContextDataTable::InternalOverride
                      (&(param_1->ContextResult).ContextDataTable,
                       (FCameraContextDataTable *)(pcVar16 + 0xf8),None);
          }
          break;
        }
        iVar15 = *(int *)(pcVar13 + 0xa10);
      } while (iVar15 != -1);
    }
  }
  if (this_00 != (FBlendStackRootCameraNodeEvaluator *)0x0) {
    local_d8.EvaluationContext.Object = param_3->Object;
    local_d8.Hierarchy = &param_1->EvaluatorHierarchy;
    local_d8.Evaluator = this->OwningEvaluator;
    local_d8.EvaluationContext.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    local_d8.LastActiveCameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_d8.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_d8.LastActiveCameraRigInfo.CameraRig.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_d8.LastActiveCameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
    local_d8.LastActiveCameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
    local_d8.Layer = Main;
    if (local_d8.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = 0;
    uStack_60 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar14 = GetActiveCameraRigEvaluationInfo(this,&local_58);
    local_d8.LastActiveCameraRigInfo.InstanceID = pFVar14->InstanceID;
    pTVar1 = &pFVar14->EvaluationContext;
    if (&local_d8.LastActiveCameraRigInfo.EvaluationContext != pTVar1) {
      local_d8.LastActiveCameraRigInfo.EvaluationContext.Object = pTVar1->Object;
      pTVar1->Object = (FCameraEvaluationContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_d8.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount,
                 &(pFVar14->EvaluationContext).SharedReferenceCount);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (pFVar14->CameraRig).field0_0x0.DebugPtr, pUVar6 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_d8.LastActiveCameraRigInfo.CameraRig.field0_0x0 = (pFVar14->CameraRig).field0_0x0;
    local_d8.LastActiveCameraRigInfo.LastResult = pFVar14->LastResult;
    local_d8.LastActiveCameraRigInfo.RootEvaluator = pFVar14->RootEvaluator;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.EvaluationContext.SharedReferenceCount.ReferenceController);
    local_d8.Layer = this->Layer;
    FCameraNodeEvaluator::Initialize
              ((FCameraNodeEvaluator *)this_00,&local_d8,&param_1->ContextResult);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultBlendableParameters
            ((UBaseCameraObject *)param_2,&(param_1->ContextResult).VariableTable);
  FCameraPose::OverrideAll(&(param_1->Result).CameraPose,&(param_1->ContextResult).CameraPose);
  FCameraVariableTable::OverrideAll
            (&(param_1->Result).VariableTable,&(param_1->ContextResult).VariableTable,true);
  FCameraContextDataTable::InternalOverride
            (&(param_1->Result).ContextDataTable,&(param_1->ContextResult).ContextDataTable,None);
  FCameraRigJoints::OverrideAll
            (&(param_1->Result).CameraRigJoints,&(param_1->ContextResult).CameraRigJoints);
  FPostProcessSettingsCollection::OverrideAll
            (&(param_1->Result).PostProcessSettings,&(param_1->ContextResult).PostProcessSettings);
  (param_1->Result).bIsCameraCut = (param_1->ContextResult).bIsCameraCut;
  (param_1->Result).bIsValid = (param_1->ContextResult).bIsValid;
  uVar4 = this->NextEntryID;
  this->NextEntryID = uVar4 + 1;
  (param_1->EntryID).Value = uVar4;
  (param_1->EvaluationContext).Object = param_3->Object;
  pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (param_1->EvaluationContext).WeakReferenceCount.ReferenceController) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar8->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (param_1->EvaluationContext).WeakReferenceCount.ReferenceController = pTVar7;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->CameraRig).field0_0x0.DebugPtr = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (UBlendStackRootCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)param_4);
  }
  (param_1->RootNode).field0_0x0.DebugPtr = param_4;
  if ((param_3->Object == (FCameraEvaluationContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  param_1->Flags =
       (<unnamed_type_Flags>)
       (((param_3->Object->InitialResult).bIsValid * '\x02' ^ (byte)param_1->Flags) & 2 ^
        (byte)param_1->Flags | 1);
  if (this_00 != (FBlendStackRootCameraNodeEvaluator *)0x0) {
    cVar11 = (**(code **)(this_00->_padding_ + 8))
                       (this_00,&FBlendStackRootCameraNodeEvaluator::PrivateTypeID);
    if ((cVar11 == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsKindOf<Type>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                            ,0x123,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    param_1->RootEvaluator = this_00;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// IsKindOf @ 14d55a3f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::IsKindOf
          (FBlendStackCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnAddReferencedObjects @ 14d55abc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnAddReferencedObjects
          (FBlendStackCameraNodeEvaluator *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x14c0;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2 + 0x18,0,0);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2 + 0x20);
    FCameraContextDataTable::AddReferencedObjects
              ((FCameraContextDataTable *)(pFVar2 + 0x1a8),param_1);
    FCameraContextDataTable::AddReferencedObjects
              ((FCameraContextDataTable *)(pFVar2 + 0xba8),param_1);
    pFVar2 = pFVar2 + 0x14c0;
  }
  return;
}

// OnBuildDebugBlocks @ 14d55aea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnBuildDebugBlocks
          (FBlendStackCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int iVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *pTVar2;
  bool bVar3;
  FCameraDebugBlock *this_00;
  UClass *pUVar4;
  FCameraPoseLocationTrailDebugBlock *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (pTVar2,0x38,8);
  lVar6 = 0;
  (this_00->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Attachments).ArrayNum = 0;
  (this_00->Attachments).ArrayMax = 0;
  (this_00->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Children).ArrayNum = 0;
  (this_00->Children).ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FBlendStackSummaryCameraDebugBlock_Cameras_UE__6B_;
  if (this->_padding_ != 0) {
    pUVar4 = UBlendStackCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar6 = this->_padding_;
    }
  }
  *(int *)&this_00[1]._padding_ = (this->Entries).ArrayNum;
  *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = *(undefined4 *)(lVar6 + 0x38);
  *(undefined1 *)&this_00[1].Attachments.AllocatorInstance.Data = *(undefined1 *)(lVar6 + 0x3c);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(pTVar2,this_00);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,this_00);
  iVar1 = (this->Entries).ArrayNum;
  pFVar7 = (this->Entries).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x14c0;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
    pFVar5 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                       (pTVar2,0x38,8);
    pFVar5 = FCameraPoseLocationTrailDebugBlock::FCameraPoseLocationTrailDebugBlock
                       (pFVar5,(FCameraNodeEvaluationResult *)(pFVar7 + 0xab0));
    TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
              (pTVar2,(FCameraDebugBlock *)pFVar5);
    FCameraDebugBlock::AddChild(this_00,(FCameraDebugBlock *)pFVar5);
    pFVar7 = pFVar7 + 0x14c0;
  }
  return;
}

// OnExecuteOperation @ 14d55c400

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnExecuteOperation
          (FBlendStackCameraNodeEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  FCameraEvaluationContext *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  longlong lVar11;
  FCameraOperationParams local_48;
  
  if ((param_1->Evaluator != this->OwningEvaluator) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2377111849687580400>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BlendStackCameraNode.cpp"
                         ,0x110,"Params.Evaluator == OwningEvaluator"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar10 = (this->Entries).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 0x14c0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar1 = (this->Entries).AllocatorInstance.Data;
      pFVar8 = (FCameraEvaluationContext *)0x0;
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar11 + 0x10);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar9->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d55c4f4;
          }
          LOCK();
          aVar7 = pTVar9->SharedReferenceCount;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        pFVar8 = *(FCameraEvaluationContext **)(pFVar1 + lVar11 + 8);
      }
LAB_14d55c4f4:
      if (((byte)pFVar1[lVar11 + 0x14b0] & 8) == 0) {
        local_48.Evaluator = param_1->Evaluator;
        pTVar2 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.EvaluationContext.Object = pFVar8;
        local_48.EvaluationContext.SharedReferenceCount.ReferenceController = pTVar9;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FCameraNodeEvaluatorHierarchy::CallExecuteOperation
                  ((FCameraNodeEvaluatorHierarchy *)(pFVar1 + lVar11 + 0x50),&local_48,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.EvaluationContext.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      lVar11 = lVar11 + -0x14c0;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return;
}

// OnGetChildren @ 14d55c5e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnGetChildren
          (FBlendStackCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar8;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_68 [8];
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_60;
  
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  iVar3 = (this->Entries).ArrayNum;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar3 * 0x14c0;
  do {
    if ((this->Entries).ArrayNum != iVar3) {
      local_68[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if (pFVar10 == pFVar12) {
      return __return_storage_ptr__;
    }
    lVar4 = *(longlong *)(pFVar10 + 0x48);
    if (lVar4 != 0) {
      bVar2 = (__return_storage_ptr__->Storage).TypeIndex;
      uVar11 = (ulonglong)bVar2;
      local_60.Storage._padding_ = lVar4;
      if (uVar11 == 1) {
        if ((bVar2 != 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar5)();
          return pTVar8;
        }
      }
      else {
        if ((1 < uVar11) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar5)();
          return pTVar8;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] !=
            Core::Private::TDestructorCaller<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>_>::
            Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(__return_storage_ptr__);
        }
        (__return_storage_ptr__->Storage)._padding_ = 0;
        (__return_storage_ptr__->Storage)._padding_ = local_60.Storage._padding_;
        (__return_storage_ptr__->Storage)._padding_ = local_60.Storage._padding_;
        (__return_storage_ptr__->Storage)._padding_ = local_60.Storage._padding_;
        (__return_storage_ptr__->Storage)._padding_ = local_60.Storage._padding_;
        (__return_storage_ptr__->Storage)._padding_ = 0;
        *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4) = 4;
        (__return_storage_ptr__->Storage).TypeIndex = '\x01';
      }
      pTVar8 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
               (__return_storage_ptr__->Storage)._padding_;
      pTVar9 = __return_storage_ptr__;
      if (pTVar8 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar9 = pTVar8;
      }
      if (pTVar9 <= &local_60) {
        pTVar9 = __return_storage_ptr__;
        if (pTVar8 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
          pTVar9 = pTVar8;
        }
        if ((&local_60 <
             &(pTVar9->Storage)._padding_ +
             *(int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar5)();
          return pTVar8;
        }
      }
      iVar7 = (int)(__return_storage_ptr__->Storage)._padding_;
      piVar1 = (int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4);
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
                          (0x808,(ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *)
                                 __return_storage_ptr__,piVar1);
      }
      *(int *)&(__return_storage_ptr__->Storage)._padding_ = iVar7 + 1;
      pTVar8 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
               (__return_storage_ptr__->Storage)._padding_;
      pTVar9 = __return_storage_ptr__;
      if (pTVar8 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar9 = pTVar8;
      }
      (&(pTVar9->Storage)._padding_)[iVar7] = local_60.Storage._padding_;
    }
    pFVar10 = pFVar10 + 0x14c0;
  } while( true );
}

// OnInitialize @ 14d55cb00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnInitialize
          (FBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  
  this->OwningEvaluator = param_1->Evaluator;
  if (this->_padding_ != 0) {
    pUVar2 = UBlendStackCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      this->Layer = *(ECameraRigLayer *)(this->_padding_ + 0x3c);
      return;
    }
  }
  this->Layer = DAT_0000003c;
  return;
}

// OnRunFinished @ 14d55ce10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnRunFinished
          (FBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluationResult *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FCameraNodeEvaluationResult *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_38;
  
  iVar2 = (this->Entries).ArrayNum;
  pFVar7 = (this->Entries).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar2 * 0x14c0;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    pFVar7[0x14b0] = (FScriptContainerElement)((byte)pFVar7[0x14b0] & 0xfa);
    pFVar7 = pFVar7 + 0x14c0;
  }
  iVar2 = (this->Entries).ArrayNum;
  if (0 < iVar2) {
    uVar5 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar5 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
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
    pFVar8 = (FCameraNodeEvaluationResult *)
             ((this->Entries).AllocatorInstance.Data +
             (longlong)(this->Entries).ArrayNum * 0x14c0 + -0xa10);
    if (param_1 == pFVar8) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7330225176618991724>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraNodeEvaluator.cpp"
                         ,0x6c,"this != &InResult");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar1 = &param_1->CameraPoseLocationTrail;
    if (pTVar1 == &pFVar8->CameraPoseLocationTrail) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar2 = (pFVar8->CameraPoseLocationTrail).ArrayNum;
    if (iVar2 != 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar2,&pTVar1->AllocatorInstance,
                         &(param_1->CameraPoseLocationTrail).ArrayNum,
                         &(param_1->CameraPoseLocationTrail).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x18,
             (pFVar8->CameraPoseLocationTrail).AllocatorInstance.Data,(longlong)iVar2 * 0x18);
    }
    local_38._s_0.X = (param_1->CameraPose).Location.field0_0x0._s_0.X;
    local_38._s_0.Y = (param_1->CameraPose).Location.field0_0x0._s_0.Y;
    local_38._s_0.Z = (param_1->CameraPose).Location.field0_0x0._s_0.Z;
    FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
              (param_1,(TVector<double> *)&local_38._s_0);
  }
  return;
}

// OnSerialize @ 14d55d020

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::OnSerialize
          (FBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FCameraPose *pFVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  
  uVar9 = (this->Entries).ArrayNum;
  if ((param_2->field_0x28 & 4) == 0) {
    if ((param_2->field_0x28 & 1) != 0) {
      plVar1 = *(longlong **)&param_2->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      uVar9 = local_res18[0];
      if (local_res18[0] != (this->Entries).ArrayNum) {
        local_res8[0] = 0;
        `UE::Cameras::FBlendStackCameraNodeEvaluator::OnSerialize'::__l9::<lambda_1>::operator()
                  (local_res8);
        uVar9 = local_res18[0];
      }
    }
  }
  else {
    plVar1 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      local_res20[0] = uVar9;
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  uVar6 = 0;
  if (0 < (int)uVar9) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Entries).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      pFVar2 = (this->Entries).AllocatorInstance.Data;
      pFVar7 = (FCameraPose *)(pFVar2 + lVar8 + 0xb0);
      FCameraPose::SerializeWithFlags(pFVar7,param_2);
      FCameraVariableTable::Serialize((FCameraVariableTable *)(pFVar7 + 1),param_2);
      FCameraRigJoints::Serialize((FCameraRigJoints *)&pFVar7[2].ISO,param_2);
      FPostProcessSettingsCollection::Serialize
                ((FPostProcessSettingsCollection *)&pFVar7[4].SensorWidth,param_2);
      ::operator<<(param_2,(bool *)&pFVar7[0x12].SensorWidth);
      ::operator<<(param_2,(bool *)((longlong)&pFVar7[0x12].SensorWidth + 1));
      pFVar7 = (FCameraPose *)(pFVar2 + lVar8 + 0xab0);
      FCameraPose::SerializeWithFlags(pFVar7,param_2);
      FCameraVariableTable::Serialize((FCameraVariableTable *)(pFVar7 + 1),param_2);
      FCameraRigJoints::Serialize((FCameraRigJoints *)&pFVar7[2].ISO,param_2);
      FPostProcessSettingsCollection::Serialize
                ((FPostProcessSettingsCollection *)&pFVar7[4].SensorWidth,param_2);
      ::operator<<(param_2,(bool *)&pFVar7[0x12].SensorWidth);
      ::operator<<(param_2,(bool *)((longlong)&pFVar7[0x12].SensorWidth + 1));
      (**(code **)(*(longlong *)param_2 + 400))(param_2,pFVar2 + lVar8 + 0x14b0,1);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x14c0;
    } while ((int)uVar6 < (int)uVar9);
  }
  return;
}

// PopEntries @ 14d55d6f0

/* WARNING: Removing unreachable block (ram,0x00014d55d7ea) */
/* WARNING: Removing unreachable block (ram,0x00014d55d7f9) */
/* WARNING: Removing unreachable block (ram,0x00014d55d810) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::PopEntries
          (FBlendStackCameraNodeEvaluator *this,int param_1)

{
  int *piVar1;
  FCameraRigEntry *pFVar2;
  FCameraEvaluationContext *pFVar3;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  int iVar9;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar10;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar11;
  FCameraEvaluationContext *pFVar12;
  longlong *plVar13;
  FCameraEvaluationContext *pFVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  FReadAccessScope *local_68;
  FReadAccessScope local_60;
  FCameraNodeEvaluatorTeardownParams local_48;
  
  if (((this->Entries).ArrayNum != 0) && (0 < param_1)) {
    uVar16 = (ulonglong)(uint)param_1;
    do {
      pFVar12 = (FCameraEvaluationContext *)0x0;
      if (((this->Entries).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (FCameraRigEntry *)(this->Entries).AllocatorInstance.Data;
      if (pFVar2->RootEvaluator != (FBlendStackRootCameraNodeEvaluator *)0x0) {
        pFVar3 = (FCameraEvaluationContext *)
                 (pFVar2->EvaluationContext).WeakReferenceCount.ReferenceController;
        local_48.Evaluator = this->OwningEvaluator;
        local_48.Layer = Main;
        local_48.EvaluationContext.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar14 = pFVar3;
        if (pFVar3 != (FCameraEvaluationContext *)0x0) {
          aVar6 = *(atomic<int> *)&pFVar3->field_0x8;
          do {
            pFVar14 = pFVar12;
            if (aVar6 == (atomic<int>)0x0) goto LAB_14d55d7c5;
            LOCK();
            aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
            bVar7 = aVar6 == aVar8;
            if (bVar7) {
              *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar6 + 1);
              aVar8 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar8;
          } while (!bVar7);
          pFVar12 = (pFVar2->EvaluationContext).Object;
          pFVar14 = pFVar3;
        }
LAB_14d55d7c5:
        if (pFVar14 != (FCameraEvaluationContext *)0x0) {
          local_48.EvaluationContext.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar14;
        }
        local_48.EvaluationContext.Object = pFVar12;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_48.Layer = this->Layer;
        FCameraNodeEvaluator::Teardown((FCameraNodeEvaluator *)pFVar2->RootEvaluator,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.EvaluationContext.SharedReferenceCount.ReferenceController);
      }
      local_60.DestructionSentinel.AccessType = Reader;
      local_60.DestructionSentinel.bDestroyed = false;
      local_60.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)&this->OnCameraRigEventDelegate;
      FVar10 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
               FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
      local_68 = &local_60;
      FVar4 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
               ((longlong)FVar10 + 0x20);
      FVar11 = FVar10;
      if (FVar4 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
        FVar11 = FVar4;
      }
      if ((ulonglong)FVar11 <= &local_68) {
        FVar11 = FVar10;
        if (FVar4 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
          FVar11 = FVar4;
        }
        if ((&local_68 <
             (FReadAccessScope **)
             ((longlong)FVar11 + (longlong)*(int *)((longlong)FVar10 + 0x2c) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar9 = *(int *)((longlong)FVar10 + 0x28);
      if (iVar9 == *(int *)((longlong)FVar10 + 0x2c)) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                          (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>
                                  *)FVar10,(int *)((longlong)FVar10 + 0x2c));
      }
      *(int *)((longlong)FVar10 + 0x28) = iVar9 + 1;
      if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar10 + 0x20) !=
          (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
        FVar10 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                  ((longlong)FVar10 + 0x20);
      }
      *(FReadAccessScope **)((longlong)FVar10 + (longlong)iVar9 * 8) = local_68;
      FMRSWRecursiveAccessDetector::AcquireReadAccess
                ((FMRSWRecursiveAccessDetector *)&this->OnCameraRigEventDelegate);
      iVar9 = *(int *)&(this->OnCameraRigEventDelegate).field_0x10;
      plVar13 = *(longlong **)&(this->OnCameraRigEventDelegate).field_0x8;
      plVar15 = plVar13 + (longlong)iVar9 * 2;
      while( true ) {
        if (*(int *)&(this->OnCameraRigEventDelegate).field_0x10 != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (plVar13 == plVar15) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_60);
          goto LAB_14d55d9ab;
        }
        if (((int)plVar13[1] != 0) && (*plVar13 != 0)) break;
        plVar13 = plVar13 + 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      BroadcastCameraRigEvent(this,Popped,pFVar2,(UCameraRigTransition *)0x0);
LAB_14d55d9ab:
      if (((this->Entries).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (FCameraRigEntry *)(this->Entries).AllocatorInstance.Data;
      FCameraRigEntry::~FCameraRigEntry(pFVar2);
      iVar9 = (this->Entries).ArrayNum + -1;
      if (iVar9 != 0) {
        memmove(pFVar2,pFVar2 + 1,(longlong)iVar9 * 0x14c0);
      }
      piVar1 = &(this->Entries).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14c0,0x10,&(this->Entries).AllocatorInstance,(this->Entries).ArrayNum,
                 &(this->Entries).ArrayMax);
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// PopEntry @ 14d55da90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::PopEntry
          (FBlendStackCameraNodeEvaluator *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Entries).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Entries).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    pFVar1 = (this->Entries).AllocatorInstance.Data;
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnCameraRigEventDelegate);
    if (bVar3) {
      BroadcastCameraRigEvent
                (this,Popped,(FCameraRigEntry *)(pFVar1 + (longlong)param_1 * 0x14c0),
                 (UCameraRigTransition *)0x0);
    }
    TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,TSizedDefaultAllocator<32>_>
    ::RemoveAt(&this->Entries,param_1,Default);
    return;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2377111849687580253>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BlendStackCameraNode.cpp"
                     ,0x1a3,"Entries.IsValidIndex(EntryIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ResolveEntries @ 14d561bc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::ResolveEntries
          (FBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  <unnamed_type_Flags> *p<Var1;
  UCameraRigAsset *pUVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  <unnamed_type_Flags> <Var7;
  uint uVar8;
  atomic<int> aVar9;
  int iVar10;
  char *pcVar11;
  ForAnyElementType FVar12;
  int *piVar13;
  FCameraEvaluationContext *pFVar14;
  FScriptContainerElement *pFVar15;
  char *pcVar16;
  TReferenceControllerBase<1> *pTVar17;
  FScriptContainerElement *pFVar18;
  FCameraRigEntry *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  uint local_88;
  longlong local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  local_88 = 0;
  if (0 < (this->Entries).ArrayNum) {
    local_80 = 0;
    do {
      pFVar14 = (FCameraEvaluationContext *)0x0;
      uVar8 = 0;
      if ((int)local_88 < (this->Entries).ArrayNum) {
        uVar8 = ~local_88 >> 0x1f;
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
      pFVar19 = (FCameraRigEntry *)((this->Entries).AllocatorInstance.Data + local_80);
      pTVar17 = (pFVar19->EvaluationContext).WeakReferenceCount.ReferenceController;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar17->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d561c90;
          }
          LOCK();
          aVar9 = pTVar17->SharedReferenceCount;
          bVar6 = aVar5 == aVar9;
          if (bVar6) {
            pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar6);
        pFVar14 = (pFVar19->EvaluationContext).Object;
      }
LAB_14d561c90:
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      pFVar18 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        *(FCameraRigEntry **)pFVar18 = pFVar19;
        *(FCameraEvaluationContext **)(pFVar18 + 8) = pFVar14;
        *(undefined8 *)(pFVar18 + 0x10) = 0;
      }
      else {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
        *(FCameraRigEntry **)pFVar18 = pFVar19;
        *(FCameraEvaluationContext **)(pFVar18 + 8) = pFVar14;
        *(TReferenceControllerBase<1> **)(pFVar18 + 0x10) = pTVar17;
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined4 *)(pFVar18 + 0x18) = 0xffffffff;
      pFVar18[0x1c] = (FScriptContainerElement)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      *(uint *)(pFVar18 + 0x18) = local_88;
      if (local_88 == (this->Entries).ArrayNum - 1U) {
        pFVar18[0x1c] = (FScriptContainerElement)0x1;
      }
      p<Var1 = &pFVar19->Flags;
      <Var7 = *p<Var1;
      if (p<Var1->bIsFrozen) {
LAB_14d562003:
        (pFVar19->Flags).bLogWarnings = true;
      }
      else if (pFVar14 == (FCameraEvaluationContext *)0x0) {
        if (((param_1->EvaluationType != IK) && (param_1->EvaluationType != ViewRotationPreview)) &&
           (FreezeEntry(this,pFVar19), (pFVar19->Flags).bLogWarnings)) {
          if (2 < (byte)LogCameraSystem._0_1_) {
            pUVar2 = (pFVar19->CameraRig).field0_0x0.DebugPtr;
            if (pUVar2 == (UCameraRigAsset *)0x0) {
              ::FString::FString(&local_68,L"None");
            }
            else {
              local_78 = (FName)pUVar2->_padding_;
              ::FName::ToString(&local_78,&local_68);
            }
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar12.Data = local_68.Data.AllocatorInstance.Data;
LAB_14d561db6:
            if (FVar12.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar12.Data);
            }
          }
LAB_14d561dc0:
          (pFVar19->Flags).bLogWarnings = false;
        }
      }
      else {
        if ((pFVar14->InitialResult).bIsValid != false) {
          if (!p<Var1->bIsFirstFrame && !p<Var1->bWasContextInitialResultValid) {
            <Var7 = (<unnamed_type_Flags>)((byte)<Var7 | 4);
          }
          pFVar19->Flags = (<unnamed_type_Flags>)((byte)<Var7 | 2);
          FCameraPose::ClearAllChangedFlags(&(pFVar19->Result).CameraPose);
          FCameraVariableTable::ClearAllWrittenThisFrameFlags(&(pFVar19->Result).VariableTable);
          iVar10 = (pFVar19->Result).ContextDataTable.Entries.ArrayNum;
          pFVar15 = (pFVar19->Result).ContextDataTable.Entries.AllocatorInstance.Data;
          pFVar20 = pFVar15 + (longlong)iVar10 * 0x20;
          while( true ) {
            if ((pFVar19->Result).ContextDataTable.Entries.ArrayNum != iVar10) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (pFVar15 == pFVar20) break;
            pFVar15[0x1c] = (FScriptContainerElement)((byte)pFVar15[0x1c] & 0xf7);
            pFVar15 = pFVar15 + 0x20;
          }
          FCameraPose::OverrideChanged
                    (&(pFVar19->ContextResult).CameraPose,&(pFVar14->InitialResult).CameraPose);
          FCameraVariableTable::Override
                    (&(pFVar19->ContextResult).VariableTable,&(pFVar14->InitialResult).VariableTable
                     ,ChangedOnly);
          FCameraContextDataTable::InternalOverride
                    (&(pFVar19->ContextResult).ContextDataTable,
                     &(pFVar14->InitialResult).ContextDataTable,ChangedOnly);
          if (pFVar18[0x1c] != (FScriptContainerElement)0x0) {
            if ((*(longlong *)(pFVar18 + 8) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = *(longlong *)(pFVar18 + 8);
            if (*(int *)(lVar3 + 0xa98) != *(int *)(lVar3 + 0xac4)) {
              piVar13 = (int *)(lVar3 + 0xac8);
              if (*(int **)(lVar3 + 0xad0) != (int *)0x0) {
                piVar13 = *(int **)(lVar3 + 0xad0);
              }
              iVar10 = *piVar13;
              if (iVar10 != -1) {
                do {
                  pcVar11 = (char *)((longlong)iVar10 * 0xa20 + *(longlong *)(lVar3 + 0xa90));
                  if (*pcVar11 == '\0') {
                    pcVar16 = pcVar11 + 0x10;
                    if (pcVar11 == (char *)0x0) {
                      pcVar16 = (char *)0x0;
                    }
                    if (pcVar16 != (char *)0x0) {
                      FCameraVariableTable::Override
                                (&(pFVar19->ContextResult).VariableTable,
                                 (FCameraVariableTable *)(pcVar16 + 0x88),ChangedOnly);
                      FCameraContextDataTable::InternalOverride
                                (&(pFVar19->ContextResult).ContextDataTable,
                                 (FCameraContextDataTable *)(pcVar16 + 0xf8),ChangedOnly);
                    }
                    break;
                  }
                  iVar10 = *(int *)(pcVar11 + 0xa10);
                } while (iVar10 != -1);
              }
            }
          }
          (pFVar19->ContextResult).bIsCameraCut = (pFVar14->InitialResult).bIsCameraCut;
          (pFVar19->ContextResult).bIsValid = (pFVar14->InitialResult).bIsValid;
          goto LAB_14d562003;
        }
        if (p<Var1->bLogWarnings) {
          if (2 < (byte)LogCameraSystem._0_1_) {
            pUVar2 = (pFVar19->CameraRig).field0_0x0.DebugPtr;
            if (pUVar2 == (UCameraRigAsset *)0x0) {
              ::FString::FString(&local_58,L"None");
            }
            else {
              local_70 = (FName)pUVar2->_padding_;
              ::FName::ToString(&local_70,&local_58);
            }
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
            FVar12.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_14d561db6;
          }
          goto LAB_14d561dc0;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      local_88 = local_88 + 1;
      local_80 = local_80 + 0x14c0;
    } while ((int)local_88 < (this->Entries).ArrayNum);
  }
  return;
}

// operator() @ 150580f50

bool __thiscall
`UE::Cameras::FBlendStackCameraNodeEvaluator::OnSerialize'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2377111849687580084>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2377111849687580084>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


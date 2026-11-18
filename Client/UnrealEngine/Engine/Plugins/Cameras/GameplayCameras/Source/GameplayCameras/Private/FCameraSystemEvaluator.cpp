// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 30

// FindEvaluationService<UE::Cameras::FCameraParameterSetterService> @ 14d581390

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> * __thiscall
UE::Cameras::FCameraSystemEvaluator::
FindEvaluationService<UE::Cameras::FCameraParameterSetterService>
          (FCameraSystemEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> *__return_storage_ptr__)

{
  int iVar1;
  FCameraParameterSetterService *pFVar2;
  char cVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EvaluationServices).ArrayNum;
  pFVar6 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14d581427;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    pFVar2 = *(FCameraParameterSetterService **)pFVar6;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar3 = (**(code **)(pFVar2->_padding_ + 8))
                      (pFVar2,&FCameraParameterSetterService::PrivateTypeID);
    if (cVar3 != '\0') break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar6 = pFVar6 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar2 == (FCameraParameterSetterService *)0x0) {
LAB_14d581427:
    __return_storage_ptr__->Object = (FCameraParameterSetterService *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// FCameraSystemEvaluator @ 14d58e310

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraSystemEvaluator * __thiscall
UE::Cameras::FCameraSystemEvaluator::FCameraSystemEvaluator(FCameraSystemEvaluator *this)

{
  *(undefined8 *)&(this->ContextStack).OnStackChangedEvent.field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->WeakOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RootNode).field0_0x0.DebugPtr = (URootCameraNode *)0x0;
  (this->ContextStack).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextStack).Entries.ArrayNum = 0;
  (this->ContextStack).Entries.ArrayMax = 0;
  (this->ContextStack).Evaluator = (FCameraSystemEvaluator *)0x0;
  *(undefined8 *)&(this->ContextStack).OnStackChangedEvent = 0;
  *(undefined8 *)&(this->ContextStack).OnStackChangedEvent.field_0x8 = 0;
  *(undefined8 *)&(this->ContextStack).OnStackChangedEvent.field_0x10 = 0;
  (this->EvaluationServices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluationServices).ArrayNum = 0;
  (this->EvaluationServices).ArrayMax = 0;
  (this->CameraRigCombinationRegistry).Object = (FCameraRigCombinationRegistry *)0x0;
  (this->CameraRigCombinationRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->RootEvaluatorStorage = 0;
  *(undefined8 *)&(this->RootEvaluatorStorage).field_0x8 = 0;
  *(undefined8 *)&(this->RootEvaluatorStorage).field_0x10 = 0;
  *(undefined8 *)&(this->RootEvaluatorStorage).field_0x18 = 0;
  this->RootEvaluator = (FRootCameraNodeEvaluator *)0x0;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->RootNodeResult);
  FCameraSystemEvaluationResult::FCameraSystemEvaluationResult(&this->Result);
  FCameraSystemEvaluationResult::FCameraSystemEvaluationResult(&this->PreVisualResult);
  (this->EvaluatorSnapshot).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluatorSnapshot).ArrayNum = 0;
  (this->EvaluatorSnapshot).ArrayMax = 0;
  this->Role = Game;
  (this->DebugID).Value = -1;
  *(undefined8 *)&this->DebugBlockStorage = 0;
  *(undefined8 *)&(this->DebugBlockStorage).field_0x8 = 0;
  *(undefined8 *)&(this->DebugBlockStorage).field_0x10 = 0;
  *(undefined8 *)&(this->DebugBlockStorage).field_0x18 = 0;
  this->RootDebugBlock = (FRootCameraDebugBlock *)0x0;
  return this;
}

// ~FCameraSystemEvaluator @ 14d591180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::~FCameraSystemEvaluator(FCameraSystemEvaluator *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationService *this_00;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *pTVar4;
  void *pvVar5;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  ForAnyElementType *this_01;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18;
  FCameraEvaluationServiceTeardownParams local_res20;
  FDestructionSentinel local_68;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ContextStack).OnStackChangedEvent,(FWriteAccessScope *)&local_68);
  iVar2 = *(int *)&(this->ContextStack).OnStackChangedEvent.field_0x10;
  this_01 = *(ForAnyElementType **)&(this->ContextStack).OnStackChangedEvent.field_0x8;
  pFVar10 = this_01 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->ContextStack).OnStackChangedEvent.field_0x10 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar10) break;
    local_res18 = 0;
    if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)this_01->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
      *(undefined4 *)&this_01[1].Data = 0;
    }
    this_01 = this_01 + 2;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(this->ContextStack).OnStackChangedEvent,false);
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FCameraEvaluationContextStack::Reset(&this->ContextStack);
  iVar2 = (this->EvaluationServices).ArrayNum;
  pFVar11 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x10;
  local_res20.Evaluator = this;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar12) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
    this_00 = *(FCameraEvaluationService **)pFVar11;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationService *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FCameraEvaluationService::Teardown(this_00,&local_res20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar11 = pFVar11 + 0x10;
  }
  piVar1 = &(this->EvaluationServices).ArrayMax;
  pTVar4 = (TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
           (this->EvaluationServices).AllocatorInstance.Data;
  iVar2 = (this->EvaluationServices).ArrayNum;
  if ((this->EvaluationServices).ArrayMax < 0) {
    DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>(pTVar4,iVar2);
    (this->EvaluationServices).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->EvaluationServices).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>(pTVar4,iVar2);
    (this->EvaluationServices).ArrayNum = 0;
  }
  if (-1 < (this->DebugID).Value) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UE::Cameras::FCameraSystemDebugRegistry::Get'::__l2::
               _dynamic_atexit_destructor_for__Instance__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar2 = (this->DebugID).Value;
    if (((iVar2 < 0) || (iVar2 == 0x7fffffff)) || (iVar2 == 0)) {
      bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6567350517113028643>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemDebugRegistry.cpp"
                         ,0x23,"InDebugID.IsValid() && !InDebugID.IsAny() && !InDebugID.IsAuto()");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      TSparseArray<UE::Cameras::FCameraSystemDebugRegistry::FEntry,FDefaultSparseArrayAllocator>::
      RemoveAt(&::Instance.Entries,iVar2 + -1,1);
    }
    (this->DebugID).Value = -1;
  }
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::DestroyObjects
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)&this->DebugBlockStorage,true);
  pvVar5 = *(void **)&(this->DebugBlockStorage).field_0x10;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (*(void **)&this->DebugBlockStorage != (void *)0x0) {
    FMemory::Free(*(void **)&this->DebugBlockStorage);
  }
  pFVar11 = (this->EvaluatorSnapshot).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->PreVisualResult).PostProcessSettings.PostProcessSettings.WeightedBlendables.Array
            .AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  FCameraContextDataTable::~FCameraContextDataTable(&(this->PreVisualResult).ContextDataTable);
  FCameraVariableTable::~FCameraVariableTable(&(this->PreVisualResult).VariableTable);
  pFVar11 = (this->Result).PostProcessSettings.PostProcessSettings.WeightedBlendables.Array.
            AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  FCameraContextDataTable::~FCameraContextDataTable(&(this->Result).ContextDataTable);
  FCameraVariableTable::~FCameraVariableTable(&(this->Result).VariableTable);
  pFVar11 = (this->RootNodeResult).CameraPoseLocationTrail.AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->RootNodeResult).PostProcessSettings.PostProcessSettings.WeightedBlendables.Array.
            AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  FVar6 = (this->RootNodeResult).CameraRigJoints.Joints.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FCameraContextDataTable::~FCameraContextDataTable(&(this->RootNodeResult).ContextDataTable);
  FCameraVariableTable::~FCameraVariableTable(&(this->RootNodeResult).VariableTable);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObjects
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)&this->RootEvaluatorStorage,
             true);
  pvVar5 = *(void **)&(this->RootEvaluatorStorage).field_0x10;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (*(void **)&this->RootEvaluatorStorage != (void *)0x0) {
    FMemory::Free(*(void **)&this->RootEvaluatorStorage);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CameraRigCombinationRegistry).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
            ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
             (this->EvaluationServices).AllocatorInstance.Data,(this->EvaluationServices).ArrayNum);
  pFVar11 = (this->EvaluationServices).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  FCameraEvaluationContextStack::~FCameraEvaluationContextStack(&this->ContextStack);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// AddReferencedObjects @ 14d598620

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::AddReferencedObjects
          (FCameraSystemEvaluator *this,FReferenceCollector *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *this_00;
  FCameraRigCombinationRegistry *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->RootNode,0,0);
  FCameraEvaluationContextStack::AddReferencedObjects(&this->ContextStack,param_1);
  FCameraNodeEvaluationResult::AddReferencedObjects(&this->RootNodeResult,param_1);
  if (this->RootEvaluator != (FRootCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::AddReferencedObjects((FCameraNodeEvaluator *)this->RootEvaluator,param_1);
  }
  iVar1 = (this->EvaluationServices).ArrayNum;
  pFVar6 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    this_00 = *(FCameraEvaluationService **)pFVar6;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationService *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FCameraEvaluationService::AddReferencedObjects(this_00,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar3 = (this->CameraRigCombinationRegistry).Object;
  if (pFVar3 != (FCameraRigCombinationRegistry *)0x0) {
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,(pFVar3->CombinedCameraRigs).AllocatorInstance.Data,
               (pFVar3->CombinedCameraRigs).ArrayNum,0,0);
  }
  return;
}

// BuildDebugBlocksIfNeeded @ 14d59b900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::BuildDebugBlocksIfNeeded(FCameraSystemEvaluator *this)

{
  FCameraDebugBlockStorage *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  FRootCameraDebugBlock *pFVar6;
  FCameraDebugBlockBuildParams local_res10 [8];
  FCameraDebugBlockBuilder local_38;
  
  if (((GGameplayCamerasDebugTrace) || (-1 < CameraSystemChannel->Enabled)) ||
     (GGameplayCamerasDebugEnable)) {
    this_00 = &this->DebugBlockStorage;
    TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::DestroyObjects
              ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_00,false);
    pFVar6 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                       ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_00,0x30,8);
    *(undefined4 *)&pFVar6->field_0x2c = 0;
    (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar6->_padding_ = 0;
    (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FRootCameraDebugBlock_Cameras_UE__6B_;
    (pFVar6->DebugID).Value = -1;
    TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
              ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_00,
               (FCameraDebugBlock *)pFVar6);
    uVar3 = _UNK_15076cb18;
    uVar1 = ___xmm_ffffffff000000000000000000000000;
    this->RootDebugBlock = pFVar6;
    uVar4 = _UNK_15076cb18;
    uVar2 = ___xmm_ffffffff000000000000000000000000;
    ___xmm_ffffffff000000000000000000000000 = (int)uVar1;
    _UNK_15076cb14 = SUB84(uVar1,4);
    local_38.CurrentHierarchy.ArrayNum = ___xmm_ffffffff000000000000000000000000;
    local_38.CurrentHierarchy.ArrayMax = _UNK_15076cb14;
    _UNK_15076cb18 = (ECameraDebugBlockBuildVisitFlags)uVar3;
    _UNK_15076cb1c = SUB84(uVar3,4);
    local_38.VisitFlags = _UNK_15076cb18;
    local_38.HierarchyOverrideStart = _UNK_15076cb1c;
    local_38.CurrentHierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ___xmm_ffffffff000000000000000000000000 = uVar2;
    _UNK_15076cb18 = uVar4;
    local_38.Storage = this_00;
    local_38.RootBlock = pFVar6;
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_38.CurrentHierarchy.AllocatorInstance,
                       &local_38.CurrentHierarchy.ArrayMax);
    local_38.CurrentHierarchy.ArrayNum = iVar5 + 1;
    *(FRootCameraDebugBlock **)
     (local_38.CurrentHierarchy.AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar6;
    FRootCameraDebugBlock::BuildDebugBlocks(this->RootDebugBlock,this,local_res10,&local_38);
    if (local_38.CurrentHierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.CurrentHierarchy.AllocatorInstance.Data);
    }
  }
  return;
}

// DebugUpdate @ 14d59d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::DebugUpdate
          (FCameraSystemEvaluator *this,FCameraSystemDebugUpdateParams *param_1)

{
  UCanvas *pUVar1;
  UObject *pUVar2;
  FSceneView *pFVar3;
  FSceneView *pFVar4;
  FSceneView *pFVar5;
  undefined1 auStack_908 [32];
  FRootCameraDebugDrawParams local_8d8 [8];
  undefined1 local_8c8 [72];
  wchar_t *local_880;
  TStringBuilderBase<wchar_t> *local_878;
  undefined2 local_870;
  wchar_t local_868 [512];
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  schar local_48 [12];
  float local_3c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_908;
  if ((((GGameplayCamerasDebugTrace) || (-1 < CameraSystemChannel->Enabled)) ||
      (GGameplayCamerasDebugEnable)) && (this->RootDebugBlock != (FRootCameraDebugBlock *)0x0)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WeakOwner).WeakPtr);
    pFVar4 = (FSceneView *)0x0;
    pFVar3 = pFVar4;
    if (pUVar2 != (UObject *)0x0) {
      pFVar3 = (FSceneView *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
    }
    if ((GGameplayCamerasDebugTrace != false) || (-1 < CameraSystemChannel->Enabled)) {
      FCameraSystemTrace::TraceEvaluation((UWorld *)pFVar3,&this->Result,this->RootDebugBlock);
    }
    local_8d8[0].bIsCameraManagerOrViewTarget = param_1->bIsCameraManagerOrViewTarget;
    local_8c8._64_8_ = local_868;
    local_880 = local_868;
    local_8d8[0].bForceDraw = param_1->bForceDraw;
    local_878 = &local_468;
    local_468.Base = local_448;
    local_468.CurPos = local_448;
    pUVar1 = param_1->CanvasObject;
    local_468.End = (wchar_t *)local_48;
    local_8c8._0_8_ = (UWorld *)0x0;
    local_8c8._8_8_ = (FCanvas *)0x0;
    local_8c8._16_8_ = (FSceneView *)0x0;
    local_8c8[0x28] = false;
    local_870 = 0;
    local_468.bIsDynamic = false;
    local_468.bIsExternal = false;
    local_48[0] = '\0';
    local_3c = 0.0;
    pFVar5 = pFVar4;
    if (pUVar1 != (UCanvas *)0x0) {
      pFVar4 = (FSceneView *)pUVar1->Canvas;
      pFVar5 = pUVar1->SceneView;
    }
    FCameraDebugRenderer::Initialize
              ((FCameraDebugRenderer *)local_8c8,(UWorld *)pFVar3,pFVar5,(FCanvas *)pFVar4,
               param_1->bIsDebugCameraEnabled);
    FRootCameraDebugBlock::RootDebugDraw
              (this->RootDebugBlock,local_8d8,(FCameraDebugRenderer *)local_8c8);
    FCameraDebugRenderer::FlushText((FCameraDebugRenderer *)local_8c8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_8c8 + 0x40));
  }
  return;
}

// ExecuteOperation @ 14d5a3ca0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::ExecuteOperation
          (FCameraSystemEvaluator *this,FCameraOperation *param_1)

{
  FCameraOperationParams local_28;
  
  local_28.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_28.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_28.Evaluator = this;
  FCameraNodeEvaluator::ExecuteOperation
            ((FCameraNodeEvaluator *)this->RootEvaluator,&local_28,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.EvaluationContext.SharedReferenceCount.ReferenceController);
  return;
}

// FindEvaluationService @ 14d5a4480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraEvaluationService,1> * __thiscall
UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
          (FCameraSystemEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *__return_storage_ptr__,
          FCameraObjectTypeID *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *pFVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EvaluationServices).ArrayNum;
  pFVar5 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      __return_storage_ptr__->Object = (FCameraEvaluationService *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    pFVar3 = *(FCameraEvaluationService **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar4 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,param_1);
    if (cVar4 != '\0') break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetCombinedCameraRigRequest @ 14d5a6f60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::GetCombinedCameraRigRequest
          (FCameraSystemEvaluator *this,
          TArrayView<UE::Cameras::FCameraRigActivationDeactivationRequest_const_,int> *param_1,
          FCameraRigActivationDeactivationRequest *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationContext *pFVar3;
  UCameraRigTransition *pUVar4;
  FCameraRigCombinationRegistry *this_00;
  code *pcVar5;
  bool bVar6;
  UCameraRigAsset *pUVar7;
  longlong lVar8;
  FCameraRigActivationDeactivationRequest *pFVar9;
  FCameraRigActivationDeactivationRequest *pFVar10;
  UCameraRigTransition *pUVar11;
  byte bVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_88;
  ForAnyElementType local_80;
  int local_78;
  int aiStack_74 [3];
  TObjectPtr<UCameraRigAsset_const_>_u_0 *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UCameraRigAsset_const_*,int> local_58;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  iVar1 = param_1->ArrayNum;
  pUVar11 = (UCameraRigTransition *)0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  aiStack_74[0] = 0;
  if ((iVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = param_1->DataPtr;
  pTVar2 = (pFVar9->EvaluationContext).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar9->EvaluationContext).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar12 = false;
  pFVar10 = pFVar9 + iVar1;
  do {
    if (pFVar9 == pFVar10) {
      if (((this->CameraRigCombinationRegistry).Object == (FCameraRigCombinationRegistry *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar1 = local_78;
      this_00 = (this->CameraRigCombinationRegistry).Object;
      local_68 = (TObjectPtr<UCameraRigAsset_const_>_u_0 *)local_80.Data;
      if ((local_78 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_60 = iVar1;
      local_58._12_4_ = uStack_5c;
      local_58.ArrayNum = iVar1;
      local_58.DataPtr = (UCameraRigAsset **)local_68;
      pUVar7 = FCameraRigCombinationRegistry::FindOrCreateCombination(this_00,&local_58);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = (param_2->EvaluationContext).Object;
      pTStack_40 = (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
      (param_2->EvaluationContext).Object = pFVar3;
      (param_2->EvaluationContext).SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UCameraRigAsset *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar7);
      }
      (param_2->CameraRig).field0_0x0.DebugPtr = pUVar7;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UCameraRigTransition *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar11);
      }
      (param_2->TransitionOverride).field0_0x0.DebugPtr = pUVar11;
      param_2->bForceActivateDeactivate = (bool)bVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((TObjectPtr<UCameraRigAsset_const_>_u_0 *)local_80.Data !=
          (TObjectPtr<UCameraRigAsset_const_>_u_0 *)0x0) {
        FMemory::Free(local_80.Data);
      }
      return;
    }
    local_88 = (pFVar9->CameraRig).field0_0x0;
    if (((local_80.Data <= &local_88) &&
        (&local_88 <
         (TObjectPtr<UCameraRigAsset_const_>_u_0 *)
         ((longlong)local_80.Data + (longlong)aiStack_74[0] * 8))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_78 == aiStack_74[0]) {
      local_78 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_80,aiStack_74);
    }
    lVar8 = (longlong)local_78;
    local_78 = local_78 + 1;
    *(TObjectPtr<UCameraRigAsset_const_>_u_0 *)(local_80.Data + lVar8 * 8) = local_88;
    if ((pFVar9->EvaluationContext).Object != pFVar3) {
      local_res10[0] = 0;
      `UE::Cameras::FCameraSystemEvaluator::GetCombinedCameraRigRequest'::__l6::<lambda_1>::
      operator()(local_res10);
    }
    pUVar4 = (pFVar9->TransitionOverride).field0_0x0.DebugPtr;
    if (pUVar4 != (UCameraRigTransition *)0x0) {
      if ((pUVar11 != (UCameraRigTransition *)0x0) && (pUVar4 != pUVar11)) {
        local_res18[0] = 0;
        bVar6 = `UE::Cameras::FCameraSystemEvaluator::GetCombinedCameraRigRequest'::__l10::
                <lambda_2>::operator()(local_res18);
        if (!bVar6) goto LAB_14d5a70e1;
      }
      pUVar11 = (pFVar9->TransitionOverride).field0_0x0.DebugPtr;
    }
LAB_14d5a70e1:
    bVar12 = bVar12 | pFVar9->bForceActivateDeactivate;
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// GetEvaluatedCameraView @ 14d5a7ea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::GetEvaluatedCameraView
          (FCameraSystemEvaluator *this,FMinimalViewInfo *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  double dVar4;
  EAspectRatioAxisConstraint *pEVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  EAspectRatioAxisConstraint local_28;
  undefined1 local_24;
  EAspectRatioAxisConstraint local_20;
  undefined1 local_1c;
  
  dVar7 = (this->RootNodeResult).CameraPose.Location.field0_0x0._s_0.Y;
  dVar8 = (this->RootNodeResult).CameraPose.Location.field0_0x0._s_0.Z;
  (param_1->Location).field0_0x0._s_0.X =
       (this->RootNodeResult).CameraPose.Location.field0_0x0._s_0.X;
  (param_1->Location).field0_0x0._s_0.Y = dVar7;
  (param_1->Location).field0_0x0._s_0.Z = dVar8;
  dVar8 = (this->RootNodeResult).CameraPose.Rotation.Yaw;
  (param_1->Rotation).Pitch = (this->RootNodeResult).CameraPose.Rotation.Pitch;
  (param_1->Rotation).Yaw = dVar8;
  (param_1->Rotation).Roll = (this->RootNodeResult).CameraPose.Rotation.Roll;
  dVar8 = FCameraPose::GetEffectiveFieldOfView
                    ((this->RootNodeResult).CameraPose.FocalLength,
                     (this->RootNodeResult).CameraPose.FieldOfView,
                     (this->RootNodeResult).CameraPose.SensorWidth,
                     (this->RootNodeResult).CameraPose.SensorHeight,
                     (this->RootNodeResult).CameraPose.SqueezeFactor,
                     (this->RootNodeResult).CameraPose.Overscan);
  param_1->FOV = (float)dVar8;
  param_1->DesiredFOV = (float)dVar8;
  fVar6 = (this->RootNodeResult).CameraPose.SensorHeight;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (this->RootNodeResult).CameraPose.SensorWidth / fVar6;
  }
  param_1->AspectRatio = fVar6;
  *(uint *)&param_1->field_0x68 =
       *(uint *)&param_1->field_0x68 ^
       ((uint)(this->RootNodeResult).CameraPose.ConstrainAspectRatio ^
       param_1->bConstrainAspectRatio) & 1;
  if ((this->RootNodeResult).CameraPose.OverrideAspectRatioAxisConstraint == false) {
    pEVar5 = &local_20;
    local_1c = 0;
  }
  else {
    bVar3 = (this->RootNodeResult).CameraPose.AspectRatioAxisConstraint.Value;
    local_20 = (EAspectRatioAxisConstraint)bVar3;
    pEVar5 = &local_28;
    local_28 = (EAspectRatioAxisConstraint)bVar3;
    local_24 = 1;
  }
  if ((TOptional<EAspectRatioAxisConstraint> *)pEVar5 != &param_1->AspectRatioAxisConstraint) {
    if ((char)pEVar5[1] == AspectRatio_MaintainYFOV) {
      if ((param_1->AspectRatioAxisConstraint).bIsSet != false) {
        (param_1->AspectRatioAxisConstraint).bIsSet = false;
      }
    }
    else {
      (param_1->AspectRatioAxisConstraint).TypedValue = local_20;
      (param_1->AspectRatioAxisConstraint).bIsSet = true;
    }
  }
  (param_1->ProjectionMode).Value = (this->RootNodeResult).CameraPose.ProjectionMode.Value;
  if ((this->RootNodeResult).CameraPose.ProjectionMode.Value == '\x01') {
    param_1->OrthoWidth = (this->RootNodeResult).CameraPose.OrthographicWidth;
  }
  param_1->PerspectiveNearClipPlane = (this->RootNodeResult).CameraPose.NearClippingPlane;
  fVar6 = (this->RootNodeResult).CameraPose.SensorWidth;
  fVar1 = (this->RootNodeResult).CameraPose.SqueezeFactor;
  fVar2 = (this->RootNodeResult).CameraPose.SensorHeight;
  dVar8 = (double)(fVar6 * fVar1);
  if (((0.0 < fVar2) && (dVar7 = (double)(fVar6 / fVar2), 0.0 < dVar7)) &&
     (dVar4 = (double)fVar1 * dVar7, dVar7 < dVar4)) {
    dVar8 = dVar8 * (dVar7 / dVar4);
  }
  dVar7 = (double)(this->RootNodeResult).CameraPose.SensorHorizontalOffset;
  (param_1->OffCenterProjectionOffset).field0_0x0._s_0.X =
       (dVar7 + dVar7) /
       ((double)((this->RootNodeResult).CameraPose.Overscan + __real_3f800000) * dVar8);
  fVar6 = (this->RootNodeResult).CameraPose.SensorHeight;
  dVar8 = (double)fVar6;
  if (((0.0 < fVar6) &&
      (dVar7 = (double)((this->RootNodeResult).CameraPose.SensorWidth / fVar6), 0.0 < dVar7)) &&
     (dVar4 = (double)(this->RootNodeResult).CameraPose.SqueezeFactor * dVar7, dVar4 < dVar7)) {
    dVar8 = dVar8 * (dVar4 / dVar7);
  }
  dVar7 = (double)(this->RootNodeResult).CameraPose.SensorVerticalOffset;
  (param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y =
       (dVar7 + dVar7) /
       ((double)((this->RootNodeResult).CameraPose.Overscan + __real_3f800000) * dVar8);
  FPostProcessSettings::operator=
            (&param_1->PostProcessSettings,
             &(this->RootNodeResult).PostProcessSettings.PostProcessSettings);
  param_1->PostProcessBlendWeight = 1.0;
  FCameraPose::ApplyPhysicalCameraSettings
            (&(this->RootNodeResult).CameraPose,&param_1->PostProcessSettings,false);
  FMinimalViewInfo::ApplyOverscan(param_1,(this->RootNodeResult).CameraPose.Overscan,false,false);
  return;
}

// GetEvaluationServices @ 14d5a8100

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::GetEvaluationServices
          (FCameraSystemEvaluator *this,
          TArray<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *pTVar3;
  
  if (param_1 != &this->EvaluationServices) {
    DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
              ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
               (param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->EvaluationServices).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pTVar3 = (TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
             (this->EvaluationServices).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
              ((param_1->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return;
}

// Initialize @ 14d5ae670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::Initialize
          (FCameraSystemEvaluator *this,FCameraSystemEvaluatorCreateParams *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FCameraSystemDebugID FVar6;
  UPackage *pUVar7;
  undefined8 uVar8;
  URootCameraNode *pUVar9;
  FName *pFVar10;
  UClass *pUVar11;
  FRootCameraNodeEvaluator *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FCameraSystemDebugRegistry *this_00;
  TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> *pTVar15;
  undefined4 extraout_var;
  longlong *plVar16;
  longlong *plVar17;
  FCameraEvaluationService *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FCameraRigCombinationRegistry *pFVar20;
  undefined1 auStackY_1f8 [32];
  FCameraRigCombinationRegistry *local_1c8;
  FSharedReferencer<1> FStack_1c0;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_1b8;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_1a8;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_198;
  TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> local_188;
  FCameraNodeEvaluatorBuilder local_178;
  FCameraNodeEvaluatorBuildParams local_170;
  FCameraSystemEvaluator *local_168;
  TReferenceControllerBase<1> *local_160;
  FCameraNodeEvaluatorInitializeParams local_158;
  FName local_f8 [2];
  TSharedRef<UE::Cameras::FOrientationInitializationService,1> local_e8;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_d8;
  TSharedRef<UE::Cameras::FCameraSystemEvaluator,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar7 = (UPackage *)(param_1->Owner).field0_0x0.DebugPtr;
  if (pUVar7 == (UPackage *)0x0) {
    pUVar7 = GetTransientPackage();
  }
  local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar7;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPackage *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&(this->WeakOwner).WeakPtr,(FObjectPtr)&local_188.SharedReferenceCount);
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  this->Role = param_1->Role;
  if (*(void **)&param_1->RootNodeFactory == (void *)0x0) {
    pFVar10 = ::FName::FName(local_f8,L"RootNode");
    FVar4 = *pFVar10;
    if (FVar4 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar11 = UDefaultRootCameraNode::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar11);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar7;
    local_b8._16_8_ = FVar4;
    pUVar9 = (URootCameraNode *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar17 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  else {
    Core::Private::Function::CheckCallable(*(void **)&param_1->RootNodeFactory);
    plVar17 = *(longlong **)&(param_1->RootNodeFactory).field_0x28;
    pcVar3 = *(code **)&param_1->RootNodeFactory;
    plVar16 = (longlong *)&(param_1->RootNodeFactory).field_0x10;
    if (plVar17 != (longlong *)0x0) {
      plVar16 = plVar17;
    }
    uVar8 = (**(code **)(*plVar16 + 8))();
    pUVar9 = (URootCameraNode *)(*pcVar3)(uVar8);
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (URootCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->RootNode).field0_0x0.DebugPtr = pUVar9;
  FCameraEvaluationContextStack::Initialize(&this->ContextStack,this);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (this->RootNode).field0_0x0.DebugPtr, pUVar9 != (URootCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_178.Storage = &this->RootEvaluatorStorage;
  local_170.Builder = &local_178;
  pFVar12 = (FRootCameraNodeEvaluator *)
            FCameraNodeEvaluatorBuildParams::BuildEvaluator
                      (&local_170,(UCameraNode *)(this->RootNode).field0_0x0.DebugPtr);
  this->RootEvaluator = pFVar12;
  pTVar13 = ::operator_new(0x48);
  pFVar20 = (FCameraRigCombinationRegistry *)&DAT_00000010;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FCameraEvaluationService *)&DAT_00000010;
    pTVar13 = pTVar19;
LAB_14d5ae8d2:
    if (((*(longlong *)&pFVar18->_padding_ == 0) || (pFVar18->_padding_ == 0)) ||
       (*(int *)(pFVar18->_padding_ + 8) < 1)) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FCameraEvaluationService **)&pFVar18->_padding_ = pFVar18;
      if (pTVar13 != (TReferenceControllerBase<1> *)pFVar18->_padding_) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar17 = (longlong *)pFVar18->_padding_;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
        pFVar18->_padding_ = (longlong)pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraModifierService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = 0;
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[2]._padding_ = 0;
    pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[3]._padding_ = 0;
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[4]._padding_ = 0;
    FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)(pTVar13 + 1));
    pTVar13[3]._padding_ = 0;
    pTVar13[1]._padding_ = (longlong)&___7FCameraModifierService_Cameras_UE__6B_;
    pFVar18 = (FCameraEvaluationService *)(pTVar13 + 1);
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[4]._padding_ = 0;
    if (pFVar18 != (FCameraEvaluationService *)0x0) goto LAB_14d5ae8d2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b8.Object = pFVar18;
  local_1b8.SharedReferenceCount.ReferenceController = pTVar13;
  RegisterEvaluationService(this,&local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = ::operator_new(0x78);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FCameraEvaluationService *)&DAT_00000010;
    pTVar13 = pTVar19;
LAB_14d5ae9d2:
    if (((*(longlong *)&pFVar18->_padding_ == 0) || (pFVar18->_padding_ == 0)) ||
       (*(int *)(pFVar18->_padding_ + 8) < 1)) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FCameraEvaluationService **)&pFVar18->_padding_ = pFVar18;
      if (pTVar13 != (TReferenceControllerBase<1> *)pFVar18->_padding_) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar17 = (longlong *)pFVar18->_padding_;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
        pFVar18->_padding_ = (longlong)pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraParameterSetterService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    FCameraParameterSetterService::FCameraParameterSetterService
              ((FCameraParameterSetterService *)(pTVar13 + 1));
    pFVar18 = (FCameraEvaluationService *)(pTVar13 + 1);
    if (pFVar18 != (FCameraEvaluationService *)0x0) goto LAB_14d5ae9d2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a8.Object = pFVar18;
  local_1a8.SharedReferenceCount.ReferenceController = pTVar13;
  RegisterEvaluationService(this,&local_1a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = ::operator_new(0x58);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FCameraEvaluationService *)&DAT_00000010;
    pTVar13 = pTVar19;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraShakeService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = 0;
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[2]._padding_ = 0;
    pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[3]._padding_ = 0;
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[4]._padding_ = 0;
    pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[5]._padding_ = 0;
    FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)(pTVar13 + 1));
    pTVar13[3]._padding_ = 0;
    pTVar13[1]._padding_ = (longlong)&___7FCameraShakeService_Cameras_UE__6B_;
    pFVar18 = (FCameraEvaluationService *)(pTVar13 + 1);
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[4]._padding_ = 0;
    pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[5]._padding_ = 0;
    if (pFVar18 == (FCameraEvaluationService *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14d5aeb73;
    }
  }
  if (((*(longlong *)&pFVar18->_padding_ == 0) || (pFVar18->_padding_ == 0)) ||
     (*(int *)(pFVar18->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FCameraEvaluationService **)&pFVar18->_padding_ = pFVar18;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar18->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar17 = (longlong *)pFVar18->_padding_;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
      pFVar18->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14d5aeb73:
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_198.Object = pFVar18;
  local_198.SharedReferenceCount.ReferenceController = pTVar13;
  RegisterEvaluationService(this,&local_198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar14 = ::operator_new(0x2c8);
  pTVar13 = pTVar19;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOrientationInitializationService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar14 + 1,0,0x2b8);
    FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)(pTVar14 + 1));
    pTVar14[3]._padding_ = 0;
    pTVar14[1]._padding_ = (longlong)&___7FOrientationInitializationService_Cameras_UE__6B_;
    pTVar14[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[4]._padding_ = 0;
    *(undefined1 *)&pTVar14[9].SharedReferenceCount = 0;
    *(undefined1 *)&pTVar14[0xb].SharedReferenceCount = 0;
    pTVar14[0x29].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[0x29].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar14[7].SharedReferenceCount = 0;
    *(undefined4 *)&pTVar14[0x2a]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar14[0x2a]._padding_ + 4) = 4;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pTVar14[0x2a].SharedReferenceCount =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pTVar14[0x2b]._padding_ = uVar8;
    *(double *)&pTVar14[0x2b].SharedReferenceCount =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined1 *)&pTVar14[0x2c]._padding_ = 0;
    pTVar13 = pTVar14;
  }
  TSharedRef<UE::Cameras::FOrientationInitializationService,1>::
  TSharedRef<UE::Cameras::FOrientationInitializationService,1>
            (&local_e8,(FOrientationInitializationService *)(pTVar13 + 1),pTVar13);
  local_d8.Object = (FCameraEvaluationService *)local_e8.Object;
  local_d8.SharedReferenceCount.ReferenceController =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterEvaluationService(this,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  FStack_1c0.ReferenceController = ::operator_new(0x70);
  if (FStack_1c0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_1c8 = ___xmm_00000000000000000000000000000010;
    FStack_1c0.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_1c0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar20 = (FCameraRigCombinationRegistry *)(FStack_1c0.ReferenceController + 1);
    (FStack_1c0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_1c0.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraRigCombinationRegistry_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    FStack_1c0.ReferenceController[2]._padding_ = 0;
    FStack_1c0.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[1]._padding_ = 0;
    FStack_1c0.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[3]._padding_ = 0;
    FStack_1c0.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&FStack_1c0.ReferenceController[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&FStack_1c0.ReferenceController[4]._padding_ + 4) = 0;
    FStack_1c0.ReferenceController[5]._padding_ = 0;
    FStack_1c0.ReferenceController[6]._padding_ = 0;
    FStack_1c0.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
    FStack_1c0.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
    if ((pFVar20 == (FCameraRigCombinationRegistry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    (FStack_1c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_1c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar19 = FStack_1c0.ReferenceController;
    local_1c8 = pFVar20;
  }
  if (&this->CameraRigCombinationRegistry !=
      (TSharedPtr<UE::Cameras::FCameraRigCombinationRegistry,1> *)&local_1c8) {
    (this->CameraRigCombinationRegistry).Object = pFVar20;
    local_1c8 = (FCameraRigCombinationRegistry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CameraRigCombinationRegistry).SharedReferenceCount,&FStack_1c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  if (this->RootEvaluator == (FRootCameraNodeEvaluator *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2635416169326051225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraSystemEvaluator.cpp"
                       ,0x67,"RootEvaluator");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_158.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_158.LastActiveCameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_158.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_158.LastActiveCameraRigInfo.CameraRig.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_158.LastActiveCameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
    local_158.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_158.LastActiveCameraRigInfo.InstanceID.Value = 0xffffffff;
    local_158.LastActiveCameraRigInfo.InstanceID.Layer = None;
    local_158.LastActiveCameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
    local_158.Layer = Main;
    local_158.Hierarchy = (FCameraNodeEvaluatorHierarchy *)0x0;
    local_158.Evaluator = this;
    FCameraNodeEvaluator::Initialize
              ((FCameraNodeEvaluator *)this->RootEvaluator,&local_158,&this->RootNodeResult);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  if ((this->DebugID).Value < 0) {
    this_00 = FCameraSystemDebugRegistry::Get();
    pTVar15 = TSharedFromThis<UE::Cameras::FCameraSystemEvaluator,1>::AsShared
                        ((TSharedFromThis<UE::Cameras::FCameraSystemEvaluator,1> *)this,&local_c8);
    local_168 = pTVar15->Object;
    local_160 = (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_160 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_160->SharedReferenceCount = (atomic<int>)((int)local_160->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    FVar6 = FCameraSystemDebugRegistry::RegisterCameraSystemEvaluator(this_00,&local_188);
    (this->DebugID).Value = *(int *)CONCAT44(extraout_var,FVar6.Value);
  }
  return;
}

// Initialize @ 14d5aeeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::Initialize
          (FCameraSystemEvaluator *this,TObjectPtr<UObject> param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  TObjectPtr<UObject>_u_0 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  if ((GC::GIsIncrementalReachabilityPending) && (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)
     ) {
    GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  local_58.DebugPtr = *param_1.field0_0x0;
  Initialize(this,(FCameraSystemEvaluatorCreateParams *)&local_58.ObjectPtr);
  if (local_48 != 0) {
    plVar1 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// IsDebugTraceEnabled @ 14d5b45a0

bool __cdecl UE::Cameras::FCameraSystemEvaluator::IsDebugTraceEnabled(void)

{
  if ((!GGameplayCamerasDebugTrace) && (CameraSystemChannel->Enabled < 0)) {
    return false;
  }
  return true;
}

// NotifyRootCameraNodeEvent @ 14d5b6d40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::NotifyRootCameraNodeEvent
          (FCameraSystemEvaluator *this,FRootCameraNodeCameraRigEvent *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EvaluationServices).ArrayNum;
  pFVar6 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    this_00 = *(FCameraEvaluationService **)pFVar6;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationService *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = FCameraEvaluationService::HasAllEvaluationServiceFlags
                      (this_00,NeedsRootCameraNodeEvents);
    if (bVar4) {
      if (this_00 == (FCameraEvaluationService *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FCameraEvaluationService::NotifyRootCameraNodeEvent(this_00,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// PopEvaluationContext @ 14d5c4460

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::PopEvaluationContext(FCameraSystemEvaluator *this)

{
  FCameraEvaluationContextStack::PopContext(&this->ContextStack);
  return;
}

// PostUpdateServices @ 14d5c83a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::PostUpdateServices
          (FCameraSystemEvaluator *this,float param_1,ECameraEvaluationServiceFlags param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FCameraEvaluationServiceUpdateResult local_res8;
  undefined1 local_res10 [8];
  FCameraEvaluationServiceUpdateParams local_38;
  
  iVar1 = (this->EvaluationServices).ArrayNum;
  local_res8.EvaluationResult = &this->RootNodeResult;
  pFVar5 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  local_38.Evaluator = this;
  local_38.DeltaTime = param_1;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    this_00 = *(FCameraEvaluationService **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationService *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = FCameraEvaluationService::HasAllEvaluationServiceFlags
                      (this_00,param_2 | NeedsPostUpdate);
    if (bVar4) {
      if (this_00 == (FCameraEvaluationService *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FCameraEvaluationService::PostUpdate(this_00,&local_38,&local_res8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// PreUpdateServices @ 14d5c8520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::PreUpdateServices
          (FCameraSystemEvaluator *this,float param_1,ECameraEvaluationServiceFlags param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FCameraEvaluationServiceUpdateResult local_res8;
  undefined1 local_res10 [8];
  FCameraEvaluationServiceUpdateParams local_38;
  
  iVar1 = (this->EvaluationServices).ArrayNum;
  local_res8.EvaluationResult = &this->RootNodeResult;
  pFVar5 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  local_38.Evaluator = this;
  local_38.DeltaTime = param_1;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    this_00 = *(FCameraEvaluationService **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCameraEvaluationService *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = FCameraEvaluationService::HasAllEvaluationServiceFlags(this_00,param_2 | NeedsPreUpdate)
    ;
    if (bVar4) {
      if (this_00 == (FCameraEvaluationService *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FCameraEvaluationService::PreUpdate(this_00,&local_38,&local_res8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// PushEvaluationContext @ 14d5c8870

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::PushEvaluationContext
          (FCameraSystemEvaluator *this,TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1
          )

{
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCameraEvaluationContextStack::PushContext(&this->ContextStack,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterEvaluationService @ 14d5c9a90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::RegisterEvaluationService
          (FCameraSystemEvaluator *this,TSharedRef<UE::Cameras::FCameraEvaluationService,1> *param_1
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FCameraEvaluationServiceInitializeParams local_res8;
  FCameraEvaluationService *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (this->EvaluationServices).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar5 + (longlong)(this->EvaluationServices).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->EvaluationServices).ArrayNum;
  piVar1 = &(this->EvaluationServices).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->EvaluationServices).AllocatorInstance,piVar1);
  }
  (this->EvaluationServices).ArrayNum = iVar4 + 1;
  pFVar5 = (this->EvaluationServices).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(FCameraEvaluationService **)pFVar5 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FCameraEvaluationService *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res8.Evaluator = this;
  FCameraEvaluationService::Initialize(param_1->Object,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveEvaluationContext @ 14d5cb930

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::RemoveEvaluationContext
          (FCameraSystemEvaluator *this,TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1
          )

{
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCameraEvaluationContextStack::RemoveContext(&this->ContextStack,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ShouldBuildOrDrawDebugBlocks @ 14d5cfeb0

bool __cdecl UE::Cameras::FCameraSystemEvaluator::ShouldBuildOrDrawDebugBlocks(void)

{
  if (((!GGameplayCamerasDebugTrace) && (CameraSystemChannel->Enabled < 0)) &&
     (!GGameplayCamerasDebugEnable)) {
    return false;
  }
  return true;
}

// UnregisterEvaluationService @ 14d5d2900

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::UnregisterEvaluationService
          (FCameraSystemEvaluator *this,TSharedRef<UE::Cameras::FCameraEvaluationService,1> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FCameraEvaluationServiceTeardownParams local_res8;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> *local_res10;
  FCameraEvaluationService *local_48;
  TReferenceControllerBase<1> *local_40;
  
  local_res8.Evaluator = this;
  local_res10 = param_1;
  FCameraEvaluationService::Teardown(param_1->Object,&local_res8);
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (this->EvaluationServices).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar1 + (longlong)(this->EvaluationServices).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar8 = (this->EvaluationServices).ArrayNum;
  lVar4 = (longlong)iVar8;
  if (iVar8 != 0) {
    pFVar1 = (this->EvaluationServices).AllocatorInstance.Data;
    iVar10 = 0;
    bVar3 = *(FCameraEvaluationService **)pFVar1 != local_48;
    lVar6 = 0;
    iVar8 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar9 = iVar8 + 1;
      if (lVar6 < lVar4) {
        pFVar5 = pFVar1 + lVar6 * 0x10;
        do {
          if (bVar3 != (*(FCameraEvaluationService **)pFVar5 != local_48)) break;
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
          pFVar5 = pFVar5 + 0x10;
        } while (lVar6 < lVar4);
      }
      iVar7 = iVar9 - iVar8;
      if (bVar3 == false) {
        DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
                  ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
                   (pFVar1 + (longlong)iVar8 * 0x10),iVar7);
      }
      else {
        if (iVar10 != iVar8) {
          memmove(pFVar1 + (longlong)iVar10 * 0x10,pFVar1 + (longlong)iVar8 * 0x10,
                  (longlong)iVar7 << 4);
        }
        iVar10 = iVar10 + iVar7;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar8 = iVar9;
    } while (lVar6 < lVar4);
    (this->EvaluationServices).ArrayNum = iVar10;
    param_1 = local_res10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 14d5d2cc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::Update
          (FCameraSystemEvaluator *this,FCameraSystemEvaluationParams *param_1)

{
  UpdateImpl(this,param_1->DeltaTime,Standard);
  return;
}

// UpdateCameraDirector @ 14d5d2d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::UpdateCameraDirector
          (FCameraSystemEvaluator *this,float param_1,FCameraDirectorEvaluator *param_2)

{
  FRootCameraNodeEvaluator *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  TObjectPtr<UCameraRigTransition_const_> TVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  ulonglong uVar11;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar12;
  longlong lVar13;
  undefined1 auStack_438 [32];
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> local_418;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> local_410;
  longlong local_408;
  longlong local_400;
  undefined8 local_3f8;
  undefined1 local_3e8 [4];
  FCameraDirectorEvaluationParams local_3e4;
  FCameraRigActivationDeactivationRequest local_3e0;
  FCameraRigActivationDeactivationRequest local_3a8;
  FCameraEvaluationContext *local_370;
  TReferenceControllerBase<1> *pTStack_368;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_360;
  TObjectPtr<UCameraRigTransition_const_>_u_0 local_358;
  ECameraRigLayer local_350;
  int local_34c;
  undefined1 local_348;
  FCameraEvaluationContext *local_340;
  TReferenceControllerBase<1> *pTStack_338;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_330;
  TObjectPtr<UCameraRigTransition_const_>_u_0 local_328;
  ECameraRigLayer local_320;
  int local_31c;
  undefined1 local_318;
  undefined4 local_310;
  undefined1 local_30c;
  FCameraEvaluationContext *local_308;
  TReferenceControllerBase<1> *pTStack_300;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_2f8;
  ECameraRigLayer local_2f0;
  TObjectPtr<UCameraRigTransition_const_>_u_0 local_2e8;
  undefined1 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  FCameraEvaluationContext *local_2d0;
  TReferenceControllerBase<1> *pTStack_2c8;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_2c0;
  ECameraRigLayer local_2b8;
  TObjectPtr<UCameraRigTransition_const_>_u_0 local_2b0;
  undefined1 local_2a8;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> local_298;
  int iStack_290;
  undefined4 uStack_28c;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> local_288;
  int iStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  TArrayView<UE::Cameras::FCameraRigActivationDeactivationRequest_const_,int> local_268;
  TArrayView<UE::Cameras::FCameraRigActivationDeactivationRequest_const_,int> local_258;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> local_248;
  int local_1d0;
  int local_1cc;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> local_1c8;
  int local_150;
  int local_14c;
  FCameraDirectorEvaluationResult local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_438;
  if ((param_2 == (FCameraDirectorEvaluator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CameraDirectorEvaluator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraSystemEvaluator.cpp"
                         ,0x124,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_148.Requests.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
  local_148.Requests.ArrayNum = 0;
  local_148.Requests.ArrayMax = 4;
  local_3e4.DeltaTime = param_1;
  FCameraDirectorEvaluator::Run(param_2,&local_3e4,&local_148);
  iVar5 = local_148.Requests.ArrayNum;
  uVar11 = (ulonglong)local_148.Requests.ArrayNum;
  local_1c8.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
  local_150 = 0;
  FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_148;
  if (local_148.Requests.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar12 = local_148.Requests.AllocatorInstance.SecondaryData;
  }
  local_14c = 2;
  FVar9 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_148;
  if (local_148.Requests.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar9 = local_148.Requests.AllocatorInstance.SecondaryData;
  }
  local_248.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
  lVar13 = uVar11 * 0x38;
  local_1d0 = 0;
  local_1cc = 2;
  while( true ) {
    if ((uint)uVar11 != iVar5) {
      local_3e8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraRigActivationDeactivationRequest,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_3e8);
    }
    if (FVar12 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                  (lVar13 + (longlong)FVar9)) break;
    FCameraRigActivationDeactivationRequest::ResolveCameraRigProxyIfNeeded
              ((FCameraRigActivationDeactivationRequest *)FVar12,param_2);
    if ((*(longlong *)FVar12 == 0) ||
       (((TObjectPtr<UCameraRigAsset_const_>_u_0 *)((longlong)FVar12 + 0x10))->DebugPtr ==
        (UCameraRigAsset *)0x0)) {
LAB_14d5d30c1:
      uVar11 = (ulonglong)(uint)local_148.Requests.ArrayNum;
      FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
               ((longlong)FVar12 + 0x38);
    }
    else {
      if (*(ECameraRigLayer *)((longlong)FVar12 + 0x24) != Main) {
        FRootCameraNodeEvaluator::ExecuteCameraDirectorRequest
                  (this->RootEvaluator,(FCameraRigActivationDeactivationRequest *)FVar12);
        goto LAB_14d5d30c1;
      }
      if (*(ECameraRigActivationDeactivationRequestType *)((longlong)FVar12 + 0x20) == Activate) {
        FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_1c8;
        if (local_1c8.SecondaryData !=
            (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
          FVar8 = local_1c8.SecondaryData;
        }
        if ((ulonglong)FVar8 <= (ulonglong)FVar12) {
          FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_1c8;
          if (local_1c8.SecondaryData !=
              (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
            FVar8 = local_1c8.SecondaryData;
          }
          if ((ulonglong)FVar12 < (ulonglong)((longlong)local_14c * 0x38 + (longlong)FVar8)) {
            local_400 = (longlong)local_150;
            local_3f8 = 0x38;
            local_410 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                        &local_1c8;
            if (local_1c8.SecondaryData !=
                (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
              local_410 = local_1c8.SecondaryData;
            }
            local_418 = FVar12;
            local_408 = (longlong)local_14c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_150 == local_14c) {
          local_150 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                                (0x838,&local_1c8,&local_14c);
        }
        FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_1c8;
        if (local_1c8.SecondaryData !=
            (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
          FVar8 = local_1c8.SecondaryData;
        }
        lVar7 = (longlong)local_150;
        local_150 = local_150 + 1;
        FCameraRigActivationDeactivationRequest::FCameraRigActivationDeactivationRequest
                  ((FCameraRigActivationDeactivationRequest *)(lVar7 * 0x38 + (longlong)FVar8),
                   (FCameraRigActivationDeactivationRequest *)FVar12);
        uVar11 = (ulonglong)(uint)local_148.Requests.ArrayNum;
        FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                 ((longlong)FVar12 + 0x38);
      }
      else {
        if (*(ECameraRigActivationDeactivationRequestType *)((longlong)FVar12 + 0x20) != Deactivate)
        goto LAB_14d5d30c1;
        FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_248;
        if (local_248.SecondaryData !=
            (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
          FVar8 = local_248.SecondaryData;
        }
        if ((ulonglong)FVar8 <= (ulonglong)FVar12) {
          FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_248;
          if (local_248.SecondaryData !=
              (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
            FVar8 = local_248.SecondaryData;
          }
          if ((ulonglong)FVar12 < (ulonglong)((longlong)local_1cc * 0x38 + (longlong)FVar8)) {
            local_400 = (longlong)local_1d0;
            local_3f8 = 0x38;
            local_410 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                        &local_248;
            if (local_248.SecondaryData !=
                (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
              local_410 = local_248.SecondaryData;
            }
            local_418 = FVar12;
            local_408 = (longlong)local_1cc;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_1d0 == local_1cc) {
          local_1d0 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                                (0x838,&local_248,&local_1cc);
        }
        FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_248;
        if (local_248.SecondaryData !=
            (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
          FVar8 = local_248.SecondaryData;
        }
        lVar7 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        FCameraRigActivationDeactivationRequest::FCameraRigActivationDeactivationRequest
                  ((FCameraRigActivationDeactivationRequest *)(lVar7 * 0x38 + (longlong)FVar8),
                   (FCameraRigActivationDeactivationRequest *)FVar12);
        uVar11 = (ulonglong)(uint)local_148.Requests.ArrayNum;
        FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                 ((longlong)FVar12 + 0x38);
      }
    }
  }
  if (local_150 == 1) {
    FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_1c8;
    if (local_1c8.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar12 = local_1c8.SecondaryData;
    }
    FRootCameraNodeEvaluator::ExecuteCameraDirectorRequest
              (this->RootEvaluator,(FCameraRigActivationDeactivationRequest *)FVar12);
  }
  else if (1 < local_150) {
    iStack_290 = local_150;
    local_3e0.Layer = Main;
    local_3e0.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_3e0.TransitionOverride.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0;
    local_3e0.OrderKey = 0;
    local_298 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_1c8;
    if (local_1c8.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      local_298 = local_1c8.SecondaryData;
    }
    local_3e0.bForceActivateDeactivate = false;
    local_268._12_4_ = uStack_28c;
    local_268.ArrayNum = local_150;
    local_3e0.CameraRig.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_3e0.CameraRigProxy.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigProxyAsset_const_>_u_0)0x0;
    local_3e0.RequestType = Activate;
    local_268.DataPtr = (FCameraRigActivationDeactivationRequest *)local_298;
    GetCombinedCameraRigRequest(this,&local_268,&local_3e0);
    FVar3.ReferenceController = local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController
    ;
    pFVar1 = this->RootEvaluator;
    if (local_3e0.RequestType == Activate) {
      if (local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             = (atomic<int>)
               ((int)(local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      local_370 = local_3e0.EvaluationContext.Object;
      pTStack_368 = local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_360 = local_3e0.CameraRig.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_3e0.CameraRig.field0_0x0.DebugPtr != (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_3e0.CameraRig.field0_0x0);
      }
      TVar4.field0_0x0 = (TObjectPtr<UCameraRigTransition_const_>_u_0)local_3e0.TransitionOverride;
      local_350 = local_3e0.Layer;
      local_34c = local_3e0.OrderKey;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_3e0.TransitionOverride.field0_0x0.DebugPtr !=
          (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_3e0.TransitionOverride.field0_0x0);
      }
      local_348 = local_3e0.bForceActivateDeactivate;
      local_358 = TVar4.field0_0x0;
      (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,local_278,&local_370);
      pTVar10 = pTStack_368;
LAB_14d5d32d1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
    else if (local_3e0.RequestType == Deactivate) {
      local_310 = 0xffffffff;
      local_30c = 0;
      if (local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             = (atomic<int>)
               ((int)(local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      local_308 = local_3e0.EvaluationContext.Object;
      pTStack_300 = local_3e0.EvaluationContext.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_2f8 = local_3e0.CameraRig.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_3e0.CameraRig.field0_0x0.DebugPtr != (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_3e0.CameraRig.field0_0x0);
      }
      TVar4.field0_0x0 = (TObjectPtr<UCameraRigTransition_const_>_u_0)local_3e0.TransitionOverride;
      local_2f0 = local_3e0.Layer;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_3e0.TransitionOverride.field0_0x0.DebugPtr !=
          (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_3e0.TransitionOverride.field0_0x0);
      }
      local_2e0 = local_3e0.bForceActivateDeactivate;
      local_2e8 = TVar4.field0_0x0;
      (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,&local_310);
      pTVar10 = pTStack_300;
      goto LAB_14d5d32d1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
  }
  if (local_1d0 == 1) {
    FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_248;
    if (local_248.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar12 = local_248.SecondaryData;
    }
    FRootCameraNodeEvaluator::ExecuteCameraDirectorRequest
              (this->RootEvaluator,(FCameraRigActivationDeactivationRequest *)FVar12);
    goto LAB_14d5d34f2;
  }
  if (local_1d0 < 2) goto LAB_14d5d34f2;
  iStack_280 = local_1d0;
  local_3a8.Layer = Main;
  local_288 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_248;
  if (local_248.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    local_288 = local_248.SecondaryData;
  }
  local_3a8.TransitionOverride.field0_0x0.DebugPtr =
       (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0;
  local_3a8.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_258._12_4_ = uStack_27c;
  local_258.ArrayNum = local_1d0;
  local_3a8.CameraRig.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
  local_3a8.CameraRigProxy.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigProxyAsset_const_>_u_0)0x0;
  local_3a8.OrderKey = 0;
  local_3a8.bForceActivateDeactivate = false;
  local_3a8.RequestType = Deactivate;
  local_258.DataPtr = (FCameraRigActivationDeactivationRequest *)local_288;
  GetCombinedCameraRigRequest(this,&local_258,&local_3a8);
  FVar3.ReferenceController = local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController;
  pFVar1 = this->RootEvaluator;
  if (local_3a8.RequestType == Activate) {
    if (local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_340 = local_3a8.EvaluationContext.Object;
    pTStack_338 = local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_330 = local_3a8.CameraRig.field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_3a8.CameraRig.field0_0x0.DebugPtr != (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0)) {
      GC::MarkAsReachable((UObject *)local_3a8.CameraRig.field0_0x0);
    }
    TVar4.field0_0x0 = (TObjectPtr<UCameraRigTransition_const_>_u_0)local_3a8.TransitionOverride;
    local_320 = local_3a8.Layer;
    local_31c = local_3a8.OrderKey;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_3a8.TransitionOverride.field0_0x0.DebugPtr !=
        (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0)) {
      GC::MarkAsReachable((UObject *)local_3a8.TransitionOverride.field0_0x0);
    }
    local_318 = local_3a8.bForceActivateDeactivate;
    local_328 = TVar4.field0_0x0;
    (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,local_270,&local_340);
    pTVar10 = pTStack_338;
LAB_14d5d34e5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  else if (local_3a8.RequestType == Deactivate) {
    local_2d8 = 0xffffffff;
    local_2d4 = 0;
    if (local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d0 = local_3a8.EvaluationContext.Object;
    pTStack_2c8 = local_3a8.EvaluationContext.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_2c0 = local_3a8.CameraRig.field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_3a8.CameraRig.field0_0x0.DebugPtr != (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0)) {
      GC::MarkAsReachable((UObject *)local_3a8.CameraRig.field0_0x0);
    }
    TVar4.field0_0x0 = (TObjectPtr<UCameraRigTransition_const_>_u_0)local_3a8.TransitionOverride;
    local_2b8 = local_3a8.Layer;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_3a8.TransitionOverride.field0_0x0.DebugPtr !=
        (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0)) {
      GC::MarkAsReachable((UObject *)local_3a8.TransitionOverride.field0_0x0);
    }
    local_2a8 = local_3a8.bForceActivateDeactivate;
    local_2b0 = TVar4.field0_0x0;
    (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,&local_2d8);
    pTVar10 = pTStack_2c8;
    goto LAB_14d5d34e5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
LAB_14d5d34f2:
  FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_248;
  if (local_248.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar12 = local_248.SecondaryData;
  }
  DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
            ((FCameraRigActivationDeactivationRequest *)FVar12,local_1d0);
  if (local_248.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FMemory::Free((void *)local_248.SecondaryData);
  }
  FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_1c8;
  if (local_1c8.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar12 = local_1c8.SecondaryData;
  }
  DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
            ((FCameraRigActivationDeactivationRequest *)FVar12,local_150);
  if (local_1c8.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FMemory::Free((void *)local_1c8.SecondaryData);
  }
  FVar12 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)&local_148;
  if (local_148.Requests.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar12 = local_148.Requests.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
            ((FCameraRigActivationDeactivationRequest *)FVar12,local_148.Requests.ArrayNum);
  if (local_148.Requests.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FMemory::Free((void *)local_148.Requests.AllocatorInstance.SecondaryData);
  }
  return;
}

// UpdateImpl @ 14d5d38e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::UpdateImpl
          (FCameraSystemEvaluator *this,float param_1,ECameraNodeEvaluationType param_2)

{
  int *piVar1;
  FCameraNodeEvaluationResult *this_00;
  FCameraDebugBlockStorage *this_01;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationService *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_CameraSystemEval_Total> FVar13;
  FRootCameraDebugBlock *pFVar14;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  byte bVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  uint local_res8;
  uint uStackX_c;
  byte local_res10;
  ECameraNodeEvaluationType local_res18;
  undefined1 local_res20 [8];
  FCameraDebugBlockBuildParams local_128 [4];
  FColor_u_0 local_124;
  FName local_120;
  FName local_118;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_108;
  FCameraEvaluationServiceUpdateResult local_f8;
  FCameraEvaluationServiceUpdateResult local_f0;
  LARGE_INTEGER local_e8;
  FStatMessage local_e0;
  FCameraDebugBlockBuilder local_d0;
  FCameraNodeEvaluationParams local_a8;
  FCameraEvaluationServiceUpdateParams local_80;
  FCameraEvaluationServiceUpdateParams local_70;
  FName local_60 [4];
  
  FVar13 = StatPtr_CameraSystemEval_Total;
  local_res18 = param_2;
  if (StatPtr_CameraSystemEval_Total == (FThreadSafeStaticStat<FStat_CameraSystemEval_Total>)0x0) {
    pFVar12 = ::FName::FName(local_60,"CameraSystemEval_Total");
    FVar13 = (FThreadSafeStaticStat<FStat_CameraSystemEval_Total>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_CameraSystemEval_Total,*pFVar12,
                        L"Camera System Eval","STATGROUP_CameraSystem","STATCAT_Advanced",
                        L"Camera System Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar13;
  bVar18 = 0;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  local_res10 = 0;
  FVar16 = FVar2.ComparisonIndex.Value;
  uVar15 = FVar2.Number;
  if ((FVar16.Value != 0) || (FVar17 = local_118, uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_124._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar18 = 1;
      local_res10 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar16.Value;
        local_120.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraSystemEvaluator.cpp"
                   ,0xe7);
        bVar18 = 3;
        local_res10 = 3;
      }
    }
    FVar17 = local_118;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar16.Value;
      uStackX_c = uVar15;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_res10 = bVar18 | 4;
      FVar17 = FVar2;
    }
  }
  FCameraNodeEvaluationResult::ResetFrameFlags(&this->RootNodeResult);
  FCameraVariableTable::AutoResetValues(&(this->RootNodeResult).VariableTable);
  FCameraContextDataTable::AutoResetValues(&(this->RootNodeResult).ContextDataTable);
  iVar11 = (this->EvaluationServices).ArrayNum;
  pFVar19 = (this->EvaluationServices).AllocatorInstance.Data;
  pFVar20 = pFVar19 + (longlong)iVar11 * 0x10;
  local_f8.EvaluationResult = &this->RootNodeResult;
  local_80.Evaluator = this;
  local_80.DeltaTime = param_1;
  while( true ) {
    if ((this->EvaluationServices).ArrayNum != iVar11) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar19 == pFVar20) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
    pFVar4 = *(FCameraEvaluationService **)pFVar19;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FCameraEvaluationService *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar10 = FCameraEvaluationService::HasAllEvaluationServiceFlags(pFVar4,NeedsPreUpdate);
    if (bVar10) {
      if ((pFVar4 == (FCameraEvaluationService *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FCameraEvaluationService::PreUpdate(pFVar4,&local_80,&local_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar19 = pFVar19 + 0x10;
  }
  FCameraEvaluationContextStack::GetActiveContext(&this->ContextStack,&local_108);
  if (local_108.Object == (FCameraEvaluationContext *)0x0) {
    (this->Result).bIsValid = false;
    (this->PreVisualResult).bIsValid = false;
  }
  else {
    if ((local_108.Object == (FCameraEvaluationContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_108.Object)->DirectorEvaluator != (FCameraDirectorEvaluator *)0x0) {
      UpdateCameraDirector(this,param_1,(local_108.Object)->DirectorEvaluator);
    }
    this_00 = &this->RootNodeResult;
    local_a8.bIsFirstFrame = false;
    local_a8.bIsActiveCameraRig = false;
    local_a8.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_a8.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8.EvaluationType = local_res18;
    local_a8.Evaluator = this;
    local_a8.DeltaTime = param_1;
    FCameraNodeEvaluationResult::Reset(this_00);
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->RootEvaluator,&local_a8,this_00);
    (this->RootNodeResult).bIsValid = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.EvaluationContext.SharedReferenceCount.ReferenceController);
    iVar11 = (this->EvaluationServices).ArrayNum;
    pFVar19 = (this->EvaluationServices).AllocatorInstance.Data;
    pFVar20 = pFVar19 + (longlong)iVar11 * 0x10;
    local_f0.EvaluationResult = this_00;
    local_70.Evaluator = this;
    local_70.DeltaTime = param_1;
    while( true ) {
      if ((this->EvaluationServices).ArrayNum != iVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar19 == pFVar20) break;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
      pFVar4 = *(FCameraEvaluationService **)pFVar19;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FCameraEvaluationService *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar10 = FCameraEvaluationService::HasAllEvaluationServiceFlags(pFVar4,NeedsPostUpdate);
      if (bVar10) {
        if ((pFVar4 == (FCameraEvaluationService *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FCameraEvaluationService::PostUpdate(pFVar4,&local_70,&local_f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar19 = pFVar19 + 0x10;
    }
    FCameraSystemEvaluationResult::Reset
              (&this->PreVisualResult,&this->RootEvaluator->PreVisualResult);
    FCameraSystemEvaluationResult::Reset(&this->Result,&this->RootNodeResult);
    if (((GGameplayCamerasDebugTrace != false) || (-1 < CameraSystemChannel->Enabled)) ||
       (GGameplayCamerasDebugEnable != false)) {
      this_01 = &this->DebugBlockStorage;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::DestroyObjects
                ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_01,false);
      pFVar14 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                          ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_01,0x30,8);
      *(undefined4 *)&pFVar14->field_0x2c = 0;
      (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar14->_padding_)
      ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar14->_padding_ = 0;
      (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar14->_padding_)
      ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar14->_padding_ = 0;
      pFVar14->_padding_ = (longlong)&___7FRootCameraDebugBlock_Cameras_UE__6B_;
      (pFVar14->DebugID).Value = -1;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this_01,
                 (FCameraDebugBlock *)pFVar14);
      uVar8 = _UNK_15076cb18;
      uVar6 = ___xmm_ffffffff000000000000000000000000;
      this->RootDebugBlock = pFVar14;
      uVar9 = _UNK_15076cb18;
      uVar7 = ___xmm_ffffffff000000000000000000000000;
      ___xmm_ffffffff000000000000000000000000 = (int)uVar6;
      _UNK_15076cb14 = SUB84(uVar6,4);
      local_d0.CurrentHierarchy.ArrayNum = ___xmm_ffffffff000000000000000000000000;
      local_d0.CurrentHierarchy.ArrayMax = _UNK_15076cb14;
      _UNK_15076cb18 = (ECameraDebugBlockBuildVisitFlags)uVar8;
      _UNK_15076cb1c = SUB84(uVar8,4);
      local_d0.VisitFlags = _UNK_15076cb18;
      local_d0.HierarchyOverrideStart = _UNK_15076cb1c;
      local_d0.CurrentHierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ___xmm_ffffffff000000000000000000000000 = uVar7;
      _UNK_15076cb18 = uVar9;
      local_d0.Storage = this_01;
      local_d0.RootBlock = pFVar14;
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_d0.CurrentHierarchy.AllocatorInstance,
                          &local_d0.CurrentHierarchy.ArrayMax);
      local_d0.CurrentHierarchy.ArrayNum = iVar11 + 1;
      *(FRootCameraDebugBlock **)
       (local_d0.CurrentHierarchy.AllocatorInstance.Data + (longlong)iVar11 * 8) = pFVar14;
      FRootCameraDebugBlock::BuildDebugBlocks(this->RootDebugBlock,this,local_128,&local_d0);
      if (local_d0.CurrentHierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.CurrentHierarchy.AllocatorInstance.Data);
      }
    }
    FCameraEvaluationContextStack::OnEndCameraSystemUpdate(&this->ContextStack);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  bVar18 = local_res10;
  if ((local_res10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar18 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((bVar18 & 4) != 0) && (FVar17 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e8);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_e0);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// ViewRotationPreviewUpdate @ 14d5d4420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluator::ViewRotationPreviewUpdate
          (FCameraSystemEvaluator *this,FCameraSystemEvaluationParams *param_1,
          FCameraSystemViewRotationEvaluationResult *param_2)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FCameraSystemEvaluator *pFVar11;
  undefined4 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_CameraSystemEval_Total> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar15;
  FScriptContainerElement *pFVar16;
  FNameEntryId FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar25 [16];
  double dVar28;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStackY_318 [32];
  FCameraNodeEvaluatorSerializeParams local_2b8;
  undefined1 local_2b7 [7];
  FName local_2b0;
  LARGE_INTEGER local_2a8;
  FName local_2a0;
  FStatMessage local_290;
  double local_280;
  FCameraSystemEvaluator *local_278;
  FCameraSystemEvaluationParams *local_270;
  FCameraNodeEvaluationParams local_268;
  FArchiveState local_238;
  undefined8 local_1a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_1a0;
  undefined8 local_198;
  FArchiveState local_188;
  undefined8 local_f8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_318;
  FVar17.Value = 0;
  FVar14 = StatPtr_CameraSystemEval_Total;
  local_2a8 = (LARGE_INTEGER)param_2;
  local_278 = this;
  local_270 = param_1;
  if (StatPtr_CameraSystemEval_Total == (FThreadSafeStaticStat<FStat_CameraSystemEval_Total>)0x0) {
    pFVar13 = ::FName::FName((FName *)&local_290,"CameraSystemEval_Total");
    FVar14 = (FThreadSafeStaticStat<FStat_CameraSystemEval_Total>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_CameraSystemEval_Total,*pFVar13,
                        L"Camera System Eval","STATGROUP_CameraSystem","STATCAT_Advanced",
                        L"Camera System Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b0 = (FName)((ulonglong)local_2b0 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0 = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraSystemEvaluator.cpp"
                   ,0x1b9);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2b0 = FVar15;
      local_2a0 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar9 = true;
      FVar17.Value = local_2a0.ComparisonIndex.Value;
      goto LAB_14d5d45a0;
    }
  }
  bVar9 = false;
  FVar15 = local_2a0;
LAB_14d5d45a0:
  pTVar2 = &this->EvaluatorSnapshot;
  (this->EvaluatorSnapshot).ArrayNum = 0;
  if ((this->EvaluatorSnapshot).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar2->AllocatorInstance,0,&(this->EvaluatorSnapshot).ArrayMax);
  }
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  local_238._padding_ = 0;
  local_238.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_238.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_238.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_238.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_238._40_8_ = 0;
  local_238.ArSerializingDefaults = 0;
  local_238.ArPortFlags = 0;
  local_238.ArMaxSerializeSize = 0;
  local_238.ArUEVer.FileVersionUE4 = 0;
  local_238.ArUEVer.FileVersionUE5 = 0;
  local_238.ArLicenseeUEVer = 0;
  local_238.ArEngineVer.Major = 0;
  local_238.ArEngineVer.Minor = 0;
  local_238.ArEngineVer.Patch = 0;
  local_238.ArEngineVer._6_2_ = 0;
  local_238.ArEngineVer.Changelist = 0;
  local_238.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_238.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_238.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_238.SerializedProperty = (FProperty *)0x0;
  local_238.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_238.bCustomVersionsAreReset = false;
  local_238._129_7_ = 0;
  local_238.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_238);
  local_1a8 = 0;
  local_238._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198 = 0;
  local_1a0 = pTVar2;
  FArchiveState::SetIsSaving(&local_238,true);
  (**(code **)(local_238._padding_ + 0x108))(&local_238,0);
  local_238._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  FCameraNodeEvaluatorHierarchy::Append
            ((FCameraNodeEvaluatorHierarchy *)local_d8,(FCameraNodeEvaluator *)this->RootEvaluator);
  uVar12 = local_d8._8_4_;
  pFVar3 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)(int)local_d8._8_4_ * 8);
  pFVar16 = (FScriptContainerElement *)local_d8._0_8_;
  while( true ) {
    if (local_d8._8_4_ != uVar12) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2b7);
    }
    pFVar11 = local_278;
    if (pFVar16 == pFVar3) break;
    if (((*(FCameraNodeEvaluator **)pFVar16)->PrivateFlags & NeedsSerialize) != None) {
      FCameraNodeEvaluator::Serialize
                (*(FCameraNodeEvaluator **)pFVar16,&local_2b8,(FArchive *)&local_238);
    }
    pFVar16 = pFVar16 + 8;
  }
  local_268.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_268.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_268.bIsFirstFrame = false;
  local_268.bIsActiveCameraRig = false;
  local_268.DeltaTime = local_270->DeltaTime;
  local_268.Evaluator = local_278;
  local_268.EvaluationType = ViewRotationPreview;
  FCameraNodeEvaluationResult::Reset(&local_278->RootNodeResult);
  FCameraNodeEvaluator::Run
            ((FCameraNodeEvaluator *)pFVar11->RootEvaluator,&local_268,&pFVar11->RootNodeResult);
  dVar34 = (pFVar11->RootNodeResult).CameraPose.Rotation.Pitch - *(double *)local_2a8;
  dVar32 = (pFVar11->RootNodeResult).CameraPose.Rotation.Yaw - *(double *)(local_2a8.QuadPart + 8);
  auVar29._0_8_ =
       (pFVar11->RootNodeResult).CameraPose.Rotation.Roll - *(double *)(local_2a8.QuadPart + 0x10);
  auVar29._8_8_ = 0;
  auVar22._8_4_ = SUB84(dVar32,0);
  auVar22._0_8_ = dVar34;
  auVar22._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar22 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar22 = roundpd(auVar29,auVar22,3);
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar30._0_8_ = auVar22._0_8_ * dVar5;
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar30._8_8_ = auVar22._8_8_ * dVar6;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = auVar29._0_8_;
  dVar34 = dVar34 - auVar30._0_8_;
  dVar32 = dVar32 - auVar30._8_8_;
  auVar22 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar22 = roundpd(auVar30,auVar22,3);
  dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar24._8_4_ = SUB84(dVar32,0);
  auVar24._0_8_ = dVar34;
  auVar24._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  dVar4 = auVar29._0_8_ - auVar22._0_8_ * dVar7;
  dVar28 = 0.0 - auVar22._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  dVar27 = auVar24._8_8_ + dVar6;
  uVar18 = -(ulonglong)(0.0 <= dVar4);
  uVar20 = -(ulonglong)(0.0 <= dVar28);
  uVar19 = -(ulonglong)(0.0 <= dVar34);
  uVar21 = -(ulonglong)(0.0 <= dVar32);
  auVar33._0_8_ = uVar18 & (ulonglong)dVar4;
  auVar33._8_4_ = (undefined4)(uVar20 & (ulonglong)dVar28);
  auVar33._12_4_ = (undefined4)((uVar20 & (ulonglong)dVar28) >> 0x20);
  auVar31._0_8_ = uVar19 & (ulonglong)dVar34;
  auVar31._8_4_ = (undefined4)(uVar21 & (ulonglong)dVar32);
  auVar31._12_4_ = (undefined4)((uVar21 & (ulonglong)dVar32) >> 0x20);
  auVar36._0_4_ = ~(uint)uVar19 & SUB84(dVar34 + dVar5,0);
  auVar36._4_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)(dVar34 + dVar5) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar21 & SUB84(dVar27,0);
  auVar36._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
  auVar36 = auVar36 | auVar31;
  auVar25._8_4_ = SUB84(dVar28,0);
  auVar25._0_8_ = dVar4;
  auVar25._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  dVar28 = auVar25._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar37._0_4_ = ~(uint)uVar18 & SUB84(dVar4 + dVar7,0);
  auVar37._4_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)(dVar4 + dVar7) >> 0x20);
  auVar37._8_4_ = ~(uint)uVar20 & SUB84(dVar28,0);
  auVar37._12_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
  auVar37 = auVar37 | auVar33;
  uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
  uVar20 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
  auVar35._0_8_ = uVar19 & (ulonglong)(auVar36._0_8_ - dVar5);
  uVar18 = uVar20 & (ulonglong)(auVar36._8_8_ - dVar6);
  auVar35._8_4_ = (undefined4)uVar18;
  auVar35._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar26._0_4_ = ~(uint)uVar19 & auVar36._0_4_;
  auVar26._4_4_ = ~(uint)(uVar19 >> 0x20) & auVar36._4_4_;
  auVar26._8_4_ = ~(uint)uVar20 & auVar36._8_4_;
  auVar26._12_4_ = ~(uint)(uVar20 >> 0x20) & auVar36._12_4_;
  dVar4 = *(double *)(local_2a8.QuadPart + 0x20);
  uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
  local_280 = (double)(uVar18 & (ulonglong)(auVar37._0_8_ - dVar7) |
                      CONCAT44(~(uint)(uVar18 >> 0x20) & auVar37._4_4_,~(uint)uVar18 & auVar37._0_4_
                              ));
  dVar28 = *(double *)(local_2a8.QuadPart + 0x28);
  ((TRotator<double> *)(local_2a8.QuadPart + 0x18))->Pitch =
       SUB168(auVar35 | auVar26,0) + ((TRotator<double> *)(local_2a8.QuadPart + 0x18))->Pitch;
  *(double *)(local_2a8.QuadPart + 0x20) = SUB168(auVar35 | auVar26,8) + dVar4;
  *(double *)(local_2a8.QuadPart + 0x28) = local_280 + dVar28;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.EvaluationContext.SharedReferenceCount.ReferenceController);
  local_188._padding_ = 0;
  local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_188._40_8_ = 0;
  local_188.ArSerializingDefaults = 0;
  local_188.ArPortFlags = 0;
  local_188.ArMaxSerializeSize = 0;
  local_188.ArUEVer.FileVersionUE4 = 0;
  local_188.ArUEVer.FileVersionUE5 = 0;
  local_188.ArLicenseeUEVer = 0;
  local_188.ArEngineVer.Major = 0;
  local_188.ArEngineVer.Minor = 0;
  local_188.ArEngineVer.Patch = 0;
  local_188.ArEngineVer._6_2_ = 0;
  local_188.ArEngineVer.Changelist = 0;
  local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_188.SerializedProperty = (FProperty *)0x0;
  local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_188.bCustomVersionsAreReset = false;
  local_188._129_7_ = 0;
  local_188.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_188);
  local_188._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_f8 = 0;
  local_e8 = 0x7fffffffffffffff;
  local_f0 = pTVar2;
  FArchiveState::SetIsLoading(&local_188,true);
  (**(code **)(local_188._padding_ + 0x108))(&local_188);
  uVar12 = local_d8._8_4_;
  pFVar3 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)(int)local_d8._8_4_ * 8);
  pFVar16 = (FScriptContainerElement *)local_d8._0_8_;
  while( true ) {
    if (local_d8._8_4_ != uVar12) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2b7);
    }
    if (pFVar16 == pFVar3) break;
    if (((*(FCameraNodeEvaluator **)pFVar16)->PrivateFlags & NeedsSerialize) != None) {
      FCameraNodeEvaluator::Serialize
                (*(FCameraNodeEvaluator **)pFVar16,&local_2b8,(FArchive *)&local_188);
    }
    pFVar16 = pFVar16 + 8;
  }
  FArchive::~FArchive((FArchive *)&local_188);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  uVar18 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar18 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_c8,0,(int *)((longlong)&local_c0 + 4));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_b8.NumBits = 0;
  if (0x80 < (uint)local_b8.MaxBits) {
    local_b8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  FArchive::~FArchive((FArchive *)&local_238);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_290.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_290.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_2a8);
      local_290.StatData.Pad = (uchar  [8])(local_2a8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_290);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FindOrRegisterEvaluationService<UE::Cameras::FDrivenControlRotationHelperService> @ 14d64ff00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> * __thiscall
UE::Cameras::FCameraSystemEvaluator::
FindOrRegisterEvaluationService<UE::Cameras::FDrivenControlRotationHelperService>
          (FCameraSystemEvaluator *this,
          TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedReferencer<1> FVar9;
  FDrivenControlRotationHelperService *pFVar10;
  FSharedReferencer<1> local_60;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_58;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_38;
  
  FindEvaluationService
            (this,&local_58,
             (FCameraObjectTypeID *)&FDrivenControlRotationHelperService::PrivateTypeID);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if ((FDrivenControlRotationHelperService *)local_58.Object ==
      (FDrivenControlRotationHelperService *)0x0) {
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    local_60.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    FVar9.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    pFVar10 = (FDrivenControlRotationHelperService *)local_58.Object;
    if ((FDrivenControlRotationHelperService *)local_58.Object !=
        (FDrivenControlRotationHelperService *)0x0) goto LAB_14d650186;
  }
  pTVar6 = ::operator_new(0x80);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FDrivenControlRotationHelperService *)&DAT_00000010;
LAB_14d65004c:
    if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
       (*(int *)(pFVar10->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10->_padding_ = (longlong)pFVar10;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar10->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar10->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDrivenControlRotationHelperService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7FDrivenControlRotationHelperService_Cameras_UE__6B_;
    pFVar10 = (FDrivenControlRotationHelperService *)(pTVar6 + 1);
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[6]._padding_ + 4) = 0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pFVar10 != (FDrivenControlRotationHelperService *)0x0) goto LAB_14d65004c;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = 0;
  local_40.ReferenceController = pTVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((pFVar10 == (FDrivenControlRotationHelperService *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *)(*pcVar4)();
    return pTVar7;
  }
  FVar9.ReferenceController = local_60.ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar10 == (FDrivenControlRotationHelperService *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *)(*pcVar4)();
    return pTVar7;
  }
  local_38.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (FCameraEvaluationService *)pFVar10;
  RegisterEvaluationService(this,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
LAB_14d650186:
  if ((pFVar10 == (FDrivenControlRotationHelperService *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object = pFVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FDrivenControlRotationHelperService *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<UE::Cameras::FDrivenControlRotationHelperService,1> *)(*pcVar4)();
    return pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 1505830f0

bool __thiscall
`UE::Cameras::FCameraSystemEvaluator::GetCombinedCameraRigRequest'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2635416169326050945>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2635416169326050945>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505838b0

bool __thiscall
`UE::Cameras::FCameraSystemEvaluator::GetCombinedCameraRigRequest'::__l10::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2635416169326050940>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2635416169326050940>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


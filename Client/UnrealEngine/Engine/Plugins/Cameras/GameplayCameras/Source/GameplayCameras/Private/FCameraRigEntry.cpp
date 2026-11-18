// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// ~FCameraRigEntry @ 14d5448f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry::~FCameraRigEntry
          (FCameraRigEntry *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult(&this->Result);
  FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult(&this->ContextResult);
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x48 = 0;
  pvVar3 = *(void **)&(this->EvaluatorHierarchy).TaggedRanges.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->EvaluatorHierarchy).TaggedRanges);
  pFVar4 = (this->EvaluatorHierarchy).FlattenedHierarchy.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
  ~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)&this->EvaluatorStorage);
  pTVar5 = (this->EvaluationContext).WeakReferenceCount.ReferenceController;
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
  return;
}

// FCameraRigEntry @ 14d58d7d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigEntry * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry::FCameraRigEntry
          (FCameraRigEntry *this,FCameraRigEntry *param_1)

{
  FCameraNodeEvaluatorStorage *pFVar1;
  undefined1 *puVar2;
  FCameraNodeEvaluatorStorage *pFVar3;
  UCameraRigAsset *pUVar4;
  UBlendStackRootCameraNode *pUVar5;
  undefined1 *puVar6;
  
  (this->EntryID).Value = (param_1->EntryID).Value;
  (this->EvaluationContext).Object = (param_1->EvaluationContext).Object;
  (this->EvaluationContext).WeakReferenceCount.ReferenceController =
       (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
  (param_1->EvaluationContext).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  pUVar4 = (param_1->CameraRig).field0_0x0.DebugPtr;
  (this->CameraRig).field0_0x0.DebugPtr = pUVar4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = (param_1->RootNode).field0_0x0.DebugPtr;
  (this->RootNode).field0_0x0.DebugPtr = pUVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UBlendStackRootCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar5);
  }
  pFVar1 = &this->EvaluatorStorage;
  puVar2 = &(this->EvaluatorStorage).field_0x10;
  *(undefined8 *)pFVar1 = 0;
  pFVar3 = &param_1->EvaluatorStorage;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)&(this->EvaluatorStorage).field_0x18 = 0;
  *(undefined8 *)&(this->EvaluatorStorage).field_0x8 = 0;
  if (pFVar1 != pFVar3) {
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar3;
    *(undefined8 *)pFVar3 = 0;
    *(undefined4 *)&(this->EvaluatorStorage).field_0x8 =
         *(undefined4 *)&(param_1->EvaluatorStorage).field_0x8;
    *(undefined4 *)&(this->EvaluatorStorage).field_0xc =
         *(undefined4 *)&(param_1->EvaluatorStorage).field_0xc;
    *(undefined8 *)&(param_1->EvaluatorStorage).field_0x8 = 0;
  }
  puVar6 = &(param_1->EvaluatorStorage).field_0x10;
  if (puVar2 != puVar6) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar6 = 0;
    *(undefined4 *)&(this->EvaluatorStorage).field_0x18 =
         *(undefined4 *)&(param_1->EvaluatorStorage).field_0x18;
    *(undefined4 *)&(this->EvaluatorStorage).field_0x1c =
         *(undefined4 *)&(param_1->EvaluatorStorage).field_0x1c;
    *(undefined8 *)&(param_1->EvaluatorStorage).field_0x18 = 0;
  }
  this->RootEvaluator = param_1->RootEvaluator;
  FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
            (&this->EvaluatorHierarchy,&param_1->EvaluatorHierarchy);
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
            (&this->ContextResult,&param_1->ContextResult);
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->Result,&param_1->Result);
  this->Flags = param_1->Flags;
  return this;
}

// FCameraRigEntry @ 14d58d920

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigEntry * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry::FCameraRigEntry(FCameraRigEntry *this)

{
  <unnamed_type_Flags> *p<Var1;
  
  (this->EntryID).Value = 0xffffffff;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (this->RootNode).field0_0x0.DebugPtr = (UBlendStackRootCameraNode *)0x0;
  *(undefined8 *)&this->EvaluatorStorage = 0;
  *(undefined8 *)&(this->EvaluatorStorage).field_0x8 = 0;
  *(undefined8 *)&(this->EvaluatorStorage).field_0x10 = 0;
  *(undefined8 *)&(this->EvaluatorStorage).field_0x18 = 0;
  this->RootEvaluator = (FBlendStackRootCameraNodeEvaluator *)0x0;
  (this->EvaluatorHierarchy).FlattenedHierarchy.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EvaluatorHierarchy).FlattenedHierarchy.ArrayNum = 0;
  (this->EvaluatorHierarchy).FlattenedHierarchy.ArrayMax = 0;
  *(undefined8 *)&(this->EvaluatorHierarchy).TaggedRanges = 0;
  *(undefined8 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x8 = 0;
  *(undefined8 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x20 = 0;
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x28 = 0;
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x2c = 0x80;
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x34 = 0;
  *(undefined8 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x40 = 0;
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x48 = 0;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->ContextResult);
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->Result);
  p<Var1->bIsFirstFrame = false;
  p<Var1->bIsFrozen = false;
  p<Var1->bForceCameraCut = false;
  p<Var1->bWasContextInitialResultValid = false;
  (this->Flags).bLogWarnings = true;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// FShakeEntry @ 14d656270

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FShakeEntry * __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry::FShakeEntry
          (FShakeEntry *this,FShakeEntry *param_1)

{
  FCameraNodeEvaluatorStorage *pFVar1;
  undefined1 *puVar2;
  FCameraNodeEvaluatorStorage *pFVar3;
  UCameraShakeAsset *pUVar4;
  double dVar5;
  undefined1 *puVar6;
  
  (this->EntryID).Value = (param_1->EntryID).Value;
  (this->EvaluationContext).Object = (param_1->EvaluationContext).Object;
  (this->EvaluationContext).WeakReferenceCount.ReferenceController =
       (param_1->EvaluationContext).WeakReferenceCount.ReferenceController;
  (param_1->EvaluationContext).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  pUVar4 = (param_1->CameraShake).field0_0x0.DebugPtr;
  (this->CameraShake).field0_0x0.DebugPtr = pUVar4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCameraShakeAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
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
  this->BlendEvaluator = param_1->BlendEvaluator;
  this->RootEvaluator = param_1->RootEvaluator;
  FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
            (&this->EvaluatorHierarchy,&param_1->EvaluatorHierarchy);
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->Result,&param_1->Result);
  this->CurrentTime = param_1->CurrentTime;
  this->ShakeScale = param_1->ShakeScale;
  this->BlendStatus = param_1->BlendStatus;
  this->PlaySpace = param_1->PlaySpace;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[0][1];
  (this->UserPlaySpaceMatrix).M[0][0] = (param_1->UserPlaySpaceMatrix).M[0][0];
  (this->UserPlaySpaceMatrix).M[0][1] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[0][3];
  (this->UserPlaySpaceMatrix).M[0][2] = (param_1->UserPlaySpaceMatrix).M[0][2];
  (this->UserPlaySpaceMatrix).M[0][3] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[1][1];
  (this->UserPlaySpaceMatrix).M[1][0] = (param_1->UserPlaySpaceMatrix).M[1][0];
  (this->UserPlaySpaceMatrix).M[1][1] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[1][3];
  (this->UserPlaySpaceMatrix).M[1][2] = (param_1->UserPlaySpaceMatrix).M[1][2];
  (this->UserPlaySpaceMatrix).M[1][3] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[2][1];
  (this->UserPlaySpaceMatrix).M[2][0] = (param_1->UserPlaySpaceMatrix).M[2][0];
  (this->UserPlaySpaceMatrix).M[2][1] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[2][3];
  (this->UserPlaySpaceMatrix).M[2][2] = (param_1->UserPlaySpaceMatrix).M[2][2];
  (this->UserPlaySpaceMatrix).M[2][3] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[3][1];
  (this->UserPlaySpaceMatrix).M[3][0] = (param_1->UserPlaySpaceMatrix).M[3][0];
  (this->UserPlaySpaceMatrix).M[3][1] = dVar5;
  dVar5 = (param_1->UserPlaySpaceMatrix).M[3][3];
  (this->UserPlaySpaceMatrix).M[3][2] = (param_1->UserPlaySpaceMatrix).M[3][2];
  (this->UserPlaySpaceMatrix).M[3][3] = dVar5;
  this->NumRequests = param_1->NumRequests;
  this->bPersistentRequest = param_1->bPersistentRequest;
  this->bIsFirstFrame = param_1->bIsFirstFrame;
  this->bIsBlendFull = param_1->bIsBlendFull;
  this->bIsBlendFinished = param_1->bIsBlendFinished;
  return this;
}

// ~FShakeEntry @ 14d658050

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry::~FShakeEntry(FShakeEntry *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar4;
  void *pvVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar3 = (this->Result).CameraPoseLocationTrail.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Result).PostProcessSettings.PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVar4 = (this->Result).CameraRigJoints.Joints.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FCameraContextDataTable::~FCameraContextDataTable(&(this->Result).ContextDataTable);
  FCameraVariableTable::~FCameraVariableTable(&(this->Result).VariableTable);
  *(undefined4 *)&(this->EvaluatorHierarchy).TaggedRanges.field_0x48 = 0;
  pvVar5 = *(void **)&(this->EvaluatorHierarchy).TaggedRanges.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->EvaluatorHierarchy).TaggedRanges);
  pFVar3 = (this->EvaluatorHierarchy).FlattenedHierarchy.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
  ~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>
            ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)&this->EvaluatorStorage);
  pTVar6 = (this->EvaluationContext).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  return;
}


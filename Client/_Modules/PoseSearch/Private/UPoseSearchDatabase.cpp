// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 50

// StaticClass @ 14a8985e0

UClass * __cdecl UPoseSearchDatabase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchDatabase",
               &Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton,
               StaticRegisterNativesUPoseSearchDatabase,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchDatabase>,
               InternalVTableHelperCtorCaller<UPoseSearchDatabase>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton;
}

// GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset> @ 14a8a5140

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
          (UPoseSearchDatabase *this,FSearchIndexAsset *param_1)

{
  FPoseSearchDatabaseAnimationAsset *pFVar1;
  
  pFVar1 = GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                     (this,param_1->SourceAssetIdx);
  return pFVar1;
}

// GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset> @ 14a8a5150

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
          (UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseSearchDatabaseAnimationAsset *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DatabaseAnimationAssets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->DatabaseAnimationAssets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPoseSearchDatabaseAnimationAsset *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPoseSearchDatabaseAnimationAsset *)
           ((this->DatabaseAnimationAssets).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FPoseSearchDatabaseAnimationAsset *)0x0;
}

// GetMutableDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset> @ 14a8a5340

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetMutableDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
          (UPoseSearchDatabase *this,FSearchIndexAsset *param_1)

{
  FPoseSearchDatabaseAnimationAsset *pFVar1;
  
  pFVar1 = GetMutableDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                     (this,param_1->SourceAssetIdx);
  return pFVar1;
}

// GetMutableDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset> @ 14a8a5350

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetMutableDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
          (UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseSearchDatabaseAnimationAsset *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DatabaseAnimationAssets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->DatabaseAnimationAssets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPoseSearchDatabaseAnimationAsset *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPoseSearchDatabaseAnimationAsset *)
           ((this->DatabaseAnimationAssets).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FPoseSearchDatabaseAnimationAsset *)0x0;
}

// UPoseSearchDatabase @ 14a8acfe0

UPoseSearchDatabase * __thiscall
UPoseSearchDatabase::UPoseSearchDatabase(UPoseSearchDatabase *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->ContinuingPoseCostBias = -0.01;
  this->BaseCostBias = 0.0;
  this->_padding_ = (longlong)&___7UPoseSearchDatabase__6B_;
  (this->Schema).field0_0x0.DebugPtr = (UPoseSearchSchema *)0x0;
  (this->AnimationAssets_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationAssets_DEPRECATED).ArrayNum = 0;
  (this->AnimationAssets_DEPRECATED).ArrayMax = 0;
  (this->DatabaseAnimationAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DatabaseAnimationAssets).ArrayNum = 0;
  (this->DatabaseAnimationAssets).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  this->LoopingCostBias = -0.005;
  this->ContinuingInteractionCostBias = 0.0;
  this->PoseSearchMode = PCAKDTree;
  this->KDTreeQueryNumNeighbors = 200;
  this->KDTreeQueryNumNeighborsWithDuplicates = 0;
  UE::PoseSearch::FSearchIndex::FSearchIndex(&this->SearchIndexPrivate);
  *(undefined8 *)&this->CachedAssetMap = 0;
  *(undefined8 *)&(this->CachedAssetMap).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetMap).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetMap).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetMap).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetMap).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetMap).field_0x48 = 0;
  return this;
}

// UPoseSearchDatabase @ 14a8ad0a0

UPoseSearchDatabase * __thiscall
UPoseSearchDatabase::UPoseSearchDatabase(UPoseSearchDatabase *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->ContinuingPoseCostBias = -0.01;
  this->BaseCostBias = 0.0;
  this->_padding_ = (longlong)&___7UPoseSearchDatabase__6B_;
  (this->Schema).field0_0x0.DebugPtr = (UPoseSearchSchema *)0x0;
  (this->AnimationAssets_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationAssets_DEPRECATED).ArrayNum = 0;
  (this->AnimationAssets_DEPRECATED).ArrayMax = 0;
  (this->DatabaseAnimationAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DatabaseAnimationAssets).ArrayNum = 0;
  (this->DatabaseAnimationAssets).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  this->LoopingCostBias = -0.005;
  this->ContinuingInteractionCostBias = 0.0;
  this->PoseSearchMode = PCAKDTree;
  this->KDTreeQueryNumNeighbors = 200;
  this->KDTreeQueryNumNeighborsWithDuplicates = 0;
  UE::PoseSearch::FSearchIndex::FSearchIndex(&this->SearchIndexPrivate);
  *(undefined8 *)&this->CachedAssetMap = 0;
  *(undefined8 *)&(this->CachedAssetMap).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetMap).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetMap).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetMap).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetMap).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetMap).field_0x48 = 0;
  return this;
}

// ~UPoseSearchDatabase @ 14a8ae0f0

void __thiscall UPoseSearchDatabase::~UPoseSearchDatabase(UPoseSearchDatabase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPoseSearchDatabase__6B_;
  *(undefined4 *)&(this->CachedAssetMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedAssetMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedAssetMap);
  UE::PoseSearch::FSearchIndex::~FSearchIndex(&this->SearchIndexPrivate);
  pFVar2 = (this->Tags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DatabaseAnimationAssets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->AnimationAssets_DEPRECATED).AllocatorInstance.Data,
             (this->AnimationAssets_DEPRECATED).ArrayNum);
  pFVar2 = (this->AnimationAssets_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// operator() @ 14a8af970

void __thiscall
`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>::operator()(void *this,int param_1)

{
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
  local_38.DataPtr = (float *)0x0;
  local_28.DataPtr = (float *)**(undefined8 **)((longlong)this + 0x40);
  local_28._8_8_ = (*(undefined8 **)((longlong)this + 0x40))[1];
  local_18.DataPtr = (float *)**(undefined8 **)((longlong)this + 0x18);
  local_18._8_8_ = (*(undefined8 **)((longlong)this + 0x18))[1];
  UE::PoseSearch::EvaluatePoseKernel<0,0>
            (*(FSearchResults **)((longlong)this + 8),*(FSearchIndex **)((longlong)this + 0x10),
             &local_18,&local_38,param_1,*(int *)((longlong)this + 0x20),
             *(FSearchFilters **)((longlong)this + 0x28),*(float *)((longlong)this + 0x30),
             *(float *)((longlong)this + 0x34),*(FSearchContext **)((longlong)this + 0x38),
             *(UPoseSearchDatabase **)this,&local_28,true);
  return;
}

// AddAnimationAsset @ 14a8b07d0

void __thiscall
UPoseSearchDatabase::AddAnimationAsset
          (UPoseSearchDatabase *this,FPoseSearchDatabaseAnimationAsset *param_1)

{
  TArray<FPoseSearchDatabaseAnimationAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FPoseSearchDatabaseAnimationAsset *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  pTVar1 = &this->DatabaseAnimationAssets;
  pFVar3 = (FPoseSearchDatabaseAnimationAsset *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->DatabaseAnimationAssets).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->DatabaseAnimationAssets).ArrayNum;
  piVar2 = &(this->DatabaseAnimationAssets).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DatabaseAnimationAssets).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(undefined ***)(pFVar4 + (longlong)iVar8 * 0x10) = &___7FPoseSearchDatabaseAnimationAsset__6B_;
  pUVar5 = (param_1->AnimAsset).field0_0x0.DebugPtr;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  return;
}

// AddAnimationAsset @ 14a8b08b0

void __thiscall
UPoseSearchDatabase::AddAnimationAsset(UPoseSearchDatabase *this,FInstancedStruct *param_1)

{
  TArray<FPoseSearchDatabaseAnimationAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FPoseSearchDatabaseAnimationAsset *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FPoseSearchDatabaseAnimationAsset *pFVar9;
  FPoseSearchDatabaseAnimationAsset local_18;
  
  pTVar1 = &this->DatabaseAnimationAssets;
  pFVar9 = UE::PoseSearch::UpgradeToDatabaseAnimationAsset(&local_18,param_1);
  pFVar3 = (FPoseSearchDatabaseAnimationAsset *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (this->DatabaseAnimationAssets).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->DatabaseAnimationAssets).ArrayNum;
  piVar2 = &(this->DatabaseAnimationAssets).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DatabaseAnimationAssets).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(undefined ***)(pFVar4 + (longlong)iVar8 * 0x10) = &___7FPoseSearchDatabaseAnimationAsset__6B_;
  pUVar5 = (pFVar9->AnimAsset).field0_0x0.DebugPtr;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FInstancedStruct::Reset(param_1);
  return;
}

// CalculateDynamicWeightsSqrt @ 14a8b18a0

TArrayView<float_const_,int> * __thiscall
UPoseSearchDatabase::CalculateDynamicWeightsSqrt
          (UPoseSearchDatabase *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          TArrayView<float,int> *param_1)

{
  int iVar1;
  UPoseSearchSchema *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<float_const_,int> *pTVar6;
  FSearchIndex *pFVar7;
  bool local_res8 [8];
  undefined4 uStack_3c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_38;
  <lambda_1> local_28;
  
  if (((ulonglong)param_1->DataPtr & 0xf) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(DynamicWeightsSqrtBuffer.GetData(), alignof(VectorRegister4Float))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x43f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar7 = GetSearchIndex(this);
  if (param_1->ArrayNum != (pFVar7->WeightsSqrt).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicWeightsSqrtBuffer.Num() == SearchIndex.WeightsSqrt.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x442,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pUVar2 = (this->Schema).field0_0x0.DebugPtr;
  local_res8[0] = false;
  pFVar3 = (pUVar2->FinalizedChannels).AllocatorInstance.Data;
  iVar1 = (pUVar2->FinalizedChannels).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<float_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  local_28.bInitialized = local_res8;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar1;
  local_38.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)pFVar3;
  local_28.SearchIndex = pFVar7;
  local_28.DynamicWeightsSqrtBuffer = param_1;
  UPoseSearchSchema::
  IterateChannelsRecursive<_UPoseSearchDatabase::CalculateDynamicWeightsSqrt_::__l2::<lambda_1>_>
            (&local_38,&local_28);
  if (local_res8[0] == false) {
    iVar1 = (pFVar7->WeightsSqrt).ArrayNum;
    __return_storage_ptr__->DataPtr = (float *)(pFVar7->WeightsSqrt).AllocatorInstance.Data;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<float_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
  }
  else {
    __return_storage_ptr__->DataPtr = param_1->DataPtr;
    __return_storage_ptr__->ArrayNum = param_1->ArrayNum;
  }
  return __return_storage_ptr__;
}

// Contains @ 14a8b20c0

bool __thiscall UPoseSearchDatabase::Contains(UPoseSearchDatabase *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  
  pTVar4 = TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->CachedAssetMap,param_1);
  if (pTVar4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = pTVar4->ArrayNum;
    if ((iVar5 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return iVar5 != 0;
}

// GetAnimationAsset @ 14a8b97e0

UObject * __thiscall UPoseSearchDatabase::GetAnimationAsset(UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DatabaseAnimationAssets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->DatabaseAnimationAssets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UObject *)(*pcVar1)();
        return pUVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014a8b985b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UObject *)
             (**(code **)(*(longlong *)
                           ((this->DatabaseAnimationAssets).AllocatorInstance.Data +
                           (longlong)param_1 * 0x10) + 8))();
    return pUVar4;
  }
  return (UObject *)0x0;
}

// GetAssetIndexesForSourceAsset @ 14a8b9970

TArrayView<int_const_,int> * __thiscall
UPoseSearchDatabase::GetAssetIndexesForSourceAsset
          (UPoseSearchDatabase *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          UObject *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->CachedAssetMap,param_1);
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    TArrayView<int_const_,int>::
    TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetDatabaseAnimationAsset @ 14a8baa50

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetDatabaseAnimationAsset(UPoseSearchDatabase *this,FSearchIndexAsset *param_1)

{
  FPoseSearchDatabaseAnimationAsset *pFVar1;
  
  pFVar1 = GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                     (this,param_1->SourceAssetIdx);
  return pFVar1;
}

// GetDatabaseAnimationAsset @ 14a8baa60

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetDatabaseAnimationAsset(UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseSearchDatabaseAnimationAsset *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DatabaseAnimationAssets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->DatabaseAnimationAssets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPoseSearchDatabaseAnimationAsset *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPoseSearchDatabaseAnimationAsset *)
           ((this->DatabaseAnimationAssets).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FPoseSearchDatabaseAnimationAsset *)0x0;
}

// GetMutableDatabaseAnimationAsset @ 14a8bb230

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetMutableDatabaseAnimationAsset
          (UPoseSearchDatabase *this,FSearchIndexAsset *param_1)

{
  FPoseSearchDatabaseAnimationAsset *pFVar1;
  
  pFVar1 = GetMutableDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                     (this,param_1->SourceAssetIdx);
  return pFVar1;
}

// GetMutableDatabaseAnimationAsset @ 14a8bb240

FPoseSearchDatabaseAnimationAsset * __thiscall
UPoseSearchDatabase::GetMutableDatabaseAnimationAsset(UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseSearchDatabaseAnimationAsset *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DatabaseAnimationAssets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->DatabaseAnimationAssets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPoseSearchDatabaseAnimationAsset *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPoseSearchDatabaseAnimationAsset *)
           ((this->DatabaseAnimationAssets).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FPoseSearchDatabaseAnimationAsset *)0x0;
}

// GetNormalizedAssetTime @ 14a8bb250

float __thiscall UPoseSearchDatabase::GetNormalizedAssetTime(UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSearchIndex *this_00;
  FSearchIndexAsset *this_01;
  float fVar3;
  float fVar4;
  
  if ((this->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Schema",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x60f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  this_00 = GetSearchIndex(this);
  this_01 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_00,param_1);
  fVar3 = this_01->ToRealTimeFactor;
  if (fVar3 <= __real_38d1b717) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ToRealTimeFactor > (1.e-4f)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x612,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar4 = UE::PoseSearch::FSearchIndexAsset::GetTimeFromPoseIndex
                    (this_01,param_1,((this->Schema).field0_0x0.DebugPtr)->SampleRate);
  return fVar4 / fVar3;
}

// GetNumAnimationAssets @ 14a8bb310

int __thiscall UPoseSearchDatabase::GetNumAnimationAssets(UPoseSearchDatabase *this)

{
  return (this->DatabaseAnimationAssets).ArrayNum;
}

// GetPoseIndex @ 14a8bc290

int __thiscall
UPoseSearchDatabase::GetPoseIndex
          (UPoseSearchDatabase *this,UObject *param_1,float param_2,bool param_3,
          TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  FSearchIndexAsset *this_00;
  double dVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FSearchIndex *pFVar10;
  FPoseSearchDatabaseAnimationAsset *pFVar11;
  UObject *pUVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  fVar18 = __real_7f7fffff;
  iVar7 = -1;
  if (param_1 == (UObject *)0x0) {
    return -1;
  }
  iVar3 = ((this->Schema).field0_0x0.DebugPtr)->SampleRate;
  pTVar9 = TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->CachedAssetMap,param_1);
  if (pTVar9 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar14 = (FScriptContainerElement *)0x0;
    iVar13 = 0;
  }
  else {
    iVar13 = pTVar9->ArrayNum;
    pFVar14 = (pTVar9->AllocatorInstance).Data;
    if ((iVar13 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  pFVar10 = GetSearchIndex(this);
  pFVar1 = pFVar14 + (longlong)iVar13 * 4;
  while( true ) {
    if (pFVar14 == pFVar1) {
      return iVar7;
    }
    uVar4 = *(uint *)pFVar14;
    uVar8 = 0;
    if ((int)uVar4 < (int)pFVar10->_padding_) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    this_00 = (FSearchIndexAsset *)(pFVar10->_padding_ + (longlong)(int)uVar4 * 0x24);
    if (((bool)(*(byte *)(pFVar10->_padding_ + 4 + (longlong)(int)uVar4 * 0x24) & 1) == param_3) &&
       (dVar16 = (param_4->field0_0x0)._s_0.X - (double)this_00->BlendParameterX,
       dVar2 = (param_4->field0_0x0)._s_0.Z,
       dVar17 = (param_4->field0_0x0)._s_0.Y - (double)this_00->BlendParameterY,
       fVar15 = (float)(dVar17 * dVar17 + dVar16 * dVar16 + dVar2 * dVar2), fVar15 <= fVar18)) {
      pFVar11 = GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                          (this,this_00->SourceAssetIdx);
      if ((pFVar11 == (FPoseSearchDatabaseAnimationAsset *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DatabaseAnimationAssetBase",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                             ,0x493,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      pUVar12 = (UObject *)(**(code **)(pFVar11->_padding_ + 8))(pFVar11);
      if ((pUVar12 != param_1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DatabaseAnimationAssetBase->GetAnimationAsset() == AnimationAsset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                             ,0x494,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = UE::PoseSearch::FSearchIndexAsset::GetPoseIndexFromTime
                        (this_00,param_2 * this_00->ToRealTimeFactor,(int)(float)iVar3);
      fVar18 = fVar15;
    }
    pFVar14 = pFVar14 + 4;
  }
  pcVar5 = (code *)swi(3);
  iVar7 = (*pcVar5)();
  return iVar7;
}

// GetPoseIndexFromTime @ 14a8bc630

int __thiscall
UPoseSearchDatabase::GetPoseIndexFromTime
          (UPoseSearchDatabase *this,float param_1,FSearchIndexAsset *param_2)

{
  int iVar1;
  
  iVar1 = UE::PoseSearch::FSearchIndexAsset::GetPoseIndexFromTime
                    (param_2,param_1,((this->Schema).field0_0x0.DebugPtr)->SampleRate);
  return iVar1;
}

// GetPrivateStaticClass @ 14a8bd200

UClass * __cdecl UPoseSearchDatabase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchDatabase",
               &Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton,
               StaticRegisterNativesUPoseSearchDatabase,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchDatabase>,
               InternalVTableHelperCtorCaller<UPoseSearchDatabase>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchDatabase.InnerSingleton;
}

// GetRealAssetTime @ 14a8bd380

float __thiscall UPoseSearchDatabase::GetRealAssetTime(UPoseSearchDatabase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSearchIndex *this_00;
  FSearchIndexAsset *this_01;
  float fVar3;
  
  if ((this->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Schema",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x608,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  this_00 = GetSearchIndex(this);
  this_01 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_00,param_1);
  fVar3 = UE::PoseSearch::FSearchIndexAsset::GetTimeFromPoseIndex
                    (this_01,param_1,((this->Schema).field0_0x0.DebugPtr)->SampleRate);
  return fVar3;
}

// GetSearchIndex @ 14a8bebb0

FSearchIndex * __thiscall UPoseSearchDatabase::GetSearchIndex(UPoseSearchDatabase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSearchIndex *pFVar5;
  
  if ((this->Schema).field0_0x0.DebugPtr != (UPoseSearchSchema *)0x0) {
    bVar3 = UE::PoseSearch::FSearchIndexBase::IsEmpty((FSearchIndexBase *)&this->SearchIndexPrivate)
    ;
    if (!bVar3) {
      iVar1 = ((this->Schema).field0_0x0.DebugPtr)->SchemaCardinality;
      iVar4 = UE::PoseSearch::FSearchIndex::GetNumDimensions(&this->SearchIndexPrivate);
      if (iVar4 == iVar1) goto LAB_14a8bec1b;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Schema && !SearchIndexPrivate.IsEmpty() && SearchIndexPrivate.GetNumDimensions() == Schema->SchemaCardinality"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                     ,0x46f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSearchIndex *)(*pcVar2)();
    return pFVar5;
  }
LAB_14a8bec1b:
  return &this->SearchIndexPrivate;
}

// GetSkipSearchIfPossible @ 14a8bec40

bool __thiscall UPoseSearchDatabase::GetSkipSearchIfPossible(UPoseSearchDatabase *this)

{
  return true;
}

// InsertAnimationAssetAt @ 14a8c08d0

void __thiscall
UPoseSearchDatabase::InsertAnimationAssetAt
          (UPoseSearchDatabase *this,FPoseSearchDatabaseAnimationAsset *param_1,int param_2)

{
  TArray<FPoseSearchDatabaseAnimationAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FPoseSearchDatabaseAnimationAsset *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  pTVar1 = &this->DatabaseAnimationAssets;
  pFVar3 = (FPoseSearchDatabaseAnimationAsset *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->DatabaseAnimationAssets).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->DatabaseAnimationAssets).ArrayNum;
  piVar2 = &(this->DatabaseAnimationAssets).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  (this->DatabaseAnimationAssets).ArrayNum = iVar7 + 1;
  lVar9 = (longlong)param_2 * 0x10;
  pFVar8 = pFVar8 + lVar9;
  memmove(pFVar8 + 0x10,pFVar8,(longlong)(iVar7 - param_2) << 4);
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  *(undefined ***)(pFVar8 + lVar9) = &___7FPoseSearchDatabaseAnimationAsset__6B_;
  pUVar4 = (param_1->AnimAsset).field0_0x0.DebugPtr;
  *(UObject **)(pFVar8 + lVar9 + 8) = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return;
}

// PopulateNonSelectableIdx @ 14a8c1d80

void __thiscall
UPoseSearchDatabase::PopulateNonSelectableIdx
          (UPoseSearchDatabase *this,
          TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *param_1,
          FSearchContext *param_2,float param_3,float param_4,TArrayView<float_const_,int> *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar7;
  IPoseHistory *pIVar8;
  code *pcVar9;
  FSearchContext *this_00;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FSearchIndexAsset *pFVar13;
  FPoseSearchDatabaseAnimationAsset *pFVar14;
  UObject *pUVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  float fVar27;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FSearchContext *local_res18;
  undefined1 local_158 [16];
  FWeakObjectPtr local_148;
  FScriptContainerElement *local_140;
  int local_138;
  UPoseSearchDatabase *local_130;
  longlong *local_128;
  uchar *local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  int iStack_fc;
  undefined8 local_f8;
  longlong *local_f0;
  int iStack_e8;
  uchar auStack_e4 [4];
  uint *local_e0;
  uchar auStack_d8 [4];
  int iStack_d4;
  int local_d0;
  uchar auStack_cc [20];
  TArrayView<float_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88 [2];
  uchar local_5c [36];
  
  local_res18 = param_2;
  local_158._8_8_ = GetSearchIndex(this);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  if ((((*(int *)&param_2->ContinuingPoseSearchResult != -1) &&
       (bVar10 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                            &(param_2->ContinuingPoseSearchResult).field_0x4,(void *)0x0), !bVar10))
      && (bVar10 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
                   UEOpEquals<UPoseSearchDatabase,bool>
                             ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                              &(param_2->ContinuingPoseSearchResult).field_0x4,this), bVar10)) &&
     (pFVar13 = UE::PoseSearch::FDatabasePoseIdx::GetSearchIndexAsset
                          ((FDatabasePoseIdx *)&param_2->ContinuingPoseSearchResult,true),
     pFVar13 != (FSearchIndexAsset *)0x0)) {
    if (pFVar13->bDisableReselection) {
      pFVar14 = GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                          (this,pFVar13->SourceAssetIdx);
      if ((pFVar14 == (FPoseSearchDatabaseAnimationAsset *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DatabaseAnimationAssetBase",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                              ,0x653,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pUVar15 = (UObject *)(**(code **)(pFVar14->_padding_ + 8))(pFVar14);
      pTVar16 = TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->CachedAssetMap,pUVar15);
      if (pTVar16 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar25 = (FScriptContainerElement *)0x0;
        iVar20 = 0;
      }
      else {
        iVar20 = pTVar16->ArrayNum;
        pFVar25 = (pTVar16->AllocatorInstance).Data;
        if ((iVar20 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar26 = pFVar25 + (longlong)iVar20 * 4;
      local_140 = pFVar26;
      if (pFVar25 != pFVar26) {
        do {
          uVar5 = *(uint *)pFVar25;
          lVar23 = (longlong)(int)uVar5;
          uVar11 = 0;
          if ((int)uVar5 < (int)*(longlong *)(local_158._8_8_ + 0x50)) {
            uVar11 = ~uVar5 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          lVar6 = *(longlong *)(local_158._8_8_ + 0x48);
          local_158._0_4_ = *(int *)(lVar6 + 0x14 + lVar23 * 0x24);
          iVar20 = *(int *)(lVar6 + 0x1c + lVar23 * 0x24);
          iVar22 = *(int *)(lVar6 + 0x18 + lVar23 * 0x24);
          iVar21 = local_158._0_4_ + 1;
          for (; (int)local_158._0_4_ < iVar21 + (iVar20 - iVar22);
              local_158._0_4_ = local_158._0_4_ + 1) {
            pTVar7 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                     (param_1->AllocatorInstance).SecondaryData.Data;
            pTVar17 = param_1;
            if (pTVar7 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0)
            {
              pTVar17 = pTVar7;
            }
            if (pTVar17 <=
                (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)local_158) {
              pTVar17 = param_1;
              if (pTVar7 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0
                 ) {
                pTVar17 = pTVar7;
              }
              if ((local_158 < (pTVar17->AllocatorInstance).InlineData + (longlong)*piVar1 * 4) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar12 = param_1->ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                                 (0x404,&param_1->AllocatorInstance,piVar1);
            }
            local_b8.DataPtr = param_5->DataPtr;
            local_b8.ArrayNum = param_5->ArrayNum;
            local_b8._12_4_ = *(undefined4 *)&param_5->field_0xc;
            param_1->ArrayNum = iVar12 + 1;
            pTVar7 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                     (param_1->AllocatorInstance).SecondaryData.Data;
            pTVar17 = param_1;
            if (pTVar7 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0)
            {
              pTVar17 = pTVar7;
            }
            *(undefined4 *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar12 * 4) =
                 local_158._0_4_;
            UE::PoseSearch::FSearchContext::Track
                      (param_2,this,local_158._0_4_,DiscardedBy_AssetReselection,&local_b8,param_3,
                       param_4);
            pFVar26 = local_140;
          }
          pFVar25 = pFVar25 + 4;
        } while (pFVar25 != pFVar26);
      }
    }
    else {
      fVar3 = *(float *)&param_2->PoseJumpThresholdTime;
      fVar4 = *(float *)&(param_2->PoseJumpThresholdTime).field_0x4;
      if (__real_322bcc77 < (float)((uint)(fVar3 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff))
      {
        iVar12 = (pFVar13->LastSampleIdx - pFVar13->FirstSampleIdx) + 1;
        iVar20 = pFVar13->FirstPoseIdx;
        fVar27 = (float)((this->Schema).field0_0x0.DebugPtr)->SampleRate;
        iVar21 = ((int)ROUND((fVar3 + fVar3) * fVar27 - __real_3f000000) >> 1) +
                 *(int *)&param_2->ContinuingPoseSearchResult;
        iVar22 = *(int *)&param_2->ContinuingPoseSearchResult -
                 ((int)ROUND(__real_bf000000 - (fVar4 + fVar4) * fVar27) >> 1);
        if (pFVar13->bLooping) {
          for (; iVar21 < iVar22; iVar21 = iVar21 + 1) {
            iVar19 = (iVar21 - iVar20) % iVar12;
            local_158._4_4_ = iVar19 + iVar20;
            if (iVar19 < 0) {
              local_158._4_4_ = local_158._4_4_ + iVar12;
            }
            TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::
            AddUniqueImpl<int_const_&>(param_1,(int *)(local_158 + 4));
            local_a8.DataPtr = param_5->DataPtr;
            local_a8.ArrayNum = param_5->ArrayNum;
            local_a8._12_4_ = *(undefined4 *)&param_5->field_0xc;
            UE::PoseSearch::FSearchContext::Track
                      (param_2,this,local_158._4_4_,DiscardedBy_PoseJumpThresholdTime,&local_a8,
                       param_3,param_4);
          }
        }
        else {
          if (iVar12 + iVar20 < iVar22) {
            iVar22 = iVar12 + iVar20;
          }
          local_res10[0] = iVar21;
          if (iVar21 < iVar20) {
            local_res10[0] = iVar20;
          }
          for (; local_res10[0] < iVar22; local_res10[0] = local_res10[0] + 1) {
            TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::
            AddUniqueImpl<int_const_&>(param_1,local_res10);
            local_98.DataPtr = param_5->DataPtr;
            local_98.ArrayNum = param_5->ArrayNum;
            local_98._12_4_ = *(undefined4 *)&param_5->field_0xc;
            UE::PoseSearch::FSearchContext::Track
                      (param_2,this,local_res10[0],DiscardedBy_PoseJumpThresholdTime,&local_98,
                       param_3,param_4);
          }
        }
      }
    }
  }
  pFVar25 = (FScriptContainerElement *)(param_2->PoseHistories).AllocatorInstance.SecondaryData.Data
  ;
  iVar20 = (param_2->PoseHistories).ArrayNum;
  if ((TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
       *)pFVar25 ==
      (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
       *)0x0) {
    pFVar25 = (FScriptContainerElement *)&param_2->PoseHistories;
  }
  local_140 = pFVar25;
  if ((iVar20 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_120 = (((TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)pFVar25)->AllocatorInstance).InlineData + (longlong)iVar20 * 8;
  if (pFVar25 != (FScriptContainerElement *)local_120) {
    do {
      pIVar8 = *(IPoseHistory **)
                (((TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                   *)pFVar25)->AllocatorInstance).InlineData;
      if ((pIVar8 == (IPoseHistory *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PoseHistory",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                              ,0x690,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar18 = (longlong *)(**(code **)(*(longlong *)pIVar8 + 0x60))(pIVar8);
      local_128 = plVar18;
      if (plVar18 != (longlong *)0x0) {
        iVar22 = 0;
        iVar20 = 0;
        if (this != (UPoseSearchDatabase *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_148.ObjectIndex = 0;
          local_148.ObjectSerialNumber = 0;
          local_130 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_130);
          iVar22 = local_148.ObjectIndex;
          iVar20 = local_148.ObjectSerialNumber;
        }
        this_00 = local_res18;
        local_e0 = (uint *)(plVar18 + 2);
        local_158._8_4_ = 1;
        iVar21 = (int)plVar18[5];
        iStack_e8 = 0;
        local_d0 = 0;
        iStack_d4 = 0;
        if (iVar21 != 0) {
          puVar24 = local_e0;
          if ((uint *)plVar18[4] != (uint *)0x0) {
            puVar24 = (uint *)plVar18[4];
          }
          uVar5 = *puVar24;
          while (uVar5 == 0) {
            lVar23 = (longlong)iStack_e8;
            local_d0 = local_d0 + 0x20;
            iStack_e8 = iStack_e8 + 1;
            iStack_d4 = iVar21;
            if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
            goto LAB_14a8c23b1;
            uVar5 = puVar24[lVar23 + 1];
          }
          local_158._8_8_ = ZEXT48(-uVar5 & uVar5);
          uVar2 = local_158._8_8_ * 2 + 1;
          lVar23 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_138 = (int)lVar23;
          iStack_d4 = local_138 + -1 + local_d0;
          if (iVar21 < iStack_d4) {
            iStack_d4 = iVar21;
          }
        }
LAB_14a8c23b1:
        local_f0 = local_128;
        auStack_e4 = SUB84(local_158._8_8_,0);
        auStack_d8[0] = 0xff;
        auStack_d8[1] = 0xff;
        auStack_d8[2] = 0xff;
        auStack_d8[3] = 0xff;
        auStack_cc[0] = local_5c[0];
        auStack_cc[1] = local_5c[1];
        auStack_cc[2] = local_5c[2];
        auStack_cc[3] = local_5c[3];
        auStack_110._0_8_ = CONCAT44(auStack_e4,iStack_e8);
        uStack_100 = 0xffffffff;
        auStack_110._8_8_ = local_e0;
        iStack_fc = iStack_d4;
        local_118 = local_128;
        local_f8._4_1_ = local_5c[0];
        local_f8._5_1_ = local_5c[1];
        local_f8._6_1_ = local_5c[2];
        local_f8._7_1_ = local_5c[3];
        local_f8._0_4_ = local_d0;
        iVar12 = iStack_d4;
        if (iStack_d4 < iVar21) {
          do {
            piVar1 = (int *)(*local_118 + (longlong)iVar12 * 0x18);
            if ((*(int *)(*local_118 + 4 + (longlong)iVar12 * 0x18) == iVar22) &&
               (piVar1[2] == iVar20)) {
              TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::
              AddUniqueImpl<int_const_&>(param_1,piVar1);
              local_88[0].DataPtr = param_5->DataPtr;
              local_88[0].ArrayNum = param_5->ArrayNum;
              local_88[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
              UE::PoseSearch::FSearchContext::Track
                        (this_00,this,*piVar1,DiscardedBy_PoseReselectHistory,local_88,param_3,
                         param_4);
            }
            uStack_100 = uStack_100 & ~auStack_110._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
            pFVar25 = local_140;
            iVar12 = iStack_fc;
          } while (iStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
        }
      }
      pFVar25 = (FScriptContainerElement *)
                ((((TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                    *)pFVar25)->AllocatorInstance).InlineData + 8);
      local_140 = pFVar25;
    } while (pFVar25 != (FScriptContainerElement *)local_120);
  }
  pTVar7 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
           (param_1->AllocatorInstance).SecondaryData.Data;
  pTVar17 = param_1;
  if (pTVar7 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar17 = pTVar7;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)pTVar17,param_1->ArrayNum,local_res18._0_1_,(TLess<void> *)local_res8);
  return;
}

// PopulateSelectableAssetIdx @ 14a8c2500

void __thiscall
UPoseSearchDatabase::PopulateSelectableAssetIdx
          (UPoseSearchDatabase *this,
          TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *param_1,
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FSearchIndex *pFVar13;
  longlong lVar14;
  int iVar15;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *_Src;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar22;
  uint *puVar23;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if (param_2 !=
      (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
       *)0x0) {
    iVar15 = *(int *)&(param_2->Elements).field_0x88;
    iVar11 = *(int *)&(param_2->Elements).field_0xac;
    if (iVar15 != iVar11) {
      iVar19 = 0;
      iVar21 = 0;
      puVar1 = &(param_2->Elements).field_0x90;
      uVar9 = 1;
      iVar4 = *(int *)&(param_2->Elements).field_0xa0;
      iVar10 = 0;
      if (iVar4 != 0) {
        puVar23 = *(uint **)&(param_2->Elements).field_0x98;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar1;
        }
        uVar18 = *puVar23;
        while (uVar18 == 0) {
          lVar14 = (longlong)iVar19;
          iVar21 = iVar21 + 0x20;
          iVar19 = iVar19 + 1;
          iVar10 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14a8c261e;
          uVar18 = puVar23[lVar14 + 1];
        }
        uVar9 = -uVar18 & uVar18;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_res20 = (int)lVar14;
        iVar10 = iVar21 + -1 + local_res20;
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
      }
LAB_14a8c261e:
      uVar18 = *(uint *)&(param_2->Elements).field_0xa0;
      uVar17 = uVar18 & 0xffffffe0;
      TStack_98._padding_ = CONCAT44(uVar9,iVar19);
      TStack_98.CurrentBitIndex = iVar10;
      TStack_98.UnvisitedBitMask = 0xffffffff;
      TStack_98._28_4_ = local_54;
      TStack_98.BaseBitIndex = iVar21;
      uStack_78 = CONCAT44(uStack_a4,iVar15 - iVar11);
      iVar15 = (int)uVar18 >> 5;
      TStack_98.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1;
      if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = *(uint *)&(param_2->Elements).field_0xa0;
      if (uVar18 != uVar9) {
        puVar20 = *(undefined1 **)&(param_2->Elements).field_0x98;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar1;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
        while (uVar18 == 0) {
          lVar14 = (longlong)iVar15;
          uVar17 = uVar17 + 0x20;
          iVar15 = iVar15 + 1;
          uVar18 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14a8c271d;
          uVar18 = *(uint *)(puVar20 + lVar14 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar18 = (int)lVar14 + -1 + uVar17;
        if ((int)uVar9 < (int)uVar18) {
          uVar18 = uVar9;
        }
      }
LAB_14a8c271d:
      piVar2 = &param_1->ArrayNum;
      while( true ) {
        if (*(int *)&(param_2->Elements).field_0x88 - *(int *)&(param_2->Elements).field_0xac !=
            (int)uStack_78) {
          local_res10[0] = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_98.CurrentBitIndex == uVar18) &&
           (TStack_98.Array ==
            (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar1)) break;
        pTVar5 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                   **)&(param_2->Elements).field_0x80;
        pTVar16 = param_2;
        if (pTVar5 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
          pTVar16 = pTVar5;
        }
        pTVar12 = TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->CachedAssetMap,
                         *(UObject **)
                          (&(pTVar16->Elements).field_0x0 +
                          (longlong)TStack_98.CurrentBitIndex * 0x10));
        if (pTVar12 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          _Src = (FScriptContainerElement *)0x0;
          iVar15 = 0;
LAB_14a8c27cd:
          bVar8 = iVar15 == 0;
          if (iVar15 < 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9a9,L"Invalid range size: %lld");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            bVar8 = iVar15 == 0;
          }
        }
        else {
          iVar15 = pTVar12->ArrayNum;
          _Src = (pTVar12->AllocatorInstance).Data;
          bVar8 = iVar15 == 0;
          if (iVar15 < 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            goto LAB_14a8c27cd;
          }
        }
        if (!bVar8) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                             (4,4,iVar15,&param_1->AllocatorInstance,piVar2,&param_1->ArrayMax);
          pTVar6 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   (param_1->AllocatorInstance).SecondaryData.Data;
          pTVar22 = param_1;
          if (pTVar6 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
            pTVar22 = pTVar6;
          }
          memcpy((pTVar22->AllocatorInstance).InlineData + (longlong)iVar11 * 4,_Src,
                 (longlong)iVar15 << 2);
        }
        TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                  (&TStack_98);
      }
      if (*piVar2 != 0) {
        pFVar13 = GetSearchIndex(this);
        if (*piVar2 == (int)pFVar13->_padding_) {
          *piVar2 = 0;
          if (param_1->ArrayMax < 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                      (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
          }
        }
        else {
          pTVar6 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   (param_1->AllocatorInstance).SecondaryData.Data;
          if (pTVar6 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
            param_1 = pTVar6;
          }
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                    ((int *)param_1,*piVar2,local_res10[0],(TLess<void> *)local_res18);
        }
      }
    }
  }
  return;
}

// PopulateSelectableAssetIdx @ 14a8c2900

void __thiscall
UPoseSearchDatabase::PopulateSelectableAssetIdx
          (UPoseSearchDatabase *this,
          TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *param_1,
          TArrayView<UObject_const_*_const,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  UObject **ppUVar3;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar4;
  code *pcVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FSearchIndex *pFVar8;
  int iVar9;
  FScriptContainerElement *_Src;
  UObject **ppUVar10;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar11;
  bool bVar12;
  FIdentityFunctor local_res10 [8];
  
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  if (param_2->ArrayNum != 0) {
    ppUVar10 = param_2->DataPtr;
    ppUVar3 = ppUVar10 + param_2->ArrayNum;
    if (ppUVar10 != ppUVar3) {
      do {
        pTVar7 = TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                 ::Find((TMapBase<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->CachedAssetMap,*ppUVar10);
        if (pTVar7 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          _Src = (FScriptContainerElement *)0x0;
          iVar9 = 0;
LAB_14a8c29d6:
          bVar12 = iVar9 == 0;
          if (iVar9 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar12) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar12 = iVar9 == 0;
          }
        }
        else {
          iVar9 = pTVar7->ArrayNum;
          _Src = (pTVar7->AllocatorInstance).Data;
          bVar12 = iVar9 == 0;
          if (iVar9 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar12) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto LAB_14a8c29d6;
          }
        }
        if (!bVar12) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                            (4,4,iVar9,&param_1->AllocatorInstance,piVar2,piVar1);
          pTVar4 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   (param_1->AllocatorInstance).SecondaryData.Data;
          pTVar11 = param_1;
          if (pTVar4 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
            pTVar11 = pTVar4;
          }
          memcpy((pTVar11->AllocatorInstance).InlineData + (longlong)iVar6 * 4,_Src,
                 (longlong)iVar9 << 2);
        }
        ppUVar10 = ppUVar10 + 1;
      } while (ppUVar10 != ppUVar3);
    }
    if (*piVar2 != 0) {
      pFVar8 = GetSearchIndex(this);
      if (*piVar2 != (int)pFVar8->_padding_) {
        pTVar4 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                 (param_1->AllocatorInstance).SecondaryData.Data;
        if (pTVar4 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
          param_1 = pTVar4;
        }
        AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                  ((int *)param_1,*piVar2,local_res10[0],(TLess<void> *)local_res10);
        return;
      }
      *piVar2 = 0;
      if (param_1->ArrayMax < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                  (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
    }
  }
  return;
}

// PostLoad @ 14a8c2b00

void __thiscall UPoseSearchDatabase::PostLoad(UPoseSearchDatabase *this)

{
  TArray<FPoseSearchDatabaseAnimationAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  FPoseSearchDatabaseAnimationAsset *pFVar6;
  FScriptContainerElement *pFVar7;
  UObject *pUVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FPoseSearchDatabaseAnimationAsset *pFVar12;
  FInstancedStruct *pFVar13;
  FInstancedStruct *pFVar14;
  undefined1 local_res10 [8];
  FPoseSearchDatabaseAnimationAsset local_48;
  
  uVar4 = (this->AnimationAssets_DEPRECATED).ArrayNum;
  if (uVar4 != 0) {
    pTVar1 = &this->DatabaseAnimationAssets;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar2 = &(this->DatabaseAnimationAssets).ArrayMax;
    if (*piVar2 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,&pTVar1->AllocatorInstance,(this->DatabaseAnimationAssets).ArrayNum,
                 piVar2);
    }
    iVar5 = (this->AnimationAssets_DEPRECATED).ArrayNum;
    pTVar3 = &this->AnimationAssets_DEPRECATED;
    pFVar13 = (FInstancedStruct *)(pTVar3->AllocatorInstance).Data;
    pFVar14 = pFVar13 + iVar5;
    while( true ) {
      if ((this->AnimationAssets_DEPRECATED).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar13 == pFVar14) break;
      pFVar12 = UE::PoseSearch::UpgradeToDatabaseAnimationAsset(&local_48,pFVar13);
      pFVar6 = (FPoseSearchDatabaseAnimationAsset *)(pTVar1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar12) && (pFVar12 < pFVar6 + *piVar2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar11 = (this->DatabaseAnimationAssets).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar2);
        (this->DatabaseAnimationAssets).ArrayNum = iVar11;
      }
      (this->DatabaseAnimationAssets).ArrayNum = iVar11 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(undefined ***)(pFVar7 + (longlong)iVar11 * 0x10) =
           &___7FPoseSearchDatabaseAnimationAsset__6B_;
      pUVar8 = (pFVar12->AnimAsset).field0_0x0.DebugPtr;
      *(UObject **)(pFVar7 + (longlong)iVar11 * 0x10 + 8) = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      pFVar13 = pFVar13 + 1;
    }
    DestructItems<FInstancedStruct,int>
              ((FInstancedStruct *)(pTVar3->AllocatorInstance).Data,
               (this->AnimationAssets_DEPRECATED).ArrayNum);
    piVar2 = &(this->AnimationAssets_DEPRECATED).ArrayMax;
    (this->AnimationAssets_DEPRECATED).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// PostSaveRoot @ 14a8c2d10

void __thiscall
UPoseSearchDatabase::PostSaveRoot(UPoseSearchDatabase *this,FObjectPostSaveRootContext param_1)

{
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)param_1;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PostSaveRoot((UObject *)this,(FObjectPostSaveRootContext)local_res10);
  return;
}

// PreSaveRoot @ 14a8c2d40

void __thiscall
UPoseSearchDatabase::PreSaveRoot(UPoseSearchDatabase *this,FObjectPreSaveRootContext param_1)

{
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)param_1;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSaveRoot((UObject *)this,(FObjectPreSaveRootContext)local_res10);
  return;
}

// RemoveAnimationAssetAt @ 14a8c4c70

void __thiscall UPoseSearchDatabase::RemoveAnimationAssetAt(UPoseSearchDatabase *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < (this->DatabaseAnimationAssets).ArrayNum) {
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
  _Dst = (this->DatabaseAnimationAssets).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  iVar5 = (this->DatabaseAnimationAssets).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
  }
  piVar1 = &(this->DatabaseAnimationAssets).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->DatabaseAnimationAssets).AllocatorInstance,
             (this->DatabaseAnimationAssets).ArrayNum,&(this->DatabaseAnimationAssets).ArrayMax);
  return;
}

// Search @ 14a8c6d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSearchResult * __thiscall
UPoseSearchDatabase::Search
          (UPoseSearchDatabase *this,FSearchResult *__return_storage_ptr__,FSearchContext *param_1)

{
  EPoseSearchMode EVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_168 [32];
  FSearchResults_Single local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_148);
  bVar2 = UE::PoseSearch::FSearchIndexBase::IsEmpty((FSearchIndexBase *)&this->SearchIndexPrivate);
  if (!bVar2) {
    bVar2 = FPoseSearchEvent::IsValid(&param_1->EventToSearch);
    if (bVar2) {
      SearchEvent(this,param_1,(FSearchResults *)&local_148);
    }
    else {
      EVar1 = this->PoseSearchMode;
      if (EVar1 == BruteForce) {
        SearchBruteForce(this,param_1,(FSearchResults *)&local_148);
      }
      else if (EVar1 == PCAKDTree) {
        SearchPCAKDTree(this,param_1,(FSearchResults *)&local_148);
      }
      else if (EVar1 == VPTree) {
        SearchVPTree(this,param_1,(FSearchResults *)&local_148);
      }
    }
  }
  UE::Core::Private::Function::CheckCallable((void *)local_148._padding_);
  plVar4 = &local_148._padding_;
  if ((longlong *)local_148._padding_ != (longlong *)0x0) {
    plVar4 = (longlong *)local_148._padding_;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*(code *)local_148._padding_)(__return_storage_ptr__,uVar3);
  UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_148);
  return __return_storage_ptr__;
}

// Search @ 14a8c6e30

void __thiscall
UPoseSearchDatabase::Search
          (UPoseSearchDatabase *this,FSearchContext *param_1,FSearchResults *param_2)

{
  EPoseSearchMode EVar1;
  bool bVar2;
  
  bVar2 = UE::PoseSearch::FSearchIndexBase::IsEmpty((FSearchIndexBase *)&this->SearchIndexPrivate);
  if (!bVar2) {
    bVar2 = FPoseSearchEvent::IsValid(&param_1->EventToSearch);
    if (bVar2) {
      SearchEvent(this,param_1,param_2);
      return;
    }
    EVar1 = this->PoseSearchMode;
    if (EVar1 == BruteForce) {
      SearchBruteForce(this,param_1,param_2);
    }
    else {
      if (EVar1 == PCAKDTree) {
        SearchPCAKDTree(this,param_1,param_2);
        return;
      }
      if (EVar1 == VPTree) {
        SearchVPTree(this,param_1,param_2);
        return;
      }
    }
  }
  return;
}

// SearchBruteForce @ 14a8c6f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchDatabase::SearchBruteForce
          (UPoseSearchDatabase *this,FSearchContext *param_1,FSearchResults *param_2)

{
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  longlong *plVar7;
  UPoseSearchSchema *pUVar8;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar9;
  void *pvVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  FSearchContext *pFVar17;
  FSearchIndex *this_00;
  FSearchResults *pFVar18;
  FName FVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int *piVar22;
  char cVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_PoseSearch_BruteForce> FVar29;
  undefined8 uVar30;
  longlong lVar31;
  TArrayView<UObject_const_*_const,int> *pTVar32;
  TArrayView<float_const_,int> *pTVar33;
  undefined8 uVar34;
  uint uVar35;
  longlong *plVar36;
  FName FVar37;
  undefined1 *puVar38;
  int iVar39;
  uint uVar40;
  ulonglong uVar41;
  int iVar42;
  FName FVar43;
  float *pfVar44;
  FSearchIndex *pFVar45;
  byte bVar46;
  ulonglong uVar47;
  UPoseSearchDatabase *pUVar48;
  longlong lVar49;
  FNameEntryId FVar50;
  FName FVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStackY_1908 [32];
  byte local_1898 [8];
  FSearchContext *local_1890;
  FSearchIndex *local_1888;
  FSearchResults *local_1880;
  uint local_1878;
  uint local_1874;
  EPoseSearchMode local_1870;
  FName local_1868;
  FName local_1860;
  UPoseSearchDatabase *local_1858;
  FName local_1850;
  FName local_1848;
  uint uStack_1840;
  undefined4 uStack_183c;
  FColor_u_0 local_1838 [2];
  undefined4 local_1830 [2];
  TArrayView<float_const_,int> local_1828;
  uint local_1818;
  FWeakObjectPtr local_1814;
  float local_180c [3];
  undefined1 local_1800;
  uint local_17f8;
  FWeakObjectPtr local_17f4;
  float local_17ec [3];
  undefined1 local_17e0;
  uint local_17d8;
  FWeakObjectPtr local_17d4;
  float local_17cc [3];
  undefined1 local_17c0;
  TArrayView<float_const_,int> local_17b8;
  FName local_17a8;
  UPoseSearchDatabase *local_17a0;
  FName local_1798;
  UPoseSearchDatabase *local_1788;
  UPoseSearchDatabase *local_1780;
  UPoseSearchDatabase *local_1778 [2];
  undefined8 local_1768;
  undefined4 uStack_1760;
  uint uStack_175c;
  int *local_1758;
  int iStack_1750;
  undefined4 uStack_174c;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_1748;
  int iStack_1740;
  undefined4 uStack_173c;
  undefined8 local_1738;
  undefined4 uStack_1730;
  uint uStack_172c;
  float *local_1728 [2];
  TArrayView<float,int> local_1718;
  TArrayView<UObject_const_*_const,int> local_1708;
  undefined1 local_16f8 [16];
  TArrayView<int_const_,int> local_16e8;
  TArrayView<int_const_,int> local_16d8;
  undefined1 local_16c8 [16];
  TArrayView<float,int> local_16b8;
  TArrayView<float_const_,int> local_16a8;
  undefined1 local_1698 [16];
  TArrayView<float,int> local_1688;
  TArrayView<float_const_,int> local_1678;
  undefined1 local_1668 [16];
  TArrayView<float,int> local_1658;
  TArrayView<float_const_,int> local_1648;
  TArrayView<float,int> local_1638;
  uint local_1628;
  undefined4 uStack_1624;
  uint uStack_1620;
  undefined4 uStack_161c;
  TArrayView<float_const_,int> local_1618;
  TArrayView<float_const_,int> local_1608;
  undefined1 local_15f8 [16];
  TArrayView<float_const_,int> local_15e8;
  TArrayView<float_const_,int> local_15d8;
  uint local_15c8;
  undefined4 uStack_15c4;
  uint uStack_15c0;
  undefined4 uStack_15bc;
  TArrayView<float_const_,int> local_15b8;
  TArrayView<float_const_,int> local_15a8;
  undefined4 local_1598;
  undefined4 uStack_1594;
  longlong lStack_1590;
  undefined8 local_1588;
  FName local_1578 [2];
  TArrayView<float,int> local_1568;
  TArrayView<float_const_,int> local_1558;
  undefined4 local_1548;
  undefined4 uStack_1544;
  longlong lStack_1540;
  undefined8 local_1538;
  uint local_1528;
  undefined4 uStack_1524;
  longlong lStack_1520;
  undefined8 local_1518;
  uint local_1508;
  undefined4 uStack_1504;
  longlong lStack_1500;
  undefined8 local_14f8;
  uint local_14e8;
  undefined4 uStack_14e4;
  longlong lStack_14e0;
  undefined8 local_14d8;
  uint local_14c8;
  undefined4 uStack_14c4;
  longlong lStack_14c0;
  undefined8 local_14b8;
  TArrayView<float_const_,int> local_14a8;
  TArrayView<float_const_,int> local_1498;
  TArrayView<UObject_const_*_const,int> local_1488;
  TArrayView<float_const_,int> local_1478;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_1468 [24];
  float *local_1450;
  longlong lStack_1448;
  undefined8 local_1440;
  longlong lStack_1428;
  undefined8 local_1420;
  longlong lStack_1400;
  undefined8 local_13f8;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_13d8 [24];
  float *local_13c0;
  longlong lStack_13b8;
  undefined8 local_13b0;
  longlong lStack_1398;
  undefined8 local_1390;
  longlong lStack_1370;
  undefined8 local_1368;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_1348;
  FSearchFilters local_f38;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_ce8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_8d8;
  int local_4c8 [256];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  
  puVar38 = auStackY_1908;
  local_b8 = __security_cookie.value ^ (ulonglong)local_1898;
  FVar51.ComparisonIndex.Value = 0;
  FVar51.Number = 0;
  FVar29 = StatPtr_STAT_PoseSearch_BruteForce;
  local_1890 = param_1;
  local_1880 = param_2;
  local_1858 = this;
  if (StatPtr_STAT_PoseSearch_BruteForce ==
      (FThreadSafeStaticStat<FStat_STAT_PoseSearch_BruteForce>)0x0) {
    pFVar28 = ::FName::FName(local_1578,"STAT_PoseSearch_BruteForce");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_PoseSearch_BruteForce>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_BruteForce,*pFVar28,
                        L"Search Brute Force","STATGROUP_PoseSearch","STATCAT_Advanced",
                        L"PoseSearch",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar29;
  bVar46 = 0;
  local_1798.ComparisonIndex.Value = 0;
  local_1798.Number = 0;
  local_1898[0] = 0;
  if ((FVar37.ComparisonIndex.Value.Value != 0) || (FVar37.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1838[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1838[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar46 = 1;
      local_1898[0] = 1;
      if (-1 < CpuChannel->Enabled) {
        local_17a8.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_17a8.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_17a8,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                   ,0x94a);
        bVar46 = 3;
        local_1898[0] = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1868 = FVar37;
      local_1860 = FVar37;
      FThreadStats::AddMessage(FVar37,CycleScopeStart);
      local_1898[0] = bVar46 | 4;
      goto LAB_14a8c70c6;
    }
  }
  local_1860 = local_1798;
  FVar37 = local_1798;
LAB_14a8c70c6:
  local_1888 = GetSearchIndex(this);
  if (param_1->bIsContinuingInteraction == false) {
    fVar62 = 0.0;
  }
  else {
    fVar62 = this->ContinuingInteractionCostBias;
  }
  local_1870 = this->PoseSearchMode;
  bVar52 = local_1870 == BruteForce;
  local_1830[0] = (undefined4)local_1888->_padding_;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_2->ShouldPerformSearch);
  pcVar6 = *(code **)&param_2->ShouldPerformSearch;
  plVar7 = *(longlong **)&(param_2->ShouldPerformSearch).field_0x28;
  plVar36 = (longlong *)&(param_2->ShouldPerformSearch).field_0x10;
  if (plVar7 != (longlong *)0x0) {
    plVar36 = plVar7;
  }
  uVar30 = (**(code **)(*plVar36 + 8))();
  cVar23 = (*pcVar6)(uVar30,local_1830);
  pUVar8 = (this->Schema).field0_0x0.DebugPtr;
  if (cVar23 == '\0') {
    uStack_1840 = pUVar8->SchemaCardinality;
    lVar31 = (longlong)(int)uStack_1840 * 4;
    puVar38 = auStackY_1908;
    if (lVar31 != 0) {
      uVar41 = lVar31 + 0x1e;
      if (uVar41 <= lVar31 + 0xfU) {
        uVar41 = 0xffffffffffffff0;
      }
      FVar51 = (FName)((longlong)&local_1890 + -(uVar41 & 0xfffffffffffffff0));
      puVar38 = auStackY_1908 + -(uVar41 & 0xfffffffffffffff0);
      param_1 = local_1890;
    }
    local_1848 = FVar51;
    if ((int)uStack_1840 < 0) {
      *(undefined8 *)(puVar38 + -8) = 0x14a8c71b9;
      bVar52 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar52) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1568._12_4_ = uStack_183c;
    local_1568.ArrayNum = uStack_1840;
    local_1568.DataPtr = (float *)local_1848;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c71e1;
    CalculateDynamicWeightsSqrt(this,&local_1558,&local_1568);
    *(float ***)(puVar38 + 0x28) = local_1728;
    *(float *)(puVar38 + 0x20) = fVar62;
    local_8d8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_8d8.ArrayNum = 0;
    local_8d8.ArrayMax = 0x100;
    local_1728[0] = local_1558.DataPtr;
    local_1728[1] = (float *)local_1558._8_8_;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c7230;
    PopulateNonSelectableIdx
              (this,&local_8d8,param_1,0.0,*(float *)(puVar38 + 0x20),
               *(TArrayView<float_const_,int> **)(puVar38 + 0x28));
  }
  else {
    uVar35 = pUVar8->SchemaCardinality;
    lVar31 = (longlong)(int)uVar35 * 4;
    if (lVar31 != 0) {
      uVar41 = lVar31 + 0x1e;
      if (uVar41 <= lVar31 + 0xfU) {
        uVar41 = 0xffffffffffffff0;
      }
      puVar38 = auStackY_1908 + -(uVar41 & 0xfffffffffffffff0);
      FVar51 = (FName)((longlong)&local_1890 + -(uVar41 & 0xfffffffffffffff0));
    }
    local_1848 = FVar51;
    uStack_1840 = uVar35;
    if ((int)uVar35 < 0) {
      *(undefined8 *)(puVar38 + -8) = 0x14a8c72ab;
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar24) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1718._12_4_ = uStack_183c;
    local_1718.ArrayNum = uStack_1840;
    local_1718.DataPtr = (float *)local_1848;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c72d0;
    CalculateDynamicWeightsSqrt(this,&local_1828,&local_1718);
    pFVar17 = local_1890;
    pUVar8 = (this->Schema).field0_0x0.DebugPtr;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c72e4;
    UE::PoseSearch::FSearchContext::GetOrBuildQuery(pFVar17,&local_17b8,pUVar8);
    local_1348.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_1348.ArrayNum = 0;
    local_1348.ArrayMax = 0x100;
    pTVar1 = &local_1890->AssetsToConsider_DEPRECATED;
    if ((local_1890->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
      pTVar9 = local_1890->AssetsToConsider;
      *(undefined8 *)(puVar38 + -8) = 0x14a8c7354;
      PopulateSelectableAssetIdx(this,&local_1348,pTVar9);
    }
    else {
      *(undefined8 *)(puVar38 + -8) = 0x14a8c731c;
      pTVar32 = TArrayView<UObject_const_*_const,int>::
                TArrayView<UObject_const_*_const,int><TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_>
                          (&local_1488,pTVar1);
      local_1708.DataPtr = pTVar32->DataPtr;
      local_1708.ArrayNum = pTVar32->ArrayNum;
      local_1708._12_4_ = *(undefined4 *)&pTVar32->field_0xc;
      *(undefined8 *)(puVar38 + -8) = 0x14a8c733c;
      PopulateSelectableAssetIdx(this,&local_1348,&local_1708);
    }
    pFVar17 = local_1890;
    *(undefined1 **)(puVar38 + 0x28) = local_16f8;
    *(float *)(puVar38 + 0x20) = fVar62;
    local_ce8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_ce8.ArrayNum = 0;
    local_ce8.ArrayMax = 0x100;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c73a1;
    PopulateNonSelectableIdx
              (this,&local_ce8,pFVar17,0.0,*(float *)(puVar38 + 0x20),
               *(TArrayView<float_const_,int> **)(puVar38 + 0x28));
    iVar39 = local_ce8.ArrayNum;
    local_1758 = local_4c8;
    local_c8 = 0;
    lVar49 = local_1888->_padding_;
    local_1748 = &local_ce8;
    if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
        local_ce8.AllocatorInstance.SecondaryData.Data !=
        (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
      local_1748 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   local_ce8.AllocatorInstance.SecondaryData.Data;
    }
    local_c0 = 0;
    iStack_1750 = 0;
    local_bc = 0x100;
    if (local_ce8.ArrayNum < 0) {
      *(undefined8 *)(puVar38 + -8) = 0x14a8c741f;
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar24) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar42 = iStack_1750;
    piVar22 = local_1758;
    puVar38[0x20] = (char)lVar49;
    this = local_1858;
    iStack_1740 = iVar39;
    local_16e8.DataPtr = piVar22;
    local_16e8.ArrayNum = iVar42;
    local_16e8._12_4_ = uStack_174c;
    pUVar8 = (local_1858->Schema).field0_0x0.DebugPtr;
    local_16d8.DataPtr = (int *)local_1748;
    local_16d8.ArrayNum = iVar39;
    local_16d8._12_4_ = uStack_173c;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c7471;
    UE::PoseSearch::FSearchFilters::FSearchFilters
              (&local_f38,pUVar8,&local_16d8,&local_16e8,(bool)puVar38[0x20]);
    param_2 = local_1880;
    pFVar45 = local_1888;
    pFVar17 = local_1890;
    iVar39 = (int)local_1888->_padding_;
    if (local_1348.ArrayNum == 0) {
      if (iVar39 == 0) {
        if (lVar31 == 0) {
          local_1848.ComparisonIndex.Value = 0;
          local_1848.Number = 0;
        }
        else {
          uVar41 = lVar31 + 0x1e;
          if (uVar41 <= lVar31 + 0xfU) {
            uVar41 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar38 + -8) = 0x14a8c74b6;
          local_1848 = (FName)((ulonglong)(puVar38 + -(uVar41 & 0xfffffffffffffff0) + 0x7f) &
                              0xfffffffffffffff0);
          puVar38 = puVar38 + -(uVar41 & 0xfffffffffffffff0);
        }
        iVar39 = 0;
        uStack_1840 = uVar35;
        if ((int)uVar35 < 0) {
          *(undefined8 *)(puVar38 + -8) = 0x14a8c74f3;
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar24) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar35 = uStack_1840;
        FVar51 = local_1848;
        param_2 = local_1880;
        pFVar17 = local_1890;
        if (0 < (int)pFVar45->_padding_) {
          do {
            puVar38[0x60] = bVar52;
            *(undefined1 **)(puVar38 + 0x58) = local_16c8;
            *(UPoseSearchDatabase **)(puVar38 + 0x50) = this;
            *(FSearchContext **)(puVar38 + 0x48) = pFVar17;
            *(float *)(puVar38 + 0x40) = fVar62;
            *(undefined4 *)(puVar38 + 0x38) = 0;
            *(FSearchFilters **)(puVar38 + 0x30) = &local_f38;
            *(undefined4 *)(puVar38 + 0x28) = 0xffffffff;
            *(int *)(puVar38 + 0x20) = iVar39;
            local_16b8.DataPtr = (float *)FVar51;
            local_16b8.ArrayNum = uVar35;
            local_16b8._12_4_ = uStack_183c;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c759d;
            UE::PoseSearch::EvaluatePoseKernel<1,0>
                      (param_2,pFVar45,&local_16a8,&local_16b8,*(int *)(puVar38 + 0x20),
                       *(int *)(puVar38 + 0x28),*(FSearchFilters **)(puVar38 + 0x30),
                       *(float *)(puVar38 + 0x38),*(float *)(puVar38 + 0x40),
                       *(FSearchContext **)(puVar38 + 0x48),
                       *(UPoseSearchDatabase **)(puVar38 + 0x50),
                       *(TArrayView<float_const_,int> **)(puVar38 + 0x58),(bool)puVar38[0x60]);
            iVar39 = iVar39 + 1;
            FVar37 = local_1860;
          } while (iVar39 < (int)pFVar45->_padding_);
        }
      }
      else {
        iVar39 = (int)local_1888->_padding_;
        uVar35 = uVar35 & 0x80000003;
        if ((int)uVar35 < 0) {
          uVar35 = (uVar35 - 1 | 0xfffffffc) + 1;
        }
        iVar42 = 0;
        if (uVar35 == 0) {
          if (0 < iVar39) {
            do {
              puVar38[0x60] = bVar52;
              *(undefined1 **)(puVar38 + 0x58) = local_1698;
              *(UPoseSearchDatabase **)(puVar38 + 0x50) = this;
              *(FSearchContext **)(puVar38 + 0x48) = pFVar17;
              *(float *)(puVar38 + 0x40) = fVar62;
              *(undefined4 *)(puVar38 + 0x38) = 0;
              *(FSearchFilters **)(puVar38 + 0x30) = &local_f38;
              local_1738 = 0;
              uStack_1730 = 0;
              uVar41 = (ulonglong)uStack_172c;
              *(undefined4 *)(puVar38 + 0x28) = 0xffffffff;
              *(int *)(puVar38 + 0x20) = iVar42;
              local_1688.DataPtr = (float *)0x0;
              local_1688._8_8_ = uVar41 << 0x20;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7681;
              UE::PoseSearch::EvaluatePoseKernel<0,1>
                        (param_2,pFVar45,&local_1678,&local_1688,*(int *)(puVar38 + 0x20),
                         *(int *)(puVar38 + 0x28),*(FSearchFilters **)(puVar38 + 0x30),
                         *(float *)(puVar38 + 0x38),*(float *)(puVar38 + 0x40),
                         *(FSearchContext **)(puVar38 + 0x48),
                         *(UPoseSearchDatabase **)(puVar38 + 0x50),
                         *(TArrayView<float_const_,int> **)(puVar38 + 0x58),(bool)puVar38[0x60]);
              iVar42 = iVar42 + 1;
              FVar37 = local_1860;
            } while (iVar42 < (int)pFVar45->_padding_);
          }
        }
        else if (0 < iVar39) {
          do {
            puVar38[0x60] = bVar52;
            *(undefined1 **)(puVar38 + 0x58) = local_1668;
            *(UPoseSearchDatabase **)(puVar38 + 0x50) = this;
            *(FSearchContext **)(puVar38 + 0x48) = pFVar17;
            *(float *)(puVar38 + 0x40) = fVar62;
            *(undefined4 *)(puVar38 + 0x38) = 0;
            *(FSearchFilters **)(puVar38 + 0x30) = &local_f38;
            local_1768 = 0;
            uStack_1760 = 0;
            uVar41 = (ulonglong)uStack_175c;
            *(undefined4 *)(puVar38 + 0x28) = 0xffffffff;
            *(int *)(puVar38 + 0x20) = iVar42;
            local_1658.DataPtr = (float *)0x0;
            local_1658._8_8_ = uVar41 << 0x20;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c7741;
            UE::PoseSearch::EvaluatePoseKernel<0,0>
                      (param_2,pFVar45,&local_1648,&local_1658,*(int *)(puVar38 + 0x20),
                       *(int *)(puVar38 + 0x28),*(FSearchFilters **)(puVar38 + 0x30),
                       *(float *)(puVar38 + 0x38),*(float *)(puVar38 + 0x40),
                       *(FSearchContext **)(puVar38 + 0x48),
                       *(UPoseSearchDatabase **)(puVar38 + 0x50),
                       *(TArrayView<float_const_,int> **)(puVar38 + 0x58),(bool)puVar38[0x60]);
            iVar42 = iVar42 + 1;
            FVar37 = local_1860;
          } while (iVar42 < (int)pFVar45->_padding_);
        }
      }
    }
    else if (iVar39 == 0) {
      if (lVar31 == 0) {
        local_1848.ComparisonIndex.Value = 0;
        local_1848.Number = 0;
      }
      else {
        uVar41 = lVar31 + 0x1e;
        if (uVar41 <= lVar31 + 0xfU) {
          uVar41 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar38 + -8) = 0x14a8c7788;
        local_1848 = (FName)((ulonglong)(puVar38 + -(uVar41 & 0xfffffffffffffff0) + 0x7f) &
                            0xfffffffffffffff0);
        puVar38 = puVar38 + -(uVar41 & 0xfffffffffffffff0);
      }
      uStack_1840 = uVar35;
      if ((int)uVar35 < 0) {
        *(undefined8 *)(puVar38 + -8) = 0x14a8c77c6;
        bVar52 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar52) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar51 = local_1848;
      uVar41 = (ulonglong)local_1348.ArrayNum;
      uVar30._4_4_ = uStack_183c;
      uVar30._0_4_ = uStack_1840;
      local_1874 = local_1348.ArrayNum;
      FVar43 = (FName)&local_1348;
      if ((FName)local_1348.AllocatorInstance.SecondaryData.Data != (FName)0x0) {
        FVar43 = (FName)local_1348.AllocatorInstance.SecondaryData;
      }
      local_1850 = (FName)((longlong)FVar43 + uVar41 * 4);
      while( true ) {
        FVar19 = local_1850;
        local_1868 = FVar43;
        if (local_1348.ArrayNum != (uint)uVar41) {
          local_1898[1] = 0;
          *(undefined8 *)(puVar38 + -8) = 0x14a8c781c;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1898 + 1);
        }
        param_2 = local_1880;
        if (FVar43 == FVar19) break;
        uVar35 = *(uint *)FVar43;
        lVar31 = (longlong)(int)uVar35;
        iVar39 = (int)local_1888->_padding_;
        uVar25 = 0;
        if ((int)uVar35 < iVar39) {
          uVar25 = ~uVar35 >> 0x1f;
        }
        if (uVar25 == 0) {
          *(longlong *)(puVar38 + 0x28) = (longlong)iVar39;
          *(longlong *)(puVar38 + 0x20) = lVar31;
          *(undefined8 *)(puVar38 + -8) = 0x14a8c786d;
          bVar52 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar52) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar49 = local_1888->_padding_;
        iVar39 = *(int *)(lVar49 + 0x14 + lVar31 * 0x24);
        uVar41 = (ulonglong)iVar39;
        iVar42 = (*(int *)(lVar49 + 0x1c + lVar31 * 0x24) - *(int *)(lVar49 + 0x18 + lVar31 * 0x24))
                 + 1 + iVar39;
        if (iVar39 < iVar42) {
          lVar31 = uVar41 * 0xc;
          pFVar45 = local_1888;
          uVar47 = uVar41;
          do {
            uVar13 = local_17b8._12_4_;
            iVar5 = local_17b8.ArrayNum;
            uVar21 = local_17b8.DataPtr._4_4_;
            uVar27 = (uint)local_17b8.DataPtr;
            uVar12 = local_1828._12_4_;
            iVar39 = local_1828.ArrayNum;
            uVar20 = local_1828.DataPtr._4_4_;
            uVar25 = (uint)local_1828.DataPtr;
            uVar40 = (uint)uVar41;
            local_1638.DataPtr = (float *)FVar51;
            local_1638._8_8_ = uVar30;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c78de;
            pTVar33 = UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues
                                (pFVar45,&local_1498,uVar40,&local_1638);
            *(UPoseSearchDatabase **)(puVar38 + 0x48) = this;
            local_1628 = uVar25;
            uStack_1624 = uVar20;
            uStack_1620 = iVar39;
            uStack_161c = uVar12;
            local_1618.DataPtr._0_4_ = uVar27;
            local_1618.DataPtr._4_4_ = uVar21;
            local_1618.ArrayNum = iVar5;
            local_1618._12_4_ = uVar13;
            uVar12 = *(undefined4 *)&pTVar33->DataPtr;
            uVar13 = *(undefined4 *)((longlong)&pTVar33->DataPtr + 4);
            pfVar2 = pTVar33->DataPtr;
            uVar35 = pTVar33->ArrayNum;
            uVar14 = *(undefined4 *)&pTVar33->field_0xc;
            *(FSearchContext **)(puVar38 + 0x40) = local_1890;
            *(float *)(puVar38 + 0x38) = fVar62;
            *(undefined4 *)(puVar38 + 0x30) = 0;
            *(uint *)(puVar38 + 0x28) = uVar40;
            *(uint **)(puVar38 + 0x20) = &local_1628;
            local_1608.DataPtr._0_4_ = uVar12;
            local_1608.DataPtr._4_4_ = uVar13;
            local_1608.ArrayNum = uVar35;
            local_1608._12_4_ = uVar14;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c7944;
            bVar52 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                               (&local_f38,pFVar45,&local_1608,&local_1618,
                                *(TArrayView<float_const_,int> **)(puVar38 + 0x20),
                                *(int *)(puVar38 + 0x28),*(float *)(puVar38 + 0x30),
                                *(float *)(puVar38 + 0x38),*(FSearchContext **)(puVar38 + 0x40),
                                *(UPoseSearchDatabase **)(puVar38 + 0x48));
            if (bVar52) {
              iVar4 = (int)pFVar45->_padding_;
              local_1818 = 0xffffffff;
              local_1814.ObjectIndex = 0;
              local_1814.ObjectSerialNumber = 0;
              local_180c[0] = 3.4028235e+38;
              uVar26 = 0;
              if ((int)uVar40 < iVar4) {
                uVar26 = ~uVar40 >> 0x1f;
              }
              local_180c[1] = -NAN;
              local_180c[2] = 3.4028235e+38;
              local_1800 = 0;
              if (uVar26 == 0) {
                *(longlong *)(puVar38 + 0x28) = (longlong)iVar4;
                *(ulonglong *)(puVar38 + 0x20) = uVar47;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c79c7;
                bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar52) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              lVar49 = pFVar45->_padding_;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c79dd;
              fVar53 = FGenericPlatformMath::LoadHalf((ushort *)(lVar49 + 10 + lVar31));
              if ((uVar35 != iVar5) || (uVar35 != iVar39)) {
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7a35;
                bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                   ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                    ,0x3d,L"");
                if (bVar52) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              local_1440 = local_1538;
              lStack_1540 = (longlong)(int)uVar35;
              lStack_1520 = (longlong)iVar5;
              lStack_1500 = (longlong)iVar39;
              local_1528 = uVar27;
              uStack_1524 = uVar21;
              local_1508 = uVar25;
              uStack_1504 = uVar20;
              local_1420 = local_1518;
              local_13f8 = local_14f8;
              local_1548 = uVar12;
              uStack_1544 = uVar13;
              local_1450 = pfVar2;
              lStack_1448 = lStack_1540;
              lStack_1428 = lStack_1520;
              lStack_1400 = lStack_1500;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7ad9;
              fVar54 = Eigen::
                       DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                       ::sum(local_1468);
              this = local_1858;
              local_180c[1] = -NAN;
              local_1788 = local_1858;
              local_180c[0] = fVar54 + fVar53 + fVar62;
              local_1818 = uVar40;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7b16;
                UE::GC::MarkAsReachable((UObject *)this);
              }
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7b29;
              FWeakObjectPtr::operator=(&local_1814,(FObjectPtr)&local_1788);
              pFVar18 = local_1880;
              pvVar10 = *(void **)&local_1880->UpdateWith;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7b37;
              UE::Core::Private::Function::CheckCallable(pvVar10);
              plVar7 = *(longlong **)&(pFVar18->UpdateWith).field_0x28;
              pcVar6 = *(code **)&pFVar18->UpdateWith;
              plVar36 = (longlong *)&(pFVar18->UpdateWith).field_0x10;
              if (plVar7 != (longlong *)0x0) {
                plVar36 = plVar7;
              }
              pcVar11 = *(code **)(*plVar36 + 8);
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7b53;
              uVar34 = (*pcVar11)();
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7b5f;
              (*pcVar6)(uVar34,&local_1818);
              pFVar17 = local_1890;
              pFVar45 = local_1888;
              if (local_1870 == BruteForce) {
                *(float **)(puVar38 + 0x20) = local_180c;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7b86;
                UE::PoseSearch::FSearchContext::Track
                          (pFVar17,this,uVar40,Valid_Pose,*(FPoseSearchCost **)(puVar38 + 0x20));
                pFVar45 = local_1888;
              }
            }
            uVar41 = (ulonglong)(uVar40 + 1);
            uVar47 = uVar47 + 1;
            lVar31 = lVar31 + 0xc;
            FVar37 = local_1860;
          } while ((int)(uVar40 + 1) < iVar42);
        }
        uVar41 = (ulonglong)local_1874;
        FVar43 = (FName)((longlong)local_1868 + 4);
      }
    }
    else {
      uVar35 = uVar35 & 0x80000003;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xfffffffc) + 1;
      }
      uVar41 = (ulonglong)local_1348.ArrayNum;
      local_1878 = local_1348.ArrayNum;
      if (uVar35 == 0) {
        FVar51 = (FName)&local_1348;
        if ((FName)local_1348.AllocatorInstance.SecondaryData.Data != (FName)0x0) {
          FVar51 = (FName)local_1348.AllocatorInstance.SecondaryData;
        }
        local_1848 = (FName)((longlong)FVar51 + uVar41 * 4);
        while( true ) {
          FVar43 = local_1848;
          local_1850 = FVar51;
          if (local_1348.ArrayNum != (uint)uVar41) {
            local_1898[2] = 0;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c7c18;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1898 + 2);
          }
          param_2 = local_1880;
          if (FVar51 == FVar43) break;
          uVar35 = *(uint *)FVar51;
          lVar31 = (longlong)(int)uVar35;
          iVar39 = (int)pFVar45->_padding_;
          uVar25 = 0;
          if ((int)uVar35 < iVar39) {
            uVar25 = ~uVar35 >> 0x1f;
          }
          if (uVar25 == 0) {
            *(longlong *)(puVar38 + 0x28) = (longlong)iVar39;
            *(longlong *)(puVar38 + 0x20) = lVar31;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c7c67;
            bVar52 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar52) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          this_00 = local_1888;
          lVar49 = pFVar45->_padding_;
          iVar39 = *(int *)(lVar49 + 0x14 + lVar31 * 0x24);
          FVar51 = (FName)(longlong)iVar39;
          local_1874 = (*(int *)(lVar49 + 0x1c + lVar31 * 0x24) -
                       *(int *)(lVar49 + 0x18 + lVar31 * 0x24)) + 1 + iVar39;
          if (iVar39 < (int)local_1874) {
            pUVar48 = (UPoseSearchDatabase *)((longlong)FVar51 * 0xc);
            FVar43 = FVar51;
            do {
              iVar42 = local_17b8.ArrayNum;
              uVar25 = (uint)local_17b8.DataPtr;
              iVar39 = local_1828.ArrayNum;
              uVar35 = (uint)local_1828.DataPtr;
              pfVar44 = (float *)CONCAT44(local_1828.DataPtr._4_4_,(uint)local_1828.DataPtr);
              pfVar3 = (float *)CONCAT44(local_17b8.DataPtr._4_4_,(uint)local_17b8.DataPtr);
              FVar50 = FVar43.ComparisonIndex.Value;
              local_1868 = FVar51;
              local_1858 = pUVar48;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7cce;
              pTVar33 = UE::PoseSearch::FSearchIndex::GetPoseValues
                                  (this_00,&local_1478,FVar50.Value);
              *(UPoseSearchDatabase **)(puVar38 + 0x48) = this;
              pfVar2 = pTVar33->DataPtr;
              iVar15 = pTVar33->ArrayNum;
              uVar16 = *(undefined4 *)&pTVar33->field_0xc;
              *(FSearchContext **)(puVar38 + 0x40) = local_1890;
              *(float *)(puVar38 + 0x38) = fVar62;
              *(undefined4 *)(puVar38 + 0x30) = 0;
              *(uint *)(puVar38 + 0x28) = FVar50.Value;
              *(undefined1 **)(puVar38 + 0x20) = local_15f8;
              local_15d8.DataPtr = pfVar2;
              local_15d8.ArrayNum = iVar15;
              local_15d8._12_4_ = uVar16;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c7d33;
              bVar52 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                 (&local_f38,this_00,&local_15d8,&local_15e8,
                                  *(TArrayView<float_const_,int> **)(puVar38 + 0x20),
                                  *(int *)(puVar38 + 0x28),*(float *)(puVar38 + 0x30),
                                  *(float *)(puVar38 + 0x38),*(FSearchContext **)(puVar38 + 0x40),
                                  *(UPoseSearchDatabase **)(puVar38 + 0x48));
              if (bVar52) {
                iVar5 = (int)this_00->_padding_;
                local_17f8 = 0xffffffff;
                local_17f4.ObjectIndex = 0;
                local_17f4.ObjectSerialNumber = 0;
                local_17ec[0] = 3.4028235e+38;
                uVar27 = 0;
                if ((int)FVar50.Value < iVar5) {
                  uVar27 = ~FVar50.Value >> 0x1f;
                }
                local_17ec[1] = -NAN;
                local_17ec[2] = 3.4028235e+38;
                local_17e0 = 0;
                if (uVar27 == 0) {
                  *(longlong *)(puVar38 + 0x28) = (longlong)iVar5;
                  *(FName *)(puVar38 + 0x20) = FVar51;
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7db7;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                lVar31 = this_00->_padding_;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7dcd;
                fVar53 = FGenericPlatformMath::LoadHalf
                                   ((ushort *)((longlong)&pUVar48->_padding_ + lVar31 + 2));
                if ((iVar15 != iVar42) || (iVar15 != iVar39)) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7e24;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x10,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                uVar27 = iVar15 & 0x80000003;
                if ((int)uVar27 < 0) {
                  uVar27 = (uVar27 - 1 | 0xfffffffc) + 1;
                }
                if (uVar27 != 0) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7e5f;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("A.Num() % 4 == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x11,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                if (((ulonglong)pfVar2 & 0xf) != 0) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7e90;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x12,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                if ((uVar25 & 0xf) != 0) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7ec1;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x13,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                if ((uVar35 & 0xf) != 0) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7ef2;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x14,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                if ((pfVar2 == pfVar3) || (pfVar2 == pfVar44)) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7f22;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x16,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                fVar54 = 0.0;
                fVar59 = 0.0;
                fVar60 = 0.0;
                fVar61 = 0.0;
                uVar35 = (int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2;
                uVar41 = (ulonglong)uVar35;
                if (0 < (int)uVar35) {
                  lVar31 = (longlong)pfVar2 - (longlong)pfVar44;
                  lVar49 = (longlong)pfVar3 - (longlong)pfVar44;
                  do {
                    pfVar2 = (float *)((longlong)pfVar44 + lVar31);
                    pfVar3 = (float *)((longlong)pfVar44 + lVar49);
                    fVar55 = (*pfVar2 - *pfVar3) * *pfVar44;
                    fVar56 = (pfVar2[1] - pfVar3[1]) * pfVar44[1];
                    fVar57 = (pfVar2[2] - pfVar3[2]) * pfVar44[2];
                    fVar58 = (pfVar2[3] - pfVar3[3]) * pfVar44[3];
                    pfVar44 = pfVar44 + 4;
                    fVar54 = fVar54 + fVar55 * fVar55;
                    fVar59 = fVar59 + fVar56 * fVar56;
                    fVar60 = fVar60 + fVar57 * fVar57;
                    fVar61 = fVar61 + fVar58 * fVar58;
                    uVar41 = uVar41 - 1;
                  } while (uVar41 != 0);
                }
                local_17ec[1] = -NAN;
                local_1780 = this;
                local_17ec[0] = fVar61 + fVar60 + fVar59 + fVar54 + fVar53 + fVar62;
                local_17f8 = FVar50.Value;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c7fbb;
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7fce;
                FWeakObjectPtr::operator=(&local_17f4,(FObjectPtr)&local_1780);
                pFVar18 = local_1880;
                pvVar10 = *(void **)&local_1880->UpdateWith;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7fdb;
                UE::Core::Private::Function::CheckCallable(pvVar10);
                plVar7 = *(longlong **)&(pFVar18->UpdateWith).field_0x28;
                pcVar6 = *(code **)&pFVar18->UpdateWith;
                plVar36 = (longlong *)&(pFVar18->UpdateWith).field_0x10;
                if (plVar7 != (longlong *)0x0) {
                  plVar36 = plVar7;
                }
                pcVar11 = *(code **)(*plVar36 + 8);
                *(undefined8 *)(puVar38 + -8) = 0x14a8c7ff4;
                uVar30 = (*pcVar11)();
                *(undefined8 *)(puVar38 + -8) = 0x14a8c8000;
                (*pcVar6)(uVar30,&local_17f8);
                pFVar17 = local_1890;
                FVar51 = local_1868;
                pUVar48 = local_1858;
                if (local_1870 == BruteForce) {
                  *(float **)(puVar38 + 0x20) = local_17ec;
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c8027;
                  UE::PoseSearch::FSearchContext::Track
                            (pFVar17,this,FVar50.Value,Valid_Pose,
                             *(FPoseSearchCost **)(puVar38 + 0x20));
                  FVar51 = local_1868;
                  pUVar48 = local_1858;
                }
              }
              FVar51 = (FName)((longlong)FVar51 + 1);
              pUVar48 = (UPoseSearchDatabase *)((longlong)&pUVar48->_padding_ + 4);
              FVar43.ComparisonIndex.Value = FVar50.Value + 1;
              FVar43.Number = 0;
              local_1868 = FVar51;
              local_1858 = pUVar48;
              FVar37 = local_1860;
              pFVar45 = local_1888;
            } while ((int)FVar43.ComparisonIndex.Value < (int)local_1874);
          }
          uVar41 = (ulonglong)local_1878;
          FVar51 = (FName)((longlong)local_1850 + 4);
        }
      }
      else {
        FVar51 = (FName)&local_1348;
        if ((FName)local_1348.AllocatorInstance.SecondaryData.Data != (FName)0x0) {
          FVar51 = (FName)local_1348.AllocatorInstance.SecondaryData;
        }
        local_1848 = (FName)((longlong)FVar51 + uVar41 * 4);
        while( true ) {
          FVar43 = local_1848;
          pFVar45 = local_1888;
          local_1850 = FVar51;
          if (local_1348.ArrayNum != (uint)uVar41) {
            local_1898[3] = 0;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c809c;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1898 + 3);
          }
          FVar37 = local_1860;
          param_2 = local_1880;
          if (FVar51 == FVar43) break;
          uVar35 = *(uint *)FVar51;
          lVar31 = (longlong)(int)uVar35;
          iVar39 = (int)pFVar45->_padding_;
          uVar25 = 0;
          if ((int)uVar35 < iVar39) {
            uVar25 = ~uVar35 >> 0x1f;
          }
          if (uVar25 == 0) {
            *(longlong *)(puVar38 + 0x28) = (longlong)iVar39;
            *(longlong *)(puVar38 + 0x20) = lVar31;
            *(undefined8 *)(puVar38 + -8) = 0x14a8c80ed;
            bVar52 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar52) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar49 = local_1888->_padding_;
          iVar39 = *(int *)(lVar49 + 0x14 + lVar31 * 0x24);
          uVar41 = (ulonglong)iVar39;
          iVar42 = (*(int *)(lVar49 + 0x1c + lVar31 * 0x24) -
                   *(int *)(lVar49 + 0x18 + lVar31 * 0x24)) + 1 + iVar39;
          if (iVar39 < iVar42) {
            lVar31 = uVar41 * 0xc;
            pFVar45 = local_1888;
            uVar47 = uVar41;
            do {
              uVar13 = local_17b8._12_4_;
              iVar5 = local_17b8.ArrayNum;
              uVar21 = local_17b8.DataPtr._4_4_;
              uVar27 = (uint)local_17b8.DataPtr;
              uVar12 = local_1828._12_4_;
              iVar39 = local_1828.ArrayNum;
              uVar20 = local_1828.DataPtr._4_4_;
              uVar25 = (uint)local_1828.DataPtr;
              uVar40 = (uint)uVar41;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c814e;
              pTVar33 = UE::PoseSearch::FSearchIndex::GetPoseValues(pFVar45,&local_14a8,uVar40);
              *(UPoseSearchDatabase **)(puVar38 + 0x48) = this;
              local_15c8 = uVar25;
              uStack_15c4 = uVar20;
              uStack_15c0 = iVar39;
              uStack_15bc = uVar12;
              local_15b8.DataPtr._0_4_ = uVar27;
              local_15b8.DataPtr._4_4_ = uVar21;
              local_15b8.ArrayNum = iVar5;
              local_15b8._12_4_ = uVar13;
              uVar12 = *(undefined4 *)&pTVar33->DataPtr;
              uVar13 = *(undefined4 *)((longlong)&pTVar33->DataPtr + 4);
              pfVar2 = pTVar33->DataPtr;
              uVar35 = pTVar33->ArrayNum;
              uVar14 = *(undefined4 *)&pTVar33->field_0xc;
              *(FSearchContext **)(puVar38 + 0x40) = local_1890;
              *(float *)(puVar38 + 0x38) = fVar62;
              *(undefined4 *)(puVar38 + 0x30) = 0;
              *(uint *)(puVar38 + 0x28) = uVar40;
              *(uint **)(puVar38 + 0x20) = &local_15c8;
              local_15a8.DataPtr._0_4_ = uVar12;
              local_15a8.DataPtr._4_4_ = uVar13;
              local_15a8.ArrayNum = uVar35;
              local_15a8._12_4_ = uVar14;
              *(undefined8 *)(puVar38 + -8) = 0x14a8c81b2;
              bVar52 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                 (&local_f38,pFVar45,&local_15a8,&local_15b8,
                                  *(TArrayView<float_const_,int> **)(puVar38 + 0x20),
                                  *(int *)(puVar38 + 0x28),*(float *)(puVar38 + 0x30),
                                  *(float *)(puVar38 + 0x38),*(FSearchContext **)(puVar38 + 0x40),
                                  *(UPoseSearchDatabase **)(puVar38 + 0x48));
              if (bVar52) {
                iVar4 = (int)pFVar45->_padding_;
                local_17d8 = 0xffffffff;
                local_17d4.ObjectIndex = 0;
                local_17d4.ObjectSerialNumber = 0;
                local_17cc[0] = 3.4028235e+38;
                uVar26 = 0;
                if ((int)uVar40 < iVar4) {
                  uVar26 = ~uVar40 >> 0x1f;
                }
                local_17cc[1] = -NAN;
                local_17cc[2] = 3.4028235e+38;
                local_17c0 = 0;
                if (uVar26 == 0) {
                  *(longlong *)(puVar38 + 0x28) = (longlong)iVar4;
                  *(ulonglong *)(puVar38 + 0x20) = uVar47;
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c8235;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                lVar49 = pFVar45->_padding_;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c824b;
                fVar53 = FGenericPlatformMath::LoadHalf((ushort *)(lVar49 + 10 + lVar31));
                if ((uVar35 != iVar5) || (uVar35 != iVar39)) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c82a3;
                  bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x3d,L"");
                  if (bVar52) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                local_13b0 = local_1588;
                lStack_1590 = (longlong)(int)uVar35;
                lStack_14e0 = (longlong)iVar5;
                lStack_14c0 = (longlong)iVar39;
                local_14e8 = uVar27;
                uStack_14e4 = uVar21;
                local_14c8 = uVar25;
                uStack_14c4 = uVar20;
                local_1390 = local_14d8;
                local_1368 = local_14b8;
                local_1598 = uVar12;
                uStack_1594 = uVar13;
                local_13c0 = pfVar2;
                lStack_13b8 = lStack_1590;
                lStack_1398 = lStack_14e0;
                lStack_1370 = lStack_14c0;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c8346;
                fVar54 = Eigen::
                         DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                         ::sum(local_13d8);
                this = local_1858;
                local_17cc[1] = -NAN;
                local_1778[0] = local_1858;
                local_17cc[0] = fVar54 + fVar53 + fVar62;
                local_17d8 = uVar40;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c8384;
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                *(undefined8 *)(puVar38 + -8) = 0x14a8c8397;
                FWeakObjectPtr::operator=(&local_17d4,(FObjectPtr)local_1778);
                pFVar18 = local_1880;
                pvVar10 = *(void **)&local_1880->UpdateWith;
                *(undefined8 *)(puVar38 + -8) = 0x14a8c83a5;
                UE::Core::Private::Function::CheckCallable(pvVar10);
                plVar7 = *(longlong **)&(pFVar18->UpdateWith).field_0x28;
                pcVar6 = *(code **)&pFVar18->UpdateWith;
                plVar36 = (longlong *)&(pFVar18->UpdateWith).field_0x10;
                if (plVar7 != (longlong *)0x0) {
                  plVar36 = plVar7;
                }
                pcVar11 = *(code **)(*plVar36 + 8);
                *(undefined8 *)(puVar38 + -8) = 0x14a8c83c1;
                uVar30 = (*pcVar11)();
                *(undefined8 *)(puVar38 + -8) = 0x14a8c83cd;
                (*pcVar6)(uVar30,&local_17d8);
                pFVar17 = local_1890;
                pFVar45 = local_1888;
                if (local_1870 == BruteForce) {
                  *(float **)(puVar38 + 0x20) = local_17cc;
                  *(undefined8 *)(puVar38 + -8) = 0x14a8c83f4;
                  UE::PoseSearch::FSearchContext::Track
                            (pFVar17,this,uVar40,Valid_Pose,*(FPoseSearchCost **)(puVar38 + 0x20));
                  pFVar45 = local_1888;
                }
              }
              uVar41 = (ulonglong)(uVar40 + 1);
              uVar47 = uVar47 + 1;
              lVar31 = lVar31 + 0xc;
              FVar51 = local_1850;
            } while ((int)(uVar40 + 1) < iVar42);
          }
          FVar51 = (FName)((longlong)FVar51 + 4);
          uVar41 = (ulonglong)local_1878;
        }
      }
    }
    local_f38.BlockTransitionFilter = (FBlockTransitionFilter)&___7IPoseSearchFilter__6B_;
    local_f38.SelectableAssetIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    local_f38.NonSelectableIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    param_1 = local_1890;
  }
  pvVar10 = *(void **)&param_2->FinalizeResults;
  *(undefined8 *)(puVar38 + -8) = 0x14a8c8455;
  UE::Core::Private::Function::CheckCallable(pvVar10);
  plVar7 = *(longlong **)&(param_2->FinalizeResults).field_0x28;
  pcVar6 = *(code **)&param_2->FinalizeResults;
  plVar36 = (longlong *)&(param_2->FinalizeResults).field_0x10;
  if (plVar7 != (longlong *)0x0) {
    plVar36 = plVar7;
  }
  pcVar11 = *(code **)(*plVar36 + 8);
  *(undefined8 *)(puVar38 + -8) = 0x14a8c846e;
  uVar30 = (*pcVar11)();
  *(undefined8 *)(puVar38 + -8) = 0x14a8c8473;
  (*pcVar6)(uVar30);
  if (local_1870 == BruteForce) {
    local_17a0 = this;
    if (this == (UPoseSearchDatabase *)0x0) {
      *(undefined8 *)(puVar38 + -8) = 0x14a8c84a5;
      bVar52 = ::FDebug::CheckVerifyFailedImpl2
                         ("Database",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                          ,0x556,L"");
      if (bVar52) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar35 = ((uint)((ulonglong)local_17a0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_17a0 >> 4)) *
             -0x7a143595;
    uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
    *(undefined8 *)(puVar38 + -8) = 0x14a8c84ea;
    TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
    ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
              ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
                *)&param_1->BestPoseCandidatesMap,uVar35 >> 0x10 ^ uVar35,&local_17a0);
  }
  bVar46 = local_1898[0];
  if ((local_1898[0] & 1) != 0) {
    *(undefined8 *)(puVar38 + -8) = 0x14a8c84f9;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar46 & 2) != 0) {
    *(undefined8 *)(puVar38 + -8) = 0x14a8c8504;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar46 & 4) != 0) {
    *(undefined8 *)(puVar38 + -8) = 0x14a8c8517;
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  *(undefined8 *)(puVar38 + -8) = 0x14a8c8526;
  return;
}

// SearchContinuingPose @ 14a8c8580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSearchResult * __thiscall
UPoseSearchDatabase::SearchContinuingPose
          (UPoseSearchDatabase *this,FSearchResult *__return_storage_ptr__,FSearchContext *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_168 [32];
  FSearchResults_Single local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_148);
  SearchContinuingPose(this,param_1,(FSearchResults *)&local_148);
  UE::Core::Private::Function::CheckCallable((void *)local_148._padding_);
  plVar2 = &local_148._padding_;
  if ((longlong *)local_148._padding_ != (longlong *)0x0) {
    plVar2 = (longlong *)local_148._padding_;
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
  (*(code *)local_148._padding_)(__return_storage_ptr__,uVar1);
  UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_148);
  return __return_storage_ptr__;
}

// SearchContinuingPose @ 14a8c8630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchDatabase::SearchContinuingPose
          (UPoseSearchDatabase *this,FSearchContext *param_1,FSearchResults *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FName FVar5;
  longlong *plVar6;
  UPoseSearchSchema *pUVar7;
  void *pvVar8;
  code *pcVar9;
  code *pcVar10;
  FAnimNotifyEventReference *pFVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchDatabase::SearchContinuingPose(UE::PoseSearch::FSearchContext_&,UE::PoseSearch::FSearchResults_&)const_::_2_::FStat_STAT_PoseSearch_ContinuingPose>
  FVar16;
  UPoseSearchDatabase *pUVar17;
  FSearchIndex *this_00;
  FPoseSearchDatabaseAnimationAsset *pFVar18;
  FSearchIndex *this_01;
  FSearchIndexAsset *this_02;
  undefined8 uVar19;
  UObjectBaseUtility *this_03;
  UPackage *pUVar20;
  UBlendSpace *this_04;
  UClass *pUVar21;
  longlong lVar22;
  TArrayView<float_const_,int> *pTVar23;
  FSearchContext *pFVar24;
  FBestPoseCandidates *pFVar25;
  FPoseCandidate *pFVar26;
  uint uVar27;
  undefined ***pppuVar28;
  ulonglong uVar29;
  longlong *plVar30;
  ulonglong uVar31;
  float *pfVar32;
  undefined1 *puVar33;
  longlong lVar34;
  uint uVar35;
  FSearchResults *pFVar36;
  FNameEntryId FVar37;
  uint uVar38;
  FSearchContext *pFVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStackY_468 [32];
  char local_408;
  bool local_407 [3];
  float local_404;
  FName local_400;
  byte local_3f8;
  float local_3f0;
  uint uStack_3ec;
  FColor_u_0 local_3e8;
  int local_3e4;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_3e0;
  FSearchContext *local_3c8;
  uint uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3b8 [4];
  FWeakObjectPtr local_3b4;
  FPoseSearchCost local_3ac;
  int local_3a8;
  float local_3a4;
  bool local_3a0;
  FName local_398;
  FSearchResults *local_390;
  FPoseCandidate local_388;
  FAnimNotifyContext local_378;
  FSearchIndexAsset *local_360;
  UObjectBaseUtility *local_358;
  UPoseSearchDatabase *local_350;
  UPoseSearchDatabase *local_348;
  UPoseSearchDatabase *local_340;
  float *local_338;
  undefined8 uStack_330;
  TArrayView<float_const_,int> local_328;
  float *local_318;
  undefined8 uStack_310;
  FName local_308;
  FName local_300;
  undefined1 local_2f8 [16];
  TArrayView<float,int> local_2e8;
  TArrayView<float,int> local_2d8;
  float *local_2c8;
  longlong lStack_2c0;
  undefined8 local_2b8;
  float *local_2a8;
  longlong lStack_2a0;
  undefined8 local_298;
  uint local_288;
  undefined4 uStack_284;
  longlong lStack_280;
  undefined8 local_278;
  double local_258;
  TArrayView<float_const_,int> local_250;
  TArrayView<float_const_,int> local_240;
  TArrayView<float_const_,int> local_230;
  TArrayView<float_const_,int> local_220;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_210 [24];
  float *local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  float *local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  longlong lStack_1a8;
  undefined8 local_1a0;
  FAnimationAssetSampler local_178;
  code *local_c8 [2];
  undefined **local_b8;
  float *local_b0;
  char *local_a8;
  undefined ***local_a0;
  ulonglong local_98;
  
  puVar33 = auStackY_468;
  local_98 = __security_cookie.value ^ (ulonglong)&local_408;
  pFVar24 = (FSearchContext *)0x0;
  local_3c8 = param_1;
  local_390 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_ContinuingPose ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchDatabase::SearchContinuingPose(UE::PoseSearch::FSearchContext_&,UE::PoseSearch::FSearchResults_&)const_::_2_::FStat_STAT_PoseSearch_ContinuingPose>
         )0x0) {
      pFVar15 = ::FName::FName(&local_308,"STAT_PoseSearch_ContinuingPose");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_ContinuingPose,*pFVar15,
                 L"STAT_PoseSearch_ContinuingPose","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_PoseSearch_ContinuingPose;
  if (StatPtr_STAT_PoseSearch_ContinuingPose ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchDatabase::SearchContinuingPose(UE::PoseSearch::FSearchContext_&,UE::PoseSearch::FSearchResults_&)const_::_2_::FStat_STAT_PoseSearch_ContinuingPose>
       )0x0) {
    pFVar15 = ::FName::FName(&local_300,"STAT_PoseSearch_ContinuingPose");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_UPoseSearchDatabase::SearchContinuingPose(UE::PoseSearch::FSearchContext_&,UE::PoseSearch::FSearchResults_&)const_::_2_::FStat_STAT_PoseSearch_ContinuingPose>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_ContinuingPose,
                          *pFVar15,L"STAT_PoseSearch_ContinuingPose","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_400.ComparisonIndex.Value = 0;
  local_400.Number = 0;
  local_3f8 = 0;
  FVar5 = *(FName *)FVar16;
  FVar37 = FVar5.ComparisonIndex.Value;
  uVar27 = FVar5.Number;
  if ((FVar37.Value != 0) || (uVar27 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3e8._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      local_3f8 = local_3f8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_398.ComparisonIndex.Value = FVar37.Value;
        local_398.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_398,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                   ,0x6ed);
        local_3f8 = local_3f8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_400 = FVar5;
      local_3f0 = (float)FVar37.Value;
      uStack_3ec = uVar27;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_3f8 = local_3f8 | 4;
    }
  }
  pUVar17 = (UPoseSearchDatabase *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)&(param_1->ContinuingPoseSearchResult).field_0x4);
  if ((pUVar17 != this) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SearchContext.GetContinuingPoseSearchResult().Database.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x6f1,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_00 = GetSearchIndex(this);
  uVar27 = *(uint *)&param_1->ContinuingPoseSearchResult;
  lVar34 = (longlong)(int)uVar27;
  local_360 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_00,uVar27);
  pFVar18 = GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                      (this,local_360->SourceAssetIdx);
  if ((pFVar18 == (FPoseSearchDatabaseAnimationAsset *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DatabaseAnimationAssetBase",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x700,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_404 = this->ContinuingPoseCostBias;
  if (((this->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Schema",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x608,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_01 = GetSearchIndex(this);
  this_02 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_01,uVar27);
  fVar40 = UE::PoseSearch::FSearchIndexAsset::GetTimeFromPoseIndex
                     (this_02,uVar27,((this->Schema).field0_0x0.DebugPtr)->SampleRate);
  local_378.ActiveNotifies.ArrayNum = 0;
  local_378.ActiveNotifies.ArrayMax = 0;
  local_378.TickRecord._0_4_ = 0;
  local_378.TickRecord._4_4_ = 0;
  local_378.ActiveNotifies.AllocatorInstance.Data._0_4_ = 0;
  local_378.ActiveNotifies.AllocatorInstance.Data._4_4_ = 0;
  iVar14 = (**(code **)(pFVar18->_padding_ + 0x20))(pFVar18);
  fVar50 = 0.0;
  pFVar39 = pFVar24;
  if (0 < iVar14) {
    do {
      lVar22 = pFVar18->_padding_;
      uVar19 = (**(code **)(lVar22 + 0x28))(pFVar18,local_2f8,pFVar39);
      this_03 = (UObjectBaseUtility *)(**(code **)(lVar22 + 0x30))(pFVar18,uVar19);
      if (this_03 != (UObjectBaseUtility *)0x0) {
        local_178.RootTransformOrigin.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_178.RootTransformOrigin.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        uVar3 = local_360->BlendParameterX;
        uVar4 = local_360->BlendParameterY;
        local_178.AnimationAssetPtr.WeakPtr.ObjectIndex = 0;
        local_178.AnimationAssetPtr.WeakPtr.ObjectSerialNumber = 0;
        local_178.RootTransformSamplingRate = 0x1e;
        local_178.CachedPlayLength = -1.0;
        local_178.AccumulatedRootTransform.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.AccumulatedRootTransform.ArrayNum = 0;
        local_178.AccumulatedRootTransform.ArrayMax = 0;
        local_178.ExtrapolationSampleTime = 0.033333335;
        local_178.RootTransformOrigin.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_178.ExtractionInterval = 0.008333334;
        local_178.RootTransformOrigin.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_178.BlendParameters.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_178.BlendParameters.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_178.RootTransformOrigin.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_178.BlendParameters.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_258 = 0.0;
        local_178.RootTransformOrigin.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_178.bEnforceCompressedDataSampling = true;
        pUVar20 = UObjectBaseUtility::GetPackage(this_03);
        if (((pUVar20 == (UPackage *)0x0) || ((*(uint *)&this_03->field_0x8 >> 0x1e & 1) != 0)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InAnimationAsset || (InAnimationAsset->GetPackage() && !InAnimationAsset->HasAnyFlags(RF_MirroredGarbage))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                                ,0x101,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_358 = this_03;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_03);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_178,(FObjectPtr)&local_358);
        local_178.RootTransformOrigin.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_178.RootTransformOrigin.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_178.RootTransformOrigin.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_178.RootTransformOrigin.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_178.RootTransformOrigin.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_178.BlendParameters.field0_0x0._s_0.Z = local_258;
        local_178.RootTransformOrigin.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_178.RootTransformSamplingRate = 0x1e;
        local_178.BlendParameters.field0_0x0._s_0.X = (double)(float)uVar3;
        local_178.BlendParameters.field0_0x0._s_0.Y = (double)(float)uVar4;
        this_04 = (UBlendSpace *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_178);
        fVar41 = 0.0;
        if (this_04 != (UBlendSpace *)0x0) {
          pUVar21 = Z_Construct_UClass_UBlendSpace_NoRegister();
          iVar14 = (int)pUVar21->_padding_;
          if ((*(int *)(this_04->_padding_ + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar21->_padding_)) {
            fVar41 = (float)(**(code **)(this_04->_padding_ + 0x2c0))(this_04);
          }
          else {
            local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3e0.ArrayNum = 0;
            local_3e0.ArrayMax = 0;
            local_3e4 = 0;
            UBlendSpace::GetSamplesFromBlendInput
                      (this_04,&local_178.BlendParameters,&local_3e0,&local_3e4,true);
            fVar41 = UBlendSpace::GetAnimationLengthFromSampleData(this_04,&local_3e0);
            DestructItems<FBlendSampleData,int>
                      ((FBlendSampleData *)local_3e0.AllocatorInstance.Data,local_3e0.ArrayNum);
            if ((FBlendSampleData *)local_3e0.AllocatorInstance.Data != (FBlendSampleData *)0x0) {
              FMemory::Free(local_3e0.AllocatorInstance.Data);
            }
          }
        }
        local_b8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::`21'::<lambda_1>,0,0>
                    ::_vftable_;
        local_b0 = &local_404;
        local_408 = '\0';
        local_a0 = (undefined ***)0x0;
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,bool,UAnimNotifyState_*>
                      ::Call;
        local_178.CachedPlayLength = fVar41;
        local_a8 = &local_408;
        UE::PoseSearch::FAnimationAssetSampler::ExtractAnimNotifyStates
                  (&local_178,fVar40,&local_378,
                   (TFunction<bool___cdecl(UAnimNotifyState_*)> *)local_c8);
        if (local_c8[0] != (code *)0x0) {
          pppuVar28 = &local_b8;
          if (local_a0 != (undefined ***)0x0) {
            pppuVar28 = local_a0;
          }
          (*(code *)(*pppuVar28)[2])();
        }
        if (local_408 != '\0') {
          if (local_178.AccumulatedRootTransform.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.AccumulatedRootTransform.AllocatorInstance.Data);
          }
          break;
        }
        if (local_178.AccumulatedRootTransform.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.AccumulatedRootTransform.AllocatorInstance.Data);
        }
      }
      uVar38 = (int)pFVar39 + 1;
      iVar14 = (**(code **)(pFVar18->_padding_ + 0x20))(pFVar18);
      pFVar39 = (FSearchContext *)(ulonglong)uVar38;
    } while ((int)uVar38 < iVar14);
  }
  pFVar36 = local_390;
  pFVar39 = local_3c8;
  if (local_3c8->bIsContinuingInteraction != false) {
    fVar50 = this->ContinuingInteractionCostBias;
  }
  local_3f0 = local_404 + *(float *)&this_00->_padding_ + fVar50;
  UE::Core::Private::Function::CheckCallable(*(void **)&local_390->ShouldPerformSearch);
  pcVar10 = *(code **)&pFVar36->ShouldPerformSearch;
  plVar6 = *(longlong **)&(pFVar36->ShouldPerformSearch).field_0x28;
  plVar30 = (longlong *)&(pFVar36->ShouldPerformSearch).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar30 = plVar6;
  }
  uVar19 = (**(code **)(*plVar30 + 8))();
  cVar13 = (*pcVar10)(uVar19,&local_3f0);
  if (cVar13 == '\0') {
    uVar27 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595
    ;
    uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
    local_350 = this;
    TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
    ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
              ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
                *)&pFVar39->BestPoseCandidatesMap,uVar27 >> 0x10 ^ uVar27,&local_350);
  }
  else {
    uVar38 = ((this->Schema).field0_0x0.DebugPtr)->SchemaCardinality;
    uVar31 = (ulonglong)(int)uVar38;
    lVar22 = uVar31 * 4;
    local_3c8 = pFVar24;
    puVar33 = auStackY_468;
    if (lVar22 != 0) {
      uVar29 = lVar22 + 0x1e;
      if (uVar29 <= lVar22 + 0xfU) {
        uVar29 = 0xffffffffffffff0;
      }
      local_3c8 = (FSearchContext *)((longlong)&local_400 + -(uVar29 & 0xfffffffffffffff0));
      puVar33 = auStackY_468 + -(uVar29 & 0xfffffffffffffff0);
    }
    uStack_3c0 = uVar38;
    if ((int)uVar38 < 0) {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8d3f;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if ((int)this_00->_padding_ == 0) {
      local_2e8._12_4_ = uStack_3bc;
      local_2e8.ArrayNum = uStack_3c0;
      local_2e8.DataPtr = (float *)local_3c8;
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8d70;
      pTVar23 = UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues
                          (this_00,&local_250,uVar27,&local_2e8);
    }
    else {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8d7e;
      pTVar23 = UE::PoseSearch::FSearchIndex::GetPoseValues(this_00,&local_240,uVar27);
    }
    pfVar1 = pTVar23->DataPtr;
    uVar19 = *(undefined8 *)&pTVar23->ArrayNum;
    if ((uVar31 & 0x3fffffffffffffff) != 0) {
      uVar29 = uVar31 * 4 + 0x1e;
      if (uVar29 <= uVar31 * 4 + 0xf) {
        uVar29 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8dba;
      pFVar24 = (FSearchContext *)
                ((ulonglong)(puVar33 + -(uVar29 & 0xfffffffffffffff0) + 0x6f) & 0xfffffffffffffff0);
      puVar33 = puVar33 + -(uVar29 & 0xfffffffffffffff0);
    }
    local_3c8 = pFVar24;
    uStack_3c0 = uVar38;
    if ((int)uVar38 < 0) {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8df5;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_2d8._12_4_ = uStack_3bc;
    local_2d8.ArrayNum = uStack_3c0;
    local_2d8.DataPtr = (float *)local_3c8;
    *(undefined8 *)(puVar33 + -8) = 0x14a8c8e1d;
    CalculateDynamicWeightsSqrt(this,&local_328,&local_2d8);
    fVar40 = local_404;
    local_3b4.ObjectIndex = 0;
    local_3b4.ObjectSerialNumber = 0;
    local_3a8 = -1;
    local_3a0 = true;
    uVar38 = uVar38 & 0x80000003;
    if ((int)uVar38 < 0) {
      uVar38 = (uVar38 - 1 | 0xfffffffc) + 1;
    }
    iVar14 = (int)this_00->_padding_;
    uVar35 = (uint)uVar19;
    if (uVar38 == 0) {
      uVar38 = 0;
      if ((int)uVar27 < iVar14) {
        uVar38 = ~uVar27 >> 0x1f;
      }
      if (uVar38 == 0) {
        *(longlong *)(puVar33 + 0x28) = (longlong)iVar14;
        *(longlong *)(puVar33 + 0x20) = lVar34;
        *(undefined8 *)(puVar33 + -8) = 0x14a8c8e88;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      lVar22 = this_00->_padding_;
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8ea3;
      fVar41 = FGenericPlatformMath::LoadHalf((ushort *)(lVar34 * 0xc + 10 + lVar22));
      pUVar7 = (this->Schema).field0_0x0.DebugPtr;
      pfVar32 = (float *)CONCAT44(local_328.DataPtr._4_4_,(uint)local_328.DataPtr);
      *(undefined8 *)(puVar33 + -8) = 0x14a8c8ec1;
      pTVar23 = UE::PoseSearch::FSearchContext::GetOrBuildQuery(pFVar39,&local_230,pUVar7);
      local_338 = pTVar23->DataPtr;
      uStack_330 = *(undefined8 *)&pTVar23->ArrayNum;
      if ((uVar35 != pTVar23->ArrayNum) || (uVar35 != local_328.ArrayNum)) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c8f12;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x10,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar38 = uVar35 & 0x80000003;
      if ((int)uVar38 < 0) {
        uVar38 = (uVar38 - 1 | 0xfffffffc) + 1;
      }
      if (uVar38 != 0) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c8f4d;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("A.Num() % 4 == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x11,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (((ulonglong)pfVar1 & 0xf) != 0) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c8f7e;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x12,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (((ulonglong)local_338 & 0xf) != 0) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c8fad;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x13,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (((uint)local_328.DataPtr & 0xf) != 0) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c8fdd;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x14,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if ((pfVar1 == local_338) || (pfVar1 == pfVar32)) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c9011;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x16,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      fVar49 = 0.0;
      uVar38 = (int)(uVar35 + ((int)uVar35 >> 0x1f & 3U)) >> 2;
      uVar31 = (ulonglong)uVar38;
      if (0 < (int)uVar38) {
        lVar22 = (longlong)pfVar1 - (longlong)pfVar32;
        lVar34 = (longlong)local_338 - (longlong)pfVar32;
        do {
          pfVar1 = (float *)((longlong)pfVar32 + lVar22);
          pfVar2 = (float *)((longlong)pfVar32 + lVar34);
          fVar42 = (*pfVar1 - *pfVar2) * *pfVar32;
          fVar43 = (pfVar1[1] - pfVar2[1]) * pfVar32[1];
          fVar44 = (pfVar1[2] - pfVar2[2]) * pfVar32[2];
          fVar45 = (pfVar1[3] - pfVar2[3]) * pfVar32[3];
          pfVar32 = pfVar32 + 4;
          fVar46 = fVar46 + fVar42 * fVar42;
          fVar47 = fVar47 + fVar43 * fVar43;
          fVar48 = fVar48 + fVar44 * fVar44;
          fVar49 = fVar49 + fVar45 * fVar45;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      local_3ac.TotalCost = fVar49 + fVar48 + fVar47 + fVar46 + fVar41 + fVar40 + fVar50;
      pFVar36 = local_390;
    }
    else {
      uVar38 = 0;
      if ((int)uVar27 < iVar14) {
        uVar38 = ~uVar27 >> 0x1f;
      }
      if (uVar38 == 0) {
        *(longlong *)(puVar33 + 0x28) = (longlong)iVar14;
        *(longlong *)(puVar33 + 0x20) = lVar34;
        *(undefined8 *)(puVar33 + -8) = 0x14a8c90bf;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      lVar22 = this_00->_padding_;
      *(undefined8 *)(puVar33 + -8) = 0x14a8c90da;
      fVar41 = FGenericPlatformMath::LoadHalf((ushort *)(lVar34 * 0xc + 10 + lVar22));
      pUVar7 = (this->Schema).field0_0x0.DebugPtr;
      *(undefined8 *)(puVar33 + -8) = 0x14a8c90f8;
      pTVar23 = UE::PoseSearch::FSearchContext::GetOrBuildQuery(pFVar39,&local_220,pUVar7);
      local_318 = pTVar23->DataPtr;
      uStack_310 = *(undefined8 *)&pTVar23->ArrayNum;
      uVar38 = pTVar23->ArrayNum;
      if ((uVar35 != uVar38) || (uVar35 != local_328.ArrayNum)) {
        *(undefined8 *)(puVar33 + -8) = 0x14a8c9148;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                            ,0x3d,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      local_288 = (uint)local_328.DataPtr;
      uStack_284 = local_328.DataPtr._4_4_;
      local_1e8 = local_2b8;
      lStack_2c0 = (longlong)(int)uVar35;
      local_2a8 = local_318;
      lStack_2a0 = (longlong)(int)uVar38;
      local_1d8 = local_318;
      lStack_280 = (longlong)local_328.ArrayNum;
      local_1c8 = local_298;
      local_1a0 = local_278;
      local_2c8 = pfVar1;
      local_1f8 = pfVar1;
      lStack_1f0 = lStack_2c0;
      lStack_1d0 = lStack_2a0;
      lStack_1a8 = lStack_280;
      *(undefined8 *)(puVar33 + -8) = 0x14a8c9200;
      fVar46 = Eigen::
               DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
               ::sum(local_210);
      local_3ac.TotalCost = fVar46 + fVar41 + fVar40 + fVar50;
    }
    fVar50 = __real_7f7fffff;
    if (__real_7f7fffff == (pFVar39->ContinuingPoseSearchResult).AssetTime) {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c9245;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsAssetTimeValid(AssetTime)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                          ,0x4a,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    fVar40 = (pFVar39->ContinuingPoseSearchResult).AssetTime;
    if (fVar40 == fVar50) {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c9279;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsAssetTimeValid(InAssetTime)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                          ,0x4b,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_3b8 = (undefined1  [4])uVar27;
    local_3a4 = fVar40;
    local_348 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c92a0;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(undefined8 *)(puVar33 + -8) = 0x14a8c92b0;
    FWeakObjectPtr::operator=(&local_3b4,(FObjectPtr)&local_348);
    uVar38 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595
    ;
    uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
    local_340 = this;
    *(undefined8 *)(puVar33 + -8) = 0x14a8c92ef;
    pFVar25 = TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
              ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
                        ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
                          *)&pFVar39->BestPoseCandidatesMap,uVar38 >> 0x10 ^ uVar38,&local_340);
    if (uVar27 != 0xffffffff) {
      local_388.Cost.TotalCost = local_3ac.TotalCost;
      local_388.PoseCandidateFlags = Valid_ContinuingPose;
      local_407[0] = false;
      local_388.PoseIdx = uVar27;
      *(undefined8 *)(puVar33 + -8) = 0x14a8c932e;
      pFVar26 = TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
                ::FindOrAddByHash<UE::PoseSearch::FSearchContext::FPoseCandidate_const_&>
                          (&pFVar25->PermanentPoseCandidates,uVar27,&local_388,local_407);
      if (local_407[0] != false) {
        if (local_3ac.TotalCost < (pFVar26->Cost).TotalCost) {
          (pFVar26->Cost).TotalCost = local_3ac.TotalCost;
        }
        pFVar26->PoseCandidateFlags = pFVar26->PoseCandidateFlags | Valid_ContinuingPose;
      }
    }
    *(undefined8 *)(puVar33 + -8) = 0x14a8c9356;
    bVar12 = UE::PoseSearch::FSearchResult::DebugValidate((FSearchResult *)local_3b8);
    if (!bVar12) {
      *(undefined8 *)(puVar33 + -8) = 0x14a8c937a;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.DebugValidate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x74c,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pvVar8 = *(void **)&pFVar36->UpdateWith;
    *(undefined8 *)(puVar33 + -8) = 0x14a8c9389;
    UE::Core::Private::Function::CheckCallable(pvVar8);
    plVar6 = *(longlong **)&(pFVar36->UpdateWith).field_0x28;
    pcVar10 = *(code **)&pFVar36->UpdateWith;
    plVar30 = (longlong *)&(pFVar36->UpdateWith).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar30 = plVar6;
    }
    pcVar9 = *(code **)(*plVar30 + 8);
    *(undefined8 *)(puVar33 + -8) = 0x14a8c93a2;
    uVar19 = (*pcVar9)();
    *(undefined8 *)(puVar33 + -8) = 0x14a8c93ab;
    (*pcVar10)(uVar19,local_3b8);
  }
  iVar14 = local_378.ActiveNotifies.ArrayNum;
  pFVar11 = (FAnimNotifyEventReference *)
            CONCAT44(local_378.ActiveNotifies.AllocatorInstance.Data._4_4_,
                     local_378.ActiveNotifies.AllocatorInstance.Data._0_4_);
  *(undefined8 *)(puVar33 + -8) = 0x14a8c93bd;
  DestructItems<FAnimNotifyEventReference,int>(pFVar11,iVar14);
  pvVar8 = (void *)CONCAT44(local_378.ActiveNotifies.AllocatorInstance.Data._4_4_,
                            local_378.ActiveNotifies.AllocatorInstance.Data._0_4_);
  if (pvVar8 != (void *)0x0) {
    *(undefined8 *)(puVar33 + -8) = 0x14a8c93ce;
    FMemory::Free(pvVar8);
  }
  if ((local_3f8 & 1) != 0) {
    *(undefined8 *)(puVar33 + -8) = 0x14a8c93db;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_3f8 & 2) != 0) {
    *(undefined8 *)(puVar33 + -8) = 0x14a8c93e8;
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar5 = local_400;
  if ((local_3f8 & 4) != 0) {
    *(undefined8 *)(puVar33 + -8) = 0x14a8c93fe;
    FThreadStats::AddMessage(FVar5,CycleScopeEnd);
  }
  *(undefined8 *)(puVar33 + -8) = 0x14a8c940d;
  return;
}

// SearchEvent @ 14a8c94f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchDatabase::SearchEvent
          (UPoseSearchDatabase *this,FSearchContext *param_1,FSearchResults *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  UPoseSearchSchema *pUVar6;
  void *pvVar7;
  code *pcVar8;
  code *pcVar9;
  float *pfVar10;
  FSearchResults *pFVar11;
  float *pfVar12;
  undefined8 uVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_PoseSearch_Event> FVar16;
  FSearchIndex *this_00;
  longlong lVar17;
  TArrayView<UObject_const_*_const,int> *pTVar18;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar19;
  FSearchIndexAsset *this_01;
  undefined8 uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  FName FVar25;
  undefined1 *puVar26;
  byte bVar27;
  UPoseSearchDatabase *pUVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_d38 [32];
  byte local_cc8 [8];
  FName local_cc0;
  UPoseSearchDatabase *local_cb8;
  FColor_u_0 local_cb0 [2];
  FSearchResults *local_ca8;
  FName local_ca0;
  TArrayView<int_const_,int> local_c98;
  FName local_c88;
  TArrayView<float_const_,int> local_c78;
  UPoseSearchDatabase *local_c68;
  FSearchResults *pFStack_c60;
  FSearchIndex *local_c58;
  TArrayView<float_const_,int> *pTStack_c50;
  int local_c48;
  undefined4 uStack_c44;
  FSearchFilters *pFStack_c40;
  undefined4 local_c38;
  float fStack_c34;
  undefined8 uStack_c30;
  TArrayView<float_const_,int> *local_c28;
  float *local_c18;
  int iStack_c10;
  undefined4 uStack_c0c;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_c08;
  int iStack_c00;
  undefined4 uStack_bfc;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_bf8;
  int iStack_bf0;
  undefined4 uStack_bec;
  undefined8 local_be8;
  undefined4 uStack_be0;
  uint uStack_bdc;
  TArrayView<float_const_,int> local_bd8;
  FName local_bc8 [2];
  TArrayView<float,int> local_bb8;
  TArrayView<UObject_const_*_const,int> local_ba8;
  float *local_b98 [2];
  TArrayView<int_const_,int> local_b88;
  TArrayView<int_const_,int> local_b78;
  float *local_b68 [2];
  TArrayView<float,int> local_b58;
  TArrayView<float_const_,int> local_b48;
  TArrayView<UObject_const_*_const,int> local_b38;
  code *local_b28 [2];
  longlong local_b18 [3];
  longlong *local_b00;
  FSearchFilters local_af8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_8a8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_498;
  ulonglong local_88;
  
  puVar26 = auStackY_d38;
  local_88 = __security_cookie.value ^ (ulonglong)local_cc8;
  FVar16 = StatPtr_STAT_PoseSearch_Event;
  local_ca8 = param_2;
  if (StatPtr_STAT_PoseSearch_Event == (FThreadSafeStaticStat<FStat_STAT_PoseSearch_Event>)0x0) {
    pFVar15 = ::FName::FName(local_bc8,"STAT_PoseSearch_Event");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_PoseSearch_Event>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_Event,*pFVar15,
                        L"Search Event","STATGROUP_PoseSearch","STATCAT_Advanced",L"PoseSearch",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar27 = 0;
  local_c88.ComparisonIndex.Value = 0;
  local_c88.Number = 0;
  local_cc8[0] = 0;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_cb0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_cb0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar27 = 1;
      local_cc8[0] = 1;
      if (-1 < CpuChannel->Enabled) {
        local_ca0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_ca0.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_ca0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                   ,0xa0a);
        bVar27 = 3;
        local_cc8[0] = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_cc0 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      local_cc8[0] = bVar27 | 4;
      goto LAB_14a8c9681;
    }
  }
  local_cc0 = local_c88;
  FVar25 = local_c88;
LAB_14a8c9681:
  this_00 = GetSearchIndex(this);
  if ((int)this_00->_padding_ == 0) {
    puVar26 = auStackY_d38;
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      puVar26 = auStackY_d38;
    }
  }
  else {
    UE::PoseSearch::FEventData::GetPosesWithEvent
              ((FEventData *)&this_00->_padding_,&local_c98,&(param_1->EventToSearch).EventTag);
    if (local_c98.ArrayNum != 0) {
      if (param_1->bIsContinuingInteraction == false) {
        fVar30 = 0.0;
      }
      else {
        fVar30 = this->ContinuingInteractionCostBias;
      }
      UE::PoseSearch::FSearchContext::GetOrBuildQuery
                (param_1,&local_bd8,(this->Schema).field0_0x0.DebugPtr);
      iStack_c10 = ((this->Schema).field0_0x0.DebugPtr)->SchemaCardinality;
      lVar17 = (longlong)iStack_c10 * 4;
      if (lVar17 == 0) {
        local_c18 = (float *)0x0;
        puVar26 = auStackY_d38;
      }
      else {
        uVar22 = lVar17 + 0x1e;
        if (uVar22 <= lVar17 + 0xfU) {
          uVar22 = 0xffffffffffffff0;
        }
        puVar26 = auStackY_d38 + -(uVar22 & 0xfffffffffffffff0);
        local_c18 = (float *)((longlong)&local_cc0 + -(uVar22 & 0xfffffffffffffff0));
      }
      if (iStack_c10 < 0) {
        *(undefined8 *)(puVar26 + -8) = 0x14a8c9780;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_bb8._12_4_ = uStack_c0c;
      local_bb8.ArrayNum = iStack_c10;
      local_bb8.DataPtr = local_c18;
      *(undefined8 *)(puVar26 + -8) = 0x14a8c97a8;
      CalculateDynamicWeightsSqrt(this,&local_c78,&local_bb8);
      local_8a8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
      local_8a8.ArrayNum = 0;
      local_8a8.ArrayMax = 0x100;
      if ((param_1->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
        *(undefined8 *)(puVar26 + -8) = 0x14a8c9806;
        pTVar19 = UE::PoseSearch::FSearchContext::GetAssetsToConsiderSet(param_1);
        *(undefined8 *)(puVar26 + -8) = 0x14a8c9818;
        PopulateSelectableAssetIdx(this,&local_8a8,pTVar19);
      }
      else {
        *(undefined8 *)(puVar26 + -8) = 0x14a8c97dc;
        pTVar18 = TArrayView<UObject_const_*_const,int>::
                  TArrayView<UObject_const_*_const,int><TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_>
                            (&local_b38,&param_1->AssetsToConsider_DEPRECATED);
        local_ba8.DataPtr = pTVar18->DataPtr;
        local_ba8.ArrayNum = pTVar18->ArrayNum;
        local_ba8._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
        *(undefined8 *)(puVar26 + -8) = 0x14a8c97fc;
        PopulateSelectableAssetIdx(this,&local_8a8,&local_ba8);
      }
      uVar20 = local_c78._8_8_;
      pfVar10 = local_c78.DataPtr;
      local_498.AllocatorInstance.SecondaryData.Data = (int *)0x0;
      local_498.ArrayNum = 0;
      local_498.ArrayMax = 0x100;
      if ((param_1->EventToSearch).bEnablePoseFilters != false) {
        *(float ***)(puVar26 + 0x28) = local_b98;
        *(float *)(puVar26 + 0x20) = fVar30;
        local_b98[0] = pfVar10;
        local_b98[1] = (float *)uVar20;
        *(undefined8 *)(puVar26 + -8) = 0x14a8c986c;
        PopulateNonSelectableIdx
                  (this,&local_498,param_1,0.0,*(float *)(puVar26 + 0x20),
                   *(TArrayView<float_const_,int> **)(puVar26 + 0x28));
      }
      iVar5 = local_8a8.ArrayNum;
      lVar17 = this_00->_padding_;
      local_c08 = &local_8a8;
      if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
          local_8a8.AllocatorInstance.SecondaryData.Data !=
          (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
        local_c08 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                    local_8a8.AllocatorInstance.SecondaryData.Data;
      }
      if (local_8a8.ArrayNum < 0) {
        *(undefined8 *)(puVar26 + -8) = 0x14a8c98b8;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar4 = local_498.ArrayNum;
      iStack_c00 = iVar5;
      local_bf8 = &local_498;
      if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
          local_498.AllocatorInstance.SecondaryData.Data !=
          (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
        local_bf8 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                    local_498.AllocatorInstance.SecondaryData.Data;
      }
      if (local_498.ArrayNum < 0) {
        *(undefined8 *)(puVar26 + -8) = 0x14a8c990a;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pUVar6 = (this->Schema).field0_0x0.DebugPtr;
      iStack_bf0 = iVar4;
      local_b78.DataPtr = (int *)local_bf8;
      local_b78.ArrayNum = iVar4;
      local_b78._12_4_ = uStack_bec;
      local_b88.DataPtr = (int *)local_c08;
      local_b88.ArrayNum = iStack_c00;
      local_b88._12_4_ = uStack_bfc;
      puVar26[0x20] = (char)lVar17;
      *(undefined8 *)(puVar26 + -8) = 0x14a8c9957;
      UE::PoseSearch::FSearchFilters::FSearchFilters
                (&local_af8,pUVar6,&local_b78,&local_b88,(bool)puVar26[0x20]);
      pFVar11 = local_ca8;
      fVar1 = (param_1->EventToSearch).TimeToEvent;
      if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar2 = *(float *)&(param_1->EventToSearch).PlayRateRangeOverride;
        fVar3 = *(float *)&(param_1->EventToSearch).PlayRateRangeOverride.field_0x4;
        local_cb8 = (UPoseSearchDatabase *)
                    ((longlong)(longlong *)local_c98.DataPtr + (longlong)local_c98.ArrayNum * 4);
        pUVar28 = (UPoseSearchDatabase *)local_c98.DataPtr;
        param_2 = local_ca8;
        if ((UPoseSearchDatabase *)local_c98.DataPtr != local_cb8) {
          do {
            iVar5 = (int)pUVar28->_padding_;
            *(undefined8 *)(puVar26 + -8) = 0x14a8c9a6d;
            this_01 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                                ((FSearchIndexBase *)this_00,iVar5);
            iVar4 = ((this->Schema).field0_0x0.DebugPtr)->SampleRate;
            *(undefined8 *)(puVar26 + -8) = 0x14a8c9a82;
            fVar29 = UE::PoseSearch::FSearchIndexAsset::GetTimeFromPoseIndex(this_01,iVar5,iVar4);
            pTStack_c50 = &local_bd8;
            pFStack_c40 = &local_af8;
            pFStack_c60 = pFVar11;
            local_c28 = &local_c78;
            local_b28[0] = (code *)0x0;
            local_b00 = (longlong *)0x0;
            local_c38 = 0;
            local_c68 = this;
            local_c58 = this_00;
            local_c48 = iVar5;
            uStack_c30 = param_1;
            *(undefined8 *)(puVar26 + -8) = 0x14a8c9aeb;
            local_b00 = FMemory::Malloc(0x50,8);
            *local_b00 = (longlong)
                         &UE::Core::Private::Function::
                          TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::`49'::<lambda_1>,0,1>
                          ::_vftable_;
            local_b00[1] = (longlong)local_c68;
            local_b00[2] = (longlong)pFStack_c60;
            local_b00[3] = (longlong)local_c58;
            local_b00[4] = (longlong)pTStack_c50;
            local_b00[5] = CONCAT44(uStack_c44,local_c48);
            local_b00[6] = (longlong)pFStack_c40;
            *(undefined4 *)(local_b00 + 7) = local_c38;
            *(float *)((longlong)local_b00 + 0x3c) = fVar30;
            *(undefined4 *)(local_b00 + 8) = (undefined4)uStack_c30;
            *(undefined4 *)((longlong)local_b00 + 0x44) = uStack_c30._4_4_;
            local_b00[9] = (longlong)local_c28;
            if (local_b00 + 1 != (longlong *)0x0) {
              local_b28[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,void,int>
                             ::Call;
            }
            fStack_c34 = fVar30;
            iVar5 = ((this->Schema).field0_0x0.DebugPtr)->SampleRate;
            *(code ***)(puVar26 + 0x20) = local_b28;
            *(undefined8 *)(puVar26 + -8) = 0x14a8c9b8d;
            UE::PoseSearch::FSearchIndexAsset::IteratePoseIndexesOverTime
                      (this_01,fVar29 - fVar1 * fVar3,fVar29 - fVar1 * fVar2,iVar5,
                       *(TFunction<void___cdecl(int)> **)(puVar26 + 0x20));
            if (local_b28[0] != (code *)0x0) {
              plVar23 = local_b18;
              if (local_b00 != (longlong *)0x0) {
                plVar23 = local_b00;
              }
              pcVar8 = *(code **)(*plVar23 + 0x10);
              *(undefined8 *)(puVar26 + -8) = 0x14a8c9bb2;
              (*pcVar8)();
            }
            pUVar28 = (UPoseSearchDatabase *)((longlong)&pUVar28->_padding_ + 4);
            FVar25 = local_cc0;
            param_2 = local_ca8;
          } while (pUVar28 != local_cb8);
        }
      }
      else {
        pfVar10 = local_c78.DataPtr;
        uVar20 = local_c78._8_8_;
        for (pUVar28 = (UPoseSearchDatabase *)local_c98.DataPtr;
            pUVar28 !=
            (UPoseSearchDatabase *)
            ((longlong)(longlong *)local_c98.DataPtr + (longlong)local_c98.ArrayNum * 4);
            pUVar28 = (UPoseSearchDatabase *)((longlong)&pUVar28->_padding_ + 4)) {
          iVar5 = (int)pUVar28->_padding_;
          local_c78.DataPtr = pfVar10;
          local_c78._8_8_ = uVar20;
          puVar26[0x60] = 1;
          local_be8 = 0;
          uStack_be0 = 0;
          uVar22 = (ulonglong)uStack_bdc;
          *(float ***)(puVar26 + 0x58) = local_b68;
          *(UPoseSearchDatabase **)(puVar26 + 0x50) = this;
          *(FSearchContext **)(puVar26 + 0x48) = param_1;
          *(float *)(puVar26 + 0x40) = fVar30;
          *(undefined4 *)(puVar26 + 0x38) = 0;
          *(FSearchFilters **)(puVar26 + 0x30) = &local_af8;
          uVar13 = local_bd8._8_8_;
          pfVar12 = local_bd8.DataPtr;
          local_b68[0] = pfVar10;
          local_b68[1] = (float *)uVar20;
          *(int *)(puVar26 + 0x28) = iVar5;
          *(int *)(puVar26 + 0x20) = iVar5;
          uVar20 = local_bd8._8_8_;
          local_b58.DataPtr = (float *)0x0;
          local_b58._8_8_ = uVar22 << 0x20;
          local_b48.DataPtr = pfVar12;
          local_bd8.ArrayNum = (int)uVar13;
          local_bd8._12_4_ = SUB84(uVar13,4);
          local_b48.ArrayNum = local_bd8.ArrayNum;
          local_b48._12_4_ = local_bd8._12_4_;
          local_bd8._8_8_ = uVar20;
          *(undefined8 *)(puVar26 + -8) = 0x14a8c9a1f;
          UE::PoseSearch::EvaluatePoseKernel<0,0>
                    (param_2,this_00,&local_b48,&local_b58,*(int *)(puVar26 + 0x20),
                     *(int *)(puVar26 + 0x28),*(FSearchFilters **)(puVar26 + 0x30),
                     *(float *)(puVar26 + 0x38),*(float *)(puVar26 + 0x40),
                     *(FSearchContext **)(puVar26 + 0x48),*(UPoseSearchDatabase **)(puVar26 + 0x50),
                     *(TArrayView<float_const_,int> **)(puVar26 + 0x58),(bool)puVar26[0x60]);
          pfVar10 = local_c78.DataPtr;
          uVar20 = local_c78._8_8_;
        }
      }
      local_af8.BlockTransitionFilter = (FBlockTransitionFilter)&___7IPoseSearchFilter__6B_;
      local_af8.SelectableAssetIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
      local_af8.NonSelectableIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    }
  }
  pvVar7 = *(void **)&param_2->FinalizeResults;
  *(undefined8 *)(puVar26 + -8) = 0x14a8c9bed;
  UE::Core::Private::Function::CheckCallable(pvVar7);
  plVar23 = *(longlong **)&(param_2->FinalizeResults).field_0x28;
  pcVar8 = *(code **)&param_2->FinalizeResults;
  plVar24 = (longlong *)&(param_2->FinalizeResults).field_0x10;
  if (plVar23 != (longlong *)0x0) {
    plVar24 = plVar23;
  }
  pcVar9 = *(code **)(*plVar24 + 8);
  *(undefined8 *)(puVar26 + -8) = 0x14a8c9c06;
  uVar20 = (*pcVar9)();
  *(undefined8 *)(puVar26 + -8) = 0x14a8c9c0b;
  (*pcVar8)(uVar20);
  local_cb8 = this;
  if (this == (UPoseSearchDatabase *)0x0) {
    *(undefined8 *)(puVar26 + -8) = 0x14a8c9c34;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Database",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                        ,0x556,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar21 = ((uint)((ulonglong)local_cb8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_cb8 >> 4)) *
           -0x7a143595;
  uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
  *(undefined8 *)(puVar26 + -8) = 0x14a8c9c73;
  TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
            ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
              *)&param_1->BestPoseCandidatesMap,uVar21 >> 0x10 ^ uVar21,&local_cb8);
  bVar27 = local_cc8[0];
  if ((local_cc8[0] & 1) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x14a8c9c82;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar27 & 2) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x14a8c9c8d;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar27 & 4) != 0) {
    *(undefined8 *)(puVar26 + -8) = 0x14a8c9ca0;
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  *(undefined8 *)(puVar26 + -8) = 0x14a8c9caf;
  return;
}

// SearchPCAKDTree @ 14a8c9cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchDatabase::SearchPCAKDTree
          (UPoseSearchDatabase *this,FSearchContext *param_1,FSearchResults *param_2)

{
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  UPoseSearchSchema *pUVar5;
  FKDTreeImplementation *pFVar6;
  void *pvVar7;
  longlong *plVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  FSearchContext *pFVar19;
  int iVar20;
  FSearchResults *pFVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  FSparsePoseMultiMap<int> *pFVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  TStatId TVar31;
  FSearchIndex *pFVar32;
  TArrayView<UObject_const_*_const,int> *pTVar33;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar34;
  longlong lVar35;
  FResult *pFVar36;
  TArrayView<float_const_,int> *pTVar37;
  undefined8 uVar38;
  FResult *pFVar39;
  undefined8 uVar40;
  FResult *pFVar41;
  FResult *pFVar42;
  uint uVar43;
  longlong *plVar44;
  float *pfVar45;
  FResult *pFVar46;
  undefined1 *puVar47;
  uint uVar48;
  ulonglong uVar49;
  UPoseSearchDatabase *pUVar50;
  ForElementType<int> FVar51;
  int iVar52;
  uint uVar53;
  longlong lVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStackY_1678 [32];
  FSearchContext *local_1608;
  FResult local_1600;
  FResult *local_15f8;
  uint uStack_15f0;
  undefined4 uStack_15ec;
  uint local_15e8;
  UPoseSearchDatabase *local_15e0;
  FSearchIndex *local_15d8;
  TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int> local_15d0;
  int local_15c0;
  FSearchResults *local_15b8;
  TArrayView<float_const_,int> local_15a8;
  TArrayView<float_const_,int> local_1598;
  FSparsePoseMultiMap<int> *local_1588;
  uint local_1580;
  FWeakObjectPtr local_157c;
  float local_1574 [3];
  undefined1 local_1568;
  uint local_1560;
  FWeakObjectPtr local_155c;
  float local_1554 [3];
  undefined1 local_1548;
  uint local_1540;
  FWeakObjectPtr local_153c;
  float local_1534 [3];
  undefined1 local_1528;
  uint local_1520;
  FWeakObjectPtr local_151c;
  float local_1514 [3];
  undefined1 local_1508;
  FName local_1500;
  byte local_14f8;
  UPoseSearchDatabase *local_14f0;
  TArrayView<int_const_,int> local_14e8;
  TArrayView<int_const_,int> local_14d8;
  FFilteredKNNMaxHeapResultSet local_14c8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_14a0;
  int iStack_1498;
  undefined4 uStack_1494;
  TArrayView<int_const_,int> local_1490;
  TArrayView<int_const_,int> local_1480;
  FKNNMaxHeapResultSet local_1470;
  UPoseSearchDatabase *local_1458;
  UPoseSearchDatabase *local_1450;
  UPoseSearchDatabase *local_1448;
  UPoseSearchDatabase *local_1440;
  TArrayView<float_const_,int> local_1438;
  FSourceLocation local_1428;
  undefined8 local_1408;
  undefined4 uStack_1400;
  uint uStack_13fc;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_13f8;
  int iStack_13f0;
  undefined8 local_13e8;
  undefined4 local_13e0;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_13d8;
  int iStack_13d0;
  undefined4 uStack_13cc;
  undefined8 local_13c8;
  undefined4 uStack_13c0;
  uint uStack_13bc;
  TArrayView<float_const_,int> local_13b8;
  TArrayView<float_const_,int> local_13a8;
  TArrayView<int_const_,int> local_1398;
  TArrayView<int_const_,int> local_1388;
  TArrayView<float,int> local_1378;
  undefined1 local_1368 [16];
  TArrayView<float_const_,int> local_1358;
  TArrayView<float_const_,int> local_1348;
  TArrayView<float,int> local_1338;
  uint local_1328;
  undefined4 uStack_1324;
  uint uStack_1320;
  undefined4 uStack_131c;
  TArrayView<float_const_,int> local_1318;
  TArrayView<float_const_,int> local_1308;
  undefined1 local_12f8 [16];
  TArrayView<float_const_,int> local_12e8;
  TArrayView<float_const_,int> local_12d8;
  uint local_12c8;
  undefined4 uStack_12c4;
  uint uStack_12c0;
  undefined4 uStack_12bc;
  TArrayView<float_const_,int> local_12b8;
  TArrayView<float_const_,int> local_12a8;
  undefined1 local_1298 [16];
  TArrayView<float,int> local_1288;
  TArrayView<float_const_,int> local_1278;
  undefined1 local_1268 [16];
  TArrayView<float,int> local_1258;
  TArrayView<float_const_,int> local_1248;
  undefined1 local_1238 [16];
  TArrayView<float,int> local_1228;
  TArrayView<float_const_,int> local_1218;
  undefined1 local_1208 [16];
  TArrayView<float,int> local_11f8;
  TArrayView<float_const_,int> local_11e8;
  uint local_11d8;
  undefined4 uStack_11d4;
  longlong lStack_11d0;
  undefined8 local_11c8;
  TArrayView<float,int> local_11a8;
  TArrayView<float_const_,int> local_1198;
  float *local_1188 [2];
  TArrayView<float,int> local_1178;
  TArrayView<UObject_const_*_const,int> local_1168;
  undefined4 local_1158;
  undefined4 uStack_1154;
  longlong lStack_1150;
  undefined8 local_1148;
  uint local_1138;
  undefined4 uStack_1134;
  longlong lStack_1130;
  undefined8 local_1128;
  undefined4 local_1118;
  undefined4 uStack_1114;
  longlong lStack_1110;
  undefined8 local_1108;
  uint local_10f8;
  undefined4 uStack_10f4;
  longlong lStack_10f0;
  undefined8 local_10e8;
  uint local_10d8;
  undefined4 uStack_10d4;
  longlong lStack_10d0;
  undefined8 local_10c8;
  undefined1 local_10b8 [16];
  TArrayView<float_const_,int> local_10a8;
  TArrayView<UObject_const_*_const,int> local_1098;
  TArrayView<float_const_,int> local_1088;
  TArrayView<float_const_,int> local_1078;
  TArrayView<float_const_,int> local_1068;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_1058 [24];
  float *local_1040;
  longlong lStack_1038;
  undefined8 local_1030;
  longlong lStack_1018;
  undefined8 local_1010;
  longlong lStack_ff0;
  undefined8 local_fe8;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_fc8 [24];
  float *local_fb0;
  longlong lStack_fa8;
  undefined8 local_fa0;
  longlong lStack_f88;
  undefined8 local_f80;
  longlong lStack_f60;
  undefined8 local_f58;
  FSearchFilters local_f38;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_ce8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_8d8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_4c8;
  ulonglong local_b8;
  
  puVar47 = auStackY_1678;
  local_b8 = __security_cookie.value ^ (ulonglong)&local_1608;
  local_1608 = param_1;
  local_15e0 = this;
  local_15b8 = param_2;
  TVar31 = FThreadSafeStaticStatInner<FStat_STAT_PoseSearch_PCAKNN,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_PoseSearch_PCAKNN,1> *)
                      &StatPtr_STAT_PoseSearch_PCAKNN);
  local_1428.Impl._Line = 0x75c;
  local_1428.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
  ;
  local_1428.Impl._Column = 2;
  local_1428.Impl._Function =
       "void __cdecl UPoseSearchDatabase::SearchPCAKDTree(struct UE::PoseSearch::FSearchContext &,struct UE::PoseSearch::FSearchResults &) const"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_1500,*(TStatIdData **)&(TVar31.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1428);
  uVar43 = ((this->Schema).field0_0x0.DebugPtr)->SchemaCardinality;
  pFVar32 = GetSearchIndex(this);
  if (param_1->bIsContinuingInteraction == false) {
    fVar64 = 0.0;
  }
  else {
    fVar64 = this->ContinuingInteractionCostBias;
  }
  lVar54 = (longlong)(int)uVar43 * 4;
  local_15d8 = pFVar32;
  bVar27 = UE::Core::Private::Function::
           TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(float)>::
           operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(float)>
                       *)&param_2->ShouldPerformSearch,*(float *)&pFVar32->_padding_);
  uStack_15f0 = uVar43;
  if (bVar27) {
    iVar28 = UE::PoseSearch::FSearchIndex::GetNumberOfPrincipalComponents(pFVar32);
    uVar48 = (uint)pFVar32->_padding_;
    local_1588 = &pFVar32->PCAValuesVectorToPoseIndexes;
    if ((uint)this->KDTreeQueryNumNeighbors < uVar48) {
      uVar48 = this->KDTreeQueryNumNeighbors;
    }
    local_1600.Index = local_1588->MaxKey;
    uVar30 = 1;
    if (1 < uVar48) {
      uVar30 = uVar48;
    }
    pFVar46 = (FResult *)0x0;
    local_15f8 = pFVar46;
    if (lVar54 != 0) {
      uVar49 = lVar54 + 0x1e;
      if (uVar49 <= lVar54 + 0xfU) {
        uVar49 = 0xffffffffffffff0;
      }
      puVar47 = auStackY_1678 + -(uVar49 & 0xfffffffffffffff0);
      local_15f8 = (FResult *)((longlong)&local_1600 + -(uVar49 & 0xfffffffffffffff0));
    }
    if ((int)uVar43 < 0) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8c9fad;
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar27) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_1178._12_4_ = uStack_15ec;
    local_1178.ArrayNum = uStack_15f0;
    local_1178.DataPtr = &local_15f8->Distance;
    *(undefined8 *)(puVar47 + -8) = 0x14a8c9fd2;
    CalculateDynamicWeightsSqrt(this,&local_15a8,&local_1178);
    pFVar19 = local_1608;
    pUVar5 = (this->Schema).field0_0x0.DebugPtr;
    *(undefined8 *)(puVar47 + -8) = 0x14a8c9fe3;
    UE::PoseSearch::FSearchContext::GetOrBuildQuery(pFVar19,&local_1598,pUVar5);
    if (local_1598.ArrayNum != uVar43) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca008;
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("QueryValues.Num() == NumDimensions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x77d,L"");
      if (bVar27) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar19 = local_1608;
    local_8d8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_8d8.ArrayNum = 0;
    local_8d8.ArrayMax = 0x100;
    if ((local_1608->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca070;
      pTVar34 = UE::PoseSearch::FSearchContext::GetAssetsToConsiderSet(pFVar19);
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca082;
      PopulateSelectableAssetIdx(this,&local_8d8,pTVar34);
    }
    else {
      pTVar1 = &local_1608->AssetsToConsider_DEPRECATED;
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca046;
      pTVar33 = TArrayView<UObject_const_*_const,int>::
                TArrayView<UObject_const_*_const,int><TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_>
                          (&local_1098,pTVar1);
      local_1168.DataPtr = pTVar33->DataPtr;
      local_1168.ArrayNum = pTVar33->ArrayNum;
      local_1168._12_4_ = *(undefined4 *)&pTVar33->field_0xc;
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca066;
      PopulateSelectableAssetIdx(this,&local_8d8,&local_1168);
    }
    pFVar19 = local_1608;
    *(undefined1 **)(puVar47 + 0x28) = local_10b8;
    *(float *)(puVar47 + 0x20) = fVar64;
    local_ce8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_ce8.ArrayNum = 0;
    local_ce8.ArrayMax = 0x100;
    *(undefined8 *)(puVar47 + -8) = 0x14a8ca0cf;
    PopulateNonSelectableIdx
              (this,&local_ce8,pFVar19,0.0,*(float *)(puVar47 + 0x20),
               *(TArrayView<float_const_,int> **)(puVar47 + 0x28));
    pFVar19 = local_1608;
    *(undefined8 *)(puVar47 + -8) = 0x14a8ca0e2;
    UE::PoseSearch::FSearchContext::GetOrBuildPCAQuery(pFVar19,&local_1438,this);
    if (local_1438.ArrayNum != iVar28) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca10b;
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("PCAQueryValues.Num() == ClampedNumberOfPrincipalComponents",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x799,L"");
      if (bVar27) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar35 = (ulonglong)uVar30 * 8;
    local_15d0.DataPtr = pFVar46;
    if ((ulonglong)uVar30 != 0) {
      uVar49 = lVar35 + 0x1e;
      if (uVar49 <= lVar35 + 0xfU) {
        uVar49 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca13d;
      local_15d0.DataPtr =
           (FResult *)
           ((ulonglong)(puVar47 + -(uVar49 & 0xfffffffffffffff0) + 0x7f) & 0xfffffffffffffff0);
      puVar47 = puVar47 + -(uVar49 & 0xfffffffffffffff0);
    }
    local_15d0.ArrayNum = uVar30;
    if ((int)uVar30 < 0) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca178;
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar27) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar28 = local_ce8.ArrayNum;
    iVar20 = local_1600.Index;
    if ((local_1600.Index < 1) && (local_ce8.ArrayNum != 0)) {
      FVar51.Data = (int *)&local_ce8;
      if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
          local_ce8.AllocatorInstance.SecondaryData.Data !=
          (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
        FVar51.Data = local_ce8.AllocatorInstance.SecondaryData.Data;
      }
      local_14a0 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)FVar51.Data;
      if (local_ce8.ArrayNum < 0) {
        *(undefined8 *)(puVar47 + -8) = 0x14a8ca1dc;
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar27) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iStack_1498 = iVar28;
      local_14c8._padding_._0_4_ = 0;
      local_14c8._padding_._4_4_ = 0x7f7fc99e;
      local_14c8.ExcludeFromSearchIndexes.DataPtr = (int *)local_14a0;
      local_14c8.ExcludeFromSearchIndexes.ArrayNum = iVar28;
      local_14c8.ExcludeFromSearchIndexes._12_4_ = uStack_1494;
      local_14c8._padding_ = (longlong)local_15d0.DataPtr;
      local_14c8._padding_ = CONCAT44(local_15d0._12_4_,local_15d0.ArrayNum);
      if ((iVar28 != 0) && (iVar28 = iVar28 + -1, iVar28 != 0)) {
        iVar52 = *(int *)(((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                          FVar51.Data)->AllocatorInstance).InlineData;
        do {
          iVar4 = *(int *)((((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                            FVar51.Data)->AllocatorInstance).InlineData + 4);
          FVar51.Data = (int *)((((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>
                                   *)FVar51.Data)->AllocatorInstance).InlineData + 4);
          if (iVar4 < iVar52) {
            *(undefined8 *)(puVar47 + -8) = 0x14a8ca299;
            bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Algo::IsSorted(InExcludeFromSearchIndexes)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\KDTree.h"
                                ,0x108,L"");
            if (bVar27) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            break;
          }
          iVar28 = iVar28 + -1;
          iVar52 = iVar4;
        } while (iVar28 != 0);
      }
      local_13b8.DataPtr = local_1438.DataPtr;
      pFVar6 = (local_15d8->KDTree).KDTreeImplementation;
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca2cc;
      local_1600.Distance =
           (float)UE::PoseSearch::
                  FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
                            (pFVar6,&local_14c8,&local_13b8);
    }
    else {
      local_1470.MaxHeap._12_4_ = local_15d0._12_4_;
      local_1470.MaxHeap.ArrayNum = local_15d0.ArrayNum;
      local_1470.MaxHeap.DataPtr = local_15d0.DataPtr;
      local_1470.MaxHeapNum = 0;
      pFVar6 = (local_15d8->KDTree).KDTreeImplementation;
      local_1470.WorstDist = 3.4e+38;
      local_13a8.DataPtr = local_1438.DataPtr;
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca317;
      local_1600.Distance =
           (float)UE::PoseSearch::
                  FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
                            (pFVar6,&local_1470,&local_13a8);
    }
    iVar28 = local_8d8.ArrayNum;
    local_13d8 = &local_8d8;
    if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
        local_8d8.AllocatorInstance.SecondaryData.Data !=
        (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
      local_13d8 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   local_8d8.AllocatorInstance.SecondaryData.Data;
    }
    if (local_8d8.ArrayNum < 0) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8ca360;
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar27) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar52 = local_ce8.ArrayNum;
    iStack_13d0 = iVar28;
    if (iVar20 < 1) {
      local_13e8 = 0;
      puVar11 = &stack0x00000258;
      local_13e0 = 0;
    }
    else {
      local_13f8 = &local_ce8;
      if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
          local_ce8.AllocatorInstance.SecondaryData.Data !=
          (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
        local_13f8 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                     local_ce8.AllocatorInstance.SecondaryData.Data;
      }
      if (local_ce8.ArrayNum < 0) {
        *(undefined8 *)(puVar47 + -8) = 0x14a8ca3b7;
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar27) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iStack_13f0 = iVar52;
      puVar11 = &stack0x00000248;
    }
    pUVar50 = local_15e0;
    local_1398.DataPtr = (int *)local_13d8;
    local_1398.ArrayNum = iStack_13d0;
    local_1398._12_4_ = uStack_13cc;
    local_1388.DataPtr = *(int **)(puVar11 + -0x1640);
    local_1388._8_8_ = *(undefined8 *)(puVar11 + -0x1638);
    pUVar5 = (local_15e0->Schema).field0_0x0.DebugPtr;
    puVar47[0x20] = 0;
    *(undefined8 *)(puVar47 + -8) = 0x14a8ca421;
    UE::PoseSearch::FSearchFilters::FSearchFilters
              (&local_f38,pUVar5,&local_1388,&local_1398,(bool)puVar47[0x20]);
    pFVar21 = local_15b8;
    pFVar32 = local_15d8;
    fVar55 = local_1600.Distance;
    param_1 = local_1608;
    if (iVar20 < 1) {
      if ((int)local_15d8->_padding_ == 0) {
        local_15f8 = pFVar46;
        if (lVar54 != 0) {
          uVar49 = lVar54 + 0x1e;
          if (uVar49 <= lVar54 + 0xfU) {
            uVar49 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar47 + -8) = 0x14a8cb6fb;
          local_15f8 = (FResult *)
                       ((ulonglong)(puVar47 + -(uVar49 & 0xfffffffffffffff0) + 0x7f) &
                       0xfffffffffffffff0);
          puVar47 = puVar47 + -(uVar49 & 0xfffffffffffffff0);
        }
        uStack_15f0 = uVar43;
        if ((int)uVar43 < 0) {
          *(undefined8 *)(puVar47 + -8) = 0x14a8cb736;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar27) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar21 = local_15b8;
        uVar48 = uStack_15f0;
        pFVar42 = local_15f8;
        fVar55 = local_1600.Distance;
        param_1 = local_1608;
        uVar43 = uVar43 & 0x80000003;
        if ((int)uVar43 < 0) {
          uVar43 = (uVar43 - 1 | 0xfffffffc) + 1;
        }
        if (uVar43 == 0) {
          if (0 < (int)local_1600.Distance) {
            do {
              *(undefined8 *)(puVar47 + -8) = 0x14a8cb77c;
              pFVar41 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                        operator[](&local_15d0,(int)pFVar46);
              puVar47[0x60] = 1;
              iVar28 = pFVar41->Index;
              *(undefined1 **)(puVar47 + 0x58) = local_1298;
              *(UPoseSearchDatabase **)(puVar47 + 0x50) = pUVar50;
              *(FSearchContext **)(puVar47 + 0x48) = param_1;
              *(float *)(puVar47 + 0x40) = fVar64;
              *(undefined4 *)(puVar47 + 0x38) = 0;
              *(FSearchFilters **)(puVar47 + 0x30) = &local_f38;
              *(undefined4 *)(puVar47 + 0x28) = 0xffffffff;
              *(int *)(puVar47 + 0x20) = iVar28;
              local_1288.DataPtr = &pFVar42->Distance;
              local_1288.ArrayNum = uVar48;
              local_1288._12_4_ = uStack_15ec;
              *(undefined8 *)(puVar47 + -8) = 0x14a8cb7f9;
              UE::PoseSearch::EvaluatePoseKernel<1,1>
                        (pFVar21,pFVar32,&local_1278,&local_1288,*(int *)(puVar47 + 0x20),
                         *(int *)(puVar47 + 0x28),*(FSearchFilters **)(puVar47 + 0x30),
                         *(float *)(puVar47 + 0x38),*(float *)(puVar47 + 0x40),
                         *(FSearchContext **)(puVar47 + 0x48),
                         *(UPoseSearchDatabase **)(puVar47 + 0x50),
                         *(TArrayView<float_const_,int> **)(puVar47 + 0x58),(bool)puVar47[0x60]);
              uVar43 = (int)pFVar46 + 1;
              pFVar46 = (FResult *)(ulonglong)uVar43;
            } while ((int)uVar43 < (int)fVar55);
          }
        }
        else if (0 < (int)local_1600.Distance) {
          do {
            *(undefined8 *)(puVar47 + -8) = 0x14a8cb82c;
            pFVar41 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                      operator[](&local_15d0,(int)pFVar46);
            puVar47[0x60] = 1;
            iVar28 = pFVar41->Index;
            *(undefined1 **)(puVar47 + 0x58) = local_1268;
            *(UPoseSearchDatabase **)(puVar47 + 0x50) = pUVar50;
            *(FSearchContext **)(puVar47 + 0x48) = param_1;
            *(float *)(puVar47 + 0x40) = fVar64;
            *(undefined4 *)(puVar47 + 0x38) = 0;
            *(FSearchFilters **)(puVar47 + 0x30) = &local_f38;
            *(undefined4 *)(puVar47 + 0x28) = 0xffffffff;
            *(int *)(puVar47 + 0x20) = iVar28;
            local_1258.DataPtr = &pFVar42->Distance;
            local_1258.ArrayNum = uVar48;
            local_1258._12_4_ = uStack_15ec;
            *(undefined8 *)(puVar47 + -8) = 0x14a8cb8a9;
            UE::PoseSearch::EvaluatePoseKernel<1,0>
                      (pFVar21,pFVar32,&local_1248,&local_1258,*(int *)(puVar47 + 0x20),
                       *(int *)(puVar47 + 0x28),*(FSearchFilters **)(puVar47 + 0x30),
                       *(float *)(puVar47 + 0x38),*(float *)(puVar47 + 0x40),
                       *(FSearchContext **)(puVar47 + 0x48),
                       *(UPoseSearchDatabase **)(puVar47 + 0x50),
                       *(TArrayView<float_const_,int> **)(puVar47 + 0x58),(bool)puVar47[0x60]);
            uVar43 = (int)pFVar46 + 1;
            pFVar46 = (FResult *)(ulonglong)uVar43;
          } while ((int)uVar43 < (int)fVar55);
        }
      }
      else {
        uVar43 = uVar43 & 0x80000003;
        if ((int)uVar43 < 0) {
          uVar43 = (uVar43 - 1 | 0xfffffffc) + 1;
        }
        if (uVar43 == 0) {
          if (0 < (int)local_1600.Distance) {
            do {
              *(undefined8 *)(puVar47 + -8) = 0x14a8cb8fb;
              pFVar42 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                        operator[](&local_15d0,(int)pFVar46);
              puVar47[0x60] = 1;
              iVar28 = pFVar42->Index;
              *(undefined1 **)(puVar47 + 0x58) = local_1238;
              *(UPoseSearchDatabase **)(puVar47 + 0x50) = pUVar50;
              *(FSearchContext **)(puVar47 + 0x48) = param_1;
              *(float *)(puVar47 + 0x40) = fVar64;
              *(undefined4 *)(puVar47 + 0x38) = 0;
              *(FSearchFilters **)(puVar47 + 0x30) = &local_f38;
              local_13c8 = 0;
              uStack_13c0 = 0;
              uVar49 = (ulonglong)uStack_13bc;
              *(undefined4 *)(puVar47 + 0x28) = 0xffffffff;
              *(int *)(puVar47 + 0x20) = iVar28;
              local_1228.DataPtr = (float *)0x0;
              local_1228._8_8_ = uVar49 << 0x20;
              *(undefined8 *)(puVar47 + -8) = 0x14a8cb98d;
              UE::PoseSearch::EvaluatePoseKernel<0,1>
                        (pFVar21,pFVar32,&local_1218,&local_1228,*(int *)(puVar47 + 0x20),
                         *(int *)(puVar47 + 0x28),*(FSearchFilters **)(puVar47 + 0x30),
                         *(float *)(puVar47 + 0x38),*(float *)(puVar47 + 0x40),
                         *(FSearchContext **)(puVar47 + 0x48),
                         *(UPoseSearchDatabase **)(puVar47 + 0x50),
                         *(TArrayView<float_const_,int> **)(puVar47 + 0x58),(bool)puVar47[0x60]);
              uVar43 = (int)pFVar46 + 1;
              pFVar46 = (FResult *)(ulonglong)uVar43;
            } while ((int)uVar43 < (int)fVar55);
          }
        }
        else if (0 < (int)local_1600.Distance) {
          do {
            *(undefined8 *)(puVar47 + -8) = 0x14a8cb9bb;
            pFVar42 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                      operator[](&local_15d0,(int)pFVar46);
            puVar47[0x60] = 1;
            iVar28 = pFVar42->Index;
            *(undefined1 **)(puVar47 + 0x58) = local_1208;
            *(UPoseSearchDatabase **)(puVar47 + 0x50) = pUVar50;
            *(FSearchContext **)(puVar47 + 0x48) = param_1;
            *(float *)(puVar47 + 0x40) = fVar64;
            *(undefined4 *)(puVar47 + 0x38) = 0;
            *(FSearchFilters **)(puVar47 + 0x30) = &local_f38;
            local_1408 = 0;
            uStack_1400 = 0;
            uVar49 = (ulonglong)uStack_13fc;
            *(undefined4 *)(puVar47 + 0x28) = 0xffffffff;
            *(int *)(puVar47 + 0x20) = iVar28;
            local_11f8.DataPtr = (float *)0x0;
            local_11f8._8_8_ = uVar49 << 0x20;
            *(undefined8 *)(puVar47 + -8) = 0x14a8cba4d;
            UE::PoseSearch::EvaluatePoseKernel<0,0>
                      (pFVar21,pFVar32,&local_11e8,&local_11f8,*(int *)(puVar47 + 0x20),
                       *(int *)(puVar47 + 0x28),*(FSearchFilters **)(puVar47 + 0x30),
                       *(float *)(puVar47 + 0x38),*(float *)(puVar47 + 0x40),
                       *(FSearchContext **)(puVar47 + 0x48),
                       *(UPoseSearchDatabase **)(puVar47 + 0x50),
                       *(TArrayView<float_const_,int> **)(puVar47 + 0x58),(bool)puVar47[0x60]);
            uVar43 = (int)pFVar46 + 1;
            pFVar46 = (FResult *)(ulonglong)uVar43;
          } while ((int)uVar43 < (int)fVar55);
        }
      }
    }
    else {
      local_15c0 = 0x7fffffff;
      if (0 < pUVar50->KDTreeQueryNumNeighborsWithDuplicates) {
        local_15c0 = pUVar50->KDTreeQueryNumNeighborsWithDuplicates;
      }
      uVar48 = 0;
      if ((int)local_15d8->_padding_ == 0) {
        local_15f8 = pFVar46;
        if (lVar54 != 0) {
          uVar49 = lVar54 + 0x1e;
          if (uVar49 <= lVar54 + 0xfU) {
            uVar49 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar47 + -8) = 0x14a8ca473;
          local_15f8 = (FResult *)
                       ((ulonglong)(puVar47 + -(uVar49 & 0xfffffffffffffff0) + 0x7f) &
                       0xfffffffffffffff0);
          puVar47 = puVar47 + -(uVar49 & 0xfffffffffffffff0);
        }
        uStack_15f0 = uVar43;
        if ((int)uVar43 < 0) {
          *(undefined8 *)(puVar47 + -8) = 0x14a8ca4ae;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar27) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar42 = local_15f8;
        uVar43 = uVar43 & 0x80000003;
        if ((int)uVar43 < 0) {
          uVar43 = (uVar43 - 1 | 0xfffffffc) + 1;
        }
        param_1 = local_1608;
        if (uVar43 == 0) {
          local_15e8 = 0;
          local_1600.Index = 0;
          if (0 < (int)local_1600.Distance) {
            uVar40._4_4_ = uStack_15ec;
            uVar40._0_4_ = uStack_15f0;
            pFVar41 = pFVar46;
            pUVar50 = local_15e0;
            pFVar39 = pFVar46;
            fVar55 = local_1600.Distance;
            do {
              *(undefined8 *)(puVar47 + -8) = 0x14a8ca4fc;
              pFVar36 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                        operator[](&local_15d0,(uint)pFVar39);
              pFVar26 = local_1588;
              iVar28 = pFVar36->Index;
              *(undefined8 *)(puVar47 + -8) = 0x14a8ca513;
              UE::PoseSearch::FSparsePoseMultiMap<int>::operator[](pFVar26,&local_1490,iVar28);
              uVar43 = (uint)pFVar39;
              if (0 < local_1490.ArrayNum) {
                local_15f8 = (FResult *)0x0;
                pFVar39 = pFVar46;
                do {
                  iVar28 = local_15a8.ArrayNum;
                  uVar30 = (uint)local_15a8.DataPtr;
                  pFVar36 = local_15f8;
                  fVar55 = local_1600.Distance;
                  uVar43 = local_1600.Index;
                  if (local_15c0 <= (int)(uint)pFVar41) break;
                  uVar53 = (uint)pFVar39;
                  pfVar45 = (float *)CONCAT44(local_15a8.DataPtr._4_4_,(uint)local_15a8.DataPtr);
                  uVar43 = uVar48;
                  if ((int)uVar53 < local_1490.ArrayNum) {
                    uVar43 = ~uVar53 >> 0x1f;
                  }
                  if (uVar43 == 0) {
                    *(longlong *)(puVar47 + 0x28) = (longlong)local_1490.ArrayNum;
                    *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar53;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca587;
                    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       );
                    if (bVar27) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  iVar20 = local_1598.ArrayNum;
                  uVar23 = (uint)local_1598.DataPtr;
                  pFVar32 = local_15d8;
                  pfVar3 = (float *)CONCAT44(local_1598.DataPtr._4_4_,(uint)local_1598.DataPtr);
                  local_1378.DataPtr = &pFVar42->Distance;
                  uVar43 = *(uint *)((longlong)local_1490.DataPtr + (longlong)pFVar36);
                  local_1378._8_8_ = uVar40;
                  *(undefined8 *)(puVar47 + -8) = 0x14a8ca5c2;
                  pTVar37 = UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues
                                      (pFVar32,&local_1068,uVar43,&local_1378);
                  *(UPoseSearchDatabase **)(puVar47 + 0x48) = pUVar50;
                  pfVar2 = pTVar37->DataPtr;
                  iVar15 = pTVar37->ArrayNum;
                  uVar16 = *(undefined4 *)&pTVar37->field_0xc;
                  *(FSearchContext **)(puVar47 + 0x40) = local_1608;
                  *(float *)(puVar47 + 0x38) = fVar64;
                  *(undefined4 *)(puVar47 + 0x30) = 0;
                  *(uint *)(puVar47 + 0x28) = uVar43;
                  *(undefined1 **)(puVar47 + 0x20) = local_1368;
                  local_1348.DataPtr = pfVar2;
                  local_1348.ArrayNum = iVar15;
                  local_1348._12_4_ = uVar16;
                  *(undefined8 *)(puVar47 + -8) = 0x14a8ca626;
                  bVar27 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                     (&local_f38,pFVar32,&local_1348,&local_1358,
                                      *(TArrayView<float_const_,int> **)(puVar47 + 0x20),
                                      *(int *)(puVar47 + 0x28),*(float *)(puVar47 + 0x30),
                                      *(float *)(puVar47 + 0x38),
                                      *(FSearchContext **)(puVar47 + 0x40),
                                      *(UPoseSearchDatabase **)(puVar47 + 0x48));
                  uVar29 = (uint)pFVar41;
                  if (bVar27) {
                    iVar52 = (int)pFVar32->_padding_;
                    local_1580 = 0xffffffff;
                    local_157c.ObjectIndex = 0;
                    local_157c.ObjectSerialNumber = 0;
                    local_1574[0] = 3.4028235e+38;
                    uVar29 = uVar48;
                    if ((int)uVar43 < iVar52) {
                      uVar29 = ~uVar43 >> 0x1f;
                    }
                    local_1574[1] = -NAN;
                    local_1574[2] = 3.4028235e+38;
                    local_1568 = 0;
                    if (uVar29 == 0) {
                      *(longlong *)(puVar47 + 0x28) = (longlong)iVar52;
                      *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar43;
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca6a7;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    lVar54 = pFVar32->_padding_;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca6c9;
                    fVar55 = FGenericPlatformMath::LoadHalf
                                       ((ushort *)((longlong)(int)uVar43 * 0xc + 10 + lVar54));
                    if ((iVar15 != iVar20) || (iVar15 != iVar28)) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca720;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x10,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    uVar29 = iVar15 & 0x80000003;
                    if ((int)uVar29 < 0) {
                      uVar29 = (uVar29 - 1 | 0xfffffffc) + 1;
                    }
                    if (uVar29 != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca75b;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.Num() % 4 == 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x11,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if (((ulonglong)pfVar2 & 0xf) != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca78c;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x12,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if ((uVar23 & 0xf) != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca7bd;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x13,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if ((uVar30 & 0xf) != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca7ed;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x14,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if ((pfVar2 == pfVar3) || (pfVar2 == pfVar45)) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca81d;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x16,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    pUVar50 = local_15e0;
                    fVar60 = 0.0;
                    fVar61 = 0.0;
                    fVar62 = 0.0;
                    fVar63 = 0.0;
                    uVar30 = (int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2;
                    uVar49 = (ulonglong)uVar30;
                    if (0 < (int)uVar30) {
                      lVar35 = (longlong)pfVar2 - (longlong)pfVar45;
                      lVar54 = (longlong)pfVar3 - (longlong)pfVar45;
                      do {
                        pfVar2 = (float *)((longlong)pfVar45 + lVar35);
                        pfVar3 = (float *)((longlong)pfVar45 + lVar54);
                        fVar56 = (*pfVar2 - *pfVar3) * *pfVar45;
                        fVar57 = (pfVar2[1] - pfVar3[1]) * pfVar45[1];
                        fVar58 = (pfVar2[2] - pfVar3[2]) * pfVar45[2];
                        fVar59 = (pfVar2[3] - pfVar3[3]) * pfVar45[3];
                        pfVar45 = pfVar45 + 4;
                        fVar60 = fVar60 + fVar56 * fVar56;
                        fVar61 = fVar61 + fVar57 * fVar57;
                        fVar62 = fVar62 + fVar58 * fVar58;
                        fVar63 = fVar63 + fVar59 * fVar59;
                        uVar49 = uVar49 - 1;
                      } while (uVar49 != 0);
                    }
                    local_1574[1] = -NAN;
                    local_1440 = local_15e0;
                    local_1574[0] = fVar63 + fVar62 + fVar61 + fVar60 + fVar55 + fVar64;
                    local_1580 = uVar43;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8ca8ae;
                      UE::GC::MarkAsReachable((UObject *)pUVar50);
                    }
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca8c1;
                    FWeakObjectPtr::operator=(&local_157c,(FObjectPtr)&local_1440);
                    pFVar21 = local_15b8;
                    pvVar7 = *(void **)&local_15b8->UpdateWith;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca8ce;
                    UE::Core::Private::Function::CheckCallable(pvVar7);
                    plVar8 = *(longlong **)&(pFVar21->UpdateWith).field_0x28;
                    pcVar10 = *(code **)&pFVar21->UpdateWith;
                    plVar44 = (longlong *)&(pFVar21->UpdateWith).field_0x10;
                    if (plVar8 != (longlong *)0x0) {
                      plVar44 = plVar8;
                    }
                    pcVar9 = *(code **)(*plVar44 + 8);
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca8e7;
                    uVar38 = (*pcVar9)();
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca8f3;
                    (*pcVar10)(uVar38,&local_1580);
                    pUVar50 = local_15e0;
                    pFVar19 = local_1608;
                    *(float **)(puVar47 + 0x20) = local_1574;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8ca915;
                    UE::PoseSearch::FSearchContext::Track
                              (pFVar19,pUVar50,uVar43,Valid_Pose,
                               *(FPoseSearchCost **)(puVar47 + 0x20));
                    pUVar50 = local_15e0;
                    pFVar36 = local_15f8;
                    uVar29 = local_15e8;
                  }
                  local_15f8 = (FResult *)&pFVar36->Index;
                  local_15e8 = uVar29 + 1;
                  pFVar41 = (FResult *)(ulonglong)local_15e8;
                  pFVar39 = (FResult *)(ulonglong)(uVar53 + 1);
                  fVar55 = local_1600.Distance;
                  uVar43 = local_1600.Index;
                } while ((int)(uVar53 + 1) < local_1490.ArrayNum);
              }
              local_1600.Index = uVar43 + 1;
              pFVar39 = (FResult *)(ulonglong)(uint)local_1600.Index;
              param_1 = local_1608;
            } while (local_1600.Index < (int)fVar55);
          }
        }
        else {
          local_1600.Index = 0;
          if (0 < (int)local_1600.Distance) {
            uVar38._4_4_ = uStack_15ec;
            uVar38._0_4_ = uStack_15f0;
            pFVar41 = pFVar46;
            do {
              uVar48 = 0;
              *(undefined8 *)(puVar47 + -8) = 0x14a8caadc;
              pFVar39 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                        operator[](&local_15d0,(uint)pFVar41);
              iVar28 = pFVar39->Index;
              *(undefined8 *)(puVar47 + -8) = 0x14a8caaf4;
              UE::PoseSearch::FSparsePoseMultiMap<int>::operator[]
                        (&pFVar32->PCAValuesVectorToPoseIndexes,&local_14e8,iVar28);
              iVar28 = local_14e8.ArrayNum;
              uVar43 = (uint)pFVar41;
              if (0 < local_14e8.ArrayNum) {
                local_15f8 = (FResult *)0x0;
                do {
                  uVar12 = local_15a8._12_4_;
                  iVar20 = local_15a8.ArrayNum;
                  uVar22 = local_15a8.DataPtr._4_4_;
                  uVar30 = (uint)local_15a8.DataPtr;
                  pFVar41 = local_15f8;
                  uVar43 = local_1600.Index;
                  if (local_15c0 <= (int)pFVar46) break;
                  uVar43 = 0;
                  if ((int)uVar48 < iVar28) {
                    uVar43 = ~uVar48 >> 0x1f;
                  }
                  if (uVar43 == 0) {
                    *(longlong *)(puVar47 + 0x28) = (longlong)iVar28;
                    *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar48;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cab61;
                    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       );
                    if (bVar27) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  uVar13 = local_1598._12_4_;
                  iVar52 = local_1598.ArrayNum;
                  uVar24 = local_1598.DataPtr._4_4_;
                  uVar23 = (uint)local_1598.DataPtr;
                  local_1338.DataPtr = &pFVar42->Distance;
                  uVar43 = *(uint *)((longlong)&pFVar41->Distance + (longlong)local_14e8.DataPtr);
                  local_1338._8_8_ = uVar38;
                  *(undefined8 *)(puVar47 + -8) = 0x14a8cab9e;
                  pTVar37 = UE::PoseSearch::FSearchIndex::GetReconstructedPoseValues
                                      (pFVar32,&local_1088,uVar43,&local_1338);
                  local_1328 = uVar30;
                  uStack_1324 = uVar22;
                  uStack_1320 = iVar20;
                  uStack_131c = uVar12;
                  local_1318.DataPtr._0_4_ = uVar23;
                  local_1318.DataPtr._4_4_ = uVar24;
                  local_1318.ArrayNum = iVar52;
                  local_1318._12_4_ = uVar13;
                  uVar12 = *(undefined4 *)&pTVar37->DataPtr;
                  uVar13 = *(undefined4 *)((longlong)&pTVar37->DataPtr + 4);
                  pfVar45 = pTVar37->DataPtr;
                  uVar53 = pTVar37->ArrayNum;
                  uVar14 = *(undefined4 *)&pTVar37->field_0xc;
                  *(UPoseSearchDatabase **)(puVar47 + 0x48) = local_15e0;
                  *(FSearchContext **)(puVar47 + 0x40) = local_1608;
                  *(float *)(puVar47 + 0x38) = fVar64;
                  *(undefined4 *)(puVar47 + 0x30) = 0;
                  *(uint *)(puVar47 + 0x28) = uVar43;
                  *(uint **)(puVar47 + 0x20) = &local_1328;
                  local_1308.DataPtr._0_4_ = uVar12;
                  local_1308.DataPtr._4_4_ = uVar13;
                  local_1308.ArrayNum = uVar53;
                  local_1308._12_4_ = uVar14;
                  *(undefined8 *)(puVar47 + -8) = 0x14a8cac07;
                  bVar27 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                     (&local_f38,pFVar32,&local_1308,&local_1318,
                                      *(TArrayView<float_const_,int> **)(puVar47 + 0x20),
                                      *(int *)(puVar47 + 0x28),*(float *)(puVar47 + 0x30),
                                      *(float *)(puVar47 + 0x38),
                                      *(FSearchContext **)(puVar47 + 0x40),
                                      *(UPoseSearchDatabase **)(puVar47 + 0x48));
                  if (bVar27) {
                    iVar4 = (int)pFVar32->_padding_;
                    local_1560 = 0xffffffff;
                    local_155c.ObjectIndex = 0;
                    local_155c.ObjectSerialNumber = 0;
                    local_1554[0] = 3.4028235e+38;
                    uVar29 = 0;
                    if ((int)uVar43 < iVar4) {
                      uVar29 = ~uVar43 >> 0x1f;
                    }
                    local_1554[1] = -NAN;
                    local_1554[2] = 3.4028235e+38;
                    local_1548 = 0;
                    if (uVar29 == 0) {
                      *(longlong *)(puVar47 + 0x28) = (longlong)iVar4;
                      *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar43;
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cac8d;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    lVar54 = pFVar32->_padding_;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cacaf;
                    fVar55 = FGenericPlatformMath::LoadHalf
                                       ((ushort *)((longlong)(int)uVar43 * 0xc + 10 + lVar54));
                    if ((uVar53 != iVar52) || (uVar53 != iVar20)) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cad07;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x3d,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    local_1030 = local_1148;
                    lStack_1150 = (longlong)(int)uVar53;
                    lStack_11d0 = (longlong)iVar52;
                    lStack_1130 = (longlong)iVar20;
                    local_11d8 = uVar23;
                    uStack_11d4 = uVar24;
                    local_1138 = uVar30;
                    uStack_1134 = uVar22;
                    local_1010 = local_11c8;
                    local_fe8 = local_1128;
                    local_1158 = uVar12;
                    uStack_1154 = uVar13;
                    local_1040 = pfVar45;
                    lStack_1038 = lStack_1150;
                    lStack_1018 = lStack_11d0;
                    lStack_ff0 = lStack_1130;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cadb0;
                    fVar60 = Eigen::
                             DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                             ::sum(local_1058);
                    pUVar50 = local_15e0;
                    local_1554[1] = -NAN;
                    local_1458 = local_15e0;
                    local_1554[0] = fVar60 + fVar55 + fVar64;
                    local_1560 = uVar43;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cadef;
                      UE::GC::MarkAsReachable((UObject *)pUVar50);
                    }
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cae02;
                    FWeakObjectPtr::operator=(&local_155c,(FObjectPtr)&local_1458);
                    pFVar21 = local_15b8;
                    pvVar7 = *(void **)&local_15b8->UpdateWith;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cae10;
                    UE::Core::Private::Function::CheckCallable(pvVar7);
                    plVar8 = *(longlong **)&(pFVar21->UpdateWith).field_0x28;
                    pcVar10 = *(code **)&pFVar21->UpdateWith;
                    plVar44 = (longlong *)&(pFVar21->UpdateWith).field_0x10;
                    if (plVar8 != (longlong *)0x0) {
                      plVar44 = plVar8;
                    }
                    pcVar9 = *(code **)(*plVar44 + 8);
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cae2c;
                    uVar40 = (*pcVar9)();
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cae38;
                    (*pcVar10)(uVar40,&local_1560);
                    pFVar19 = local_1608;
                    *(float **)(puVar47 + 0x20) = local_1554;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cae59;
                    UE::PoseSearch::FSearchContext::Track
                              (pFVar19,pUVar50,uVar43,Valid_Pose,
                               *(FPoseSearchCost **)(puVar47 + 0x20));
                    pFVar41 = local_15f8;
                    pFVar32 = local_15d8;
                  }
                  local_15f8 = (FResult *)&pFVar41->Index;
                  uVar48 = uVar48 + 1;
                  pFVar46 = (FResult *)(ulonglong)((int)pFVar46 + 1);
                  uVar43 = local_1600.Index;
                } while ((int)uVar48 < iVar28);
              }
              local_1600.Index = uVar43 + 1;
              pFVar41 = (FResult *)(ulonglong)(uint)local_1600.Index;
              param_1 = local_1608;
            } while (local_1600.Index < (int)local_1600.Distance);
          }
        }
      }
      else {
        uVar43 = uVar43 & 0x80000003;
        if ((int)uVar43 < 0) {
          uVar43 = (uVar43 - 1 | 0xfffffffc) + 1;
        }
        if (uVar43 == 0) {
          local_1600.Index = 0;
          local_15e8 = 0;
          pFVar42 = pFVar46;
          pFVar41 = pFVar46;
          if (0 < (int)local_1600.Distance) {
            do {
              *(undefined8 *)(puVar47 + -8) = 0x14a8caecf;
              pFVar39 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                        operator[](&local_15d0,(uint)pFVar41);
              pFVar26 = local_1588;
              iVar28 = pFVar39->Index;
              *(undefined8 *)(puVar47 + -8) = 0x14a8caee6;
              UE::PoseSearch::FSparsePoseMultiMap<int>::operator[](pFVar26,&local_1480,iVar28);
              uVar43 = (uint)pFVar41;
              if (0 < local_1480.ArrayNum) {
                local_15f8 = (FResult *)0x0;
                pFVar41 = pFVar46;
                do {
                  iVar28 = local_15a8.ArrayNum;
                  uVar30 = (uint)local_15a8.DataPtr;
                  pFVar39 = local_15f8;
                  fVar55 = local_1600.Distance;
                  uVar43 = local_15e8;
                  if (local_15c0 <= (int)(uint)pFVar42) break;
                  uVar53 = (uint)pFVar41;
                  pfVar45 = (float *)CONCAT44(local_15a8.DataPtr._4_4_,(uint)local_15a8.DataPtr);
                  uVar43 = uVar48;
                  if ((int)uVar53 < local_1480.ArrayNum) {
                    uVar43 = ~uVar53 >> 0x1f;
                  }
                  if (uVar43 == 0) {
                    *(longlong *)(puVar47 + 0x28) = (longlong)local_1480.ArrayNum;
                    *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar53;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8caf57;
                    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       );
                    if (bVar27) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  iVar20 = local_1598.ArrayNum;
                  uVar23 = (uint)local_1598.DataPtr;
                  pFVar32 = local_15d8;
                  pfVar3 = (float *)CONCAT44(local_1598.DataPtr._4_4_,(uint)local_1598.DataPtr);
                  uVar43 = *(uint *)((longlong)&pFVar39->Distance + (longlong)local_1480.DataPtr);
                  *(undefined8 *)(puVar47 + -8) = 0x14a8caf82;
                  pTVar37 = UE::PoseSearch::FSearchIndex::GetPoseValues(pFVar32,&local_1078,uVar43);
                  pfVar2 = pTVar37->DataPtr;
                  iVar17 = pTVar37->ArrayNum;
                  uVar18 = *(undefined4 *)&pTVar37->field_0xc;
                  *(UPoseSearchDatabase **)(puVar47 + 0x48) = local_15e0;
                  *(FSearchContext **)(puVar47 + 0x40) = local_1608;
                  *(float *)(puVar47 + 0x38) = fVar64;
                  *(undefined4 *)(puVar47 + 0x30) = 0;
                  *(uint *)(puVar47 + 0x28) = uVar43;
                  *(undefined1 **)(puVar47 + 0x20) = local_12f8;
                  local_12d8.DataPtr = pfVar2;
                  local_12d8.ArrayNum = iVar17;
                  local_12d8._12_4_ = uVar18;
                  *(undefined8 *)(puVar47 + -8) = 0x14a8cafea;
                  bVar27 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                     (&local_f38,pFVar32,&local_12d8,&local_12e8,
                                      *(TArrayView<float_const_,int> **)(puVar47 + 0x20),
                                      *(int *)(puVar47 + 0x28),*(float *)(puVar47 + 0x30),
                                      *(float *)(puVar47 + 0x38),
                                      *(FSearchContext **)(puVar47 + 0x40),
                                      *(UPoseSearchDatabase **)(puVar47 + 0x48));
                  uVar29 = (uint)pFVar42;
                  if (bVar27) {
                    iVar52 = (int)pFVar32->_padding_;
                    local_1540 = 0xffffffff;
                    local_153c.ObjectIndex = 0;
                    local_153c.ObjectSerialNumber = 0;
                    local_1534[0] = 3.4028235e+38;
                    uVar29 = uVar48;
                    if ((int)uVar43 < iVar52) {
                      uVar29 = ~uVar43 >> 0x1f;
                    }
                    local_1534[1] = -NAN;
                    local_1534[2] = 3.4028235e+38;
                    local_1528 = 0;
                    if (uVar29 == 0) {
                      *(longlong *)(puVar47 + 0x28) = (longlong)iVar52;
                      *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar43;
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb06b;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    lVar54 = pFVar32->_padding_;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb08d;
                    fVar55 = FGenericPlatformMath::LoadHalf
                                       ((ushort *)((longlong)(int)uVar43 * 0xc + 10 + lVar54));
                    if ((iVar17 != iVar20) || (iVar17 != iVar28)) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb0e4;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x10,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    uVar29 = iVar17 & 0x80000003;
                    if ((int)uVar29 < 0) {
                      uVar29 = (uVar29 - 1 | 0xfffffffc) + 1;
                    }
                    if (uVar29 != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb11f;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.Num() % 4 == 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x11,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if (((ulonglong)pfVar2 & 0xf) != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb150;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x12,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if ((uVar23 & 0xf) != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb181;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x13,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if ((uVar30 & 0xf) != 0) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb1b1;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x14,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    if ((pfVar2 == pfVar3) || (pfVar2 == pfVar45)) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb1e1;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x16,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    pUVar50 = local_15e0;
                    fVar60 = 0.0;
                    fVar61 = 0.0;
                    fVar62 = 0.0;
                    fVar63 = 0.0;
                    uVar30 = (int)(iVar17 + (iVar17 >> 0x1f & 3U)) >> 2;
                    uVar49 = (ulonglong)uVar30;
                    if (0 < (int)uVar30) {
                      lVar35 = (longlong)pfVar2 - (longlong)pfVar45;
                      lVar54 = (longlong)pfVar3 - (longlong)pfVar45;
                      do {
                        pfVar2 = (float *)((longlong)pfVar45 + lVar35);
                        pfVar3 = (float *)((longlong)pfVar45 + lVar54);
                        fVar56 = (*pfVar2 - *pfVar3) * *pfVar45;
                        fVar57 = (pfVar2[1] - pfVar3[1]) * pfVar45[1];
                        fVar58 = (pfVar2[2] - pfVar3[2]) * pfVar45[2];
                        fVar59 = (pfVar2[3] - pfVar3[3]) * pfVar45[3];
                        pfVar45 = pfVar45 + 4;
                        fVar60 = fVar60 + fVar56 * fVar56;
                        fVar61 = fVar61 + fVar57 * fVar57;
                        fVar62 = fVar62 + fVar58 * fVar58;
                        fVar63 = fVar63 + fVar59 * fVar59;
                        uVar49 = uVar49 - 1;
                      } while (uVar49 != 0);
                    }
                    local_1534[1] = -NAN;
                    local_1450 = local_15e0;
                    local_1534[0] = fVar63 + fVar62 + fVar61 + fVar60 + fVar55 + fVar64;
                    local_1540 = uVar43;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb26e;
                      UE::GC::MarkAsReachable((UObject *)pUVar50);
                    }
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb281;
                    FWeakObjectPtr::operator=(&local_153c,(FObjectPtr)&local_1450);
                    pFVar21 = local_15b8;
                    pvVar7 = *(void **)&local_15b8->UpdateWith;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb28e;
                    UE::Core::Private::Function::CheckCallable(pvVar7);
                    plVar8 = *(longlong **)&(pFVar21->UpdateWith).field_0x28;
                    pcVar10 = *(code **)&pFVar21->UpdateWith;
                    plVar44 = (longlong *)&(pFVar21->UpdateWith).field_0x10;
                    if (plVar8 != (longlong *)0x0) {
                      plVar44 = plVar8;
                    }
                    pcVar9 = *(code **)(*plVar44 + 8);
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb2a7;
                    uVar38 = (*pcVar9)();
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb2b3;
                    (*pcVar10)(uVar38,&local_1540);
                    pFVar19 = local_1608;
                    *(float **)(puVar47 + 0x20) = local_1534;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb2d4;
                    UE::PoseSearch::FSearchContext::Track
                              (pFVar19,pUVar50,uVar43,Valid_Pose,
                               *(FPoseSearchCost **)(puVar47 + 0x20));
                    pFVar39 = local_15f8;
                    uVar29 = local_1600.Index;
                  }
                  local_15f8 = (FResult *)&pFVar39->Index;
                  local_1600.Index = uVar29 + 1;
                  pFVar42 = (FResult *)(ulonglong)(uint)local_1600.Index;
                  pFVar41 = (FResult *)(ulonglong)(uVar53 + 1);
                  fVar55 = local_1600.Distance;
                  uVar43 = local_15e8;
                } while ((int)(uVar53 + 1) < local_1480.ArrayNum);
              }
              local_15e8 = uVar43 + 1;
              pFVar41 = (FResult *)(ulonglong)local_15e8;
              param_1 = local_1608;
            } while ((int)local_15e8 < (int)fVar55);
          }
        }
        else {
          local_1600.Index = 0;
          pFVar42 = pFVar46;
          if (0 < (int)local_1600.Distance) {
            do {
              uVar48 = 0;
              *(undefined8 *)(puVar47 + -8) = 0x14a8cb32d;
              pFVar41 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::
                        operator[](&local_15d0,(uint)pFVar46);
              pFVar26 = local_1588;
              iVar28 = pFVar41->Index;
              *(undefined8 *)(puVar47 + -8) = 0x14a8cb344;
              UE::PoseSearch::FSparsePoseMultiMap<int>::operator[](pFVar26,&local_14d8,iVar28);
              iVar28 = local_14d8.ArrayNum;
              uVar43 = (uint)pFVar46;
              if (0 < local_14d8.ArrayNum) {
                local_15f8 = (FResult *)0x0;
                do {
                  uVar12 = local_15a8._12_4_;
                  iVar20 = local_15a8.ArrayNum;
                  uVar22 = local_15a8.DataPtr._4_4_;
                  uVar30 = (uint)local_15a8.DataPtr;
                  pFVar46 = local_15f8;
                  uVar43 = local_1600.Index;
                  if (local_15c0 <= (int)pFVar42) break;
                  uVar43 = 0;
                  if ((int)uVar48 < iVar28) {
                    uVar43 = ~uVar48 >> 0x1f;
                  }
                  if (uVar43 == 0) {
                    *(longlong *)(puVar47 + 0x28) = (longlong)iVar28;
                    *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar48;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb3b3;
                    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       );
                    if (bVar27) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  uVar25 = local_1598._12_4_;
                  iVar52 = local_1598.ArrayNum;
                  uVar24 = local_1598.DataPtr._4_4_;
                  uVar23 = (uint)local_1598.DataPtr;
                  pFVar32 = local_15d8;
                  uVar43 = *(uint *)((longlong)&pFVar46->Distance + (longlong)local_14d8.DataPtr);
                  *(undefined8 *)(puVar47 + -8) = 0x14a8cb3e1;
                  pTVar37 = UE::PoseSearch::FSearchIndex::GetPoseValues(pFVar32,&local_10a8,uVar43);
                  pFVar32 = local_15d8;
                  *(UPoseSearchDatabase **)(puVar47 + 0x48) = pUVar50;
                  local_12c8 = uVar30;
                  uStack_12c4 = uVar22;
                  uStack_12c0 = iVar20;
                  uStack_12bc = uVar12;
                  uVar12 = *(undefined4 *)&pTVar37->DataPtr;
                  uVar13 = *(undefined4 *)((longlong)&pTVar37->DataPtr + 4);
                  pfVar45 = pTVar37->DataPtr;
                  uVar53 = pTVar37->ArrayNum;
                  uVar14 = *(undefined4 *)&pTVar37->field_0xc;
                  *(FSearchContext **)(puVar47 + 0x40) = local_1608;
                  *(float *)(puVar47 + 0x38) = fVar64;
                  *(undefined4 *)(puVar47 + 0x30) = 0;
                  *(uint *)(puVar47 + 0x28) = uVar43;
                  *(uint **)(puVar47 + 0x20) = &local_12c8;
                  local_12b8.DataPtr._0_4_ = uVar23;
                  local_12b8.DataPtr._4_4_ = uVar24;
                  local_12b8.ArrayNum = iVar52;
                  local_12b8._12_4_ = uVar25;
                  local_12a8.DataPtr._0_4_ = uVar12;
                  local_12a8.DataPtr._4_4_ = uVar13;
                  local_12a8.ArrayNum = uVar53;
                  local_12a8._12_4_ = uVar14;
                  *(undefined8 *)(puVar47 + -8) = 0x14a8cb446;
                  bVar27 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                     (&local_f38,pFVar32,&local_12a8,&local_12b8,
                                      *(TArrayView<float_const_,int> **)(puVar47 + 0x20),
                                      *(int *)(puVar47 + 0x28),*(float *)(puVar47 + 0x30),
                                      *(float *)(puVar47 + 0x38),
                                      *(FSearchContext **)(puVar47 + 0x40),
                                      *(UPoseSearchDatabase **)(puVar47 + 0x48));
                  pFVar32 = local_15d8;
                  if (bVar27) {
                    local_1520 = 0xffffffff;
                    local_151c.ObjectIndex = 0;
                    local_151c.ObjectSerialNumber = 0;
                    iVar4 = (int)local_15d8->_padding_;
                    local_1514[0] = 3.4028235e+38;
                    local_1514[1] = -NAN;
                    uVar29 = 0;
                    if ((int)uVar43 < iVar4) {
                      uVar29 = ~uVar43 >> 0x1f;
                    }
                    local_1514[2] = 3.4028235e+38;
                    local_1508 = 0;
                    if (uVar29 == 0) {
                      *(longlong *)(puVar47 + 0x28) = (longlong)iVar4;
                      *(longlong *)(puVar47 + 0x20) = (longlong)(int)uVar43;
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb4cd;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    lVar54 = pFVar32->_padding_;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb4ee;
                    fVar55 = FGenericPlatformMath::LoadHalf
                                       ((ushort *)((longlong)(int)uVar43 * 0xc + 10 + lVar54));
                    if ((uVar53 != iVar52) || (uVar53 != iVar20)) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb546;
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                          ,0x3d,L"");
                      if (bVar27) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    local_fa0 = local_1108;
                    lStack_1110 = (longlong)(int)uVar53;
                    lStack_10f0 = (longlong)iVar52;
                    lStack_10d0 = (longlong)iVar20;
                    local_10f8 = uVar23;
                    uStack_10f4 = uVar24;
                    local_10d8 = uVar30;
                    uStack_10d4 = uVar22;
                    local_f80 = local_10e8;
                    local_f58 = local_10c8;
                    local_1118 = uVar12;
                    uStack_1114 = uVar13;
                    local_fb0 = pfVar45;
                    lStack_fa8 = lStack_1110;
                    lStack_f88 = lStack_10f0;
                    lStack_f60 = lStack_10d0;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb5ef;
                    fVar60 = Eigen::
                             DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                             ::sum(local_fc8);
                    pUVar50 = local_15e0;
                    local_1514[1] = -NAN;
                    local_1448 = local_15e0;
                    local_1514[0] = fVar60 + fVar55 + fVar64;
                    local_1520 = uVar43;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      *(undefined8 *)(puVar47 + -8) = 0x14a8cb62d;
                      UE::GC::MarkAsReachable((UObject *)pUVar50);
                    }
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb640;
                    FWeakObjectPtr::operator=(&local_151c,(FObjectPtr)&local_1448);
                    pFVar21 = local_15b8;
                    pvVar7 = *(void **)&local_15b8->UpdateWith;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb64d;
                    UE::Core::Private::Function::CheckCallable(pvVar7);
                    plVar8 = *(longlong **)&(pFVar21->UpdateWith).field_0x28;
                    pcVar10 = *(code **)&pFVar21->UpdateWith;
                    plVar44 = (longlong *)&(pFVar21->UpdateWith).field_0x10;
                    if (plVar8 != (longlong *)0x0) {
                      plVar44 = plVar8;
                    }
                    pcVar9 = *(code **)(*plVar44 + 8);
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb666;
                    uVar38 = (*pcVar9)();
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb672;
                    (*pcVar10)(uVar38,&local_1520);
                    pFVar19 = local_1608;
                    *(float **)(puVar47 + 0x20) = local_1514;
                    *(undefined8 *)(puVar47 + -8) = 0x14a8cb693;
                    UE::PoseSearch::FSearchContext::Track
                              (pFVar19,pUVar50,uVar43,Valid_Pose,
                               *(FPoseSearchCost **)(puVar47 + 0x20));
                    pFVar46 = local_15f8;
                  }
                  local_15f8 = (FResult *)&pFVar46->Index;
                  uVar48 = uVar48 + 1;
                  pFVar42 = (FResult *)(ulonglong)((int)pFVar42 + 1);
                  uVar43 = local_1600.Index;
                } while ((int)uVar48 < iVar28);
              }
              local_1600.Index = uVar43 + 1;
              pFVar46 = (FResult *)(ulonglong)(uint)local_1600.Index;
              param_1 = local_1608;
            } while (local_1600.Index < (int)local_1600.Distance);
          }
        }
      }
    }
    local_f38.BlockTransitionFilter = (FBlockTransitionFilter)&___7IPoseSearchFilter__6B_;
    local_f38.SelectableAssetIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    local_f38.NonSelectableIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    this = local_15e0;
    param_2 = local_15b8;
  }
  else {
    local_15f8 = (FResult *)0x0;
    puVar47 = auStackY_1678;
    if (lVar54 != 0) {
      uVar49 = lVar54 + 0x1e;
      if (uVar49 <= lVar54 + 0xfU) {
        uVar49 = 0xffffffffffffff0;
      }
      local_15f8 = (FResult *)((longlong)&local_1600 + -(uVar49 & 0xfffffffffffffff0));
      puVar47 = auStackY_1678 + -(uVar49 & 0xfffffffffffffff0);
    }
    if ((int)uVar43 < 0) {
      *(undefined8 *)(puVar47 + -8) = 0x14a8c9e90;
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar27) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_11a8._12_4_ = uStack_15ec;
    local_11a8.ArrayNum = uStack_15f0;
    local_11a8.DataPtr = &local_15f8->Distance;
    *(undefined8 *)(puVar47 + -8) = 0x14a8c9eb8;
    CalculateDynamicWeightsSqrt(this,&local_1198,&local_11a8);
    *(float ***)(puVar47 + 0x28) = local_1188;
    *(float *)(puVar47 + 0x20) = fVar64;
    local_4c8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_4c8.ArrayNum = 0;
    local_4c8.ArrayMax = 0x100;
    local_1188[0] = local_1198.DataPtr;
    local_1188[1] = (float *)local_1198._8_8_;
    *(undefined8 *)(puVar47 + -8) = 0x14a8c9f06;
    PopulateNonSelectableIdx
              (this,&local_4c8,param_1,0.0,*(float *)(puVar47 + 0x20),
               *(TArrayView<float_const_,int> **)(puVar47 + 0x28));
  }
  pvVar7 = *(void **)&param_2->FinalizeResults;
  *(undefined8 *)(puVar47 + -8) = 0x14a8ca986;
  UE::Core::Private::Function::CheckCallable(pvVar7);
  plVar8 = *(longlong **)&(param_2->FinalizeResults).field_0x28;
  pcVar10 = *(code **)&param_2->FinalizeResults;
  plVar44 = (longlong *)&(param_2->FinalizeResults).field_0x10;
  if (plVar8 != (longlong *)0x0) {
    plVar44 = plVar8;
  }
  pcVar9 = *(code **)(*plVar44 + 8);
  *(undefined8 *)(puVar47 + -8) = 0x14a8ca99f;
  uVar38 = (*pcVar9)();
  *(undefined8 *)(puVar47 + -8) = 0x14a8ca9a4;
  (*pcVar10)(uVar38);
  local_14f0 = this;
  if (this == (UPoseSearchDatabase *)0x0) {
    *(undefined8 *)(puVar47 + -8) = 0x14a8ca9d0;
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("Database",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                        ,0x556,L"");
    if (bVar27) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar43 = ((uint)((ulonglong)local_14f0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_14f0 >> 4)) *
           -0x7a143595;
  uVar43 = (uVar43 >> 0xd ^ uVar43) * -0x3d4d51cb;
  *(undefined8 *)(puVar47 + -8) = 0x14a8caa16;
  TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
            ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
              *)&param_1->BestPoseCandidatesMap,uVar43 >> 0x10 ^ uVar43,&local_14f0);
  if ((local_14f8 & 1) != 0) {
    *(undefined8 *)(puVar47 + -8) = 0x14a8caa26;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_14f8 & 2) != 0) {
    *(undefined8 *)(puVar47 + -8) = 0x14a8caa36;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_14f8 & 4) != 0) {
    *(undefined8 *)(puVar47 + -8) = 0x14a8caa52;
    FThreadStats::AddMessage(local_1500,CycleScopeEnd);
  }
  *(undefined8 *)(puVar47 + -8) = 0x14a8caa61;
  return;
}

// SearchVPTree @ 14a8cba70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchDatabase::SearchVPTree
          (UPoseSearchDatabase *this,FSearchContext *param_1,FSearchResults *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  UPoseSearchSchema *pUVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  longlong lVar6;
  void *pvVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  char cVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_PoseSearch_VPTree> FVar24;
  FSearchIndex *this_00;
  undefined8 uVar25;
  longlong lVar26;
  TArrayView<UObject_const_*_const,int> *pTVar27;
  TArrayView<float_const_,int> *pTVar28;
  undefined8 uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  FName FVar33;
  undefined1 *puVar34;
  ForElementType<UE::PoseSearch::FIndexDistance> FVar35;
  int iVar36;
  byte bVar37;
  float *pfVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_1bf8 [32];
  byte local_1b98 [4];
  int local_1b94;
  undefined1 local_1b90 [48];
  FColor local_1b60 [2];
  undefined4 local_1b58 [2];
  int local_1b50;
  uint local_1b48;
  FWeakObjectPtr local_1b44;
  float local_1b3c [3];
  undefined1 local_1b30;
  uint local_1b28;
  FWeakObjectPtr local_1b24;
  float local_1b1c [3];
  undefined1 local_1b10;
  FName local_1b08 [2];
  float *local_1af8;
  int iStack_1af0;
  undefined4 uStack_1aec;
  FSearchIndex *local_1ae8;
  int iStack_1ae0;
  undefined4 uStack_1adc;
  UPoseSearchDatabase *local_1ad8;
  TArrayView<int_const_,int> local_1ad0;
  FName local_1ac0;
  TArrayView<float_const_,int> local_1aa8;
  FVPTreeDataSource local_1a98;
  UPoseSearchDatabase *local_1a90;
  UPoseSearchDatabase *local_1a88 [2];
  TArrayView<float_const_,int> local_1a78;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_1a68;
  int iStack_1a60;
  undefined4 uStack_1a5c;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_1a58;
  int iStack_1a50;
  undefined4 uStack_1a4c;
  TArrayView<float_const_,int> local_1a48;
  float *local_1a38 [2];
  TArrayView<float,int> local_1a28;
  TArrayView<UObject_const_*_const,int> local_1a18;
  undefined1 local_1a08 [16];
  TArrayView<int_const_,int> local_19f8;
  TArrayView<int_const_,int> local_19e8;
  undefined4 local_19d8;
  undefined4 uStack_19d4;
  int iStack_19d0;
  undefined4 uStack_19cc;
  TArrayView<float_const_,int> local_19c8;
  TArrayView<float_const_,int> local_19b8;
  undefined4 local_19a8;
  undefined4 uStack_19a4;
  int iStack_19a0;
  undefined4 uStack_199c;
  TArrayView<float_const_,int> local_1998;
  TArrayView<float_const_,int> local_1988;
  FName local_1978 [2];
  TArrayView<float,int> local_1968;
  undefined4 local_1958;
  undefined4 uStack_1954;
  longlong lStack_1950;
  undefined8 local_1948;
  undefined4 local_1938;
  undefined4 uStack_1934;
  longlong lStack_1930;
  undefined8 local_1928;
  undefined4 local_1918;
  undefined4 uStack_1914;
  longlong lStack_1910;
  undefined8 local_1908;
  undefined4 local_18f8;
  undefined4 uStack_18f4;
  longlong lStack_18f0;
  undefined8 local_18e8;
  undefined4 local_18d8;
  undefined4 uStack_18d4;
  longlong lStack_18d0;
  undefined8 local_18c8;
  undefined4 local_18b8;
  undefined4 uStack_18b4;
  longlong lStack_18b0;
  undefined8 local_18a8;
  TArrayView<float_const_,int> local_1898;
  TArrayView<UObject_const_*_const,int> local_1888;
  TArrayView<float_const_,int> local_1878;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_1868 [24];
  float *local_1850;
  longlong lStack_1848;
  undefined8 local_1840;
  longlong lStack_1828;
  undefined8 local_1820;
  longlong lStack_1800;
  undefined8 local_17f8;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_17d8 [24];
  float *local_17c0;
  longlong lStack_17b8;
  undefined8 local_17b0;
  longlong lStack_1798;
  undefined8 local_1790;
  longlong lStack_1770;
  undefined8 local_1768;
  FSearchFilters local_1748;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_14f8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_10e8;
  FVPTreeResultSet local_cd8;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_4b8;
  ulonglong local_a8;
  
  puVar34 = auStackY_1bf8;
  local_a8 = __security_cookie.value ^ (ulonglong)local_1b98;
  FVar24 = StatPtr_STAT_PoseSearch_VPTree;
  local_1b90._24_8_ = param_1;
  local_1b90._40_8_ = param_2;
  if (StatPtr_STAT_PoseSearch_VPTree == (FThreadSafeStaticStat<FStat_STAT_PoseSearch_VPTree>)0x0) {
    pFVar23 = ::FName::FName(local_1978,"STAT_PoseSearch_VPTree");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_PoseSearch_VPTree>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_VPTree,*pFVar23,
                        L"Search VPTree","STATGROUP_PoseSearch","STATCAT_Advanced",L"PoseSearch",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar24;
  bVar37 = 0;
  local_1ac0.ComparisonIndex.Value = 0;
  local_1ac0.Number = 0;
  local_1b98[0] = 0;
  if ((FVar33.ComparisonIndex.Value.Value != 0) || (FVar33.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b60[0].field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(local_1b60,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar37 = 1;
      local_1b98[0] = 1;
      if (-1 < CpuChannel->Enabled) {
        local_1b08[0].ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_1b08[0].Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_1b08,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                   ,0x8cd);
        bVar37 = 3;
        local_1b98[0] = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b90._8_8_ = FVar33;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      local_1b98[0] = bVar37 | 4;
      goto LAB_14a8cbc2a;
    }
  }
  local_1b90._8_4_ = local_1ac0.ComparisonIndex.Value;
  local_1b90._12_4_ = local_1ac0.Number;
  FVar33 = local_1ac0;
LAB_14a8cbc2a:
  this_00 = GetSearchIndex(this);
  if (param_1->bIsContinuingInteraction == false) {
    fVar41 = 0.0;
  }
  else {
    fVar41 = this->ContinuingInteractionCostBias;
  }
  local_1b58[0] = (undefined4)this_00->_padding_;
  local_1ae8 = this_00;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_2->ShouldPerformSearch);
  pcVar2 = *(code **)&param_2->ShouldPerformSearch;
  plVar3 = *(longlong **)&(param_2->ShouldPerformSearch).field_0x28;
  plVar32 = (longlong *)&(param_2->ShouldPerformSearch).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar32 = plVar3;
  }
  uVar25 = (**(code **)(*plVar32 + 8))();
  cVar19 = (*pcVar2)(uVar25,local_1b58);
  pUVar4 = (this->Schema).field0_0x0.DebugPtr;
  if (cVar19 == '\0') {
    iStack_1ae0 = pUVar4->SchemaCardinality;
    lVar26 = (longlong)iStack_1ae0 * 4;
    local_1ae8 = (FSearchIndex *)0x0;
    puVar34 = auStackY_1bf8;
    if (lVar26 != 0) {
      uVar31 = lVar26 + 0x1e;
      if (uVar31 <= lVar26 + 0xfU) {
        uVar31 = 0xffffffffffffff0;
      }
      puVar34 = auStackY_1bf8 + -(uVar31 & 0xfffffffffffffff0);
      local_1ae8 = (FSearchIndex *)(local_1b90 + -(uVar31 & 0xfffffffffffffff0));
    }
    if (iStack_1ae0 < 0) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbd13;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1968._12_4_ = uStack_1adc;
    local_1968.ArrayNum = iStack_1ae0;
    local_1968.DataPtr = (float *)local_1ae8;
    *(undefined8 *)(puVar34 + -8) = 0x14a8cbd3e;
    CalculateDynamicWeightsSqrt(this,&local_1a48,&local_1968);
    *(float ***)(puVar34 + 0x28) = local_1a38;
    *(float *)(puVar34 + 0x20) = fVar41;
    local_4b8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_4b8.ArrayNum = 0;
    local_4b8.ArrayMax = 0x100;
    local_1a38[0] = local_1a48.DataPtr;
    local_1a38[1] = (float *)local_1a48._8_8_;
    *(undefined8 *)(puVar34 + -8) = 0x14a8cbd94;
    PopulateNonSelectableIdx
              (this,&local_4b8,param_1,0.0,*(float *)(puVar34 + 0x20),
               *(TArrayView<float_const_,int> **)(puVar34 + 0x28));
  }
  else {
    iVar36 = pUVar4->SchemaCardinality;
    lVar26 = (longlong)iVar36 * 4;
    if (lVar26 == 0) {
      local_1af8 = (float *)0x0;
    }
    else {
      uVar31 = lVar26 + 0x1e;
      if (uVar31 <= lVar26 + 0xfU) {
        uVar31 = 0xffffffffffffff0;
      }
      puVar34 = auStackY_1bf8 + -(uVar31 & 0xfffffffffffffff0);
      local_1af8 = (float *)(local_1b90 + -(uVar31 & 0xfffffffffffffff0));
    }
    iStack_1af0 = iVar36;
    if (iVar36 < 0) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbe18;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1a28._12_4_ = uStack_1aec;
    local_1a28.ArrayNum = iStack_1af0;
    local_1a28.DataPtr = local_1af8;
    *(undefined8 *)(puVar34 + -8) = 0x14a8cbe43;
    CalculateDynamicWeightsSqrt(this,&local_1a78,&local_1a28);
    pUVar4 = (this->Schema).field0_0x0.DebugPtr;
    *(undefined8 *)(puVar34 + -8) = 0x14a8cbe56;
    UE::PoseSearch::FSearchContext::GetOrBuildQuery(param_1,&local_1aa8,pUVar4);
    if (local_1aa8.ArrayNum != iVar36) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbe7e;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("QueryValues.Num() == NumDimensions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                          ,0x8e9,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_14f8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_14f8.ArrayNum = 0;
    local_14f8.ArrayMax = 0x100;
    if ((param_1->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
      pTVar5 = param_1->AssetsToConsider;
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbef0;
      PopulateSelectableAssetIdx(this,&local_14f8,pTVar5);
    }
    else {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbeb8;
      pTVar27 = TArrayView<UObject_const_*_const,int>::
                TArrayView<UObject_const_*_const,int><TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UObject_const_*,TSizedDefaultAllocator<32>_>_>
                          (&local_1888,&param_1->AssetsToConsider_DEPRECATED);
      local_1a18.DataPtr = pTVar27->DataPtr;
      local_1a18.ArrayNum = pTVar27->ArrayNum;
      local_1a18._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbed8;
      PopulateSelectableAssetIdx(this,&local_14f8,&local_1a18);
    }
    *(undefined1 **)(puVar34 + 0x28) = local_1a08;
    *(float *)(puVar34 + 0x20) = fVar41;
    local_10e8.AllocatorInstance.SecondaryData.Data = (int *)0x0;
    local_10e8.ArrayNum = 0;
    local_10e8.ArrayMax = 0x100;
    *(undefined8 *)(puVar34 + -8) = 0x14a8cbf3f;
    PopulateNonSelectableIdx
              (this,&local_10e8,param_1,0.0,*(float *)(puVar34 + 0x20),
               *(TArrayView<float_const_,int> **)(puVar34 + 0x28));
    iStack_1a50 = local_14f8.ArrayNum;
    lVar26 = this_00->_padding_;
    local_1a58 = &local_14f8;
    if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
        local_14f8.AllocatorInstance.SecondaryData.Data !=
        (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
      local_1a58 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   local_14f8.AllocatorInstance.SecondaryData.Data;
    }
    if (local_14f8.ArrayNum < 0) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbf8b;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar36 = local_10e8.ArrayNum;
    local_1a68 = &local_10e8;
    if ((TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
        local_10e8.AllocatorInstance.SecondaryData.Data !=
        (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
      local_1a68 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                   local_10e8.AllocatorInstance.SecondaryData.Data;
    }
    if (local_10e8.ArrayNum < 0) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cbfdd;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar4 = (this->Schema).field0_0x0.DebugPtr;
    iStack_1a60 = iVar36;
    local_19e8.DataPtr = (int *)local_1a68;
    local_19e8.ArrayNum = iVar36;
    local_19e8._12_4_ = uStack_1a5c;
    local_19f8.DataPtr = (int *)local_1a58;
    local_19f8.ArrayNum = iStack_1a50;
    local_19f8._12_4_ = uStack_1a4c;
    puVar34[0x20] = (char)lVar26;
    *(undefined8 *)(puVar34 + -8) = 0x14a8cc02a;
    UE::PoseSearch::FSearchFilters::FSearchFilters
              (&local_1748,pUVar4,&local_19e8,&local_19f8,(bool)puVar34[0x20]);
    local_cd8.NumNeighbors = this->KDTreeQueryNumNeighbors;
    local_cd8.Heap.AllocatorInstance.SecondaryData =
         (ForElementType<UE::PoseSearch::FIndexDistance>)0x0;
    local_cd8.Heap.ArrayNum = 0;
    local_cd8.Heap.ArrayMax = 0x100;
    local_1a98.SearchIndex = this_00;
    if ((0x100 < local_cd8.NumNeighbors) && (2 < (byte)LogPoseSearch._0_1_)) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cc07f;
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_UE::PoseSearch::FVPTreeResultSet::FVPTreeResultSet(int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    *(undefined8 *)(puVar34 + -8) = 0x14a8cc0a1;
    UE::PoseSearch::FVPTree::
    FindNeighbors<TArrayView<float_const_,int>,UE::PoseSearch::FVPTreeDataSource,UE::PoseSearch::FVPTreeResultSet>
              (&this_00->VPTree,&local_1aa8,&local_cd8,&local_1a98);
    iVar36 = 0;
    local_1b90._16_4_ = 0;
    local_1b94 = local_cd8.Heap.ArrayNum;
    FVar35 = (ForElementType<UE::PoseSearch::FIndexDistance>)&local_cd8.Heap;
    if (local_cd8.Heap.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
      FVar35 = local_cd8.Heap.AllocatorInstance.SecondaryData;
    }
    local_1b90._32_8_ = FVar35;
    if (local_cd8.Heap.ArrayNum < 0) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cc0ec;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar25 = local_1b90._40_8_;
    if ((int)this_00->_padding_ < 1) {
      iVar36 = 0;
      if (0 < local_1b94) {
        lVar26 = 0;
        do {
          if (iVar36 < 0) {
            *(longlong *)(puVar34 + 0x28) = (longlong)local_1b94;
            *(longlong *)(puVar34 + 0x20) = lVar26;
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc546;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar20) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar14 = local_1a78._12_4_;
          iVar11 = local_1a78.ArrayNum;
          uVar17 = local_1a78.DataPtr._4_4_;
          uVar16 = local_1a78.DataPtr._0_4_;
          uVar13 = local_1aa8._12_4_;
          iVar18 = local_1aa8.ArrayNum;
          uVar12 = local_1aa8.DataPtr._4_4_;
          uVar10 = local_1aa8.DataPtr._0_4_;
          uVar30 = *(uint *)FVar35;
          *(undefined8 *)(puVar34 + -8) = 0x14a8cc56f;
          pTVar28 = UE::PoseSearch::FSearchIndex::GetPoseValues(this_00,&local_1898,uVar30);
          *(UPoseSearchDatabase **)(puVar34 + 0x48) = this;
          local_19a8 = uVar16;
          uStack_19a4 = uVar17;
          iStack_19a0 = iVar11;
          uStack_199c = uVar14;
          local_1998.DataPtr._0_4_ = uVar10;
          local_1998.DataPtr._4_4_ = uVar12;
          local_1998.ArrayNum = iVar18;
          local_1998._12_4_ = uVar13;
          uVar13 = *(undefined4 *)&pTVar28->DataPtr;
          uVar14 = *(undefined4 *)((longlong)&pTVar28->DataPtr + 4);
          pfVar38 = pTVar28->DataPtr;
          iVar15 = pTVar28->ArrayNum;
          uVar9 = *(undefined4 *)&pTVar28->field_0xc;
          *(undefined8 *)(puVar34 + 0x40) = local_1b90._24_8_;
          *(float *)(puVar34 + 0x38) = fVar41;
          *(undefined4 *)(puVar34 + 0x30) = 0;
          *(uint *)(puVar34 + 0x28) = uVar30;
          *(undefined4 **)(puVar34 + 0x20) = &local_19a8;
          local_1988.DataPtr._0_4_ = uVar13;
          local_1988.DataPtr._4_4_ = uVar14;
          local_1988.ArrayNum = iVar15;
          local_1988._12_4_ = uVar9;
          *(undefined8 *)(puVar34 + -8) = 0x14a8cc5d4;
          bVar20 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                             (&local_1748,this_00,&local_1988,&local_1998,
                              *(TArrayView<float_const_,int> **)(puVar34 + 0x20),
                              *(int *)(puVar34 + 0x28),*(float *)(puVar34 + 0x30),
                              *(float *)(puVar34 + 0x38),*(FSearchContext **)(puVar34 + 0x40),
                              *(UPoseSearchDatabase **)(puVar34 + 0x48));
          if (bVar20) {
            iVar1 = (int)this_00->_padding_;
            local_1b24.ObjectIndex = 0;
            local_1b24.ObjectSerialNumber = 0;
            local_1b10 = 0;
            local_1b28 = 0xffffffff;
            local_1b1c[0] = 3.4028235e+38;
            uVar21 = 0;
            if ((int)uVar30 < iVar1) {
              uVar21 = ~uVar30 >> 0x1f;
            }
            local_1b1c[1] = -NAN;
            local_1b1c[2] = 3.4028235e+38;
            if (uVar21 == 0) {
              *(longlong *)(puVar34 + 0x28) = (longlong)iVar1;
              *(longlong *)(puVar34 + 0x20) = (longlong)(int)uVar30;
              *(undefined8 *)(puVar34 + -8) = 0x14a8cc649;
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar20) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            lVar6 = this_00->_padding_;
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc665;
            fVar39 = FGenericPlatformMath::LoadHalf
                               ((ushort *)((longlong)(int)uVar30 * 0xc + 10 + lVar6));
            local_1b90._0_4_ = iVar18;
            if ((iVar15 != iVar18) || (iVar15 != iVar11)) {
              *(undefined8 *)(puVar34 + -8) = 0x14a8cc6be;
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                  ,0x3d,L"");
              if (bVar20) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            local_17b0 = local_18e8;
            lStack_18f0 = (longlong)iVar15;
            lStack_18d0 = (longlong)(int)local_1b90._0_4_;
            lStack_18b0 = (longlong)iVar11;
            local_18d8 = uVar10;
            uStack_18d4 = uVar12;
            local_18b8 = uVar16;
            uStack_18b4 = uVar17;
            local_1790 = local_18c8;
            local_1768 = local_18a8;
            local_18f8 = uVar13;
            uStack_18f4 = uVar14;
            local_17c0 = pfVar38;
            lStack_17b8 = lStack_18f0;
            lStack_1798 = lStack_18d0;
            lStack_1770 = lStack_18b0;
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc762;
            fVar40 = Eigen::
                     DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                     ::sum(local_17d8);
            local_1b1c[1] = -NAN;
            local_1b1c[0] = fVar40 + fVar39 + fVar41;
            local_1b28 = uVar30;
            local_1a88[0] = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              *(undefined8 *)(puVar34 + -8) = 0x14a8cc796;
              UE::GC::MarkAsReachable((UObject *)this);
            }
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc7a6;
            FWeakObjectPtr::operator=(&local_1b24,(FObjectPtr)local_1a88);
            pvVar7 = *(void **)(uVar25 + 0x10);
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc7af;
            UE::Core::Private::Function::CheckCallable(pvVar7);
            plVar3 = *(longlong **)
                      &((TFunction<void___cdecl(UE::PoseSearch::FSearchResult_const_&)> *)
                       (uVar25 + 0x10))->field_0x28;
            pcVar2 = *(code **)(uVar25 + 0x10);
            plVar32 = (longlong *)
                      &((TFunction<void___cdecl(UE::PoseSearch::FSearchResult_const_&)> *)
                       (uVar25 + 0x10))->field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar32 = plVar3;
            }
            pcVar8 = *(code **)(*plVar32 + 8);
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc7c8;
            uVar29 = (*pcVar8)();
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc7d1;
            (*pcVar2)(uVar29,&local_1b28);
            uVar29 = local_1b90._24_8_;
            *(float **)(puVar34 + 0x20) = local_1b1c;
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc7ef;
            UE::PoseSearch::FSearchContext::Track
                      ((FSearchContext *)uVar29,this,uVar30,Valid_Pose,
                       *(FPoseSearchCost **)(puVar34 + 0x20));
            this_00 = local_1ae8;
          }
          iVar36 = iVar36 + 1;
          FVar35 = (ForElementType<UE::PoseSearch::FIndexDistance>)(local_1b90._32_8_ + 8);
          lVar26 = lVar26 + 1;
          local_1b90._32_8_ = FVar35;
          FVar33 = (FName)local_1b90._8_8_;
          param_2 = (FSearchResults *)local_1b90._40_8_;
        } while (iVar36 < local_1b94);
      }
    }
    else {
      local_1b50 = 0x7fffffff;
      if (0 < this->KDTreeQueryNumNeighborsWithDuplicates) {
        local_1b50 = this->KDTreeQueryNumNeighborsWithDuplicates;
      }
      local_1b90._20_4_ = 0;
      if (0 < local_1b94) {
        local_1af8 = (float *)0x0;
        do {
          pfVar38 = local_1af8;
          if ((int)local_1b90._20_4_ < 0) {
            *(longlong *)(puVar34 + 0x28) = (longlong)local_1b94;
            *(float **)(puVar34 + 0x20) = pfVar38;
            *(undefined8 *)(puVar34 + -8) = 0x14a8cc163;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar20) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar30 = *(uint *)FVar35;
          *(undefined8 *)(puVar34 + -8) = 0x14a8cc17b;
          UE::PoseSearch::FSparsePoseMultiMap<int>::operator[]
                    ((FSparsePoseMultiMap<int> *)&this_00->_padding_,&local_1ad0,uVar30);
          iVar15 = local_1ad0.ArrayNum;
          uVar30 = 0;
          if (0 < local_1ad0.ArrayNum) {
            lVar26 = 0;
            do {
              uVar9 = local_1a78._12_4_;
              iVar18 = local_1a78.ArrayNum;
              uVar14 = local_1a78.DataPtr._4_4_;
              uVar13 = local_1a78.DataPtr._0_4_;
              pfVar38 = local_1af8;
              if (local_1b50 <= iVar36) break;
              uVar21 = 0;
              if ((int)uVar30 < iVar15) {
                uVar21 = ~uVar30 >> 0x1f;
              }
              if (uVar21 == 0) {
                *(longlong *)(puVar34 + 0x28) = (longlong)iVar15;
                *(longlong *)(puVar34 + 0x20) = (longlong)(int)uVar30;
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc1e4;
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar20) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              uVar10 = local_1aa8._12_4_;
              iVar1 = local_1aa8.ArrayNum;
              uVar17 = local_1aa8.DataPtr._4_4_;
              uVar16 = local_1aa8.DataPtr._0_4_;
              uVar21 = *(uint *)((longlong)local_1ad0.DataPtr + lVar26);
              *(undefined8 *)(puVar34 + -8) = 0x14a8cc215;
              pTVar28 = UE::PoseSearch::FSearchIndex::GetPoseValues(this_00,&local_1878,uVar21);
              *(UPoseSearchDatabase **)(puVar34 + 0x48) = this;
              local_19d8 = uVar13;
              uStack_19d4 = uVar14;
              iStack_19d0 = iVar18;
              uStack_19cc = uVar9;
              local_19c8.DataPtr._0_4_ = uVar16;
              local_19c8.DataPtr._4_4_ = uVar17;
              local_19c8.ArrayNum = iVar1;
              local_19c8._12_4_ = uVar10;
              uVar9 = *(undefined4 *)&pTVar28->DataPtr;
              uVar10 = *(undefined4 *)((longlong)&pTVar28->DataPtr + 4);
              pfVar38 = pTVar28->DataPtr;
              iVar11 = pTVar28->ArrayNum;
              uVar12 = *(undefined4 *)&pTVar28->field_0xc;
              *(undefined8 *)(puVar34 + 0x40) = local_1b90._24_8_;
              *(float *)(puVar34 + 0x38) = fVar41;
              *(undefined4 *)(puVar34 + 0x30) = 0;
              *(uint *)(puVar34 + 0x28) = uVar21;
              *(undefined4 **)(puVar34 + 0x20) = &local_19d8;
              local_19b8.DataPtr._0_4_ = uVar9;
              local_19b8.DataPtr._4_4_ = uVar10;
              local_19b8.ArrayNum = iVar11;
              local_19b8._12_4_ = uVar12;
              *(undefined8 *)(puVar34 + -8) = 0x14a8cc27b;
              bVar20 = UE::PoseSearch::FSearchFilters::AreFiltersValid
                                 (&local_1748,this_00,&local_19b8,&local_19c8,
                                  *(TArrayView<float_const_,int> **)(puVar34 + 0x20),
                                  *(int *)(puVar34 + 0x28),*(float *)(puVar34 + 0x30),
                                  *(float *)(puVar34 + 0x38),*(FSearchContext **)(puVar34 + 0x40),
                                  *(UPoseSearchDatabase **)(puVar34 + 0x48));
              if (bVar20) {
                iVar36 = (int)this_00->_padding_;
                local_1b44.ObjectIndex = 0;
                local_1b44.ObjectSerialNumber = 0;
                local_1b30 = 0;
                local_1b48 = 0xffffffff;
                local_1b3c[0] = 3.4028235e+38;
                uVar22 = 0;
                if ((int)uVar21 < iVar36) {
                  uVar22 = ~uVar21 >> 0x1f;
                }
                local_1b3c[1] = -NAN;
                local_1b3c[2] = 3.4028235e+38;
                if (uVar22 == 0) {
                  *(longlong *)(puVar34 + 0x28) = (longlong)iVar36;
                  *(longlong *)(puVar34 + 0x20) = (longlong)(int)uVar21;
                  *(undefined8 *)(puVar34 + -8) = 0x14a8cc2e9;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                lVar6 = this_00->_padding_;
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc30b;
                fVar39 = FGenericPlatformMath::LoadHalf
                                   ((ushort *)((longlong)(int)uVar21 * 0xc + 10 + lVar6));
                local_1b90._0_4_ = iVar1;
                if ((iVar11 != iVar1) || (iVar11 != iVar18)) {
                  *(undefined8 *)(puVar34 + -8) = 0x14a8cc364;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                                      ,0x3d,L"");
                  if (bVar20) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                local_1840 = local_1948;
                lStack_1950 = (longlong)iVar11;
                lStack_1930 = (longlong)(int)local_1b90._0_4_;
                lStack_1910 = (longlong)iVar18;
                local_1938 = uVar16;
                uStack_1934 = uVar17;
                local_1918 = uVar13;
                uStack_1914 = uVar14;
                local_1820 = local_1928;
                local_17f8 = local_1908;
                local_1958 = uVar9;
                uStack_1954 = uVar10;
                local_1850 = pfVar38;
                lStack_1848 = lStack_1950;
                lStack_1828 = lStack_1930;
                lStack_1800 = lStack_1910;
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc40f;
                fVar40 = Eigen::
                         DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                         ::sum(local_1868);
                local_1b3c[1] = -NAN;
                local_1b3c[0] = fVar40 + fVar39 + fVar41;
                local_1b48 = uVar21;
                local_1a90 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  *(undefined8 *)(puVar34 + -8) = 0x14a8cc440;
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc450;
                FWeakObjectPtr::operator=(&local_1b44,(FObjectPtr)&local_1a90);
                uVar25 = local_1b90._40_8_;
                pvVar7 = *(void **)(local_1b90._40_8_ + 0x10);
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc45e;
                UE::Core::Private::Function::CheckCallable(pvVar7);
                plVar3 = *(longlong **)
                          &((TFunction<void___cdecl(UE::PoseSearch::FSearchResult_const_&)> *)
                           (uVar25 + 0x10))->field_0x28;
                pcVar2 = *(code **)(uVar25 + 0x10);
                plVar32 = (longlong *)
                          &((TFunction<void___cdecl(UE::PoseSearch::FSearchResult_const_&)> *)
                           (uVar25 + 0x10))->field_0x10;
                if (plVar3 != (longlong *)0x0) {
                  plVar32 = plVar3;
                }
                pcVar8 = *(code **)(*plVar32 + 8);
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc47a;
                uVar25 = (*pcVar8)();
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc483;
                (*pcVar2)(uVar25,&local_1b48);
                uVar25 = local_1b90._24_8_;
                *(float **)(puVar34 + 0x20) = local_1b3c;
                *(undefined8 *)(puVar34 + -8) = 0x14a8cc4a1;
                UE::PoseSearch::FSearchContext::Track
                          ((FSearchContext *)uVar25,this,uVar21,Valid_Pose,
                           *(FPoseSearchCost **)(puVar34 + 0x20));
                this_00 = local_1ae8;
                iVar36 = local_1b90._16_4_;
              }
              iVar36 = iVar36 + 1;
              uVar30 = uVar30 + 1;
              lVar26 = lVar26 + 4;
              local_1b90._16_4_ = iVar36;
              pfVar38 = local_1af8;
            } while ((int)uVar30 < iVar15);
          }
          local_1b90._20_4_ = local_1b90._20_4_ + 1;
          FVar35 = (ForElementType<UE::PoseSearch::FIndexDistance>)(local_1b90._32_8_ + 8);
          local_1af8 = (float *)((longlong)pfVar38 + 1);
          local_1b90._32_8_ = FVar35;
          FVar33 = (FName)local_1b90._8_8_;
          param_2 = (FSearchResults *)local_1b90._40_8_;
        } while ((int)local_1b90._20_4_ < local_1b94);
      }
    }
    if (local_cd8.Heap.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
      *(undefined8 *)(puVar34 + -8) = 0x14a8cc82d;
      FMemory::Free((void *)local_cd8.Heap.AllocatorInstance.SecondaryData);
    }
    local_1748.BlockTransitionFilter = (FBlockTransitionFilter)&___7IPoseSearchFilter__6B_;
    local_1748.SelectableAssetIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    local_1748.NonSelectableIdxFilter._padding_ = (longlong)&___7IPoseSearchFilter__6B_;
    param_1 = (FSearchContext *)local_1b90._24_8_;
  }
  pvVar7 = *(void **)&param_2->FinalizeResults;
  *(undefined8 *)(puVar34 + -8) = 0x14a8cc856;
  UE::Core::Private::Function::CheckCallable(pvVar7);
  plVar3 = *(longlong **)&(param_2->FinalizeResults).field_0x28;
  pcVar2 = *(code **)&param_2->FinalizeResults;
  plVar32 = (longlong *)&(param_2->FinalizeResults).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar32 = plVar3;
  }
  pcVar8 = *(code **)(*plVar32 + 8);
  *(undefined8 *)(puVar34 + -8) = 0x14a8cc86f;
  uVar25 = (*pcVar8)();
  *(undefined8 *)(puVar34 + -8) = 0x14a8cc874;
  (*pcVar2)(uVar25);
  local_1ad8 = this;
  if (this == (UPoseSearchDatabase *)0x0) {
    *(undefined8 *)(puVar34 + -8) = 0x14a8cc8a0;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Database",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                        ,0x556,L"");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar30 = ((uint)((ulonglong)local_1ad8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1ad8 >> 4)) *
           -0x7a143595;
  uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
  *(undefined8 *)(puVar34 + -8) = 0x14a8cc8e5;
  TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  ::FindOrAddImpl<UPoseSearchDatabase_const_*_const_&>
            ((TMapBase<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
              *)&param_1->BestPoseCandidatesMap,uVar30 >> 0x10 ^ uVar30,&local_1ad8);
  bVar37 = local_1b98[0];
  if ((local_1b98[0] & 1) != 0) {
    *(undefined8 *)(puVar34 + -8) = 0x14a8cc8f4;
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar37 & 2) != 0) {
    *(undefined8 *)(puVar34 + -8) = 0x14a8cc8ff;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar37 & 4) != 0) {
    *(undefined8 *)(puVar34 + -8) = 0x14a8cc912;
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  *(undefined8 *)(puVar34 + -8) = 0x14a8cc921;
  return;
}

// Serialize @ 14a8cce50

void __thiscall UPoseSearchDatabase::Serialize(UPoseSearchDatabase *this,FArchive *param_1)

{
  bool bVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar1) &&
     (((((param_1->field_0x28 & 4) != 0 && (*(longlong *)&param_1->field_0x68 != 0)) &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
      ((param_1->field_0x28 & 2) != 0)))) {
    UE::PoseSearch::operator<<(param_1,&this->SearchIndexPrivate);
    UpdateCachedProperties(this);
  }
  return;
}

// Serialize @ 14a8ccec0

void __thiscall
UPoseSearchDatabase::Serialize(UPoseSearchDatabase *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar1) &&
     (((((pFVar2->field_0x28 & 4) != 0 && (*(longlong *)&pFVar2->field_0x68 != 0)) &&
       (*(longlong *)(*(longlong *)&pFVar2->field_0x68 + 0x10) != 0)) ||
      ((pFVar2->field_0x28 & 2) != 0)))) {
    UE::PoseSearch::operator<<(pFVar2,&this->SearchIndexPrivate);
    UpdateCachedProperties(this);
  }
  return;
}

// SetSearchIndex @ 14a8ce090

void __thiscall UPoseSearchDatabase::SetSearchIndex(UPoseSearchDatabase *this,FSearchIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x418,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::PoseSearch::FSearchIndex::operator=(&this->SearchIndexPrivate,param_1);
  UpdateCachedProperties(this);
  return;
}

// StaticRegisterNativesUPoseSearchDatabase @ 14a8ce3d0

void __cdecl UPoseSearchDatabase::StaticRegisterNativesUPoseSearchDatabase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchDatabase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateCachedProperties @ 14a8cf2a0

void __thiscall UPoseSearchDatabase::UpdateCachedProperties(UPoseSearchDatabase *this)

{
  TMap<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  ulonglong uVar1;
  code *pcVar2;
  TMap<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FPoseSearchDatabaseAnimationAsset *pFVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20;
  uint local_d8 [2];
  ulonglong local_d0;
  ulonglong *local_c8;
  TMap<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  this_00 = &this->CachedAssetMap;
  TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this_00);
  uVar10 = (uint)(this->SearchIndexPrivate)._padding_;
  uVar13 = 0;
  local_d8[0] = 0;
  if (uVar10 != 0) {
    do {
      uVar6 = local_d8[0];
      uVar15 = uVar13;
      if ((int)local_d8[0] < (int)uVar10) {
        uVar15 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                         (this,*(int *)((this->SearchIndexPrivate)._padding_ +
                                       (longlong)(int)uVar6 * 0x24));
      if (pFVar7 != (FPoseSearchDatabaseAnimationAsset *)0x0) {
        local_d0 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7);
        uVar10 = ((uint)(local_d0 >> 0x14) & 0xffff ^ (uint)(local_d0 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = uVar10 >> 0x10 ^ uVar10;
        if (*(int *)&(this->CachedAssetMap).field_0x8 != *(int *)&(this->CachedAssetMap).field_0x34)
        {
          puVar12 = *(undefined1 **)&(this->CachedAssetMap).field_0x40;
          puVar11 = &(this->CachedAssetMap).field_0x38;
          if (puVar12 != (undefined1 *)0x0) {
            puVar11 = puVar12;
          }
          iVar5 = *(int *)(puVar11 +
                          (ulonglong)(*(int *)&(this->CachedAssetMap).field_0x48 - 1U & uVar10) * 4)
          ;
          if (iVar5 != -1) {
            do {
              puVar8 = (ulonglong *)((longlong)iVar5 * 0x20 + *(longlong *)&this_00->field_0x0);
              if (*puVar8 == local_d0) {
                if (puVar8 != (ulonglong *)0x0) goto LAB_14a8cf409;
                break;
              }
              iVar5 = (int)puVar8[3];
            } while (iVar5 != -1);
          }
        }
        local_c8 = &local_d0;
        TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UObject_const_*_&&>_>
                  ((TSet<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_res18,
                   (TKeyInitializer<UObject_const_*_&&> *)(ulonglong)uVar10,(bool *)&local_c8);
        puVar8 = (ulonglong *)((longlong)local_res18[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_14a8cf409:
        if ((((uint *)puVar8[1] <= local_d8) &&
            (local_d8 < (uint *)puVar8[1] + *(int *)((longlong)puVar8 + 0x14))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (int)puVar8[2];
        if (iVar5 == *(int *)((longlong)puVar8 + 0x14)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(puVar8 + 1),
                             (int *)((longlong)puVar8 + 0x14));
        }
        *(int *)(puVar8 + 2) = iVar5 + 1;
        *(uint *)(((ForAnyElementType *)(puVar8 + 1))->Data + (longlong)iVar5 * 4) = local_d8[0];
      }
      uVar10 = (uint)(this->SearchIndexPrivate)._padding_;
      local_d8[0] = local_d8[0] + 1;
    } while (local_d8[0] != uVar10);
  }
  local_b0 = &(this->CachedAssetMap).field_0x10;
  uStack_b4 = 1;
  uVar10 = *(uint *)&(this->CachedAssetMap).field_0x28;
  local_a0 = 0;
  uStack_a4 = local_a0;
  if (uVar10 != 0) {
    puVar14 = *(uint **)&(this->CachedAssetMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_b0;
    }
    uVar6 = *puVar14;
    local_a0 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      lVar9 = (longlong)(int)uVar13;
      local_a0 = local_a0 + 0x20;
      uVar13 = uVar13 + 1;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14a8cf537;
      uVar6 = puVar14[lVar9 + 1];
    }
    uStack_b4 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uStack_a4 = (local_a0 - 1) + local_res20;
    if ((int)uVar10 < (int)uStack_a4) {
LAB_14a8cf537:
      uStack_a4 = uVar10;
    }
  }
  puVar12 = &(this->CachedAssetMap).field_0x10;
  uStack_9c = local_44;
  iStack_98 = *(int *)&(this->CachedAssetMap).field_0x8 - *(int *)&(this->CachedAssetMap).field_0x34
  ;
  uVar6 = *(uint *)&(this->CachedAssetMap).field_0x28;
  uStack_a8 = 0xffffffff;
  uVar15 = uVar6 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_b4,uVar13);
  TStack_88.CurrentBitIndex = uStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar5 = (int)uVar6 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = this_00;
  uStack_b8 = uVar13;
  local_90 = this_00;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)uVar6 < 0) || ((int)uVar10 < (int)uVar6)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = *(uint *)&(this->CachedAssetMap).field_0x28;
  if (uVar6 != uVar10) {
    puVar11 = *(undefined1 **)&(this->CachedAssetMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar12;
    }
    uVar13 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar5 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar5;
      uVar15 = uVar15 + 0x20;
      iVar5 = iVar5 + 1;
      uVar6 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_14a8cf640;
      uVar13 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar6 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar6) {
      uVar6 = uVar10;
    }
  }
LAB_14a8cf640:
  while( true ) {
    pTVar3 = local_90;
    if (*(int *)(&local_90->field_0x0 + 8) - *(int *)(&local_90->field_0x0 + 0x34) != (int)uStack_68
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar6) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) && (pTVar3 == this_00)
       ) break;
    lVar9 = *(longlong *)&pTVar3->field_0x0;
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              (*(int **)((longlong)TStack_88.CurrentBitIndex * 0x20 + 8 + lVar9),
               *(int *)((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x10 + lVar9),local_res8[0],
               (TLess<void> *)local_res10);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// execGetAnimationAsset @ 14a8d2f80

void __cdecl
UPoseSearchDatabase::execGetAnimationAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[2].field_0x10 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[2].field_0x10) {
      uVar6 = ~local_res8[0] >> 0x1f;
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
    uVar4 = (**(code **)(*(longlong *)(lVar5 * 0x10 + *(longlong *)&param_1[2].field_0x8) + 8))();
    *(undefined8 *)param_3 = uVar4;
  }
  return;
}

// execGetNumAnimationAssets @ 14a8d3700

void __cdecl
UPoseSearchDatabase::execGetNumAnimationAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x10;
  return;
}


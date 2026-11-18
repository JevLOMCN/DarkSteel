// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 6

// AsType<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>_> @ 1462c8360

TEngineContext<UE::Dataflow::FContextSingle> * __thiscall
UE::Dataflow::FContext::AsType<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>_>
          (FContext *this)

{
  code *pcVar1;
  char cVar2;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar3;
  FName local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x18);
  ::FName::FName(&local_res8,"TEngineContext");
  cVar2 = (*pcVar1)(this);
  pTVar3 = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
  if (cVar2 != '\0') {
    pTVar3 = (TEngineContext<UE::Dataflow::FContextSingle> *)this;
  }
  return pTVar3;
}

// SetData<FDataflowImage_const_&> @ 1462cc0c0

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowImage_const_&>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowImage *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowImage_const_&>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// FContext @ 1462cd060

FContext * __thiscall UE::Dataflow::FContext::FContext(FContext *this)

{
  FContextAssetStore *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  *(undefined8 *)&this->DataStore = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  *(undefined8 *)&(this->DataStore).field_0x8 = 0;
  *(undefined8 *)&(this->DataStore).field_0x20 = 0;
  *(undefined4 *)&(this->DataStore).field_0x28 = 0;
  *(undefined4 *)&(this->DataStore).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataStore).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataStore).field_0x34 = 0;
  *(undefined8 *)&(this->DataStore).field_0x40 = 0;
  *(undefined4 *)&(this->DataStore).field_0x48 = 0;
  (this->DataLock).Ptr = (FWindowsRecursiveMutex *)0x0;
  (this->AsyncEvaluator).OwningContext = this;
  *(undefined8 *)&(this->AsyncEvaluator).PendingEvaluationEntries = 0;
  *(undefined8 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x8 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x20 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x28 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x2c = 0x80;
  *(undefined4 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x34 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x40 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x48 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).RunningTasks = 0;
  *(undefined8 *)&(this->AsyncEvaluator).RunningTasks.field_0x8 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).RunningTasks.field_0x20 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).RunningTasks.field_0x28 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).RunningTasks.field_0x2c = 0x80;
  *(undefined4 *)&(this->AsyncEvaluator).RunningTasks.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AsyncEvaluator).RunningTasks.field_0x34 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).RunningTasks.field_0x40 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).RunningTasks.field_0x48 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).CompletedTasks.Elements = 0;
  *(undefined8 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x34 = 0;
  (this->AsyncEvaluator).CompletedTasks.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AsyncEvaluator).CompletedTasks.HashSize = 0;
  *(undefined8 *)&this->OnNodeBeginEvaluateMulticast = 0;
  *(undefined8 *)&(this->OnNodeBeginEvaluateMulticast).field_0x8 = 0;
  *(undefined8 *)&(this->OnNodeBeginEvaluateMulticast).field_0x10 = 0;
  *(undefined8 *)&(this->OnNodeBeginEvaluateMulticast).field_0x18 = 2;
  *(undefined8 *)&this->OnNodeFinishEvaluateMulticast = 0;
  *(undefined8 *)&(this->OnNodeFinishEvaluateMulticast).field_0x8 = 0;
  *(undefined8 *)&(this->OnNodeFinishEvaluateMulticast).field_0x10 = 0;
  *(undefined8 *)&(this->OnNodeFinishEvaluateMulticast).field_0x18 = 2;
  *(undefined8 *)&this->OnContextHasInfo = 0;
  *(undefined8 *)&(this->OnContextHasInfo).field_0x8 = 0;
  *(undefined8 *)&(this->OnContextHasInfo).field_0x10 = 0;
  *(undefined8 *)&(this->OnContextHasInfo).field_0x18 = 2;
  *(undefined8 *)&this->OnContextHasWarning = 0;
  *(undefined8 *)&(this->OnContextHasWarning).field_0x8 = 0;
  *(undefined8 *)&(this->OnContextHasWarning).field_0x10 = 0;
  *(undefined8 *)&(this->OnContextHasWarning).field_0x18 = 2;
  *(undefined8 *)&this->OnContextHasError = 0;
  *(undefined8 *)&(this->OnContextHasError).field_0x8 = 0;
  *(undefined8 *)&(this->OnContextHasError).field_0x10 = 0;
  *(undefined8 *)&(this->OnContextHasError).field_0x18 = 2;
  *(undefined8 *)&(this->NodesWithInfo).Elements = 0;
  *(undefined8 *)&(this->NodesWithInfo).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NodesWithInfo).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x34 = 0;
  (this->NodesWithInfo).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NodesWithInfo).HashSize = 0;
  *(undefined8 *)&(this->NodesWithWarning).Elements = 0;
  *(undefined8 *)&(this->NodesWithWarning).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NodesWithWarning).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x34 = 0;
  (this->NodesWithWarning).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NodesWithWarning).HashSize = 0;
  this_00 = &this->AssetStore;
  *(undefined8 *)&(this->NodesWithError).Elements = 0;
  *(undefined8 *)&(this->NodesWithError).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NodesWithError).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x34 = 0;
  (this->NodesWithError).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NodesWithError).HashSize = 0;
  *(undefined8 *)&(this->NodesFailed).Elements = 0;
  *(undefined8 *)&(this->NodesFailed).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NodesFailed).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x34 = 0;
  (this->NodesFailed).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NodesFailed).HashSize = 0;
  this_00->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&(this->AssetStore)._padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)this_00);
  this_00->_padding_ = (longlong)&___7FContextAssetStore_Dataflow_UE__6B_;
  (this->AssetStore).AssetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetStore).AssetData.ArrayNum = 0;
  (this->AssetStore).AssetData.ArrayMax = 0;
  return this;
}

// ~FContext @ 1462cf950

void __thiscall UE::Dataflow::FContext::~FContext(FContext *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  DestructItems<UE::Dataflow::FContextAssetStore::FAssetData,int>
            ((FAssetData *)(this->AssetStore).AssetData.AllocatorInstance.Data,
             (this->AssetStore).AssetData.ArrayNum);
  pFVar1 = (this->AssetStore).AssetData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->AssetStore)._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->AssetStore);
  (this->NodesFailed).HashSize = 0;
  FVar2 = (this->NodesFailed).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NodesFailed).Elements);
  (this->NodesWithError).HashSize = 0;
  FVar2 = (this->NodesWithError).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NodesWithError).Elements);
  (this->NodesWithWarning).HashSize = 0;
  FVar2 = (this->NodesWithWarning).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NodesWithWarning).Elements);
  (this->NodesWithInfo).HashSize = 0;
  FVar2 = (this->NodesWithInfo).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDataflowNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NodesWithInfo).Elements);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContextHasError).field_0x8,*(int *)&(this->OnContextHasError).field_0x10);
  pvVar3 = *(void **)&(this->OnContextHasError).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextHasError);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContextHasWarning).field_0x8,*(int *)&(this->OnContextHasWarning).field_0x10
            );
  pvVar3 = *(void **)&(this->OnContextHasWarning).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextHasWarning);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContextHasInfo).field_0x8,*(int *)&(this->OnContextHasInfo).field_0x10);
  pvVar3 = *(void **)&(this->OnContextHasInfo).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextHasInfo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNodeFinishEvaluateMulticast).field_0x8,
             *(int *)&(this->OnNodeFinishEvaluateMulticast).field_0x10);
  pvVar3 = *(void **)&(this->OnNodeFinishEvaluateMulticast).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNodeFinishEvaluateMulticast);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNodeBeginEvaluateMulticast).field_0x8,
             *(int *)&(this->OnNodeBeginEvaluateMulticast).field_0x10);
  pvVar3 = *(void **)&(this->OnNodeBeginEvaluateMulticast).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNodeBeginEvaluateMulticast);
  FContextEvaluator::~FContextEvaluator(&this->AsyncEvaluator);
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x28);
  }
  *(undefined4 *)&(this->DataStore).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DataStore).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataStore);
  return;
}

// GetType @ 1462defb0

FName __thiscall UE::Dataflow::FContext::GetType(FContext *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FContext");
  return in_RDX;
}

// IsA @ 1462dfa50

bool __thiscall UE::Dataflow::FContext::IsA(FContext *this,FName param_1)

{
  FName local_res10 [3];
  
  ::FName::FName(local_res10,"FContext");
  return param_1 == local_res10[0];
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~FHUDGroupManager @ 1419d27f0

void __thiscall FHUDGroupManager::~FHUDGroupManager(FHUDGroupManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->AggregatedNonStackStatsHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AggregatedFlatHistoryThreadBreakdown).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AggregatedFlatHistoryThreadBreakdown).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AggregatedFlatHistoryThreadBreakdown);
  pFVar1 = (this->AggregatedFlatHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FComplexRawStatStackNode::DeleteAllChildrenNodes(&this->AggregatedHierarchyHistory);
  *(undefined4 *)&(this->AggregatedHierarchyHistory).Children.field_0x48 = 0;
  pvVar2 = *(void **)&(this->AggregatedHierarchyHistory).Children.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FComplexRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FComplexRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FComplexRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AggregatedHierarchyHistory).Children);
  *(undefined4 *)&(this->TotalAggregateInclusiveThreadBreakdown).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TotalAggregateInclusiveThreadBreakdown).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TotalAggregateInclusiveThreadBreakdown);
  pFVar1 = (this->TotalNonStackStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TotalAggregateInclusive).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRawStatStackNode::DeleteAllChildrenNodes(&this->TotalHierarchyInclusive);
  *(undefined4 *)&(this->TotalHierarchyInclusive).Children.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TotalHierarchyInclusive).Children.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TotalHierarchyInclusive).Children);
  *(undefined4 *)&(this->RootFilterCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RootFilterCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RootFilterCache);
  *(undefined4 *)&(this->History).field_0x48 = 0;
  pvVar2 = *(void **)&(this->History).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FHudFrame>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FHudFrame>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FHudFrame>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->History);
  *(undefined4 *)&(this->EnabledGroups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EnabledGroups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Get @ 1419fbe10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHUDGroupManager * __cdecl FHUDGroupManager::Get(FStatsThreadState *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar2 = _UNK_150631d98;
    uVar1 = ___xmm_00000000ffffffff0000008000000000;
    if (`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._48_8_ = _UNK_150631d98;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._0_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._48_8_ = _UNK_150631d98;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._8_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._48_8_ = _UNK_150631d98;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._32_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._64_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.EnabledGroups._72_4_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._0_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._8_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._32_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._64_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.History._72_4_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._0_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._8_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._32_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._64_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.RootFilterCache._72_4_ = 0;
      FRawStatStackNode::FRawStatStackNode
                (&`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
                  ::__l2::Singleton.TotalHierarchyInclusive);
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusive.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusive.ArrayNum = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusive.ArrayMax = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalNonStackStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalNonStackStats.ArrayNum = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalNonStackStats.ArrayMax = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._0_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._8_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._32_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._40_8_ = uVar1;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._48_8_ = uVar2;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._64_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.TotalAggregateInclusiveThreadBreakdown._72_4_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.ComplexStat.NameAndInfo.Index.Value = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._0_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._8_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._32_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._40_8_ = uVar1;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._48_8_ = uVar2;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._64_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedHierarchyHistory.Children._72_4_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistory.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistory.ArrayNum = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistory.ArrayMax = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._0_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._8_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._32_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._40_8_ = uVar1;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._48_8_ = uVar2;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._64_8_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedFlatHistoryThreadBreakdown._72_4_ = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedNonStackStatsHistory.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedNonStackStatsHistory.ArrayNum = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.AggregatedNonStackStatsHistory.ArrayMax = 0;
      FStatParams::FStatParams
                (&`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
                  ::__l2::Singleton.Params,(wchar_t *)0x0);
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.NumTotalStackFrames = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.LatestFrame = -2;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.bEnabled = false;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.NewFrameDelegateHandle.ID = 0;
      `public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
      ::__l2::Singleton.Stats = param_1;
      atexit(`FHUDGroupManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
              ::__l2::Singleton;
    }
  }
  return &`public:_static_struct_FHUDGroupManager&___ptr64___cdecl_FHUDGroupManager::Get(FStatsThreadState_const&___ptr64)'
          ::__l2::Singleton;
}

// GetStatsForGroup @ 141a04310

void __thiscall
FHUDGroupManager::GetStatsForGroup
          (FHUDGroupManager *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          ,FName param_2)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
  MultiFind<TSizedDefaultAllocator<32>_>(&this->Stats->Groups,param_2,&local_28,false);
  GetStatsForNames(this,param_1,&local_28);
  FVar1 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res14 = 0;
  local_res10 = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1,&local_res8,(bool *)&local_res10);
  FVar1 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res14 = 0;
  local_res10 = *(undefined4 *)CONCAT44(extraout_var_00,FVar1.Value);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1,&local_res8,(bool *)&local_res10);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetStatsForNames @ 141a04430

void __thiscall
FHUDGroupManager::GetStatsForNames
          (FHUDGroupManager *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          ,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  int iVar2;
  TTuple<FName,FStatMessage> *pTVar3;
  undefined1 *puVar4;
  FName *pFVar5;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined8 local_38;
  uint local_30;
  
  pFVar5 = (FName *)(param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar5 == pFVar1) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res20,(bool *)pFVar5);
    pTVar3 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                     *)&this->Stats->ShortNameToLongName,*pFVar5);
    puVar4 = &pTVar3->field_0x8;
    if (pTVar3 == (TTuple<FName,FStatMessage> *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    if (puVar4 != (undefined1 *)0x0) {
      local_38._4_4_ = *(uint *)(puVar4 + 8);
      local_30 = *(uint *)(puVar4 + 0xc) & 0x1ff;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (param_1,(FName *)&local_38,(bool *)((longlong)&local_38 + 4));
    }
    pFVar5 = pFVar5 + 1;
  }
  return;
}

// HandleCommand @ 141a04bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHUDGroupManager::HandleCommand(FHUDGroupManager *this,FStatParams *param_1,bool param_2)

{
  int *piVar1;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_00;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FName FVar5;
  undefined1 *puVar6;
  FStatsThreadState *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  TParsedValueWithDefault<EStatCompareBy::Type> TVar11;
  FNameEntryId FVar12;
  TParsedValueWithDefault<float> TVar13;
  bool bVar14;
  undefined2 uVar15;
  void *pvVar16;
  FHUDGroupManager *pFVar17;
  bool bVar18;
  int iVar19;
  FString *pFVar20;
  FString *pFVar21;
  TTuple<FName,FStatMessage> *pTVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  FBudgetData *pFVar24;
  FDelegateHandle FVar25;
  FName *pFVar26;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar27;
  FLatestGameThreadStatsData *pFVar28;
  undefined8 *puVar29;
  ulong64 uVar30;
  longlong lVar31;
  FName *pFVar32;
  ulonglong uVar33;
  ForAnyElementType FVar34;
  undefined1 *puVar35;
  wchar_t *pwVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  int iVar39;
  undefined1 *puVar40;
  uint *puVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  undefined1 auStackY_7d8 [32];
  bool local_778;
  bool local_777 [7];
  FName local_770;
  ForAnyElementType local_768;
  undefined8 local_760;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_758;
  FDelegateAllocation local_750;
  undefined1 local_740 [24];
  uint uStack_728;
  int iStack_724;
  int local_720;
  undefined4 uStack_71c;
  int iStack_718;
  undefined4 uStack_714;
  FScopeLock local_710;
  undefined8 local_708;
  FName local_700;
  undefined8 local_6f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f0;
  int local_6d0;
  FName local_6c8;
  FName local_6c0;
  undefined8 *local_6b8;
  FString local_6b0;
  int local_6a0;
  undefined1 local_69c [8];
  undefined1 local_694 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_688;
  undefined8 uStack_668;
  FHUDGroupManager *local_660;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_658;
  undefined8 uStack_638;
  FString local_630;
  FName *local_620;
  FInternalGroup *local_618;
  FString local_610;
  FName *local_600;
  FInternalGroup *local_5f8;
  FString local_5f0;
  undefined1 local_5e0 [24];
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  FName *local_5b0;
  FInternalGroup *local_5a8;
  FDestructionSentinel local_5a0;
  FName local_588;
  FName local_580;
  undefined1 local_578 [8];
  FString local_570;
  FString local_560 [3];
  undefined4 local_52c;
  undefined1 local_528 [32];
  void *local_508;
  undefined4 local_500;
  uint local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  ForElementType<FSetElementId> local_4e8;
  int local_4e0;
  undefined1 local_4d8 [32];
  void *local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  ForElementType<FSetElementId> local_4a0;
  ulonglong local_490;
  TAlignedBytes<8,8> local_488;
  FStatNameAndInfo local_480;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  ForElementType<FSetElementId> local_448;
  int local_440;
  undefined1 local_438 [40];
  int local_410;
  int local_40c;
  undefined1 local_408 [16];
  void *local_3f8;
  undefined4 local_3f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_3e8;
  FInternalGroup local_398;
  FInternalGroup local_278;
  FInternalGroup local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  bVar18 = param_1->bSlowMode;
  this_00 = &this->RootFilterCache;
  bVar2 = (this->Params).bSlowMode;
  TVar11.Value = (param_1->SortBy).Value;
  FVar12.Value = (param_1->Root).Value.ComparisonIndex.Value;
  FVar4 = param_1->BudgetSection;
  FVar5 = (this->Params).BudgetSection;
  (this->Params).Group.Value = (param_1->Group).Value;
  (this->Params).SortBy = (TParsedValueWithDefault<EStatCompareBy::Type>)TVar11.Value;
  (this->Params).Root.Value.ComparisonIndex = (FNameEntryId)FVar12.Value;
  uVar9 = *(undefined8 *)&(param_1->BudgetSection).Number;
  *(undefined8 *)&(this->Params).Root.Value.Number = *(undefined8 *)&(param_1->Root).Value.Number;
  *(undefined8 *)&(this->Params).BudgetSection.Number = uVar9;
  TVar13.Value = (param_1->CullMs).Value;
  (this->Params).MaxHierarchyDepth =
       (TParsedValueWithDefault<int>)(param_1->MaxHierarchyDepth).Value;
  (this->Params).CullMs = (TParsedValueWithDefault<float>)TVar13.Value;
  bVar14 = param_1->bSlowMode;
  uVar15 = *(undefined2 *)&param_1->field_0x2a;
  (this->Params).bReset = param_1->bReset;
  (this->Params).bSlowMode = bVar14;
  *(undefined2 *)&(this->Params).field_0x2a = uVar15;
  (this->Params).bReset = FVar5 != FVar4 || bVar2 != bVar18;
  bVar18 = 1 < *(int *)&(this->RootFilterCache).field_0x48;
  if (!bVar18) {
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar35 = &(this->RootFilterCache).field_0xc;
  iVar39 = 0;
  *(undefined4 *)&(this->RootFilterCache).field_0x8 = 0;
  if (*(int *)puVar35 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar35);
  }
  *(undefined4 *)&(this->RootFilterCache).field_0x34 = 0;
  *(undefined4 *)&(this->RootFilterCache).field_0x28 = 0;
  *(undefined4 *)&(this->RootFilterCache).field_0x30 = 0xffffffff;
  iVar19 = *(int *)&(this->RootFilterCache).field_0x2c;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)&(this->RootFilterCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RootFilterCache).field_0x10,0);
  }
  if (bVar18) {
    *(undefined4 *)&(this->RootFilterCache).field_0x48 = 1;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)this_00);
  }
  if ((this->Params).bReset != false) {
    iVar19 = *(int *)&(this->EnabledGroups).field_0x28;
    puVar35 = &(this->EnabledGroups).field_0x10;
    local_720 = 0;
    local_740._12_4_ = 1;
    iStack_724 = local_720;
    if (iVar19 != 0) {
      puVar41 = *(uint **)&(this->EnabledGroups).field_0x20;
      if (puVar41 == (uint *)0x0) {
        puVar41 = (uint *)puVar35;
      }
      local_740._12_4_ = *puVar41;
      local_720 = 0;
      iVar39 = 0;
      while (local_740._12_4_ == 0) {
        lVar31 = (longlong)iVar39;
        local_720 = local_720 + 0x20;
        iVar39 = iVar39 + 1;
        local_740._12_4_ = 1;
        iStack_724 = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar39) goto LAB_141a04d7e;
        local_740._12_4_ = puVar41[lVar31 + 1];
      }
      local_740._12_4_ = ~(local_740._12_4_ - 1) & local_740._12_4_;
      uVar33 = (ulonglong)(uint)local_740._12_4_ * 2 + 1;
      lVar31 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_6a0 = (int)lVar31;
      iStack_724 = local_6a0 + -1 + local_720;
      if (iVar19 < iStack_724) {
        iStack_724 = iVar19;
      }
    }
LAB_141a04d7e:
    uVar38 = *(uint *)&(this->EnabledGroups).field_0x28;
    uVar42 = uVar38 & 0xffffffe0;
    iStack_718 = *(int *)&(this->EnabledGroups).field_0x8 -
                 *(int *)&(this->EnabledGroups).field_0x34;
    local_740._8_4_ = iVar39;
    uStack_728 = 0xffffffff;
    uStack_71c = local_52c;
    TStack_688._padding_ = local_740._8_8_;
    iVar39 = (int)uVar38 >> 5;
    uStack_668 = CONCAT44(uStack_714,iStack_718);
    TStack_688.UnvisitedBitMask = 0xffffffff;
    TStack_688.CurrentBitIndex = iStack_724;
    TStack_688.BaseBitIndex = local_720;
    TStack_688._28_4_ = local_52c;
    local_740._16_8_ = puVar35;
    local_694._4_8_ = this;
    TStack_688.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
    if ((((int)uVar38 < 0) || (local_740._0_8_ = this, iVar19 < (int)uVar38)) &&
       (local_740._0_8_ = this,
       bVar18 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar3 = *(uint *)&(this->EnabledGroups).field_0x28;
    if (uVar38 != uVar3) {
      puVar6 = *(undefined1 **)&(this->EnabledGroups).field_0x20;
      puVar40 = puVar35;
      if (puVar6 != (undefined1 *)0x0) {
        puVar40 = puVar6;
      }
      uVar38 = -1 << ((byte)uVar38 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar39 * 4);
      while (uVar38 == 0) {
        lVar31 = (longlong)iVar39;
        uVar42 = uVar42 + 0x20;
        iVar39 = iVar39 + 1;
        uVar38 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar39)
        goto LAB_141a04e80;
        uVar38 = *(uint *)(puVar40 + lVar31 * 4 + 4);
      }
      uVar33 = (ulonglong)(~(uVar38 - 1) & uVar38) * 2 + 1;
      lVar31 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_6d0 = (int)lVar31;
      uVar38 = (uVar42 - 1) + local_6d0;
      if ((int)uVar3 < (int)uVar38) {
        uVar38 = uVar3;
      }
    }
LAB_141a04e80:
    while( true ) {
      uVar9 = local_694._4_8_;
      if (*(int *)&((TMap<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                     *)local_694._4_8_)->field_0x8 -
          *(int *)&((TMap<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                     *)local_694._4_8_)->field_0x34 != (int)uStack_668) {
        local_777[1] = false;
        `TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_777 + 1);
      }
      if (((TStack_688.CurrentBitIndex == uVar38) &&
          (TStack_688.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar35)) &&
         ((FHUDGroupManager *)uVar9 == this)) break;
      HandleToggleCommandBroadcast
                ((FName *)((longlong)TStack_688.CurrentBitIndex * 0x130 +
                          *(longlong *)
                           (TMap<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                            *)uVar9),local_777,&local_778);
      TStack_688.UnvisitedBitMask = TStack_688.UnvisitedBitMask & ~TStack_688._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_688);
    }
    bVar18 = 1 < *(int *)&(this->EnabledGroups).field_0x48;
    if (!bVar18) {
      TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->EnabledGroups).field_0x8);
    puVar6 = &(this->EnabledGroups).field_0xc;
    *(undefined4 *)&(this->EnabledGroups).field_0x8 = 0;
    if (*(int *)puVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,0,(ForAnyElementType *)this,0,(int *)puVar6);
    }
    *(undefined4 *)&(this->EnabledGroups).field_0x34 = 0;
    *(undefined4 *)&(this->EnabledGroups).field_0x30 = 0xffffffff;
    iVar39 = *(int *)&(this->EnabledGroups).field_0x2c;
    *(undefined4 *)&(this->EnabledGroups).field_0x28 = 0;
    if ((iVar39 < 0) || (0x80 < iVar39)) {
      *(undefined4 *)&(this->EnabledGroups).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar35,0);
    }
    if (bVar18) {
      *(undefined4 *)&(this->EnabledGroups).field_0x48 = 1;
      TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                *)this);
    }
    bVar18 = 1 < *(int *)&(this->History).field_0x48;
    if (!bVar18) {
      TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
                        *)&this->History);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,FHudFrame>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FHudFrame>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->History,0,*(int *)&(this->History).field_0x8);
    puVar35 = &(this->History).field_0xc;
    *(undefined4 *)&(this->History).field_0x8 = 0;
    if (*(int *)puVar35 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,0,(ForAnyElementType *)&this->History,0,(int *)puVar35);
    }
    *(undefined4 *)&(this->History).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->History).field_0x34 = 0;
    iVar39 = *(int *)&(this->History).field_0x2c;
    *(undefined4 *)&(this->History).field_0x28 = 0;
    if ((iVar39 < 0) || (0x80 < iVar39)) {
      *(undefined4 *)&(this->History).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->History).field_0x10,0);
    }
    if (bVar18) {
      *(undefined4 *)&(this->History).field_0x48 = 1;
      TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
                *)&this->History);
    }
    this->NumTotalStackFrames = 0;
  }
  TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
           *)&this->History,(this->Params).MaxHistoryFrames.Value + 1);
  pFVar20 = ::FName::GetPlainNameString((FName *)&this->Params,local_560);
  pFVar21 = ::FString::FString(&local_570,L"STATGROUP_");
  ::FString::ConcatFF(&local_6b0,pFVar21,pFVar20);
  FVar34.Data = (FScriptContainerElement *)L"";
  if (local_6b0.Data.ArrayNum != 0) {
    FVar34.Data = local_6b0.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_770,(wchar_t *)FVar34.Data);
  if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
  }
  if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data.AllocatorInstance.Data);
  }
  if (local_560[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560[0].Data.AllocatorInstance.Data);
  }
  bVar18 = HandleToggleCommandBroadcast(&local_770,local_777,&local_778);
  FVar4 = local_770;
  if (bVar18) {
    pFVar7 = this->Stats;
    uVar38 = ::GetTypeHash(local_770.ComparisonIndex.Value);
    FVar5 = local_770;
    uVar42 = local_770.Number;
    if (*(int *)&(pFVar7->Groups).field_0x8 != *(int *)&(pFVar7->Groups).field_0x34) {
      puVar35 = *(undefined1 **)&(pFVar7->Groups).field_0x40;
      if (puVar35 == (undefined1 *)0x0) {
        puVar35 = &(pFVar7->Groups).field_0x38;
      }
      iVar39 = *(int *)(puVar35 +
                       (ulonglong)
                       (*(int *)&(pFVar7->Groups).field_0x48 - 1U & FVar4.Number + uVar38) * 4);
      if (iVar39 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar7->Groups + (longlong)iVar39 * 0x18) == FVar4) {
            uVar38 = ::GetTypeHash(local_770.ComparisonIndex.Value);
            if (*(int *)&(this->EnabledGroups).field_0x8 ==
                *(int *)&(this->EnabledGroups).field_0x34) goto LAB_141a05400;
            puVar35 = *(undefined1 **)&(this->EnabledGroups).field_0x40;
            if (puVar35 == (undefined1 *)0x0) {
              puVar35 = &(this->EnabledGroups).field_0x38;
            }
            uVar38 = *(uint *)(puVar35 +
                              (ulonglong)
                              (*(int *)&(this->EnabledGroups).field_0x48 - 1U & uVar42 + uVar38) * 4
                              );
            if (uVar38 == 0xffffffff) goto LAB_141a05400;
            goto LAB_141a053e0;
          }
          iVar39 = *(int *)(*(longlong *)&pFVar7->Groups + 0x10 + (longlong)iVar39 * 0x18);
        } while (iVar39 != -1);
      }
    }
    if ((this->Params).bSlowMode == false) {
      if ((this->Params).BudgetSection != (FName)0x0) {
        if (*(int *)&(this->EnabledGroups).field_0x8 - *(int *)&(this->EnabledGroups).field_0x34 < 1
           ) {
          local_438._0_8_ = 0;
          local_438._8_8_ = 0;
          local_438._32_8_ = (FScriptContainerElement *)0x0;
          local_410 = 0;
          local_40c = 0x80;
          local_408._0_4_ = 0xffffffff;
          local_408._4_4_ = 0;
          local_3f8 = (void *)0x0;
          local_3f0 = 0;
          local_768.Data = (FScriptContainerElement *)0x0;
          local_760 = 0;
          local_488.Pad[0] = '\0';
          local_488.Pad[1] = '\0';
          local_488.Pad[2] = '\0';
          local_488.Pad[3] = '\0';
          local_488.Pad[4] = '\0';
          local_488.Pad[5] = '\0';
          local_488.Pad[6] = '\0';
          local_488.Pad[7] = '\0';
          local_480.Index.Value = 0;
          local_480.Number = 0;
          local_468 = 0;
          local_460 = 0;
          local_45c = 0x80;
          local_458 = 0xffffffff;
          local_454 = 0;
          local_448 = (ForElementType<FSetElementId>)0x0;
          local_440 = 0;
          FScopeLock::FScopeLock(&local_710,(TNotNull<UE::FWindowsRecursiveMutex_*>)0x154f11290);
          pFVar24 = TMapBase<FName,FBudgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBudgetData,0>_>
                    ::Find((TMapBase<FName,FBudgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBudgetData,0>_>
                            *)&BudgetStatMapping,(this->Params).BudgetSection);
          if (pFVar24 != (FBudgetData *)0x0) {
            iVar39 = (pFVar24->Stats).ArrayNum;
            pFVar37 = (pFVar24->Stats).AllocatorInstance.Data;
            pFVar43 = pFVar37 + (longlong)iVar39 * 0x10;
            while( true ) {
              if ((pFVar24->Stats).ArrayNum != iVar39) {
                local_777[3] = false;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_777 + 3);
              }
              if (pFVar37 == pFVar43) break;
              if (*(int *)(pFVar37 + 8) == 0) {
                pwVar36 = L"";
              }
              else {
                pwVar36 = *(wchar_t **)pFVar37;
              }
              pFVar26 = ::FName::FName(&local_580,pwVar36);
              if (((local_768.Data <= pFVar26) &&
                  (pFVar26 < (FName *)(local_768.Data + (longlong)local_760._4_4_ * 8))) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar19 = (int)local_760;
              if ((int)local_760 == local_760._4_4_) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_768,(int *)((longlong)&local_760 + 4));
              }
              pFVar37 = pFVar37 + 0x10;
              local_760 = CONCAT44(local_760._4_4_,iVar19 + 1);
              *(FName *)(local_768.Data + (longlong)iVar19 * 8) = *pFVar26;
            }
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&local_488,
                       &pFVar24->NonAccumulatingStats);
            TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
            operator=((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                       *)local_438,&pFVar24->ThreadBudgetMap);
          }
          if (local_710 != (FScopeLock)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)local_710);
            local_710 = (FScopeLock)0x0;
          }
          local_700 = (this->Params).BudgetSection;
          local_3e8.Elements._0_8_ = 0;
          local_3e8.Elements._8_8_ = 0;
          local_3e8.Elements._32_8_ = 0;
          local_3e8.Elements._40_4_ = 0;
          local_3e8.Elements._44_4_ = 0x80;
          local_3e8.Elements._48_1_ = 0xff;
          local_3e8.Elements._49_1_ = 0xff;
          local_3e8.Elements._50_1_ = 0xff;
          local_3e8.Elements._51_1_ = 0xff;
          local_3e8.Elements._52_1_ = '\0';
          local_3e8.Elements._53_1_ = '\0';
          local_3e8.Elements._54_1_ = '\0';
          local_3e8.Elements._55_1_ = '\0';
          local_3e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_3e8.HashSize = 0;
          ::FString::FString(&local_610,L"Budget");
          local_6f8 = 0;
          local_618 = FInternalGroup::FInternalGroup
                                (&local_158,(this->Params).BudgetSection,(FName)0x0,Flat,false,
                                 &local_3e8,&local_610,
                                 (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                                  *)local_438,
                                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                                 &local_488);
          local_620 = &local_700;
          TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FInternalGroup_&&>_>
                    ((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                      *)this,(TPairInitializer<FName_const_&,FInternalGroup_&&> *)local_694,
                     (bool *)&local_620);
          FInternalGroup::~FInternalGroup(&local_158);
          if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_610.Data.AllocatorInstance.Data);
          }
          HandleToggleCommandBroadcast(&local_700,local_777,&local_778);
          local_3e8.HashSize = 0;
          if (local_3e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_3e8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_3e8.Elements);
          local_440 = 0;
          if (local_448 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_448);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_488);
          if ((FName *)local_768.Data != (FName *)0x0) {
            FMemory::Free(local_768.Data);
          }
          local_3f0 = 0;
          if (local_3f8 != (void *)0x0) {
            FMemory::Free(local_3f8);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_438);
        }
        else {
          puVar35 = &(this->EnabledGroups).field_0x10;
          local_6f0._padding_._0_4_ = 0;
          local_6f0._padding_._4_4_ = 1;
          local_6f0.UnvisitedBitMask = 0xffffffff;
          local_6f0.CurrentBitIndex = 0;
          local_6f0.BaseBitIndex = 0;
          local_6f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
          if (*(int *)&(this->EnabledGroups).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f0);
          }
          local_740._8_8_ = CONCAT44(local_6f0._padding_._4_4_,(undefined4)local_6f0._padding_);
          iStack_724 = local_6f0.CurrentBitIndex;
          uStack_728 = local_6f0.UnvisitedBitMask;
          uStack_71c = local_6f0._28_4_;
          local_720 = local_6f0.BaseBitIndex;
          iStack_718 = *(int *)&(this->EnabledGroups).field_0x8 -
                       *(int *)&(this->EnabledGroups).field_0x34;
          local_740._16_8_ = local_6f0.Array;
          uStack_638 = CONCAT44(uStack_714,iStack_718);
          TStack_658.Array = local_6f0.Array;
          local_740._0_8_ = this;
          local_660 = this;
          TStack_658._padding_ = local_740._8_8_;
          TStack_658._16_8_ = _uStack_728;
          TStack_658._24_8_ = _local_720;
          pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_740,
                               (TBitArray<FDefaultBitArrayAllocator> *)puVar35,
                               *(int *)&(this->EnabledGroups).field_0x28);
          local_5e0._8_8_ = pTVar23->_padding_;
          pTVar10 = pTVar23->Array;
          uVar9._0_4_ = pTVar23->UnvisitedBitMask;
          uVar9._4_4_ = pTVar23->CurrentBitIndex;
          uStack_5c0 = *(undefined8 *)&pTVar23->BaseBitIndex;
          local_5e0._16_8_ = pTVar10;
          local_5c8 = (FDelegateAllocation *)uVar9;
          while( true ) {
            pFVar17 = local_660;
            if (*(int *)&(local_660->EnabledGroups).field_0x8 -
                *(int *)&(local_660->EnabledGroups).field_0x34 != (int)uStack_638) {
              local_777[2] = false;
              `TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_777 + 2);
            }
            if (((TStack_658.CurrentBitIndex == uVar9._4_4_) && (TStack_658.Array == pTVar10)) &&
               (pFVar17 == this)) break;
            HandleToggleCommandBroadcast
                      ((FName *)((longlong)TStack_658.CurrentBitIndex * 0x130 +
                                *(longlong *)&pFVar17->EnabledGroups),local_777,&local_778);
            TStack_658.UnvisitedBitMask = TStack_658.UnvisitedBitMask & ~TStack_658._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_658);
          }
          bVar18 = 1 < *(int *)&(this->EnabledGroups).field_0x48;
          if (!bVar18) {
            TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                              *)this);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)this,0,*(int *)&(this->EnabledGroups).field_0x8);
          puVar35 = &(this->EnabledGroups).field_0xc;
          *(undefined4 *)&(this->EnabledGroups).field_0x8 = 0;
          if (*(int *)puVar35 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x130,8,0,(ForAnyElementType *)this,0,(int *)puVar35);
          }
          *(undefined4 *)&(this->EnabledGroups).field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->EnabledGroups).field_0x34 = 0;
          iVar39 = *(int *)&(this->EnabledGroups).field_0x2c;
          *(undefined4 *)&(this->EnabledGroups).field_0x28 = 0;
          if ((iVar39 < 0) || (0x80 < iVar39)) {
            *(undefined4 *)&(this->EnabledGroups).field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EnabledGroups).field_0x10,0);
          }
          if (bVar18) {
            *(undefined4 *)&(this->EnabledGroups).field_0x48 = 1;
            TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                      *)this);
          }
          this->NumTotalStackFrames = 0;
        }
      }
    }
    else {
      uVar38 = ::GetTypeHash(local_770.ComparisonIndex.Value);
      if (*(int *)&(this->EnabledGroups).field_0x8 != *(int *)&(this->EnabledGroups).field_0x34) {
        puVar35 = *(undefined1 **)&(this->EnabledGroups).field_0x40;
        if (puVar35 == (undefined1 *)0x0) {
          puVar35 = &(this->EnabledGroups).field_0x38;
        }
        iVar39 = *(int *)(puVar35 +
                         (ulonglong)
                         (*(int *)&(this->EnabledGroups).field_0x48 - 1U & uVar42 + uVar38) * 4);
        if (iVar39 != -1) {
          do {
            if (*(FName *)((longlong)iVar39 * 0x130 + *(longlong *)&this->EnabledGroups) == FVar5) {
              local_6c0 = local_770;
              uVar38 = ::GetTypeHash(local_770.ComparisonIndex.Value);
              TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                                   *)this,local_770.Number + uVar38,&local_6c0);
              this->NumTotalStackFrames = 0;
              goto LAB_141a05c05;
            }
            iVar39 = *(int *)((longlong)iVar39 * 0x130 + 0x128 + *(longlong *)&this->EnabledGroups);
          } while (iVar39 != -1);
        }
      }
      local_4a0.InlineData[0] = '\0';
      local_4a0.InlineData[1] = '\0';
      local_4a0.InlineData[2] = '\0';
      local_4a0.InlineData[3] = '\0';
      local_4a0._padding_ = 0;
      local_4d8._16_8_ = 0;
      local_4d8._24_8_ = 0;
      local_490 = 0;
      local_4d8._0_8_ = (void *)0x0;
      local_4d8._8_8_ = 0;
      local_4b8 = (void *)0x0;
      local_4b0 = 0;
      local_4ac = 0x80;
      local_4a8 = 0xffffffff;
      local_4a4 = 0;
      local_4a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
      ::FString::FString(&local_630,L"Hierarchy for game and render");
      local_708 = 0;
      local_5a8 = FInternalGroup::FInternalGroup
                            (&local_278,local_770,(FName)0x0,Hierarchical,false,
                             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_4d8,
                             &local_630,
                             (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                              *)0x0,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0
                            );
      local_5b0 = &local_770;
      TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FInternalGroup_&&>_>
                ((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<FName_const_&,FInternalGroup_&&> *)(local_69c + 4),
                 (bool *)&local_5b0);
      FInternalGroup::~FInternalGroup(&local_278);
      if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_630.Data.AllocatorInstance.Data);
      }
      local_490 = local_490 & 0xffffffff00000000;
      if (local_4a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4a0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_4d8,0);
      if (local_4b8 != (void *)0x0) {
        FMemory::Free(local_4b8);
      }
      if ((void *)local_4d8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._0_8_);
      }
    }
  }
  else {
    bVar18 = 1 < *(int *)&(this->EnabledGroups).field_0x48;
    if (!bVar18) {
      TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->EnabledGroups).field_0x8);
    *(undefined4 *)&(this->EnabledGroups).field_0x8 = 0;
    if (*(int *)&(this->EnabledGroups).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,0,(ForAnyElementType *)this,0,(int *)&(this->EnabledGroups).field_0xc);
    }
    *(undefined4 *)&(this->EnabledGroups).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->EnabledGroups).field_0x34 = 0;
    iVar39 = *(int *)&(this->EnabledGroups).field_0x2c;
    *(undefined4 *)&(this->EnabledGroups).field_0x28 = 0;
    if ((iVar39 < 0) || (0x80 < iVar39)) {
      *(undefined4 *)&(this->EnabledGroups).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EnabledGroups).field_0x10,0);
    }
    if (bVar18) {
      *(undefined4 *)&(this->EnabledGroups).field_0x48 = 1;
      TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
                *)this);
    }
  }
LAB_141a05c05:
  if (*(int *)&(this->EnabledGroups).field_0x8 == *(int *)&(this->EnabledGroups).field_0x34) {
    if (this->bEnabled != false) {
      FVar25.ID = (this->NewFrameDelegateHandle).ID;
      if (FVar25.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &this->Stats->NewFrameDelegate,FVar25);
      }
      LOCK();
      FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + -1;
      UNLOCK();
      FThreadStats::CheckEnable();
      pvVar16 = ThreadLocalStoragePointer;
      uVar33 = (ulonglong)_tls_index;
      this->bEnabled = false;
      if ((*(int *)(*(longlong *)((longlong)pvVar16 + uVar33 * 8) + 0x9d4c) <
           `public:_void___cdecl_FHUDGroupManager::HandleCommand(FStatParams_const&___ptr64,bool)___ptr64'
           ::__l78::_thread_safe_static_guard_3__) &&
         (_Init_thread_header(&`public:_void___cdecl_FHUDGroupManager::HandleCommand(FStatParams_const&___ptr64,bool)___ptr64'
                               ::__l78::_thread_safe_static_guard_3__),
         `public:_void___cdecl_FHUDGroupManager::HandleCommand(FStatParams_const&___ptr64,bool)___ptr64'
         ::__l78::_thread_safe_static_guard_3__ == -1)) {
        _StatPtr_STAT_FSimpleDelegateGraphTask_StatsToGame =
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)0x0;
        FThreadSafeStaticStatInner<`FHUDGroupManager::HandleCommand'::__l78::FStat_STAT_FSimpleDelegateGraphTask_StatsToGame,1>
        ::GetStatId(&`public:_void___cdecl_FHUDGroupManager::HandleCommand(FStatParams_const&___ptr64,bool)___ptr64'
                     ::__l78::StatPtr_STAT_FSimpleDelegateGraphTask_StatsToGame);
        _Init_thread_footer(&`public:_void___cdecl_FHUDGroupManager::HandleCommand(FStatParams_const&___ptr64,bool)___ptr64'
                             ::__l78::_thread_safe_static_guard_3__);
      }
      pTVar27 = _StatPtr_STAT_FSimpleDelegateGraphTask_StatsToGame;
      if (_StatPtr_STAT_FSimpleDelegateGraphTask_StatsToGame ==
          (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        pFVar26 = ::FName::FName(&local_588,"STAT_FSimpleDelegateGraphTask_StatsToGame");
        pTVar27 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &`public:_void___cdecl_FHUDGroupManager::HandleCommand(FStatParams_const&___ptr64,bool)___ptr64'
                                 ::__l78::StatPtr_STAT_FSimpleDelegateGraphTask_StatsToGame,*pFVar26
                                ,L"FSimpleDelegateGraphTask.StatsToGame","STATGROUP_TaskGraphTasks",
                                "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false
                                ,MCR_Invalid);
      }
      pFVar28 = FLatestGameThreadStatsData::Get();
      local_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_750.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_750.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_758,(FWriteAccessScope *)local_5e0);
      local_5c8 = &local_750;
      puVar29 = UE::Core::Private::DelegateAllocate(0x28,&local_750);
      if (puVar29 != (undefined8 *)0x0) {
        *puVar29 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
        ;
        puVar29[1] = 0;
        uVar30 = FDelegateHandle::GenerateNewID();
        puVar29[2] = uVar30;
        *puVar29 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_UFLatestGameThreadStatsData____A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
        ;
        puVar29[4] = FLatestGameThreadStatsData::NewData;
        puVar29[3] = pFVar28;
        if ((pFVar28 == (FLatestGameThreadStatsData *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InUserObject != nullptr && MethodPtr != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x1d8,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_5e0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_5e0._8_8_,(FDestructionSentinel *)local_5e0
                  );
      }
      FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_6b8,
                 (TStatIdData *)&local_758,pTVar27,MainQueue);
      if (local_6b8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_6b8 + 6);
        iVar39 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar39 == 1) {
          (**(code **)*local_6b8)(local_6b8,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_758,(FWriteAccessScope *)&local_5a0);
      if ((local_750.DelegateSize != 0) &&
         (local_750.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_750.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_750,0,0,0x10);
        local_750.DelegateSize = 0;
      }
      if (local_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
      }
      if (local_750.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_750.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_758.AccessDetector);
    }
  }
  else if (this->bEnabled == false) {
    this->bEnabled = true;
    FVar25 = TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
             AddRaw<FHUDGroupManager>
                       ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                         *)&this->Stats->NewFrameDelegate,(FHUDGroupManager *)local_578,
                        (pmf_e53c1297)this);
                    /* WARNING: Load size is inaccurate */
    (this->NewFrameDelegateHandle).ID = *FVar25.ID;
    LOCK();
    FThreadStats::PrimaryEnableCounter.Counter = FThreadStats::PrimaryEnableCounter.Counter + 1;
    UNLOCK();
    FThreadStats::CheckEnable();
  }
  return;
  while (uVar38 = pFVar26[0x25].ComparisonIndex.Value, uVar38 != 0xffffffff) {
LAB_141a053e0:
    pFVar26 = (FName *)((longlong)(int)uVar38 * 0x130 + *(longlong *)&this->EnabledGroups);
    if (*pFVar26 == FVar5) {
      pFVar32 = pFVar26 + 1;
      if (pFVar26 == (FName *)0x0) {
        pFVar32 = (FName *)0x0;
      }
      if (pFVar32 != (FName *)0x0) {
        if ((local_777[0] != false) && (local_778 == false)) {
          uVar38 = pFVar32[0x22].ComparisonIndex.Value;
          if (((uVar38 & 1) == 0) || (param_2)) {
            if (((uVar38 & 2) == 0) || (!param_2)) {
              TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
              ::Remove((TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                        *)this,local_770);
              this->NumTotalStackFrames = 0;
            }
            else {
              pFVar32[0x22].ComparisonIndex.Value = 1;
            }
          }
          else {
            pFVar32[0x22].ComparisonIndex.Value = 2;
          }
        }
        goto LAB_141a05c05;
      }
      break;
    }
  }
LAB_141a05400:
  local_528._0_8_ = (FScriptContainerElement *)0x0;
  local_528._8_8_ = 0;
  local_508 = (void *)0x0;
  local_500 = 0;
  local_4fc = 0x80;
  local_4f8 = 0xffffffff;
  local_4f4 = 0;
  local_4e8 = (ForElementType<FSetElementId>)0x0;
  local_4e0 = 0;
  GetStatsForGroup(this,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_528,
                   local_770);
  pTVar22 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                    *)&this->Stats->ShortNameToLongName,local_770);
  if ((pTVar22 == (TTuple<FName,FStatMessage> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar35 = &pTVar22->field_0x10;
  FStatNameAndInfo::GetGroupCategory((FStatNameAndInfo *)puVar35);
  FStatNameAndInfo::GetDescription((FStatNameAndInfo *)puVar35,&local_5f0);
  bVar18 = FStatNameAndInfo::GetSortByName((FStatNameAndInfo *)puVar35);
  local_5f8 = FInternalGroup::FInternalGroup
                        (&local_398,local_770,local_6c8,(param_2 ^ 1) + Hierarchical,bVar18,
                         (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_528,
                         &local_5f0,
                         (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                          *)0x0,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0);
  local_600 = &local_770;
  TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FInternalGroup_&&>_>
            ((TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,FInternalGroup_&&> *)local_69c,
             (bool *)&local_600);
  FInternalGroup::~FInternalGroup(&local_398);
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  local_4e0 = 0;
  if (local_4e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4e8);
  }
  bVar18 = local_528._12_4_ != 0;
  local_528._8_8_ = (ulonglong)(uint)local_528._12_4_ << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_528,0,(int *)(local_528 + 0xc));
  }
  local_4f8 = 0xffffffff;
  local_4f4 = 0;
  local_500 = 0;
  if (0x80 < local_4fc) {
    local_4fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_528 + 0x10),0);
  }
  if (local_508 != (void *)0x0) {
    FMemory::Free(local_508);
  }
  if ((FScriptContainerElement *)local_528._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_528._0_8_);
  }
  goto LAB_141a05c05;
}

// LazyInitBudgetGroup @ 141a07e70

void __thiscall FHUDGroupManager::LazyInitBudgetGroup(FHUDGroupManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInternalGroup *pFVar5;
  FBudgetData *pFVar6;
  FName *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar5 = TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
           ::Find((TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                   *)this,(this->Params).BudgetSection);
  if ((pFVar5 != (FInternalGroup *)0x0) &&
     (*(int *)&(pFVar5->EnabledItems).Elements.field_0x8 -
      *(int *)&(pFVar5->EnabledItems).Elements.field_0x34 < 1)) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&BudgetStatMapCS);
    pFVar6 = TMapBase<FName,FBudgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBudgetData,0>_>
             ::Find((TMapBase<FName,FBudgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBudgetData,0>_>
                     *)&BudgetStatMapping,(this->Params).BudgetSection);
    if (pFVar6 != (FBudgetData *)0x0) {
      pFVar9 = (pFVar6->Stats).AllocatorInstance.Data;
      iVar1 = (pFVar6->Stats).ArrayNum;
      pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar6->Stats).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar9 == pFVar10) break;
        if (*(int *)(pFVar9 + 8) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)pFVar9;
        }
        pFVar7 = ::FName::FName(&local_res10,pwVar8);
        if (((local_38.AllocatorInstance.Data <= pFVar7) &&
            (pFVar7 < (FName *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 8)))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = local_38.ArrayNum;
        if (local_38.ArrayNum == local_38.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
        }
        pFVar9 = pFVar9 + 0x10;
        local_38.ArrayNum = iVar4 + 1;
        *(FName *)(local_38.AllocatorInstance.Data + (longlong)iVar4 * 8) = *pFVar7;
      }
    }
    GetStatsForNames(this,&pFVar5->EnabledItems,&local_38);
    LeaveCriticalSection((LPCRITICAL_SECTION)&BudgetStatMapCS);
    if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// LinearizeSlowStackForItems @ 141a08160

void __thiscall
FHUDGroupManager::LinearizeSlowStackForItems
          (FHUDGroupManager *this,FComplexRawStatStackNode *param_1,
          TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  FComplexRawStatStackNode *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  undefined4 local_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  
  if (0 < param_4) {
    pFVar3 = (FComplexRawStatStackNode *)(param_2->AllocatorInstance).Data;
    if (((pFVar3 <= param_1) &&
        (param_1 < (FComplexRawStatStackNode *)(&pFVar3->ComplexStat + param_2->ArrayMax))) &&
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
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    lVar9 = (longlong)iVar8;
    param_2->ArrayNum = iVar8 + 1;
    uVar6 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 8);
    pFVar4 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar4 + lVar9 * 0x48) = *(undefined8 *)(param_1->ComplexStat).StatData.Pad;
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 8) = uVar6;
    uVar6 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x18);
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 0x10) =
         *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x10);
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 0x10 + 8) = uVar6;
    uVar6 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x28);
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 0x20) =
         *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x20);
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 0x20 + 8) = uVar6;
    uVar6 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x38);
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 0x30) =
         *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x30);
    *(undefined8 *)(pFVar4 + lVar9 * 0x48 + 0x30 + 8) = uVar6;
    *(FStatNameAndInfo *)(pFVar4 + lVar9 * 0x48 + 0x40) = (param_1->ComplexStat).NameAndInfo;
    pFVar4 = (param_3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&param_4) &&
        ((FScriptContainerElement *)&param_4 < pFVar4 + (longlong)param_3->ArrayMax * 4)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 4) = param_4;
  }
  iStack_58 = 0;
  iVar8 = *(int *)&(param_1->Children).field_0x28;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Children).field_0x10;
  uStack_54 = 1;
  local_40 = 0;
  iStack_44 = 0;
  if (iVar8 != 0) {
    puVar10 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)TStack_80.Array;
    }
    uVar2 = *puVar10;
    while (uVar2 == 0) {
      lVar9 = (longlong)iStack_58;
      local_40 = local_40 + 0x20;
      iStack_58 = iStack_58 + 1;
      iStack_44 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_141a0836d;
      uVar2 = puVar10[lVar9 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar9;
    if (iVar8 < iStack_44) {
      iStack_44 = iVar8;
    }
  }
LAB_141a0836d:
  uStack_48 = 0xffffffff;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = local_8c;
  TStack_80.BaseBitIndex = local_40;
  local_60 = &param_1->Children;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = iStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iStack_44 < iVar8) {
    do {
      LinearizeSlowStackForItems
                (this,*(FComplexRawStatStackNode **)
                       (*(longlong *)&param_1->Children + 8 +
                       (longlong)TStack_80.CurrentBitIndex * 0x18),param_2,param_3,param_4 + 1);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  return;
}

// LinearizeStackForItems @ 141a08430

void __thiscall
FHUDGroupManager::LinearizeStackForItems
          (FHUDGroupManager *this,FComplexRawStatStackNode *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,int param_5)

{
  FStatNameAndInfo *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  FComplexRawStatStackNode *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FStatNameAndInfo FVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  uint *puVar14;
  undefined4 local_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  
  uVar3 = (param_1->ComplexStat).NameAndInfo.Number;
  pFVar1 = &(param_1->ComplexStat).NameAndInfo;
  FVar7 = *pFVar1;
  uVar10 = ::GetTypeHash((FNameEntryId)(pFVar1->Index).Value);
  if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
    FVar13 = (param_2->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&param_2->Hash;
    }
    iVar11 = *(int *)((longlong)FVar13 +
                     (ulonglong)(param_2->HashSize - 1U & (uVar3 & 0x1ff) + uVar10) * 4);
    if (iVar11 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar11 * 0x10) ==
            ((ulonglong)FVar7 & 0x1ffffffffff)) {
          pFVar4 = (FComplexRawStatStackNode *)(param_3->AllocatorInstance).Data;
          if (((pFVar4 <= param_1) &&
              (param_1 < (FComplexRawStatStackNode *)(&pFVar4->ComplexStat + param_3->ArrayMax))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == param_3->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar12 = (longlong)iVar11;
          param_3->ArrayNum = iVar11 + 1;
          uVar8 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 8);
          pFVar5 = (param_3->AllocatorInstance).Data;
          *(undefined8 *)(pFVar5 + lVar12 * 0x48) =
               *(undefined8 *)(param_1->ComplexStat).StatData.Pad;
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 8) = uVar8;
          uVar8 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x18);
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 0x10) =
               *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x10);
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 0x10 + 8) = uVar8;
          uVar8 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x28);
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 0x20) =
               *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x20);
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 0x20 + 8) = uVar8;
          uVar8 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x38);
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 0x30) =
               *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x30);
          *(undefined8 *)(pFVar5 + lVar12 * 0x48 + 0x30 + 8) = uVar8;
          *(FStatNameAndInfo *)(pFVar5 + lVar12 * 0x48 + 0x40) = (param_1->ComplexStat).NameAndInfo;
          pFVar5 = (param_4->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&param_5) &&
              ((FScriptContainerElement *)&param_5 < pFVar5 + (longlong)param_4->ArrayMax * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = param_4->ArrayNum;
          if (iVar11 == param_4->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar11 + 1;
          *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar11 * 4) = param_5;
          break;
        }
        iVar11 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar11 * 0x10);
      } while (iVar11 != -1);
    }
  }
  iStack_58 = 0;
  iVar11 = *(int *)&(param_1->Children).field_0x28;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Children).field_0x10;
  uStack_54 = 1;
  local_40 = 0;
  iStack_44 = 0;
  if (iVar11 != 0) {
    puVar14 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_80.Array;
    }
    uVar3 = *puVar14;
    while (uVar3 == 0) {
      lVar12 = (longlong)iStack_58;
      local_40 = local_40 + 0x20;
      iStack_58 = iStack_58 + 1;
      iStack_44 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_141a086ad;
      uVar3 = puVar14[lVar12 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_54 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar12;
    if (iVar11 < iStack_44) {
      iStack_44 = iVar11;
    }
  }
LAB_141a086ad:
  uStack_48 = 0xffffffff;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = local_8c;
  TStack_80.BaseBitIndex = local_40;
  local_60 = &param_1->Children;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = iStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iStack_44 < iVar11) {
    do {
      LinearizeStackForItems
                (this,*(FComplexRawStatStackNode **)
                       (*(longlong *)&param_1->Children + 8 +
                       (longlong)TStack_80.CurrentBitIndex * 0x18),param_2,param_3,param_4,
                 param_5 + 1);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  return;
}

// NewFrame @ 141a0c1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHUDGroupManager::NewFrame(FHUDGroupManager *this,long64 param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  int *piVar2;
  TMap<FWindowsPlatformMemory::EMemoryCounterRegion,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWindowsPlatformMemory::EMemoryCounterRegion,FName,0>_>
  *pTVar3;
  TMap<__int64,FHudFrame,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>_>
  *pTVar4;
  undefined1 *puVar5;
  TMap<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  float fVar7;
  Type TVar8;
  FRawStatStackNode *pFVar9;
  FStatMessage *pFVar10;
  undefined8 uVar11;
  FName FVar12;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  ForElementType<FSetElementId> FVar15;
  uint *puVar16;
  FStatsThreadState *pFVar17;
  code *pcVar18;
  bool bVar19;
  bool bVar20;
  void *pvVar21;
  bool bVar22;
  bool bVar23;
  FNameEntryId FVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  TStatId TVar29;
  FHudFrame *pFVar30;
  longlong lVar31;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  TStatIdData *pTVar32;
  FString *pFVar33;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar34;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar35;
  FGameThreadStatsData *pFVar36;
  FGameThreadStatsData *pFVar37;
  TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *pTVar38;
  longlong lVar39;
  FName *pFVar40;
  FThreadSafeStaticStat<FStat_STAT_Accumulate> FVar41;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar42;
  undefined8 *puVar43;
  size_t sVar44;
  TTuple<FName,FStatMessage> *pTVar45;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar46;
  undefined8 *puVar47;
  ulong64 uVar48;
  TIterator *this_00;
  ulonglong uVar49;
  longlong *plVar50;
  ulonglong uVar51;
  ForElementType<FSetElementId> FVar52;
  ForAnyElementType FVar53;
  uint uVar54;
  wchar_t **ppwVar55;
  FGameThreadStatsData *pFVar56;
  longlong lVar57;
  FScriptContainerElement *pFVar58;
  longlong lVar59;
  TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar60;
  wchar_t *pwVar61;
  uint uVar62;
  int iVar63;
  uint *puVar64;
  FRawStatStackNode *this_01;
  FScriptContainerElement *pFVar65;
  FHUDGroupManager *this_02;
  FHUDGroupManager *pFVar66;
  longlong lVar67;
  FName FVar68;
  undefined1 auStackY_9c8 [32];
  FIdentityFunctor local_968;
  FIdentityFunctor local_967;
  FIdentityFunctor local_966;
  FIdentityFunctor local_965 [5];
  FHudFrame *local_960;
  undefined1 local_958;
  undefined1 local_957;
  undefined1 local_956;
  undefined1 local_955;
  FIdentityFunctor local_954;
  FIdentityFunctor local_953 [3];
  FGameThreadStatsData *local_950;
  FHUDGroupManager *local_948;
  FName local_940;
  undefined8 local_938;
  FName local_930;
  long64 local_928;
  FStatDurationComparer<FRawStatStackNode> local_920;
  undefined1 local_91f;
  undefined1 local_91e;
  FStatNameComparer<FRawStatStackNode> local_91d;
  undefined1 local_91c;
  FStatCallCountComparer<FRawStatStackNode> local_91b;
  undefined1 local_91a;
  undefined1 local_919;
  undefined1 local_918;
  undefined2 local_917;
  uint local_914;
  FName local_910;
  FHUDGroupManager *local_908;
  undefined8 uStack_900;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  int local_8e0;
  undefined4 uStack_8dc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8d8;
  FDelegateAllocation local_8d0;
  longlong local_8c0;
  undefined8 *local_8b8;
  FColor_u_0 local_8b0 [2];
  FName local_8a8;
  byte local_8a0;
  FScriptContainerElement *local_898;
  FString local_890;
  FColor_u_0 local_880 [2];
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> local_878;
  FString local_868;
  FName local_858;
  byte local_850;
  FScriptContainerElement *local_848;
  int *piStack_840;
  char *local_838;
  FName local_828;
  undefined4 local_820;
  uint uStack_81c;
  undefined4 local_818;
  uint uStack_814;
  FName local_810;
  FString local_808;
  FName local_7f8;
  undefined4 local_7f0;
  uint uStack_7ec;
  undefined4 local_7e8;
  uint uStack_7e4;
  FName local_7e0;
  FName local_7d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7c0;
  FString local_7a0;
  TMap<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
  *local_790;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_788;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_768;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_748;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_728;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_708;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6e8;
  longlong *local_6c8;
  undefined1 auStack_6c0 [16];
  uint uStack_6b0;
  uint uStack_6ac;
  longlong local_6a8;
  TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
  *pTStack_6a0;
  FGameThreadStatsData *local_698;
  char local_690;
  char cStack_68f;
  TMap<__int64,FHudFrame,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>_>
  *local_688;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_680;
  TMap<FWindowsPlatformMemory::EMemoryCounterRegion,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWindowsPlatformMemory::EMemoryCounterRegion,FName,0>_>
  *local_660;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_658;
  FString local_638;
  undefined1 local_628 [4];
  undefined1 local_624 [4];
  undefined4 local_620;
  int local_61c;
  undefined1 local_618 [16];
  undefined8 local_608;
  FString local_600;
  FString local_5f0;
  TPairInitializer<FWindowsPlatformMemory::EMemoryCounterRegion_const_&,__int64_const_&> local_5e0;
  int *piStack_5d0;
  char *local_5c8;
  TPairInitializer<FName_const_&,TStatMessage<EComplexStatField>_const_*_&&> local_5c0;
  ulonglong local_5b0;
  FName local_5a8;
  FKeyComparisonClass<FNameLexicalLess> local_5a0;
  FName local_598;
  undefined1 local_590 [8];
  FName local_588;
  longlong local_580;
  undefined1 local_578 [8];
  FHUDGroupManager *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_568;
  TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
  *local_548;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_540;
  FScriptContainerElement *local_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_518;
  longlong local_4f8;
  undefined8 *local_4f0;
  longlong *local_4e8;
  undefined1 auStack_4e0 [16];
  uint uStack_4d0;
  uint uStack_4cc;
  longlong local_4c8;
  TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_4c0;
  TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_4b8;
  undefined2 local_4b0;
  undefined1 local_4a8 [12];
  uint local_49c;
  longlong local_498;
  uint local_490;
  int local_48c;
  TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_480;
  TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_478;
  bool local_470;
  bool local_46f;
  undefined1 local_468 [12];
  uint uStack_45c;
  TBitArray<FDefaultBitArrayAllocator> *local_458;
  undefined8 uStack_450;
  longlong local_448;
  undefined8 uStack_440;
  FSourceLocation local_438;
  FGroupFilter local_418;
  TRangedForIterator local_3e8;
  undefined1 local_3b8 [12];
  uint local_3ac;
  longlong local_3a8;
  uint local_3a0;
  int local_39c;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_390;
  bool local_380;
  longlong local_378;
  longlong *local_370;
  undefined1 *local_368;
  longlong *local_360;
  FString local_358;
  longlong local_348;
  FString *local_340;
  FString local_338;
  undefined1 local_328 [12];
  uint local_31c;
  longlong local_318;
  uint local_310;
  int local_30c;
  undefined1 local_2e8 [12];
  uint local_2dc;
  longlong local_2d8;
  uint local_2d0;
  int local_2cc;
  undefined1 local_2a8 [12];
  uint local_29c;
  longlong local_298;
  uint local_290;
  int local_28c;
  undefined1 local_268 [12];
  uint local_25c;
  longlong local_258;
  uint local_250;
  int local_24c;
  undefined1 local_228 [12];
  uint local_21c;
  longlong local_218;
  uint local_210;
  int local_20c;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FName local_1b0;
  undefined1 local_1a8 [16];
  FName local_198;
  FName local_190;
  FString local_188;
  FName local_178;
  FName local_170 [3];
  undefined1 local_158 [32];
  longlong local_138;
  TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
  *pTStack_130;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_100;
  FString local_f8 [2];
  undefined4 local_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a8;
  wchar_t *local_58 [3];
  wchar_t *local_40;
  
  local_40 = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStackY_9c8);
  pFVar58 = (FScriptContainerElement *)0x0;
  local_910 = (FName)((ulonglong)local_910 & 0xffffffff00000000);
  local_948 = this;
  local_928 = param_1;
  TVar29 = FThreadSafeStaticStatInner<FStat_STAT_HUDGroup,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_HUDGroup,1> *)&StatPtr_STAT_HUDGroup);
  local_438.Impl._Line = 0x47e;
  local_438.Impl._Column = 3;
  local_438.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
  ;
  local_438.Impl._Function = "void __cdecl FHUDGroupManager::NewFrame(__int64)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_858,*(TStatIdData **)&(TVar29.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_438);
  if ((this->bEnabled == false) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("bEnabled",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
                          ,0x47f,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  local_950 = (FGameThreadStatsData *)&this->History;
  pFVar30 = TMapBase<__int64,FHudFrame,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>_>
            ::FindOrAddImpl<__int64_const_&>
                      ((TMapBase<__int64,FHudFrame,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>_>
                        *)local_950,(int)((ulonglong)local_928 >> 0x20) * 0x17 + (int)local_928,
                       &local_928);
  local_5c0.Value = *(TStatMessage<EComplexStatField> ***)&(this->Params).Root.Value;
  bVar22 = (FName)local_5c0.Value != (FName)0x0;
  local_960 = pFVar30;
  if (bVar22) {
    pFVar33 = ::FName::ToString((FName *)&local_5c0.Value,&local_188);
    pFVar58 = (pFVar33->Data).AllocatorInstance.Data;
  }
  else {
    local_608 = 0;
    pFVar33 = (FString *)(local_618 + 8);
  }
  (pFVar33->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_868.Data.ArrayNum = (pFVar33->Data).ArrayNum;
  local_868.Data.ArrayMax = (pFVar33->Data).ArrayMax;
  (pFVar33->Data).ArrayNum = 0;
  (pFVar33->Data).ArrayMax = 0;
  local_868.Data.AllocatorInstance.Data = pFVar58;
  if ((bVar22) && (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if ((!bVar22) && ((FString *)local_618._8_8_ != (FString *)0x0)) {
    FMemory::Free((void *)local_618._8_8_);
  }
  local_910 = (this->Params).BudgetSection;
  if ((this->Params).bSlowMode == false) {
    if (local_910 != (FName)0x0) {
      LazyInitBudgetGroup(this);
    }
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
    ::TIterator::TIterator
              ((TIterator *)local_328,
               (TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                *)this,false);
    pvVar21 = ThreadLocalStoragePointer;
    if (local_30c < *(int *)(local_318 + 0x18)) {
      uVar51 = (ulonglong)_tls_index;
      do {
        uVar11 = local_328._0_8_;
        lVar59 = (longlong)local_30c * 0x130;
        if (*(int *)(lVar59 + 0x80 + *(longlong *)local_328._0_8_) ==
            *(int *)(lVar59 + 0xac + *(longlong *)local_328._0_8_)) {
          if ((*(int *)(*(longlong *)((longlong)pvVar21 + uVar51 * 8) + 0x9d4c) <
               `public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::__l31::
               _thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'
                                   ::__l31::_thread_safe_static_guard_0__),
             `public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::__l31::
             _thread_safe_static_guard_0__ == -1)) {
            _StatPtr_STAT_GetStatsForGroup_EveryFrame = (TStatIdData *)0x0;
            FThreadSafeStaticStatInner<`FHUDGroupManager::NewFrame'::__l31::FStat_STAT_GetStatsForGroup_EveryFrame,1>
            ::GetStatId(&`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::__l31::
                         StatPtr_STAT_GetStatsForGroup_EveryFrame);
            _Init_thread_footer(&`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'
                                 ::__l31::_thread_safe_static_guard_0__);
          }
          pTVar32 = _StatPtr_STAT_GetStatsForGroup_EveryFrame;
          if (_StatPtr_STAT_GetStatsForGroup_EveryFrame == (TStatIdData *)0x0) {
            pFVar40 = ::FName::FName(&local_198,"STAT_GetStatsForGroup_EveryFrame");
            pTVar32 = FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'
                                  ::__l31::StatPtr_STAT_GetStatsForGroup_EveryFrame,*pFVar40,
                                 L"STAT_GetStatsForGroup_EveryFrame","STATGROUP_Quick",
                                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                                 MCR_Invalid);
          }
          FVar68 = *(FName *)&pTVar32->Name;
          bVar19 = false;
          bVar22 = false;
          local_7e0.ComparisonIndex.Value = 0;
          local_7e0.Number = 0;
          if ((FVar68.ComparisonIndex.Value.Value == 0) && (FVar68.Number == 0)) {
LAB_141a0c708:
            bVar20 = false;
            FVar68 = local_7e0;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_880[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_880[0]._s_0,(pTVar32->StatDescriptionAnsi).Ptr);
              bVar19 = false;
              bVar22 = true;
              if (-1 < CpuChannel->Enabled) {
                local_810.ComparisonIndex.Value = FVar68.ComparisonIndex.Value.Value;
                local_810.Number = FVar68.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_810,(pTVar32->StatDescriptionWide).Ptr,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
                           ,0x4ac);
                bVar19 = true;
                bVar22 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_141a0c708;
            local_930 = FVar68;
            local_7e0 = FVar68;
            FThreadStats::AddMessage(FVar68,CycleScopeStart);
            bVar20 = true;
          }
          this = local_948;
          lVar31 = *(longlong *)uVar11;
          GetStatsForGroup(local_948,
                           (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                           (lVar31 + 8 + lVar59),*(FName *)(lVar31 + lVar59));
          if (bVar22) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar19) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar20) {
            FThreadStats::AddMessage(FVar68,CycleScopeEnd);
          }
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&local_a8,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                   (*(longlong *)uVar11 + 8 + lVar59));
        local_310 = local_310 & ~local_31c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_328 + 8));
        pFVar30 = local_960;
      } while (local_30c < *(int *)(local_318 + 0x18));
    }
    TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
    ::TIterator::~TIterator((TIterator *)local_328);
    pFVar33 = ::FString::FString(local_f8,&local_868);
    local_418._padding_ = (longlong)&___7FGroupFilter__6B_;
    local_418.EnabledItems = &local_a8;
    ::FString::FString(&local_418.RootFilter,pFVar33);
    local_418.RootValidCount = (int)(local_418.RootFilter.Data.ArrayNum < 2);
    pFVar58 = (pFVar33->Data).AllocatorInstance.Data;
    local_418.HudGroupManager = this;
    if (pFVar58 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar58);
    }
    pFVar17 = this->Stats;
    pTVar34 = FStatsThreadState::GetCondensedHistory(pFVar17,local_928);
    this_01 = &pFVar30->HierarchyInclusive;
    FStatsThreadState::UncondenseStackStats
              (pFVar17,pTVar34,this_01,(IItemFilter *)&local_418,&pFVar30->NonStackStats);
    TVar29 = FThreadSafeStaticStatInner<FStat_STAT_GetFlatAggregates,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_GetFlatAggregates,1> *)
                        &StatPtr_STAT_GetFlatAggregates);
    local_848 = (FScriptContainerElement *)0x5000004ba;
    piStack_840 = (int *)0x1506cf270;
    local_838 = "void __cdecl FHUDGroupManager::NewFrame(__int64)";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_8a8,*(TStatIdData **)&(TVar29.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_848);
    pFVar17 = this->Stats;
    pTVar34 = FStatsThreadState::GetCondensedHistory(pFVar17,local_928);
    pFVar66 = (FHUDGroupManager *)&pFVar30->InclusiveAggregateThreadBreakdown;
    FStatsThreadState::GetInclusiveAggregateStackStats
              (pFVar17,pTVar34,&pFVar30->InclusiveAggregate,(IItemFilter *)&local_418,false,
               (TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                *)pFVar66);
    pFVar17 = this->Stats;
    pTVar34 = FStatsThreadState::GetCondensedHistory(pFVar17,local_928);
    FStatsThreadState::GetExclusiveAggregateStackStats
              (pFVar17,pTVar34,&pFVar30->ExclusiveAggregate,(IItemFilter *)&local_418,false);
    local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58[0] = L"TaskGraphThread";
    local_878.ArrayNum = 0;
    local_878.ArrayMax = 0;
    local_58[1] = L"Foreground Worker #";
    local_58[2] = L"Background Worker #";
    TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
    ::TIterator::TIterator
              ((TIterator *)local_4a8,
               (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                *)pFVar66,false);
    if (local_48c < *(int *)(local_498 + 0x18)) {
      do {
        iVar25 = local_48c;
        uVar11 = local_4a8._0_8_;
        lVar59 = (longlong)local_48c;
        FVar68 = FStatNameAndInfo::GetShortNameFrom((FName)local_1a8);
        ::FName::ToString((FName *)FVar68,&local_358);
        ppwVar55 = local_58;
        do {
          pwVar61 = *ppwVar55;
          if (pwVar61 == (wchar_t *)0x0) {
            iVar26 = 0;
          }
          else {
            sVar44 = wcslen(pwVar61);
            iVar26 = (int)sVar44;
          }
          bVar22 = ::FString::StartsWith(&local_358,pwVar61,iVar26,IgnoreCase);
          if (bVar22) {
            FStatsUtils::AddMergeStatArray
                      (&local_878,
                       (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)
                       (*(longlong *)uVar11 + 8 + lVar59 * 0x20));
            TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(local_480,iVar25);
            local_470 = true;
            break;
          }
          ppwVar55 = ppwVar55 + 1;
        } while (ppwVar55 != &local_40);
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        local_490 = local_490 & ~local_49c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4a8 + 8));
        this = local_948;
        pFVar30 = local_960;
      } while (local_48c < *(int *)(local_498 + 0x18));
    }
    if ((local_470 != false) && (local_46f != false)) {
      TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_478,
                          *(int *)&(local_478->Elements).field_0x8 -
                          *(int *)&(local_478->Elements).field_0x34,Default);
    }
    if (local_878.ArrayNum != 0) {
      pFVar40 = ::FName::FName(&local_190,L"MergedTaskGraphThreads");
      TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
      ::Emplace<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&>
                ((TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                  *)pFVar66,pFVar40,&local_878);
    }
    if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.AllocatorInstance.Data);
    }
    if ((local_8a0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_8a0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_8a0 & 4) != 0) {
      FThreadStats::AddMessage(local_8a8,CycleScopeEnd);
    }
    local_8a0 = 0;
    FGroupFilter::~FGroupFilter(&local_418);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
  }
  else {
    this_01 = &pFVar30->HierarchyInclusive;
    FStatsThreadState::UncondenseStackStats
              (this->Stats,local_928,this_01,(IItemFilter *)0x0,
               (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0);
    TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
    ::TIterator::TIterator
              ((TIterator *)local_3b8,
               (TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                *)&(pFVar30->HierarchyInclusive).Children,false);
    if (local_39c < *(int *)(local_3a8 + 0x18)) {
      do {
        iVar25 = local_39c;
        uVar11 = local_3b8._0_8_;
        lVar31 = (longlong)local_39c;
        lVar59 = *(longlong *)(*(longlong *)local_3b8._0_8_ + 8 + lVar31 * 0x18);
        local_818 = *(undefined4 *)(lVar59 + 8);
        uStack_814 = *(uint *)(lVar59 + 0xc) & 0x1ff;
        FStatNameAndInfo::GetShortNameFrom((FName)&local_5b0);
        FVar24 = FNameEntryId::FromValidEName((EName)local_628);
        uVar51 = local_5b0;
        if ((local_5b0 != *(uint *)CONCAT44(extraout_var,FVar24.Value)) &&
           (FVar24 = FNameEntryId::FromValidEName((EName)local_624),
           uVar51 != *(uint *)CONCAT44(extraout_var_00,FVar24.Value))) {
          pFVar9 = *(FRawStatStackNode **)(*(longlong *)uVar11 + 8 + lVar31 * 0x18);
          if (pFVar9 != (FRawStatStackNode *)0x0) {
            FRawStatStackNode::_scalar_deleting_destructor_(pFVar9,1);
          }
          TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_390,iVar25);
          local_380 = true;
        }
        local_3a0 = local_3a0 & ~local_3ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3b8 + 8));
        this = local_948;
      } while (local_39c < *(int *)(local_3a8 + 0x18));
    }
    TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
    ::TIterator::~TIterator((TIterator *)local_3b8);
    pFVar66 = (FHUDGroupManager *)&local_960->InclusiveAggregateThreadBreakdown;
    pFVar30 = local_960;
  }
  FRawStatStackNode::AddSelf(this_01);
  FRawStatStackNode::CullByCycles
            (this_01,(longlong)(__real_3f1a36e3068db8c0 / FGenericPlatformTime::SecondsPerCycle));
  FRawStatStackNode::CullByDepth(this_01,(this->Params).MaxHierarchyDepth.Value);
  pFVar9 = &this->TotalHierarchyInclusive;
  if (this->NumTotalStackFrames == 0) {
    FRawStatStackNode::operator=(pFVar9,this_01);
  }
  else {
    FRawStatStackNode::MergeAdd(pFVar9,this_01);
  }
  this_02 = local_948;
  pTVar34 = &local_948->TotalAggregateInclusive;
  if (local_948->NumTotalStackFrames == 0) {
    TArray<FStatMessage,TSizedDefaultAllocator<32>_>::operator=
              (pTVar34,&pFVar30->InclusiveAggregate);
    if ((FHUDGroupManager *)&this_02->TotalAggregateInclusiveThreadBreakdown != pFVar66) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(this_02->TotalAggregateInclusiveThreadBreakdown).field_0x38,
                 (int *)&(this_02->TotalAggregateInclusiveThreadBreakdown).field_0x48,
                 (ForElementType<FSetElementId> *)&(pFVar66->EnabledGroups).field_0x38,
                 *(int *)&(pFVar66->EnabledGroups).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this_02->TotalAggregateInclusiveThreadBreakdown,
                  (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pFVar66);
    }
  }
  else {
    FStatsUtils::AddMergeStatArray(pTVar34,&pFVar30->InclusiveAggregate);
    local_768._padding_._4_4_ = 1;
    local_768.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar66->EnabledGroups).field_0x10;
    local_768._padding_._0_4_ = 0;
    local_768.UnvisitedBitMask = 0xffffffff;
    local_768.CurrentBitIndex = 0;
    local_768.BaseBitIndex = 0;
    if (*(int *)&(pFVar66->EnabledGroups).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_768);
    }
    uStack_900 = CONCAT44(local_768._padding_._4_4_,(undefined4)local_768._padding_);
    uStack_8f0 = CONCAT44(local_768.CurrentBitIndex,local_768.UnvisitedBitMask);
    uStack_8e8 = CONCAT44(local_768._28_4_,local_768.BaseBitIndex);
    pTStack_8f8 = local_768.Array;
    TStack_568._padding_._0_4_ = (undefined4)local_768._padding_;
    TStack_568._padding_._4_4_ = local_768._padding_._4_4_;
    TStack_568.Array = local_768.Array;
    TStack_568.UnvisitedBitMask = local_768.UnvisitedBitMask;
    TStack_568.CurrentBitIndex = local_768.CurrentBitIndex;
    TStack_568.BaseBitIndex = local_768.BaseBitIndex;
    TStack_568._28_4_ = local_768._28_4_;
    iVar25 = local_768.CurrentBitIndex;
    local_908 = pFVar66;
    local_570 = pFVar66;
    if (local_768.CurrentBitIndex < (local_768.Array)->NumBits) {
      do {
        pFVar40 = (FName *)((longlong)iVar25 * 0x20 + *(longlong *)&local_570->EnabledGroups);
        FVar68 = *pFVar40;
        uVar54 = ::GetTypeHash(FVar68.ComparisonIndex.Value);
        pTVar35 = TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this_02->TotalAggregateInclusiveThreadBreakdown,
                             FVar68.Number + uVar54,pFVar40);
        FStatsUtils::AddMergeStatArray
                  (pTVar35,(TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(pFVar40 + 1));
        TStack_568.UnvisitedBitMask = TStack_568.UnvisitedBitMask & ~TStack_568._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_568);
        pFVar30 = local_960;
        iVar25 = TStack_568.CurrentBitIndex;
      } while (TStack_568.CurrentBitIndex < (TStack_568.Array)->NumBits);
    }
  }
  pTVar35 = &this_02->TotalNonStackStats;
  if (this_02->NumTotalStackFrames == 0) {
    TArray<FStatMessage,TSizedDefaultAllocator<32>_>::operator=(pTVar35,&pFVar30->NonStackStats);
  }
  else {
    FStatsUtils::AddMergeStatArray(pTVar35,&pFVar30->NonStackStats);
  }
  this_02->NumTotalStackFrames = this_02->NumTotalStackFrames + 1;
  if (local_910 != (FName)0x0) goto LAB_141a0d057;
  TVar8 = (this_02->Params).SortBy.Value;
  if (TVar8 == Sum) {
    FRawStatStackNode::Sort<FStatDurationComparer<FRawStatStackNode>_>(pFVar9,&local_920);
    AlgoImpl::
    IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatDurationComparer<FStatMessage>_>_>
              ((FStatMessage *)(pTVar34->AllocatorInstance).Data,
               (this_02->TotalAggregateInclusive).ArrayNum,local_968,
               (FStatDurationComparer<FStatMessage> *)&local_968);
    TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
    ::TIterator::TIterator
              ((TIterator *)local_2e8,
               (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                *)&this_02->TotalAggregateInclusiveThreadBreakdown,false);
    if (local_2cc < *(int *)(local_2d8 + 0x18)) {
      do {
        AlgoImpl::
        IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatDurationComparer<FStatMessage>_>_>
                  (*(FStatMessage **)((longlong)local_2cc * 0x20 + 8 + *(longlong *)local_2e8._0_8_)
                   ,*(int *)((longlong)local_2cc * 0x20 + 0x10 + *(longlong *)local_2e8._0_8_),
                   local_968,(FStatDurationComparer<FStatMessage> *)&local_91f);
        local_2d0 = local_2d0 & ~local_2dc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2e8 + 8));
      } while (local_2cc < *(int *)(local_2d8 + 0x18));
    }
    this_00 = (TIterator *)local_2e8;
LAB_141a0cf6b:
    TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
    ::TIterator::~TIterator(this_00);
  }
  else {
    if (TVar8 == CallCount) {
      FRawStatStackNode::Sort<FStatCallCountComparer<FRawStatStackNode>_>(pFVar9,&local_91b);
      AlgoImpl::
      IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatCallCountComparer<FStatMessage>_>_>
                ((FStatMessage *)(pTVar34->AllocatorInstance).Data,
                 (this_02->TotalAggregateInclusive).ArrayNum,local_967,
                 (FStatCallCountComparer<FStatMessage> *)&local_967);
      TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
      ::TIterator::TIterator
                ((TIterator *)local_2a8,
                 (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                  *)&this_02->TotalAggregateInclusiveThreadBreakdown,false);
      if (local_28c < *(int *)(local_298 + 0x18)) {
        do {
          AlgoImpl::
          IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatCallCountComparer<FStatMessage>_>_>
                    (*(FStatMessage **)
                      ((longlong)local_28c * 0x20 + 8 + *(longlong *)local_2a8._0_8_),
                     *(int *)((longlong)local_28c * 0x20 + 0x10 + *(longlong *)local_2a8._0_8_),
                     local_967,(FStatCallCountComparer<FStatMessage> *)&local_91e);
          local_290 = local_290 & ~local_29c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2a8 + 8));
        } while (local_28c < *(int *)(local_298 + 0x18));
      }
      this_00 = (TIterator *)local_2a8;
      goto LAB_141a0cf6b;
    }
    if (TVar8 == Name) {
      FRawStatStackNode::Sort<FStatNameComparer<FRawStatStackNode>_>(pFVar9,&local_91d);
      AlgoImpl::
      IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatNameComparer<FStatMessage>_>_>
                ((FStatMessage *)(pTVar34->AllocatorInstance).Data,
                 (this_02->TotalAggregateInclusive).ArrayNum,local_966,
                 (FStatNameComparer<FStatMessage> *)&local_966);
      TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
      ::TIterator::TIterator
                ((TIterator *)local_268,
                 (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                  *)&this_02->TotalAggregateInclusiveThreadBreakdown,false);
      if (local_24c < *(int *)(local_258 + 0x18)) {
        do {
          AlgoImpl::
          IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatNameComparer<FStatMessage>_>_>
                    (*(FStatMessage **)
                      ((longlong)local_24c * 0x20 + 8 + *(longlong *)local_268._0_8_),
                     *(int *)((longlong)local_24c * 0x20 + 0x10 + *(longlong *)local_268._0_8_),
                     local_966,(FStatNameComparer<FStatMessage> *)&local_91c);
          local_250 = local_250 & ~local_25c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_268 + 8));
        } while (local_24c < *(int *)(local_258 + 0x18));
      }
      this_00 = (TIterator *)local_268;
      goto LAB_141a0cf6b;
    }
  }
  iVar25 = 0;
  TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
  ::TIterator::TIterator
            ((TIterator *)local_228,
             (TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
              *)this_02,false);
  if (local_20c < *(int *)(local_218 + 0x18)) {
    do {
      iVar26 = iVar25 + 1;
      if (*(char *)((longlong)local_20c * 0x130 + 0x11c + *(longlong *)local_228._0_8_) == '\0') {
        iVar26 = iVar25;
      }
      iVar25 = iVar26;
      local_210 = local_210 & ~local_21c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_228 + 8));
    } while (local_20c < *(int *)(local_218 + 0x18));
  }
  TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
  ::TIterator::~TIterator((TIterator *)local_228);
  if ((iVar25 == *(int *)&(this_02->EnabledGroups).field_0x8 -
                 *(int *)&(this_02->EnabledGroups).field_0x34) || (TVar8 == Name)) {
    AlgoImpl::
    IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,FStatNameComparer<FStatMessage>_>_>
              ((FStatMessage *)(pTVar35->AllocatorInstance).Data,
               (this_02->TotalNonStackStats).ArrayNum,local_954,
               (FStatNameComparer<FStatMessage> *)&local_954);
  }
  else {
    iVar26 = (this_02->TotalNonStackStats).ArrayNum;
    pFVar10 = (FStatMessage *)(pTVar35->AllocatorInstance).Data;
    if (iVar25 == 0) {
      AlgoImpl::
      IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,_FHUDGroupManager::NewFrame_::__l2::FStatValueComparer>_>
                (pFVar10,iVar26,local_965[0],(FStatValueComparer *)local_965);
    }
    else {
      local_917 = 0;
      AlgoImpl::
      IntroSortInternal<FStatMessage,int,FIdentityFunctor,TDereferenceWrapper<FStatMessage,_FHUDGroupManager::NewFrame_::__l2::FStatNameAndValueComparer>_>
                (pFVar10,iVar26,local_965[0],(FStatNameAndValueComparer *)&local_917);
    }
  }
LAB_141a0d057:
  pFVar37 = local_950;
  pFVar56 = (FGameThreadStatsData *)0x0;
  if (1 < local_928 - this_02->LatestFrame) {
    TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
             *)local_950,(this_02->Params).MaxHistoryFrames.Value + 1);
  }
  this_02->LatestFrame = local_928;
  TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_158,
             (TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
              *)pFVar37);
  local_698 = pFVar37;
  local_690 = '\0';
  cStack_68f = '\0';
  stack0xfffffffffffff948 = local_158._16_16_;
  local_6c8 = (longlong *)local_158._0_8_;
  auStack_6c0._0_8_ = local_158._8_8_;
  local_6a8 = local_138;
  pTStack_6a0 = pTStack_130;
  uVar51 = local_158._24_8_ >> 0x20;
  if (local_158._28_4_ < *(int *)(local_158._16_8_ + 0x18)) {
    do {
      if ((this_02->Params).MaxHistoryFrames.Value <=
          (int)this_02->LatestFrame - *(int *)((longlong)(int)uVar51 * 0xf0 + *local_6c8)) {
        TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_6a0,(int)uVar51);
        local_690 = '\x01';
      }
      uStack_6b0 = uStack_6b0 & ~auStack_6c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_6c0);
      uVar51 = (ulonglong)uStack_6ac;
    } while ((int)uStack_6ac < *(int *)(auStack_6c0._8_8_ + 0x18));
    if ((local_690 != '\0') && (cStack_68f != '\0')) {
      TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
      ::ConditionalRehash((TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
                           *)local_698,
                          (local_698->ActiveStatGroups).Array.ArrayNum -
                          *(int *)&(local_698->PoolCapacity).field_0x4,Default);
    }
  }
  if (((this_02->Params).MaxHistoryFrames.Value <
       *(int *)&(this_02->History).field_0x8 - *(int *)&(this_02->History).field_0x34) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("History.Num() <= Params.MaxHistoryFrames.Get()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
                          ,0x660,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  uVar54 = *(int *)&(this_02->History).field_0x8 - *(int *)&(this_02->History).field_0x34;
  local_914 = uVar54;
  if (((this_02->Params).MaxHistoryFrames.Value < (int)uVar54) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumFrames <= Params.MaxHistoryFrames.Get()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
                          ,0x571,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  if (0 < (int)uVar54) {
    pFVar36 = ::operator_new(0x138);
    pFVar37 = pFVar56;
    if (pFVar36 != (FGameThreadStatsData *)0x0) {
      pFVar37 = FGameThreadStatsData::FGameThreadStatsData(pFVar36,false,GRenderStats);
    }
    pFVar36 = (FGameThreadStatsData *)(ulonglong)(local_868.Data.ArrayNum - 1);
    if (local_868.Data.ArrayNum == 0) {
      pFVar36 = pFVar56;
    }
    local_950 = pFVar37;
    ::FString::AssignRange
              (&pFVar37->RootFilter,(wchar_t *)local_868.Data.AllocatorInstance.Data,(int)pFVar36);
    FComplexRawStatStackNode::CopyNameHierarchy(&this_02->AggregatedHierarchyHistory,pFVar9);
    pFVar30 = (FHudFrame *)&this_02->AggregatedFlatHistory;
    local_960 = pFVar30;
    TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>::Reset
              ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)pFVar30,
               (this_02->TotalAggregateInclusive).ArrayNum);
    if (0 < (this_02->TotalAggregateInclusive).ArrayNum) {
      lVar59 = 0;
      do {
        uVar62 = (uint)pFVar56;
        uVar54 = 0;
        if ((int)uVar62 < (this_02->TotalAggregateInclusive).ArrayNum) {
          uVar54 = ~uVar62 >> 0x1f;
        }
        if ((uVar54 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar25 = (this_02->AggregatedFlatHistory).ArrayNum;
        pFVar58 = (this_02->TotalAggregateInclusive).AllocatorInstance.Data;
        if (iVar25 == (this_02->AggregatedFlatHistory).ArrayMax) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)pFVar30,
                              &(this_02->AggregatedFlatHistory).ArrayMax);
        }
        pFVar56 = (FGameThreadStatsData *)(ulonglong)(uVar62 + 1);
        (this_02->AggregatedFlatHistory).ArrayNum = iVar25 + 1;
        pFVar65 = (((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)pFVar30)
                  ->AllocatorInstance).Data;
        lVar31 = (longlong)iVar25;
        uVar11 = *(undefined8 *)(pFVar58 + lVar59 + 8);
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x40) = uVar11;
        lVar59 = lVar59 + 0x10;
        *(uint *)(pFVar65 + lVar31 * 0x48 + 0x44) =
             (uint)((ulonglong)uVar11 >> 0x20) & 0xfffff3ff | 0x200;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 8) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x10) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x18) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x20) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x28) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x30) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x38) = 0;
      } while ((int)(uVar62 + 1) < (this_02->TotalAggregateInclusive).ArrayNum);
    }
    local_910 = (FName)&this_02->AggregatedFlatHistoryThreadBreakdown;
    TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)local_910);
    local_748.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this_02->TotalAggregateInclusiveThreadBreakdown).field_0x10;
    local_548 = &this_02->TotalAggregateInclusiveThreadBreakdown;
    local_748._padding_._0_4_ = 0;
    local_748._padding_._4_4_ = 1;
    local_748.UnvisitedBitMask = 0xffffffff;
    local_748.CurrentBitIndex = 0;
    local_748.BaseBitIndex = 0;
    if (*(int *)&(this_02->TotalAggregateInclusiveThreadBreakdown).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_748);
    }
    FVar68 = local_910;
    uStack_900 = CONCAT44(local_748._padding_._4_4_,(undefined4)local_748._padding_);
    uStack_8f0._4_4_ = local_748.CurrentBitIndex;
    uStack_8f0._0_4_ = local_748.UnvisitedBitMask;
    uStack_8e8 = CONCAT44(local_748._28_4_,local_748.BaseBitIndex);
    pTStack_8f8 = local_748.Array;
    TStack_540._padding_._0_4_ = (undefined4)local_748._padding_;
    TStack_540._padding_._4_4_ = local_748._padding_._4_4_;
    TStack_540.Array = local_748.Array;
    TStack_540.UnvisitedBitMask = local_748.UnvisitedBitMask;
    TStack_540.CurrentBitIndex = local_748.CurrentBitIndex;
    TStack_540.BaseBitIndex = local_748.BaseBitIndex;
    TStack_540._28_4_ = local_748._28_4_;
    iVar25 = local_748.CurrentBitIndex;
    local_908 = (FHUDGroupManager *)local_548;
    if (local_748.CurrentBitIndex < (local_748.Array)->NumBits) {
      do {
        pTVar60 = local_548;
        lVar57 = (longlong)iVar25 * 0x20;
        pTVar38 = TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
                  ::Emplace<FName_const_&>
                            ((TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
                              *)FVar68,(FName *)(*(longlong *)local_548 + lVar57));
        lVar59 = *(longlong *)pTVar60;
        iVar25 = *(int *)(lVar59 + 0x10 + lVar57);
        lVar31 = *(longlong *)(lVar59 + 8 + lVar57);
        lVar67 = (longlong)iVar25 * 0x10 + lVar31;
        while( true ) {
          if (*(int *)(lVar59 + 0x10 + lVar57) != iVar25) {
            local_958 = 0;
            `TCheckedPointerIterator<FStatMessage_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_958);
          }
          if (lVar31 == lVar67) break;
          iVar26 = pTVar38->ArrayNum;
          if (iVar26 == pTVar38->ArrayMax) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&pTVar38->AllocatorInstance,&pTVar38->ArrayMax);
          }
          lVar39 = (longlong)iVar26;
          pTVar38->ArrayNum = iVar26 + 1;
          pFVar58 = (pTVar38->AllocatorInstance).Data;
          uVar11 = *(undefined8 *)(lVar31 + 8);
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x40) = uVar11;
          *(uint *)(pFVar58 + lVar39 * 0x48 + 0x44) =
               (uint)((ulonglong)uVar11 >> 0x20) & 0xfffff3ff | 0x200;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48) = 0;
          lVar31 = lVar31 + 0x10;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 8) = 0;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x10) = 0;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x18) = 0;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x20) = 0;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x28) = 0;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x30) = 0;
          *(undefined8 *)(pFVar58 + lVar39 * 0x48 + 0x38) = 0;
        }
        TStack_540.UnvisitedBitMask = TStack_540.UnvisitedBitMask & ~TStack_540._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_540);
        this_02 = local_948;
        pFVar30 = local_960;
        iVar25 = TStack_540.CurrentBitIndex;
      } while (TStack_540.CurrentBitIndex < (TStack_540.Array)->NumBits);
    }
    uVar54 = 0;
    pTVar38 = &this_02->AggregatedNonStackStatsHistory;
    TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>::Reset
              (pTVar38,(this_02->TotalNonStackStats).ArrayNum);
    if (0 < (this_02->TotalNonStackStats).ArrayNum) {
      lVar59 = 0;
      do {
        uVar62 = 0;
        if ((int)uVar54 < (this_02->TotalNonStackStats).ArrayNum) {
          uVar62 = ~uVar54 >> 0x1f;
        }
        if ((uVar62 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar25 = (this_02->AggregatedNonStackStatsHistory).ArrayNum;
        pFVar58 = (this_02->TotalNonStackStats).AllocatorInstance.Data;
        if (iVar25 == (this_02->AggregatedNonStackStatsHistory).ArrayMax) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&pTVar38->AllocatorInstance,
                              &(this_02->AggregatedNonStackStatsHistory).ArrayMax);
        }
        uVar54 = uVar54 + 1;
        (this_02->AggregatedNonStackStatsHistory).ArrayNum = iVar25 + 1;
        pFVar65 = (pTVar38->AllocatorInstance).Data;
        lVar31 = (longlong)iVar25;
        uVar11 = *(undefined8 *)(pFVar58 + lVar59 + 8);
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x40) = uVar11;
        lVar59 = lVar59 + 0x10;
        *(uint *)(pFVar65 + lVar31 * 0x48 + 0x44) =
             (uint)((ulonglong)uVar11 >> 0x20) & 0xfffff3ff | 0x200;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 8) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x10) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x18) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x20) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x28) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x30) = 0;
        *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x38) = 0;
      } while ((int)uVar54 < (this_02->TotalNonStackStats).ArrayNum);
      pFVar30 = (FHudFrame *)&this_02->AggregatedFlatHistory;
    }
    local_728.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this_02->History).field_0x10;
    pTVar4 = &this_02->History;
    local_728._padding_._0_4_ = 0;
    local_728._padding_._4_4_ = 1;
    local_728.UnvisitedBitMask = 0xffffffff;
    local_728.CurrentBitIndex = 0;
    local_728.BaseBitIndex = 0;
    if (*(int *)&(this_02->History).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_728);
    }
    uStack_900 = CONCAT44(local_728._padding_._4_4_,(undefined4)local_728._padding_);
    uStack_8f0._4_4_ = local_728.CurrentBitIndex;
    uStack_8f0._0_4_ = local_728.UnvisitedBitMask;
    uStack_8e8 = CONCAT44(local_728._28_4_,local_728.BaseBitIndex);
    pTStack_8f8 = local_728.Array;
    TStack_680._padding_._0_4_ = (undefined4)local_728._padding_;
    TStack_680._padding_._4_4_ = local_728._padding_._4_4_;
    TStack_680.Array = local_728.Array;
    TStack_680.UnvisitedBitMask = local_728.UnvisitedBitMask;
    TStack_680.CurrentBitIndex = local_728.CurrentBitIndex;
    TStack_680.BaseBitIndex = local_728.BaseBitIndex;
    TStack_680._28_4_ = local_728._28_4_;
    local_908 = (FHUDGroupManager *)pTVar4;
    local_688 = pTVar4;
    if (local_728.CurrentBitIndex < (local_728.Array)->NumBits) {
      pTVar6 = &this_02->AggregatedFlatHistoryThreadBreakdown;
      iVar25 = local_728.CurrentBitIndex;
      do {
        FVar41 = StatPtr_STAT_Accumulate;
        if (StatPtr_STAT_Accumulate == (FThreadSafeStaticStat<FStat_STAT_Accumulate>)0x0) {
          pFVar40 = ::FName::FName(&local_178,"STAT_Accumulate");
          FVar41 = (FThreadSafeStaticStat<FStat_STAT_Accumulate>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Accumulate,*pFVar40,
                              L"Accumulate","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System"
                              ,true,true,ST_int64,true,false,MCR_Invalid);
        }
        FVar68 = *(FName *)FVar41;
        bVar22 = false;
        bVar19 = false;
        local_7d0.ComparisonIndex.Value = 0;
        local_7d0.Number = 0;
        if ((FVar68.ComparisonIndex.Value.Value == 0) && (FVar68.Number == 0)) {
LAB_141a0d848:
          bVar20 = false;
          FVar68 = local_7d0;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_8b0[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_8b0[0]._s_0,(char *)*(FName *)((longlong)FVar41 + 0x10));
            bVar22 = false;
            bVar19 = true;
            if (-1 < CpuChannel->Enabled) {
              local_7f8.ComparisonIndex.Value = FVar68.ComparisonIndex.Value.Value;
              local_7f8.Number = FVar68.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_7f8,(wchar_t *)*(FName *)((longlong)FVar41 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
                         ,0x599);
              bVar22 = true;
              bVar19 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_141a0d848;
          local_930 = FVar68;
          local_7d0 = FVar68;
          FThreadStats::AddMessage(FVar68,CycleScopeStart);
          bVar20 = true;
        }
        pFVar65 = (FScriptContainerElement *)((longlong)iVar25 * 0xf0);
        lVar59 = *(longlong *)local_688;
        local_898 = pFVar65;
        FComplexRawStatStackNode::MergeAddAndMinMax
                  (&local_948->AggregatedHierarchyHistory,
                   (FRawStatStackNode *)(pFVar65 + lVar59 + 0x38));
        FComplexStatUtils::MergeAddAndMinMaxArray
                  ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)local_960,
                   (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(pFVar65 + lVar59 + 8),IncSum
                   ,IncMax,IncMin);
        local_7c0._padding_._4_4_ = 1;
        local_7c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar65 + lVar59 + 0xa8);
        local_7c0._padding_._0_4_ = 0;
        pFVar58 = pFVar65 + lVar59 + 0x98;
        local_7c0.UnvisitedBitMask = 0xffffffff;
        local_7c0.CurrentBitIndex = 0;
        local_7c0.BaseBitIndex = 0;
        if (*(int *)(pFVar65 + lVar59 + 0xc0) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7c0);
        }
        uStack_900 = CONCAT44(local_7c0._padding_._4_4_,(undefined4)local_7c0._padding_);
        uStack_8f0._4_4_ = local_7c0.CurrentBitIndex;
        uStack_8f0._0_4_ = local_7c0.UnvisitedBitMask;
        uStack_8e8 = CONCAT44(local_7c0._28_4_,local_7c0.BaseBitIndex);
        pTStack_8f8 = local_7c0.Array;
        TStack_518._padding_._0_4_ = (undefined4)local_7c0._padding_;
        TStack_518._padding_._4_4_ = local_7c0._padding_._4_4_;
        TStack_518.BaseBitIndex = local_7c0.BaseBitIndex;
        TStack_518._28_4_ = local_7c0._28_4_;
        TStack_518.Array = local_7c0.Array;
        TStack_518.UnvisitedBitMask = local_7c0.UnvisitedBitMask;
        TStack_518.CurrentBitIndex = local_7c0.CurrentBitIndex;
        local_908 = (FHUDGroupManager *)pFVar58;
        local_520 = pFVar58;
        if (local_7c0.CurrentBitIndex < (local_7c0.Array)->NumBits) {
          iVar25 = local_7c0.CurrentBitIndex;
          do {
            lVar31 = *(longlong *)local_520;
            FVar12 = *(FName *)((longlong)iVar25 * 0x20 + lVar31);
            local_5a8 = FVar12;
            uVar54 = ::GetTypeHash(FVar12.ComparisonIndex.Value);
            iVar26 = TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FName>
                               ((TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                 *)pTVar6,FVar12.Number + uVar54,&local_5a8);
            lVar57 = 0;
            if (((iVar26 == -1) ||
                (lVar57 = (longlong)iVar26 * 0x20 + *(longlong *)&pTVar6->field_0x0, lVar57 == 0))
               && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Pair != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                       ,0x288,L""), bVar23)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            FComplexStatUtils::MergeAddAndMinMaxArray
                      ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
                       (lVar57 + 8),
                       (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)
                       ((longlong)iVar25 * 0x20 + lVar31 + 8),IncSum,IncMax,IncMin);
            TStack_518.UnvisitedBitMask = TStack_518.UnvisitedBitMask & ~TStack_518._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_518);
            pFVar65 = local_898;
            iVar25 = TStack_518.CurrentBitIndex;
          } while (TStack_518.CurrentBitIndex < (TStack_518.Array)->NumBits);
        }
        FComplexStatUtils::MergeAddAndMinMaxArray
                  ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)local_960,
                   (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(pFVar65 + lVar59 + 0x18),
                   ExcSum,ExcMax,ExcMin);
        this_02 = local_948;
        FComplexStatUtils::MergeAddAndMinMaxArray
                  (&local_948->AggregatedNonStackStatsHistory,
                   (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(pFVar65 + lVar59 + 0x28),
                   IncSum,IncMax,IncMin);
        if (bVar19) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar20) {
          FThreadStats::AddMessage(FVar68,CycleScopeEnd);
        }
        TStack_680.UnvisitedBitMask = TStack_680.UnvisitedBitMask & ~TStack_680._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_680);
        pFVar30 = local_960;
        iVar25 = TStack_680.CurrentBitIndex;
      } while (TStack_680.CurrentBitIndex < (TStack_680.Array)->NumBits);
    }
    uVar54 = local_914;
    FComplexRawStatStackNode::Divide(&this_02->AggregatedHierarchyHistory,local_914);
    FComplexRawStatStackNode::CopyExclusivesFromSelf(&this_02->AggregatedHierarchyHistory);
    fVar7 = (this_02->Params).CullMs.Value;
    if (fVar7 != 0.0) {
      FComplexRawStatStackNode::CullByCycles
                (&this_02->AggregatedHierarchyHistory,
                 (longlong)
                 (fVar7 / (float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000)))
      ;
    }
    FComplexRawStatStackNode::CullByDepth
              (&this_02->AggregatedHierarchyHistory,(this_02->Params).MaxHierarchyDepth.Value);
    local_5a0.Predicate.Predicate = (TDereferenceWrapper<FName,FNameLexicalLess>)&local_91a;
    TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>::FKeyComparisonClass<FNameLexicalLess>_>
              ((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                *)&(this_02->AggregatedHierarchyHistory).Children,&local_5a0);
    FComplexStatUtils::DiviveStatArray
              ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)pFVar30,uVar54
               ,IncSum,IncAve);
    FComplexStatUtils::DiviveStatArray
              ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)pFVar30,uVar54
               ,ExcSum,ExcAve);
    FVar68 = local_910;
    TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_128,
               (TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_910);
    local_4b8 = (TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)FVar68;
    local_4b0 = 0;
    stack0xfffffffffffffb28 = local_128._16_16_;
    local_4e8 = (longlong *)local_128._0_8_;
    auStack_4e0._0_8_ = local_128._8_8_;
    local_4c8 = local_108;
    pTStack_4c0 = pTStack_100;
    uVar51 = local_128._24_8_ >> 0x20;
    if (local_128._28_4_ < *(int *)(local_128._16_8_ + 0x18)) {
      do {
        FComplexStatUtils::DiviveStatArray
                  ((TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
                   (*local_4e8 + 8 + (longlong)(int)uVar51 * 0x20),uVar54,IncSum,IncAve);
        uStack_4d0 = uStack_4d0 & ~auStack_4e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4e0);
        uVar51 = (ulonglong)uStack_4cc;
      } while ((int)uStack_4cc < *(int *)(auStack_4e0._8_8_ + 0x18));
      if (((char)local_4b0 != '\0') && (local_4b0._1_1_ != '\0')) {
        uVar62 = *(int *)&(local_4b8->Elements).field_0x8 -
                 *(int *)&(local_4b8->Elements).field_0x34;
        if (uVar62 < 4) {
          iVar25 = 1;
        }
        else {
          uVar51 = (ulonglong)((uVar62 >> 1) + 7) * 2 + 1;
          lVar59 = 0x3f;
          if (uVar51 != 0) {
            for (; uVar51 >> lVar59 == 0; lVar59 = lVar59 + -1) {
            }
          }
          local_620 = (undefined4)lVar59;
          iVar25 = 1 << ((byte)lVar59 & 0x1f);
        }
        if (((0 < (int)uVar62) && (local_4b8->HashSize < iVar25)) || (iVar25 < local_4b8->HashSize))
        {
          local_4b8->HashSize = iVar25;
          TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_4b8);
        }
      }
    }
    FComplexStatUtils::DiviveStatArray
              (&this_02->AggregatedNonStackStatsHistory,uVar54,IncSum,IncAve);
    uVar54 = *(int *)&(this_02->EnabledGroups).field_0x8 -
             *(int *)&(this_02->EnabledGroups).field_0x34;
    local_940.ComparisonIndex.Value = 0;
    local_940.Number = 0;
    local_938 = 0;
    if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
    }
    if (0 < (int)uVar54) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar54,(ForAnyElementType *)&local_940,0,(int *)((longlong)&local_938 + 4));
    }
    puVar5 = &(this_02->EnabledGroups).field_0x10;
    local_708._padding_._0_4_ = 0;
    local_708._padding_._4_4_ = 1;
    local_708.UnvisitedBitMask = 0xffffffff;
    local_708.CurrentBitIndex = 0;
    local_708.BaseBitIndex = 0;
    local_708.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
    if (*(int *)&(this_02->EnabledGroups).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_708);
    }
    uStack_900 = CONCAT44(local_708._padding_._4_4_,(undefined4)local_708._padding_);
    uStack_8f0 = CONCAT44(local_708.CurrentBitIndex,local_708.UnvisitedBitMask);
    uStack_8e8 = CONCAT44(local_708._28_4_,local_708.BaseBitIndex);
    local_8e0 = *(int *)&(this_02->EnabledGroups).field_0x8 -
                *(int *)&(this_02->EnabledGroups).field_0x34;
    pTStack_8f8 = local_708.Array;
    uStack_440._4_4_ = uStack_8dc;
    uStack_440._0_4_ = local_8e0;
    local_458 = local_708.Array;
    local_908 = this_02;
    local_468._0_8_ = this_02;
    unique0x10005130 = uStack_900;
    uStack_450 = uStack_8f0;
    local_448 = uStack_8e8;
    pTVar42 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_c8,(TBitArray<FDefaultBitArrayAllocator> *)puVar5,
                         *(int *)&(this_02->EnabledGroups).field_0x28);
    uStack_900 = pTVar42->_padding_;
    pTStack_8f8 = pTVar42->Array;
    uStack_8f0._0_4_ = pTVar42->UnvisitedBitMask;
    uStack_8f0._4_4_ = pTVar42->CurrentBitIndex;
    uStack_8e8 = *(longlong *)&pTVar42->BaseBitIndex;
    local_8e0 = *(int *)&(this_02->EnabledGroups).field_0x8 -
                *(int *)&(this_02->EnabledGroups).field_0x34;
    local_3e8._44_4_ = uStack_8dc;
    local_3e8.InitialNum = local_8e0;
    local_908 = this_02;
    local_3e8._padding_ = (longlong)this_02;
    local_3e8._padding_ = uStack_900;
    local_3e8._padding_ = (longlong)pTStack_8f8;
    local_3e8._padding_ = uStack_8f0;
    local_3e8._padding_ = uStack_8e8;
    bVar22 = TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_468,&local_3e8);
    if (bVar22) {
      do {
        local_8c0 = *(longlong *)
                     (TMap<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
                      *)local_468._0_8_ + (longlong)uStack_450._4_4_ * 0x130 + 8;
        if ((((ulonglong)local_940 <= &local_8c0) &&
            (&local_8c0 < (longlong *)((longlong)local_940 + (longlong)local_938._4_4_ * 8))) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar25 = local_938._0_4_;
        if (local_938._0_4_ == local_938._4_4_) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&local_940,
                              (int *)((longlong)&local_938 + 4));
        }
        local_938 = CONCAT44(local_938._4_4_,iVar25 + 1);
        *(longlong *)((longlong)local_940 + (longlong)iVar25 * 8) = local_8c0;
        uStack_450 = CONCAT44(uStack_450._4_4_,(uint)uStack_450 & ~uStack_45c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_468 + 8));
        bVar22 = TSparseArray<TSparseSetElement<TTuple<FName,FInternalGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_468,&local_3e8);
      } while (bVar22);
    }
    AlgoImpl::
    IntroSortInternal<FInternalGroup_const_*,int,FIdentityFunctor,TDereferenceWrapper<FInternalGroup_const_*,_FHUDGroupManager::NewFrame_::__l108::<lambda_1>_>_>
              ((FInternalGroup **)local_940,local_938._0_4_,local_953[0],(<lambda_1> *)local_953);
    uVar49 = (ulonglong)(int)local_938._0_4_;
    local_910.ComparisonIndex.Value = local_938._0_4_;
    local_588 = (FName)((longlong)local_940 + uVar49 * 8);
    uVar51 = uVar49;
    FVar68 = local_940;
    while( true ) {
      FVar12 = local_588;
      puVar47 = (undefined8 *)0x0;
      local_930 = FVar68;
      if ((int)uVar49 != (int)uVar51) {
        local_957 = 0;
        `TCheckedPointerIterator<FInternalGroup_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_957);
      }
      if (FVar68 == FVar12) break;
      pTVar13 = *(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)FVar68;
      pTVar1 = pTVar13 + 1;
      puVar43 = ::operator_new(0x150);
      pFVar37 = local_950;
      if (puVar43 != (undefined8 *)0x0) {
        puVar43[4] = 0;
        puVar43[5] = 0;
        puVar43[9] = 0;
        puVar43[0xb] = 0;
        puVar43[0x18] = 0;
        puVar43[0x19] = 0;
        puVar43[0x1d] = 0;
        puVar43[0x1f] = 0;
        puVar43[0x22] = 0;
        puVar43[0x23] = 0;
        puVar43[0x27] = 0;
        puVar43[0x29] = 0;
        puVar43[1] = 0;
        puVar43[3] = 0;
        *puVar43 = 0;
        puVar43[2] = 0;
        puVar43[6] = 0;
        *(undefined4 *)(puVar43 + 7) = 0;
        *(undefined4 *)((longlong)puVar43 + 0x3c) = 0x80;
        *(undefined4 *)(puVar43 + 8) = 0xffffffff;
        *(undefined4 *)((longlong)puVar43 + 0x44) = 0;
        puVar43[10] = 0;
        puVar43[0xc] = 0;
        puVar43[0xd] = 0;
        puVar43[0xe] = 0;
        puVar43[0xf] = 0;
        puVar43[0x10] = 0;
        puVar43[0x11] = 0;
        puVar43[0x12] = 0;
        puVar43[0x13] = 0;
        puVar43[0x14] = 0;
        puVar43[0x15] = 0;
        puVar43[0x16] = 0;
        puVar43[0x17] = 0;
        puVar43[0x1a] = 0;
        *(undefined4 *)(puVar43 + 0x1b) = 0;
        *(undefined4 *)((longlong)puVar43 + 0xdc) = 0x80;
        *(undefined4 *)(puVar43 + 0x1c) = 0xffffffff;
        *(undefined4 *)((longlong)puVar43 + 0xe4) = 0;
        puVar43[0x1e] = 0;
        puVar43[0x20] = 0;
        puVar43[0x21] = 0;
        puVar43[0x24] = 0;
        *(undefined4 *)(puVar43 + 0x25) = 0;
        *(undefined4 *)((longlong)puVar43 + 300) = 0x80;
        *(undefined4 *)(puVar43 + 0x26) = 0xffffffff;
        *(undefined4 *)((longlong)puVar43 + 0x134) = 0;
        puVar43[0x28] = 0;
        puVar47 = puVar43;
      }
      pFVar58 = (local_950->ActiveStatGroups).Array.AllocatorInstance.Data;
      local_8b8 = puVar47;
      if (((pFVar58 <= (FScriptContainerElement *)&local_8b8) &&
          ((FScriptContainerElement *)&local_8b8 <
           pFVar58 + (longlong)(local_950->ActiveStatGroups).Array.ArrayMax * 8)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      iVar25 = (pFVar37->ActiveStatGroups).Array.ArrayNum;
      piVar2 = &(pFVar37->ActiveStatGroups).Array.ArrayMax;
      if (iVar25 == *piVar2) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar37,piVar2);
      }
      (pFVar37->ActiveStatGroups).Array.ArrayNum = iVar25 + 1;
      *(undefined8 **)
       ((pFVar37->ActiveStatGroups).Array.AllocatorInstance.Data + (longlong)iVar25 * 8) = local_8b8
      ;
      iVar25 = (pFVar37->ActiveStatGroups).Array.ArrayNum;
      uVar62 = iVar25 - 1;
      uVar54 = 0;
      if ((int)uVar62 < iVar25) {
        uVar54 = ~uVar62 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      local_960 = *(FHudFrame **)
                   ((pFVar37->ActiveStatGroups).Array.AllocatorInstance.Data +
                   (longlong)(pFVar37->ActiveStatGroups).Array.ArrayNum * 8 + -8);
      pTVar14 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                (pFVar37->GroupNames).AllocatorInstance.Data;
      if (((pTVar14 <= pTVar1) &&
          (pTVar1 < (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                    ((pTVar14->Hash).InlineData +
                    (longlong)(pFVar37->GroupNames).ArrayMax * 8 + -0x38))) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      iVar25 = (pFVar37->GroupNames).ArrayNum;
      piVar2 = &(pFVar37->GroupNames).ArrayMax;
      if (iVar25 == *piVar2) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(pFVar37->GroupNames).AllocatorInstance,piVar2);
      }
      (pFVar37->GroupNames).ArrayNum = iVar25 + 1;
      puVar5 = &pTVar13[1].Elements.field_0x10;
      *(undefined8 *)((pFVar37->GroupNames).AllocatorInstance.Data + (longlong)iVar25 * 8) =
           *(undefined8 *)&pTVar1->Elements;
      pFVar58 = (pFVar37->GroupDescriptions).AllocatorInstance.Data;
      if (((pFVar58 <= puVar5) &&
          (puVar5 < pFVar58 + (longlong)(pFVar37->GroupDescriptions).ArrayMax * 0x10)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      iVar25 = (pFVar37->GroupDescriptions).ArrayNum;
      piVar2 = &(pFVar37->GroupDescriptions).ArrayMax;
      if (iVar25 == *piVar2) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar37->GroupDescriptions).AllocatorInstance,piVar2);
      }
      (pFVar37->GroupDescriptions).ArrayNum = iVar25 + 1;
      ::FString::FString((FString *)
                         ((pFVar37->GroupDescriptions).AllocatorInstance.Data +
                         (longlong)iVar25 * 0x10),(FString *)puVar5);
      pFVar30 = local_960;
      TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
                ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)&local_960[1].NonStackStats,
                 (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)&pTVar13[1].Elements.field_0x20);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 &(pFVar30->InclusiveAggregateThreadBreakdown).field_0x20,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 &pTVar13[2].Elements.field_0x20);
      if ((this_02->Params).bSlowMode == false) {
        if ((pTVar13[3].Elements.field_0x20 & 1) != 0) {
          LinearizeStackForItems
                    (this_02,&this_02->AggregatedHierarchyHistory,pTVar13,
                     (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
                     &(pFVar30->HierarchyInclusive).Children.field_0x20,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     &(pFVar30->HierarchyInclusive).Children.field_0x30,0);
        }
        if ((pTVar13[3].Elements.field_0x20 & 2) != 0) {
          uVar54 = 0;
          if (0 < (this_02->AggregatedFlatHistory).ArrayNum) {
            lVar59 = 0;
            do {
              uVar62 = 0;
              if ((int)uVar54 < (this_02->AggregatedFlatHistory).ArrayNum) {
                uVar62 = ~uVar54 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pFVar58 = (this_02->AggregatedFlatHistory).AllocatorInstance.Data + lVar59;
              uVar62 = *(uint *)(pFVar58 + 0x44);
              uVar51 = *(ulonglong *)(pFVar58 + 0x40);
              uVar27 = ::GetTypeHash((FNameEntryId)*(uint *)(pFVar58 + 0x40));
              pFVar30 = local_960;
              if (*(int *)&(pTVar13->Elements).field_0x8 != *(int *)&(pTVar13->Elements).field_0x34)
              {
                FVar15 = (pTVar13->Hash).SecondaryData;
                FVar52 = (ForElementType<FSetElementId>)&pTVar13->Hash;
                if (FVar15 != (ForElementType<FSetElementId>)0x0) {
                  FVar52 = FVar15;
                }
                iVar25 = *(int *)((longlong)FVar52 +
                                 (ulonglong)(pTVar13->HashSize - 1U & uVar27 + (uVar62 & 0x1ff)) * 4
                                 );
                if (iVar25 != -1) {
                  do {
                    if (*(ulonglong *)(*(longlong *)&pTVar13->Elements + (longlong)iVar25 * 0x10) ==
                        (uVar51 & 0x1ffffffffff)) {
                      pFVar65 = (local_960->InclusiveAggregate).AllocatorInstance.Data;
                      if (((pFVar65 <= pFVar58) &&
                          (pFVar58 < pFVar65 + (longlong)(local_960->InclusiveAggregate).ArrayMax *
                                               0x48)) &&
                         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar22)) {
                        pcVar18 = (code *)swi(3);
                        (*pcVar18)();
                        return;
                      }
                      iVar25 = (pFVar30->InclusiveAggregate).ArrayNum;
                      piVar2 = &(pFVar30->InclusiveAggregate).ArrayMax;
                      if (iVar25 == *piVar2) {
                        iVar25 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x848,(ForAnyElementType *)pFVar30,piVar2);
                      }
                      lVar31 = (longlong)iVar25;
                      (pFVar30->InclusiveAggregate).ArrayNum = iVar25 + 1;
                      uVar11 = *(undefined8 *)(pFVar58 + 8);
                      pFVar65 = (pFVar30->InclusiveAggregate).AllocatorInstance.Data;
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48) = *(undefined8 *)pFVar58;
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 8) = uVar11;
                      uVar11 = *(undefined8 *)(pFVar58 + 0x18);
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x10) =
                           *(undefined8 *)(pFVar58 + 0x10);
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x10 + 8) = uVar11;
                      uVar11 = *(undefined8 *)(pFVar58 + 0x28);
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x20) =
                           *(undefined8 *)(pFVar58 + 0x20);
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x20 + 8) = uVar11;
                      uVar11 = *(undefined8 *)(pFVar58 + 0x38);
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x30) =
                           *(undefined8 *)(pFVar58 + 0x30);
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x30 + 8) = uVar11;
                      *(undefined8 *)(pFVar65 + lVar31 * 0x48 + 0x40) =
                           *(undefined8 *)(pFVar58 + 0x40);
                      break;
                    }
                    iVar25 = *(int *)(*(longlong *)&pTVar13->Elements + 8 + (longlong)iVar25 * 0x10)
                    ;
                  } while (iVar25 != -1);
                }
              }
              uVar54 = uVar54 + 1;
              lVar59 = lVar59 + 0x48;
            } while ((int)uVar54 < (this_02->AggregatedFlatHistory).ArrayNum);
          }
          local_908 = (FHUDGroupManager *)&this_02->AggregatedFlatHistoryThreadBreakdown;
          iVar63 = 0;
          iVar25 = *(int *)&(this_02->AggregatedFlatHistoryThreadBreakdown).field_0x28;
          pTStack_8f8 = (TBitArray<FDefaultBitArrayAllocator> *)
                        &(this_02->AggregatedFlatHistoryThreadBreakdown).field_0x10;
          uVar54 = 1;
          iVar26 = 0;
          iVar28 = 0;
          if (iVar25 != 0) {
            puVar16 = *(uint **)&(this_02->AggregatedFlatHistoryThreadBreakdown).field_0x20;
            puVar64 = (uint *)pTStack_8f8;
            if (puVar16 != (uint *)0x0) {
              puVar64 = puVar16;
            }
            uVar62 = *puVar64;
            iVar26 = 0;
            while (uVar62 == 0) {
              lVar59 = (longlong)iVar63;
              iVar26 = iVar26 + 0x20;
              iVar63 = iVar63 + 1;
              iVar28 = iVar25;
              if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar63)
              goto LAB_141a0e5b0;
              uVar62 = puVar64[lVar59 + 1];
            }
            uVar54 = -uVar62 & uVar62;
            uVar51 = (ulonglong)uVar54 * 2 + 1;
            lVar59 = 0x3f;
            if (uVar51 != 0) {
              for (; uVar51 >> lVar59 == 0; lVar59 = lVar59 + -1) {
              }
            }
            local_61c = (int)lVar59;
            iVar28 = local_61c + -1 + iVar26;
            if (iVar25 < iVar28) {
              iVar28 = iVar25;
            }
          }
LAB_141a0e5b0:
          uStack_900 = CONCAT44(uVar54,iVar63);
          uStack_8f0 = CONCAT44(iVar28,0xffffffff);
          uStack_8e8 = CONCAT44(local_cc,iVar26);
          TStack_788._padding_ = uStack_900;
          TStack_788._24_8_ = uStack_8e8;
          TStack_788.UnvisitedBitMask = 0xffffffff;
          TStack_788.CurrentBitIndex = iVar28;
          pFVar30 = local_960;
          local_790 = (TMap<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
                       *)local_908;
          TStack_788.Array = pTStack_8f8;
          if (iVar28 < iVar25) {
            do {
              pTVar6 = local_790;
              lVar31 = (longlong)iVar28 * 0x20;
              lVar59 = *(longlong *)&local_790->field_0x0;
              local_914 = *(uint *)(lVar31 + 0x10 + lVar59);
              uVar51 = (ulonglong)(int)local_914;
              pFVar58 = *(FScriptContainerElement **)(lVar31 + 8 + lVar59);
              local_898 = pFVar58 + uVar51 * 0x48;
              while( true ) {
                pFVar65 = local_898;
                if (*(int *)(lVar31 + 0x10 + lVar59) != (int)uVar51) {
                  local_956 = 0;
                  `TCheckedPointerIterator<TStatMessage<EComplexStatField>_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_956);
                }
                if (pFVar58 == pFVar65) break;
                uVar54 = *(uint *)(pFVar58 + 0x44);
                uVar51 = *(ulonglong *)(pFVar58 + 0x40);
                uVar62 = ::GetTypeHash((FNameEntryId)*(uint *)(pFVar58 + 0x40));
                if (*(int *)&(pTVar13->Elements).field_0x8 ==
                    *(int *)&(pTVar13->Elements).field_0x34) {
LAB_141a0e7d3:
                  uVar51 = (ulonglong)local_914;
                  pFVar58 = pFVar58 + 0x48;
                }
                else {
                  FVar15 = (pTVar13->Hash).SecondaryData;
                  FVar52 = (ForElementType<FSetElementId>)&pTVar13->Hash;
                  if (FVar15 != (ForElementType<FSetElementId>)0x0) {
                    FVar52 = FVar15;
                  }
                  iVar25 = *(int *)((longlong)FVar52 +
                                   (ulonglong)(pTVar13->HashSize - 1U & uVar62 + (uVar54 & 0x1ff)) *
                                   4);
                  if (iVar25 == -1) goto LAB_141a0e7d3;
                  do {
                    if (*(ulonglong *)(*(longlong *)&pTVar13->Elements + (longlong)iVar25 * 0x10) ==
                        (uVar51 & 0x1ffffffffff)) {
                      pFVar40 = (FName *)((longlong)TStack_788.CurrentBitIndex * 0x20 +
                                         *(longlong *)&pTVar6->field_0x0);
                      FVar68 = *pFVar40;
                      uVar54 = ::GetTypeHash(FVar68.ComparisonIndex.Value);
                      pTVar38 = TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
                                ::FindOrAddImpl<FName_const_&>
                                          ((TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
                                            *)&local_960->ExclusiveAggregate,FVar68.Number + uVar54,
                                           pFVar40);
                      pFVar65 = (pTVar38->AllocatorInstance).Data;
                      if (((pFVar65 <= pFVar58) &&
                          (pFVar58 < pFVar65 + (longlong)pTVar38->ArrayMax * 0x48)) &&
                         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar22)) {
                        pcVar18 = (code *)swi(3);
                        (*pcVar18)();
                        return;
                      }
                      iVar25 = pTVar38->ArrayNum;
                      if (iVar25 == pTVar38->ArrayMax) {
                        iVar25 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x848,&pTVar38->AllocatorInstance,&pTVar38->ArrayMax);
                      }
                      lVar57 = (longlong)iVar25;
                      pTVar38->ArrayNum = iVar25 + 1;
                      uVar11 = *(undefined8 *)(pFVar58 + 8);
                      pFVar65 = (pTVar38->AllocatorInstance).Data;
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48) = *(undefined8 *)pFVar58;
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 8) = uVar11;
                      uVar11 = *(undefined8 *)(pFVar58 + 0x18);
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x10) =
                           *(undefined8 *)(pFVar58 + 0x10);
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x10 + 8) = uVar11;
                      uVar11 = *(undefined8 *)(pFVar58 + 0x28);
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x20) =
                           *(undefined8 *)(pFVar58 + 0x20);
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x20 + 8) = uVar11;
                      uVar11 = *(undefined8 *)(pFVar58 + 0x38);
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x30) =
                           *(undefined8 *)(pFVar58 + 0x30);
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x30 + 8) = uVar11;
                      *(undefined8 *)(pFVar65 + lVar57 * 0x48 + 0x40) =
                           *(undefined8 *)(pFVar58 + 0x40);
                      goto LAB_141a0e7d3;
                    }
                    iVar25 = *(int *)(*(longlong *)&pTVar13->Elements + 8 + (longlong)iVar25 * 0x10)
                    ;
                  } while (iVar25 != -1);
                  uVar51 = (ulonglong)local_914;
                  pFVar58 = pFVar58 + 0x48;
                }
              }
              TStack_788.UnvisitedBitMask =
                   TStack_788.UnvisitedBitMask & ~TStack_788._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_788);
              pFVar30 = local_960;
              this_02 = local_948;
              iVar28 = TStack_788.CurrentBitIndex;
            } while (TStack_788.CurrentBitIndex < (TStack_788.Array)->NumBits);
          }
        }
        uVar54 = 0;
        FVar68 = local_930;
        if (0 < (this_02->AggregatedNonStackStatsHistory).ArrayNum) {
          lVar59 = 0;
          do {
            pFVar66 = local_948;
            uVar62 = 0;
            if ((int)uVar54 < (local_948->AggregatedNonStackStatsHistory).ArrayNum) {
              uVar62 = ~uVar54 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pFVar58 = (pFVar66->AggregatedNonStackStatsHistory).AllocatorInstance.Data + lVar59;
            uVar62 = *(uint *)(pFVar58 + 0x44);
            if (((int)uVar62 >> 0x10 & 2U) == 0) {
              pTVar60 = (TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                         *)&(pFVar30->HierarchyInclusive).Children.field_0x40;
              if (((int)uVar62 >> 0x10 & 8U) == 0) {
                pTVar60 = &pFVar30->InclusiveAggregateThreadBreakdown;
              }
            }
            else {
              pTVar60 = (TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                         *)&(pFVar30->InclusiveAggregateThreadBreakdown).field_0x10;
            }
            FVar24.Value = *(uint *)(pFVar58 + 0x40);
            uVar27 = ::GetTypeHash(FVar24);
            if (*(int *)&(pTVar13->Elements).field_0x8 != *(int *)&(pTVar13->Elements).field_0x34) {
              FVar15 = (pTVar13->Hash).SecondaryData;
              FVar52 = (ForElementType<FSetElementId>)&pTVar13->Hash;
              if (FVar15 != (ForElementType<FSetElementId>)0x0) {
                FVar52 = FVar15;
              }
              iVar25 = *(int *)((longlong)FVar52 +
                               (ulonglong)(pTVar13->HashSize - 1U & uVar27 + (uVar62 & 0x1ff)) * 4);
              if (iVar25 != -1) {
                do {
                  if (*(ulonglong *)(*(longlong *)&pTVar13->Elements + (longlong)iVar25 * 0x10) ==
                      (CONCAT44(uVar62,FVar24.Value) & 0x1ffffffffff)) {
                    if (((*(FScriptContainerElement **)&pTVar60->field_0x0 <= pFVar58) &&
                        (pFVar58 < *(FScriptContainerElement **)&pTVar60->field_0x0 +
                                   (longlong)*(int *)&pTVar60->field_0xc * 0x48)) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar22)) {
                      pcVar18 = (code *)swi(3);
                      (*pcVar18)();
                      return;
                    }
                    iVar25 = *(int *)&pTVar60->field_0x8;
                    if (iVar25 == *(int *)&pTVar60->field_0xc) {
                      iVar25 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x848,(ForAnyElementType *)pTVar60,
                                          (int *)&pTVar60->field_0xc);
                    }
                    lVar57 = (longlong)iVar25;
                    *(int *)&pTVar60->field_0x8 = iVar25 + 1;
                    uVar11 = *(undefined8 *)(pFVar58 + 8);
                    lVar31 = *(longlong *)&pTVar60->field_0x0;
                    puVar47 = (undefined8 *)(lVar31 + lVar57 * 0x48);
                    *puVar47 = *(undefined8 *)pFVar58;
                    puVar47[1] = uVar11;
                    uVar11 = *(undefined8 *)(pFVar58 + 0x18);
                    puVar47 = (undefined8 *)(lVar31 + 0x10 + lVar57 * 0x48);
                    *puVar47 = *(undefined8 *)(pFVar58 + 0x10);
                    puVar47[1] = uVar11;
                    uVar11 = *(undefined8 *)(pFVar58 + 0x28);
                    puVar47 = (undefined8 *)(lVar31 + 0x20 + lVar57 * 0x48);
                    *puVar47 = *(undefined8 *)(pFVar58 + 0x20);
                    puVar47[1] = uVar11;
                    uVar11 = *(undefined8 *)(pFVar58 + 0x38);
                    puVar47 = (undefined8 *)(lVar31 + 0x30 + lVar57 * 0x48);
                    *puVar47 = *(undefined8 *)(pFVar58 + 0x30);
                    puVar47[1] = uVar11;
                    *(undefined8 *)(lVar31 + 0x40 + lVar57 * 0x48) = *(undefined8 *)(pFVar58 + 0x40)
                    ;
                    break;
                  }
                  iVar25 = *(int *)(*(longlong *)&pTVar13->Elements + 8 + (longlong)iVar25 * 0x10);
                } while (iVar25 != -1);
              }
            }
            uVar54 = uVar54 + 1;
            lVar59 = lVar59 + 0x48;
            pFVar30 = local_960;
            FVar68 = local_930;
          } while ((int)uVar54 < (local_948->AggregatedNonStackStatsHistory).ArrayNum);
        }
      }
      else {
        LinearizeSlowStackForItems
                  (this_02,&this_02->AggregatedHierarchyHistory,
                   (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
                   &(pFVar30->HierarchyInclusive).Children.field_0x20,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)
                   &(pFVar30->HierarchyInclusive).Children.field_0x30,0);
      }
      iVar25 = *(int *)&(local_960->HierarchyInclusive).Children.field_0x28;
      lVar31 = *(longlong *)&(local_960->HierarchyInclusive).Children.field_0x20;
      lVar59 = lVar31 + (longlong)iVar25 * 0x48;
      while( true ) {
        if (*(int *)&(local_960->HierarchyInclusive).Children.field_0x28 != iVar25) {
          local_955 = 0;
          `TCheckedPointerIterator<TStatMessage<EComplexStatField>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_955);
        }
        if (lVar31 == lVar59) break;
        local_7f0 = *(undefined4 *)(lVar31 + 0x40);
        uStack_7ec = *(uint *)(lVar31 + 0x44) & 0x1ff;
        local_598 = (FName)(*(ulonglong *)(lVar31 + 0x40) & 0x1ffffffffff);
        ::FName::ToString(&local_598,&local_890);
        iVar26 = ::FString::Find(&local_890,L"///",3,CaseSensitive,FromStart,-1);
        if (iVar26 == -1) {
LAB_141a0eb55:
          local_808.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_808.Data.ArrayNum = 0;
          local_808.Data.ArrayMax = 0;
        }
        else {
          ::FString::RemoveAt(&local_890,0,iVar26 + 3,No);
          iVar26 = ::FString::Find(&local_890,L"///",3,CaseSensitive,FromStart,-1);
          if (iVar26 == -1) goto LAB_141a0eb55;
          iVar28 = local_890.Data.ArrayNum;
          iVar63 = iVar28 + -1;
          if (iVar28 == 0) {
            iVar63 = 0;
          }
          if (iVar26 < iVar63) {
            iVar63 = iVar26;
          }
          iVar26 = 0;
          if (0 < iVar63) {
            iVar26 = iVar63;
          }
          FVar53.Data = (FScriptContainerElement *)L"";
          if (iVar28 != 0) {
            FVar53.Data = local_890.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_638,(wchar_t *)FVar53.Data,iVar26);
          FVar53.Data = (FScriptContainerElement *)L"";
          if (local_638.Data.ArrayNum != 0) {
            FVar53.Data = local_638.Data.AllocatorInstance.Data;
          }
          FStatsUtils::FromEscapedString(&local_808,(wchar_t *)FVar53.Data);
          if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_638.Data.AllocatorInstance.Data);
          }
        }
        if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_890.Data.AllocatorInstance.Data);
        }
        if (FStatConstants::ThreadNameMarker.Data.ArrayNum == 0) {
          pwVar61 = L"";
LAB_141a0eb8f:
          sVar44 = wcslen(pwVar61);
          iVar26 = ::FString::Find(&local_808,pwVar61,(int)sVar44,IgnoreCase,FromStart,-1);
          if (iVar26 != -1) {
            local_7e8 = *(undefined4 *)(lVar31 + 0x40);
            uStack_7e4 = *(uint *)(lVar31 + 0x44) & 0x1ff;
            FStatNameAndInfo::GetShortNameFrom((FName)local_590);
            *(int *)(lVar31 + 0x40) = local_590._0_4_;
            *(uint *)(lVar31 + 0x44) = local_590._4_4_ | *(uint *)(lVar31 + 0x44) & 0xfffffe00;
          }
        }
        else {
          pwVar61 = (wchar_t *)FStatConstants::ThreadNameMarker.Data.AllocatorInstance.Data;
          if (FStatConstants::ThreadNameMarker.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) goto LAB_141a0eb8f;
        }
        if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_808.Data.AllocatorInstance.Data);
        }
        lVar31 = lVar31 + 0x48;
      }
      uVar49 = local_938 & 0xffffffff;
      FVar68 = (FName)((longlong)FVar68 + 8);
      uVar51 = (ulonglong)local_910 & 0xffffffff;
      this_02 = local_948;
    }
    pFVar17 = this_02->Stats;
    local_6e8._padding_._0_4_ = 0;
    local_6e8._padding_._4_4_ = 1;
    local_6e8.UnvisitedBitMask = 0xffffffff;
    local_6e8.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar17->MemoryPoolToCapacityLongName).field_0x10
    ;
    pTVar3 = &pFVar17->MemoryPoolToCapacityLongName;
    local_6e8.CurrentBitIndex = 0;
    local_6e8.BaseBitIndex = 0;
    if (*(int *)&(pFVar17->MemoryPoolToCapacityLongName).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6e8);
    }
    local_3e8._padding_ = CONCAT44(local_6e8._padding_._4_4_,(undefined4)local_6e8._padding_);
    local_3e8._padding_ = CONCAT44(local_6e8.CurrentBitIndex,local_6e8.UnvisitedBitMask);
    local_3e8._padding_ = CONCAT44(local_6e8._28_4_,local_6e8.BaseBitIndex);
    local_3e8._padding_ = (longlong)local_6e8.Array;
    TStack_658._padding_._0_4_ = (undefined4)local_6e8._padding_;
    TStack_658._padding_._4_4_ = local_6e8._padding_._4_4_;
    TStack_658.Array = local_6e8.Array;
    TStack_658.UnvisitedBitMask = local_6e8.UnvisitedBitMask;
    TStack_658.CurrentBitIndex = local_6e8.CurrentBitIndex;
    TStack_658.BaseBitIndex = local_6e8.BaseBitIndex;
    TStack_658._28_4_ = local_6e8._28_4_;
    local_660 = pTVar3;
    local_3e8._padding_ = (longlong)pTVar3;
    if (local_6e8.CurrentBitIndex < (local_6e8.Array)->NumBits) {
      iVar25 = local_6e8.CurrentBitIndex;
      do {
        pTVar3 = local_660;
        local_828 = *(FName *)(*(longlong *)local_660 + 4 + (longlong)iVar25 * 0x14);
        ::FName::ToString(&local_828,&local_7a0);
        ::FString::FString(&local_600,"[");
        iVar26 = local_600.Data.ArrayNum + -1;
        FVar53.Data = local_600.Data.AllocatorInstance.Data;
        if (local_600.Data.ArrayNum == 0) {
          iVar26 = 0;
          FVar53.Data = (FScriptContainerElement *)L"";
        }
        iVar26 = ::FString::Find(&local_7a0,(wchar_t *)FVar53.Data,iVar26,IgnoreCase,FromStart,-1);
        if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_600.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_5f0,"]");
        iVar63 = local_5f0.Data.ArrayNum + -1;
        FVar53.Data = local_5f0.Data.AllocatorInstance.Data;
        if (local_5f0.Data.ArrayNum == 0) {
          iVar63 = 0;
          FVar53.Data = (FScriptContainerElement *)L"";
        }
        iVar63 = ::FString::Find(&local_7a0,(wchar_t *)FVar53.Data,iVar63,IgnoreCase,FromStart,-1);
        if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
        }
        pFVar37 = local_950;
        if (((-1 < iVar26) && (-1 < iVar63)) && (iVar26 + 1 < iVar63)) {
          ::FString::Mid(&local_7a0,&local_338,iVar26 + 1,(iVar63 - iVar26) + -1);
          pFVar37 = local_950;
          local_348 = *(longlong *)pTVar3 + (longlong)iVar25 * 0x14;
          local_340 = &local_338;
          TSet<TTuple<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FString>,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FString,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<enum_FWindowsPlatformMemory::EMemoryCounterRegion_const_&,FString_const_&>_>
                    (&local_950->PoolAbbreviation,
                     (TPairInitializer<FWindowsPlatformMemory::EMemoryCounterRegion_const_&,FString_const_&>
                      *)local_618,(bool *)&local_348);
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
        }
        if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
        }
        pTVar45 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                          *)&this_02->Stats->NotClearedEveryFrame,local_828);
        plVar50 = (longlong *)&pTVar45->field_0x8;
        if (pTVar45 == (TTuple<FName,FStatMessage> *)0x0) {
          plVar50 = (longlong *)0x0;
        }
        if (((plVar50 != (longlong *)0x0) && ((*(uint *)((longlong)plVar50 + 0xc) & 0x80000) != 0))
           && (local_580 = *plVar50, 0 < local_580)) {
          local_378 = *(longlong *)pTVar3 + (longlong)iVar25 * 0x14;
          local_370 = &local_580;
          TSet<TTuple<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64>,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<enum_FWindowsPlatformMemory::EMemoryCounterRegion_const_&,__int64_const_&>_>
                    (&pFVar37->PoolCapacity,&local_5e0,(bool *)&local_378);
        }
        TStack_658.UnvisitedBitMask = TStack_658.UnvisitedBitMask & ~TStack_658._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_658);
        iVar25 = TStack_658.CurrentBitIndex;
      } while (TStack_658.CurrentBitIndex < (TStack_658.Array)->NumBits);
    }
    pFVar65 = (local_950->ActiveStatGroups).Array.AllocatorInstance.Data;
    piStack_840 = &(local_950->ActiveStatGroups).Array.ArrayNum;
    local_838 = (char *)CONCAT44(local_838._4_4_,*piStack_840);
    pFVar58 = pFVar65 + (longlong)*piStack_840 * 8;
    local_5c8 = local_838;
    local_848 = pFVar65;
    local_5e0.Value = (long64 *)pFVar65;
    piStack_5d0 = piStack_840;
    while( true ) {
      if (*piStack_5d0 != (int)local_5c8) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_919);
      }
      pFVar37 = local_950;
      if (pFVar65 == pFVar58) break;
      plVar50 = *(longlong **)pFVar65;
      lVar57 = plVar50[1];
      lVar31 = *plVar50;
      lVar59 = lVar31 + (longlong)(int)lVar57 * 0x48;
      while( true ) {
        if ((int)plVar50[1] != (int)lVar57) {
          `TCheckedPointerIterator<TStatMessage<EComplexStatField>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_918);
        }
        if (lVar31 == lVar59) break;
        local_820 = *(undefined4 *)(lVar31 + 0x40);
        uStack_81c = *(uint *)(lVar31 + 0x44) & 0x1ff;
        FStatNameAndInfo::GetShortNameFrom((FName)local_578);
        local_368 = local_578;
        local_360 = &local_4f8;
        local_4f8 = lVar31;
        TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TStatMessage<EComplexStatField>_const_*_&&>_>
                  ((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                    *)&pFVar37->NameToStatMap,&local_5c0,(bool *)&local_368);
        lVar31 = lVar31 + 0x48;
      }
      pFVar65 = pFVar65 + 8;
    }
    lVar59 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar59 + 0x9d4c) <
         `public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::__l108::
         _thread_safe_static_guard_9__) &&
       (_Init_thread_header(&`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::
                             __l108::_thread_safe_static_guard_9__),
       `public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::__l108::
       _thread_safe_static_guard_9__ == -1)) {
      _StatPtr_STAT_FSimpleDelegateGraphTask_StatsHierToGame =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      pFVar40 = ::FName::FName(local_170,"STAT_FSimpleDelegateGraphTask_StatsHierToGame");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::__l108::
                  StatPtr_STAT_FSimpleDelegateGraphTask_StatsHierToGame,*pFVar40,
                 L"FSimpleDelegateGraphTask.StatsHierToGame","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::
                           __l108::_thread_safe_static_guard_9__);
    }
    pTVar46 = _StatPtr_STAT_FSimpleDelegateGraphTask_StatsHierToGame;
    if (_StatPtr_STAT_FSimpleDelegateGraphTask_StatsHierToGame ==
        (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      pFVar40 = ::FName::FName(&local_1b0,"STAT_FSimpleDelegateGraphTask_StatsHierToGame");
      pTVar46 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &`public:_void___cdecl_FHUDGroupManager::NewFrame(__int64)___ptr64'::
                               __l108::StatPtr_STAT_FSimpleDelegateGraphTask_StatsHierToGame,
                              *pFVar40,L"FSimpleDelegateGraphTask.StatsHierToGame",
                              "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true
                              ,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar59 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Singleton.Latest = (FGameThreadStatsData *)0x0;
      atexit(`FLatestGameThreadStatsData::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
    local_8d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_8d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_8d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_8d8,(FWriteAccessScope *)&local_1d0);
    local_1b8 = &local_8d0;
    puVar47 = UE::Core::Private::DelegateAllocate(0x28,&local_8d0);
    if (puVar47 != (undefined8 *)0x0) {
      *puVar47 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
      ;
      puVar47[1] = local_950;
      uVar48 = FDelegateHandle::GenerateNewID();
      puVar47[2] = uVar48;
      *puVar47 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_UFLatestGameThreadStatsData____A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
      ;
      puVar47[3] = &::Singleton;
      puVar47[4] = FLatestGameThreadStatsData::NewData;
    }
    if (local_1d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
    }
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_4f0,
               (TStatIdData *)&local_8d8,pTVar46,MainQueue);
    if (local_4f0 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_4f0 + 6);
      iVar25 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)*local_4f0)(local_4f0,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_8d8,(FWriteAccessScope *)&local_1e8);
    if ((local_8d0.DelegateSize != 0) &&
       (local_8d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_8d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_8d0,0,0,0x10);
      local_8d0.DelegateSize = 0;
    }
    if (local_1e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
    }
    if (local_8d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_8d0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8d8.AccessDetector);
    if (local_940 != (FName)0x0) {
      FMemory::Free((void *)local_940);
    }
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if ((local_850 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_850 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_850 & 4) != 0) {
    FThreadStats::AddMessage(local_858,CycleScopeEnd);
  }
  return;
}


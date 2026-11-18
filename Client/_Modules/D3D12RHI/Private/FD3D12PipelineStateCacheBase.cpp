// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 18

// FD3D12PipelineStateCacheBase @ 1459eed70

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PipelineStateCacheBase * __thiscall
FD3D12PipelineStateCacheBase::FD3D12PipelineStateCacheBase
          (FD3D12PipelineStateCacheBase *this,FD3D12Adapter *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12PipelineStateCacheBase__6B_;
  *(undefined8 *)&this->LowLevelGraphicsPipelineStateCache = 0;
  *(undefined8 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x8 = 0;
  *(undefined8 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x20 = 0;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x28 = 0;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x34 = 0;
  *(undefined8 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x40 = 0;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x48 = 0;
  *(undefined8 *)&this->ComputePipelineStateCache = 0;
  *(undefined8 *)&(this->ComputePipelineStateCache).field_0x8 = 0;
  *(undefined8 *)&(this->ComputePipelineStateCache).field_0x20 = 0;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x28 = 0;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x34 = 0;
  *(undefined8 *)&(this->ComputePipelineStateCache).field_0x40 = 0;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x48 = 0;
  (this->LowLevelGraphicsPipelineStateCacheMutex).Mutex.Mutex.Ptr = (void *)0x0;
  (this->ComputePipelineStateCacheMutex).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DiskCachesCS).Mutex.Mutex.Ptr = (void *)0x0;
  this->DiskCaches[0].mFileName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DiskCaches[0].mFileName.Data.ArrayNum = 0;
  this->DiskCaches[0].mFileName.Data.ArrayMax = 0;
  this->DiskCaches[0].mBackedMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DiskCaches[0].mBackedMemory.ArrayNum = 0;
  this->DiskCaches[0].mBackedMemory.ArrayMax = 0;
  this->DiskCaches[1].mFileName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DiskCaches[1].mFileName.Data.ArrayNum = 0;
  this->DiskCaches[1].mFileName.Data.ArrayMax = 0;
  this->DiskCaches[1].mBackedMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DiskCaches[1].mBackedMemory.ArrayNum = 0;
  this->DiskCaches[1].mBackedMemory.ArrayMax = 0;
  return this;
}

// ~FD3D12PipelineStateCacheBase @ 1459f88f0

void __thiscall
FD3D12PipelineStateCacheBase::~FD3D12PipelineStateCacheBase(FD3D12PipelineStateCacheBase *this)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  FD3D12PipelineStateCacheBase *pFVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FD3D12PipelineStateCacheBase__6B_;
  CleanupPipelineStateCaches(this);
  lVar11 = 2;
  puVar9 = &this[1].LowLevelGraphicsPipelineStateCache.field_0x48;
  pFVar10 = this + 1;
  do {
    puVar8 = *(undefined8 **)(puVar9 + -0x68);
    iVar2 = *(int *)(puVar9 + -0x60);
    lVar11 = lVar11 + -1;
    puVar1 = puVar8 + iVar2;
    while( true ) {
      if (*(int *)(puVar9 + -0x60) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar8 == puVar1) break;
      if ((void *)*puVar8 != (void *)0x0) {
        FMemory::Free((void *)*puVar8);
      }
      puVar8 = puVar8 + 1;
    }
    pFVar3 = pFVar10[-1].DiskCaches[1].mBackedMemory.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (((FString *)&((FD3D12PipelineStateCacheBase *)(pFVar10[-1].DiskCaches + 1))->_padding_
              )->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    puVar9 = puVar9 + -0x68;
    pFVar10 = (FD3D12PipelineStateCacheBase *)(pFVar10[-1].DiskCaches + 1);
  } while (lVar11 != 0);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DiskCachesCS);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DiskCachesCS);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  }
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ComputePipelineStateCache).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComputePipelineStateCache);
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x48 = 0;
  pvVar4 = *(void **)&(this->LowLevelGraphicsPipelineStateCache).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LowLevelGraphicsPipelineStateCache);
  return;
}

// AddToLowLevelCache @ 1459ffc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PipelineStateCacheBase::AddToLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12ComputePipelineStateDesc *param_1,
          FD3D12PipelineState **param_2,
          TFunction<void___cdecl(FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&)>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PSOComputeNumLowlevelCacheEntries> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FD3D12PipelineState *pFVar8;
  FD3D12PipelineState *pFVar9;
  undefined8 uVar10;
  longlong *plVar11;
  TPairInitializer<FD3D12ComputePipelineStateDesc_const_&,FD3D12PipelineState_*_const_&> local_res8;
  FName local_70;
  FD3D12PipelineState *local_68;
  FName local_60;
  FStatMessage local_58;
  FD3D12ComputePipelineStateDesc *local_48;
  FD3D12PipelineState ***local_40;
  
  if ((param_1->CombinedHash == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.CombinedHash != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                         ,0x308,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  iVar4 = TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
          ::FindIndexByHash<FD3D12ComputePipelineStateDesc>
                    ((TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                      *)&this->ComputePipelineStateCache,(uint)param_1->CombinedHash,param_1);
  pFVar9 = (FD3D12PipelineState *)0x0;
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x70 + *(longlong *)&this->ComputePipelineStateCache;
    pFVar8 = (FD3D12PipelineState *)(lVar5 + 0x60);
    if (lVar5 == 0) {
      pFVar8 = pFVar9;
    }
    if (pFVar8 != (FD3D12PipelineState *)0x0) {
      *param_2 = (FD3D12PipelineState *)pFVar8->_padding_;
      bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
      if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
         (GLowLevelCacheKeepUsedPSOs == false)) {
        LOCK();
        *(int *)&(*param_2)->_padding_ = (int)(*param_2)->_padding_ + 1;
        UNLOCK();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
      return;
    }
  }
  FVar7 = StatPtr_STAT_PSOComputeNumLowlevelCacheEntries;
  if (StatPtr_STAT_PSOComputeNumLowlevelCacheEntries ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeNumLowlevelCacheEntries>)0x0) {
    pFVar6 = ::FName::FName(&local_60,"STAT_PSOComputeNumLowlevelCacheEntries");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_PSOComputeNumLowlevelCacheEntries>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeNumLowlevelCacheEntries,
                       *pFVar6,L"Compute: Num low-level cache entries",
                       "STATGROUP_D3D12PipelineState","STATCAT_Advanced",
                       L"D3D12RHI: Pipeline State (PSO)",true,false,ST_int64,false,false,MCR_Invalid
                      );
  }
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_58.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_58.StatData.Pad[0] = '\x01';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_70 = FVar1;
    local_58.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_58);
    FStatsTrace::Add(&local_70,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar8 = ::operator_new(0x48);
  if (pFVar8 != (FD3D12PipelineState *)0x0) {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = FD3D12PipelineState::FD3D12PipelineState(pFVar8,(FD3D12Adapter *)this->_padding_);
  }
  local_40 = &local_res8.Value;
  local_res8.Value = (FD3D12PipelineState **)pFVar9;
  local_48 = param_1;
  TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D12ComputePipelineStateDesc_const_&,FD3D12PipelineState_*_const_&>_>
            ((TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
              *)&this->ComputePipelineStateCache,&local_res8,(bool *)&local_48);
  bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
     (GLowLevelCacheKeepUsedPSOs == false)) {
    LOCK();
    *(int *)((longlong)local_res8.Value + 8) =
         (int)*(longlong *)((longlong)local_res8.Value + 8) + 1;
    UNLOCK();
  }
  *param_2 = (FD3D12PipelineState *)local_res8.Value;
  bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
     (GLowLevelCacheKeepUsedPSOs == false)) {
    LOCK();
    *(int *)&(*param_2)->_padding_ = (int)(*param_2)->_padding_ + 1;
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  local_68 = *param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar2 = *(code **)param_3;
  plVar11 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar11 = *(longlong **)&param_3->field_0x28;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(uVar10,&local_68,param_1);
  return;
}

// AddToLowLevelCache @ 145a00010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PipelineStateCacheBase::AddToLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12LowLevelGraphicsPipelineStateDesc *param_1,
          FD3D12PipelineState **param_2,
          TFunction<void___cdecl(FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&)>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PSOGraphicsNumLowlevelCacheEntries> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FD3D12PipelineState *pFVar8;
  FD3D12PipelineState *pFVar9;
  undefined8 uVar10;
  longlong *plVar11;
  TPairInitializer<FD3D12LowLevelGraphicsPipelineStateDesc_const_&,FD3D12PipelineState_*_const_&>
  local_res8;
  FName local_70;
  FD3D12PipelineState **local_68;
  FName local_60;
  FStatMessage local_58;
  FD3D12LowLevelGraphicsPipelineStateDesc *local_48;
  FD3D12PipelineState ***local_40;
  
  if ((param_1->CombinedHash == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.CombinedHash != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                         ,0x2a2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  iVar4 = TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
          ::FindIndexByHash<FD3D12LowLevelGraphicsPipelineStateDesc>
                    ((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                      *)&this->LowLevelGraphicsPipelineStateCache,(uint)param_1->CombinedHash,
                     param_1);
  pFVar9 = (FD3D12PipelineState *)0x0;
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x310 + *(longlong *)&this->LowLevelGraphicsPipelineStateCache;
    pFVar8 = (FD3D12PipelineState *)(lVar5 + 0x300);
    if (lVar5 == 0) {
      pFVar8 = pFVar9;
    }
    if (pFVar8 != (FD3D12PipelineState *)0x0) {
      *param_2 = (FD3D12PipelineState *)pFVar8->_padding_;
      bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
      if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
         (GLowLevelCacheKeepUsedPSOs == false)) {
        LOCK();
        *(int *)&(*param_2)->_padding_ = (int)(*param_2)->_padding_ + 1;
        UNLOCK();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
      return;
    }
  }
  FVar7 = StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries;
  if (StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsNumLowlevelCacheEntries>)0x0) {
    pFVar6 = ::FName::FName(&local_60,"STAT_PSOGraphicsNumLowlevelCacheEntries");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsNumLowlevelCacheEntries>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries
                       ,*pFVar6,L"Graphics: Num low-level cache entries",
                       "STATGROUP_D3D12PipelineState","STATCAT_Advanced",
                       L"D3D12RHI: Pipeline State (PSO)",true,false,ST_int64,false,false,MCR_Invalid
                      );
  }
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_58.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_58.StatData.Pad[0] = '\x01';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_70 = FVar1;
    local_58.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_58);
    FStatsTrace::Add(&local_70,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar8 = ::operator_new(0x48);
  if (pFVar8 != (FD3D12PipelineState *)0x0) {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = FD3D12PipelineState::FD3D12PipelineState(pFVar8,(FD3D12Adapter *)this->_padding_);
  }
  local_40 = &local_res8.Value;
  local_res8.Value = (FD3D12PipelineState **)pFVar9;
  local_48 = param_1;
  TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FD3D12LowLevelGraphicsPipelineStateDesc_const_&,FD3D12PipelineState_*_const_&>_>
            ((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
              *)&this->LowLevelGraphicsPipelineStateCache,&local_res8,(bool *)&local_48);
  bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
     (GLowLevelCacheKeepUsedPSOs == false)) {
    LOCK();
    *(int *)((longlong)local_res8.Value + 8) =
         (int)*(longlong *)((longlong)local_res8.Value + 8) + 1;
    UNLOCK();
  }
  *param_2 = (FD3D12PipelineState *)local_res8.Value;
  bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
     (GLowLevelCacheKeepUsedPSOs == false)) {
    LOCK();
    *(int *)&(*param_2)->_padding_ = (int)(*param_2)->_padding_ + 1;
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  local_68 = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar2 = *(code **)param_3;
  plVar11 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar11 = *(longlong **)&param_3->field_0x28;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(uVar10,&local_68,param_1);
  return;
}

// CleanupPipelineStateCaches @ 145a06460

void __thiscall
FD3D12PipelineStateCacheBase::CleanupPipelineStateCaches(FD3D12PipelineStateCacheBase *this)

{
  TMap<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*,FDefaultSetAllocator,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>_>
  *this_00;
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  TMap<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*,FDefaultSetAllocator,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>_>
  *this_01;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint *puVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*,FDefaultSetAllocator,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  iVar10 = 0;
  this_00 = &this->LowLevelGraphicsPipelineStateCache;
  iVar5 = *(int *)&(this->LowLevelGraphicsPipelineStateCache).field_0x28;
  puVar1 = &(this->LowLevelGraphicsPipelineStateCache).field_0x10;
  iStack_58 = 0;
  uStack_54 = 1;
  local_40 = iStack_58;
  iStack_44 = 0;
  if (iVar5 != 0) {
    puVar11 = *(uint **)&(this->LowLevelGraphicsPipelineStateCache).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar6 = *puVar11;
    local_40 = iVar10;
    iStack_58 = iVar10;
    while (uVar6 == 0) {
      lVar8 = (longlong)iStack_58;
      local_40 = local_40 + 0x20;
      iStack_58 = iStack_58 + 1;
      iStack_44 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_145a0651c;
      uVar6 = puVar11[lVar8 + 1];
    }
    uStack_54 = ~(uVar6 - 1) & uVar6;
    uVar4 = (ulonglong)uStack_54 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar8;
    if (iVar5 < iStack_44) {
      iStack_44 = iVar5;
    }
  }
LAB_145a0651c:
  uStack_48 = 0xffffffff;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80._padding_ = CONCAT44(uStack_54,iStack_58);
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_60 = this_00;
  local_50 = puVar1;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iStack_44 < iVar5) {
    do {
      puVar9 = *(undefined8 **)
                ((longlong)TStack_80.CurrentBitIndex * 0x310 + 0x300 +
                *(longlong *)&this_00->field_0x0);
      bVar7 = PipelineStateCache::IsPSOPrecachingEnabled();
      if (((bVar7) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
         (GLowLevelCacheKeepUsedPSOs == false)) {
        if (puVar9 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar9 + 1);
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            if (piVar2 == (int *)0x0) {
              puVar9 = (undefined8 *)0x0;
            }
            goto LAB_145a065c2;
          }
        }
      }
      else {
LAB_145a065c2:
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9);
        }
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  bVar7 = 1 < *(int *)&(this->LowLevelGraphicsPipelineStateCache).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar3 = &(this->LowLevelGraphicsPipelineStateCache).field_0xc;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x310,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x34 = 0;
  iVar5 = *(int *)&(this->LowLevelGraphicsPipelineStateCache).field_0x2c;
  *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar1,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->LowLevelGraphicsPipelineStateCache).field_0x48 = 1;
    TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
              *)this_00);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  AcquireSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  this_01 = &this->ComputePipelineStateCache;
  iVar5 = *(int *)&(this->ComputePipelineStateCache).field_0x28;
  puVar1 = &(this->ComputePipelineStateCache).field_0x10;
  uStack_54 = 1;
  local_40 = iVar10;
  iStack_44 = 0;
  if (iVar5 != 0) {
    puVar11 = *(uint **)&(this->ComputePipelineStateCache).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar6 = *puVar11;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar10;
      local_40 = local_40 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_44 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145a0670d;
      uVar6 = puVar11[lVar8 + 1];
    }
    uStack_54 = ~(uVar6 - 1) & uVar6;
    uVar4 = (ulonglong)uStack_54 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar8;
    if (iVar5 < iStack_44) {
      iStack_44 = iVar5;
    }
  }
LAB_145a0670d:
  uStack_48 = 0xffffffff;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80._padding_ = CONCAT44(uStack_54,iVar10);
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_60 = (TMap<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*,FDefaultSetAllocator,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>_>
              *)this_01;
  iStack_58 = iVar10;
  local_50 = puVar1;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iStack_44 < iVar5) {
    do {
      puVar9 = *(undefined8 **)
                ((longlong)TStack_80.CurrentBitIndex * 0x70 + 0x60 +
                *(longlong *)&this_01->field_0x0);
      bVar7 = PipelineStateCache::IsPSOPrecachingEnabled();
      if (((bVar7) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
         (GLowLevelCacheKeepUsedPSOs == false)) {
        if (puVar9 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar9 + 1);
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            if (piVar2 == (int *)0x0) {
              puVar9 = (undefined8 *)0x0;
            }
            goto LAB_145a0679d;
          }
        }
      }
      else {
LAB_145a0679d:
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9);
        }
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  bVar7 = 1 < *(int *)&(this->ComputePipelineStateCache).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar3 = &(this->ComputePipelineStateCache).field_0xc;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)this_01,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x34 = 0;
  iVar5 = *(int *)&(this->ComputePipelineStateCache).field_0x2c;
  *(undefined4 *)&(this->ComputePipelineStateCache).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ComputePipelineStateCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar1,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->ComputePipelineStateCache).field_0x48 = 1;
    TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
              *)this_01);
  }
                    /* WARNING: Could not recover jumptable at 0x000145a06876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  return;
}

// CreateAndAdd @ 145a0a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FD3D12GraphicsPipelineState * __thiscall
FD3D12PipelineStateCacheBase::CreateAndAdd
          (FD3D12PipelineStateCacheBase *this,FGraphicsPipelineStateInitializer *param_1,
          FD3D12RootSignature *param_2,FD3D12LowLevelGraphicsPipelineStateDesc *param_3)

{
  FD3D12PipelineState *pFVar1;
  ID3D12PipelineState *pIVar2;
  FD3D12GraphicsPipelineState *pFVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  FD3D12PipelineState *local_68 [2];
  code *local_58 [2];
  undefined **local_48;
  FD3D12PipelineStateCacheBase *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,void,FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&>
                ::Call;
  local_68[0] = (FD3D12PipelineState *)0x0;
  local_30 = (undefined ***)0x0;
  local_40 = this;
  AddToLowLevelCache(this,param_3,local_68,
                     (TFunction<void___cdecl(FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  pFVar1 = local_68[0];
  if (local_68[0] != (FD3D12PipelineState *)0x0) {
    if (local_68[0]->InitState == Initialized) {
      pIVar2 = (local_68[0]->PipelineState).Reference;
    }
    else {
      pIVar2 = FD3D12PipelineState::InternalGetPipelineState(local_68[0]);
    }
    if (pIVar2 != (ID3D12PipelineState *)0x0) {
      pFVar3 = ::operator_new(0x148);
      if (pFVar3 == (FD3D12GraphicsPipelineState *)0x0) {
        return (FD3D12GraphicsPipelineState *)0x0;
      }
      pFVar3 = FD3D12GraphicsPipelineState::FD3D12GraphicsPipelineState
                         (pFVar3,param_1,param_2,pFVar1);
      return pFVar3;
    }
  }
  return (FD3D12GraphicsPipelineState *)0x0;
}

// CreateAndAdd @ 145a0a7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FD3D12ComputePipelineState * __thiscall
FD3D12PipelineStateCacheBase::CreateAndAdd
          (FD3D12PipelineStateCacheBase *this,FComputePipelineStateInitializer *param_1,
          FD3D12RootSignature *param_2,FD3D12ComputePipelineStateDesc *param_3)

{
  FD3D12PipelineState *pFVar1;
  ID3D12PipelineState *pIVar2;
  FD3D12ComputePipelineState *pFVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  FD3D12PipelineState *local_68 [2];
  code *local_58 [2];
  undefined **local_48;
  FD3D12PipelineStateCacheBase *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,void,FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&>
                ::Call;
  local_68[0] = (FD3D12PipelineState *)0x0;
  local_30 = (undefined ***)0x0;
  local_40 = this;
  AddToLowLevelCache(this,param_3,local_68,
                     (TFunction<void___cdecl(FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  pFVar1 = local_68[0];
  if (local_68[0] != (FD3D12PipelineState *)0x0) {
    if (local_68[0]->InitState == Initialized) {
      pIVar2 = (local_68[0]->PipelineState).Reference;
    }
    else {
      pIVar2 = FD3D12PipelineState::InternalGetPipelineState(local_68[0]);
    }
    if (pIVar2 != (ID3D12PipelineState *)0x0) {
      pFVar3 = ::operator_new(0x48);
      if (pFVar3 == (FD3D12ComputePipelineState *)0x0) {
        return (FD3D12ComputePipelineState *)0x0;
      }
      pFVar3 = FD3D12ComputePipelineState::FD3D12ComputePipelineState(pFVar3,param_1,param_2,pFVar1)
      ;
      return pFVar3;
    }
  }
  return (FD3D12ComputePipelineState *)0x0;
}

// CreateAndAddToLowLevelCache @ 145a0a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FD3D12PipelineState * __thiscall
FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12ComputePipelineStateDesc *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FD3D12PipelineState *local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  FD3D12PipelineStateCacheBase *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58[0] = (FD3D12PipelineState *)0x0;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,void,FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&>
                ::Call;
  local_30 = this;
  AddToLowLevelCache(this,param_1,local_58,
                     (TFunction<void___cdecl(FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&)>
                      *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return local_58[0];
}

// CreateAndAddToLowLevelCache @ 145a0a970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FD3D12PipelineState * __thiscall
FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12LowLevelGraphicsPipelineStateDesc *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FD3D12PipelineState *local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  FD3D12PipelineStateCacheBase *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58[0] = (FD3D12PipelineState *)0x0;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,void,FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&>
                ::Call;
  local_30 = this;
  AddToLowLevelCache(this,param_1,local_58,
                     (TFunction<void___cdecl(FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&)>
                      *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return local_58[0];
}

// FindInLoadedCache @ 145a15870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FD3D12GraphicsPipelineState * __thiscall
FD3D12PipelineStateCacheBase::FindInLoadedCache
          (FD3D12PipelineStateCacheBase *this,FGraphicsPipelineStateInitializer *param_1,
          FD3D12RootSignature *param_2,FD3D12LowLevelGraphicsPipelineStateDesc *param_3)

{
  ID3D12RootSignature *pIVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar10;
  ulong64 uVar11;
  FD3D12PipelineState *this_00;
  ID3D12PipelineState *pIVar12;
  FD3D12GraphicsPipelineState *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 local_608 [96];
  FD3D12LowLevelGraphicsPipelineStateDesc local_308;
  
  pFVar10 = GetLowLevelGraphicsPipelineStateDesc(&local_308,param_1,param_2);
  lVar16 = 6;
  lVar15 = 6;
  puVar14 = local_608;
  do {
    pIVar1 = (pFVar10->Desc).pRootSignature;
    pvVar2 = (pFVar10->Desc).VS.pShaderBytecode;
    uVar11 = (pFVar10->Desc).VS.BytecodeLength;
    *puVar14 = pFVar10->pRootSignature;
    puVar14[1] = pIVar1;
    pvVar3 = (pFVar10->Desc).MS.pShaderBytecode;
    uVar4 = (pFVar10->Desc).MS.BytecodeLength;
    puVar14[2] = pvVar2;
    puVar14[3] = uVar11;
    pvVar2 = (pFVar10->Desc).AS.pShaderBytecode;
    uVar11 = (pFVar10->Desc).AS.BytecodeLength;
    puVar14[4] = pvVar3;
    puVar14[5] = uVar4;
    pvVar3 = (pFVar10->Desc).PS.pShaderBytecode;
    uVar4 = (pFVar10->Desc).PS.BytecodeLength;
    puVar14[6] = pvVar2;
    puVar14[7] = uVar11;
    pvVar2 = (pFVar10->Desc).GS.pShaderBytecode;
    uVar11 = (pFVar10->Desc).GS.BytecodeLength;
    puVar14[8] = pvVar3;
    puVar14[9] = uVar4;
    uVar5 = *(undefined8 *)&(pFVar10->Desc).BlendState;
    uVar6 = *(undefined8 *)(pFVar10->Desc).BlendState.RenderTarget;
    puVar14[10] = pvVar2;
    puVar14[0xb] = uVar11;
    uVar7 = *(undefined8 *)&(pFVar10->Desc).BlendState.RenderTarget[0].SrcBlend;
    uVar8 = *(undefined8 *)&(pFVar10->Desc).BlendState.RenderTarget[0].BlendOp;
    puVar14[0xc] = uVar5;
    puVar14[0xd] = uVar6;
    puVar14[0xe] = uVar7;
    puVar14[0xf] = uVar8;
    lVar15 = lVar15 + -1;
    pFVar10 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
              &(pFVar10->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
    puVar14 = puVar14 + 0x10;
  } while (lVar15 != 0);
  pFVar10 = param_3;
  puVar14 = local_608;
  do {
    pIVar1 = (ID3D12RootSignature *)puVar14[1];
    pvVar2 = (void *)puVar14[2];
    uVar11 = puVar14[3];
    pFVar10->pRootSignature = (FD3D12RootSignature *)*puVar14;
    (pFVar10->Desc).pRootSignature = pIVar1;
    pvVar3 = (void *)puVar14[4];
    uVar4 = puVar14[5];
    (pFVar10->Desc).VS.pShaderBytecode = pvVar2;
    (pFVar10->Desc).VS.BytecodeLength = uVar11;
    pvVar2 = (void *)puVar14[6];
    uVar11 = puVar14[7];
    (pFVar10->Desc).MS.pShaderBytecode = pvVar3;
    (pFVar10->Desc).MS.BytecodeLength = uVar4;
    pvVar3 = (void *)puVar14[8];
    uVar4 = puVar14[9];
    (pFVar10->Desc).AS.pShaderBytecode = pvVar2;
    (pFVar10->Desc).AS.BytecodeLength = uVar11;
    pvVar2 = (void *)puVar14[10];
    uVar11 = puVar14[0xb];
    (pFVar10->Desc).PS.pShaderBytecode = pvVar3;
    (pFVar10->Desc).PS.BytecodeLength = uVar4;
    uVar5 = puVar14[0xc];
    uVar6 = puVar14[0xd];
    (pFVar10->Desc).GS.pShaderBytecode = pvVar2;
    (pFVar10->Desc).GS.BytecodeLength = uVar11;
    uVar7 = puVar14[0xe];
    uVar8 = puVar14[0xf];
    (pFVar10->Desc).BlendState.AlphaToCoverageEnable = (int)uVar5;
    (pFVar10->Desc).BlendState.IndependentBlendEnable = (int)((ulonglong)uVar5 >> 0x20);
    (pFVar10->Desc).BlendState.RenderTarget[0].BlendEnable = (int)uVar6;
    (pFVar10->Desc).BlendState.RenderTarget[0].LogicOpEnable = (int)((ulonglong)uVar6 >> 0x20);
    (pFVar10->Desc).BlendState.RenderTarget[0].SrcBlend = (int)uVar7;
    (pFVar10->Desc).BlendState.RenderTarget[0].DestBlend = (int)((ulonglong)uVar7 >> 0x20);
    (pFVar10->Desc).BlendState.RenderTarget[0].BlendOp = (int)uVar8;
    (pFVar10->Desc).BlendState.RenderTarget[0].SrcBlendAlpha = (int)((ulonglong)uVar8 >> 0x20);
    lVar16 = lVar16 + -1;
    pFVar10 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
              &(pFVar10->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
    puVar14 = puVar14 + 0x10;
  } while (lVar16 != 0);
  uVar9 = 1;
  if (GVirtualMGPU == 0) {
    uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  }
  (param_3->Desc).NodeMask = uVar9;
  uVar11 = HashPSODesc(param_3);
  param_3->CombinedHash = uVar11;
  this_00 = FindInLowLevelCache(this,param_3);
  if (this_00 != (FD3D12PipelineState *)0x0) {
    if (this_00->InitState == Initialized) {
      pIVar12 = (this_00->PipelineState).Reference;
    }
    else {
      pIVar12 = FD3D12PipelineState::InternalGetPipelineState(this_00);
    }
    if ((pIVar12 != (ID3D12PipelineState *)0x0) &&
       (pFVar13 = ::operator_new(0x148), pFVar13 != (FD3D12GraphicsPipelineState *)0x0)) {
      pFVar13 = FD3D12GraphicsPipelineState::FD3D12GraphicsPipelineState
                          (pFVar13,param_1,param_2,this_00);
      return pFVar13;
    }
  }
  return (FD3D12GraphicsPipelineState *)0x0;
}

// FindInLoadedCache @ 145a15a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FD3D12ComputePipelineState * __thiscall
FD3D12PipelineStateCacheBase::FindInLoadedCache
          (FD3D12PipelineStateCacheBase *this,FComputePipelineStateInitializer *param_1,
          FD3D12RootSignature *param_2,FD3D12ComputePipelineStateDesc *param_3)

{
  int iVar1;
  FRHIComputeShader *pFVar2;
  ulong64 uVar3;
  FD3D12PipelineState *this_00;
  ID3D12PipelineState *pIVar4;
  FD3D12ComputePipelineState *pFVar5;
  undefined1 auStack_c8 [32];
  FD3D12RootSignature *local_a8;
  ID3D12RootSignature *pIStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_58;
  TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *pTStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = param_1->ComputeShader;
  pIStack_a0 = (param_2->RootSignature).Reference;
  iVar1 = (int)pFVar2[1]._padding_;
  lStack_90 = (longlong)iVar1;
  local_98 = pFVar2[1]._padding_;
  local_58 = 0;
  if (iVar1 == 0) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  else {
    local_48 = *(undefined4 *)(local_98 + 4);
    uStack_44 = *(undefined4 *)(local_98 + 8);
    uStack_40 = *(undefined4 *)(local_98 + 0xc);
    uStack_3c = *(undefined4 *)(local_98 + 0x10);
  }
  pTStack_50 = (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0;
  if (0 < (int)pFVar2[1]._padding_) {
    pTStack_50 = (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
                 &pFVar2[1]._padding_;
  }
  local_38 = 1;
  param_3->pRootSignature = param_2;
  *(ID3D12RootSignature **)&param_3->Desc = pIStack_a0;
  *(longlong *)&(param_3->Desc).field_0x8 = local_98;
  *(longlong *)&(param_3->Desc).field_0x10 = lStack_90;
  *(undefined8 *)&(param_3->Desc).field_0x18 = 0;
  *(undefined8 *)&(param_3->Desc).field_0x20 = 0;
  *(undefined8 *)&(param_3->Desc).field_0x28 = 0;
  *(undefined8 *)&(param_3->Desc).field_0x30 = 0;
  *(undefined4 *)(param_3->CSHash).Hash = local_48;
  *(undefined4 *)((longlong)(param_3->CSHash).Hash + 4) = uStack_44;
  *(undefined4 *)((param_3->CSHash).Hash + 1) = uStack_40;
  *(undefined4 *)((longlong)(param_3->CSHash).Hash + 0xc) = uStack_3c;
  param_3->CombinedHash = 0;
  param_3->Extensions = pTStack_50;
  if (GVirtualMGPU == 0) {
    local_38 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  }
  *(int *)&(param_3->Desc).field_0x18 = local_38;
  local_34 = *(undefined4 *)&(param_3->Desc).field_0x30;
  local_a8 = param_2;
  uVar3 = CityHash64((char *)&local_48,0x18);
  param_3->CombinedHash = uVar3;
  this_00 = FindInLowLevelCache(this,param_3);
  if (this_00 != (FD3D12PipelineState *)0x0) {
    if (this_00->InitState == Initialized) {
      pIVar4 = (this_00->PipelineState).Reference;
    }
    else {
      pIVar4 = FD3D12PipelineState::InternalGetPipelineState(this_00);
    }
    if (pIVar4 != (ID3D12PipelineState *)0x0) {
      pFVar5 = ::operator_new(0x48);
      if (pFVar5 == (FD3D12ComputePipelineState *)0x0) {
        return (FD3D12ComputePipelineState *)0x0;
      }
      pFVar5 = FD3D12ComputePipelineState::FD3D12ComputePipelineState
                         (pFVar5,param_1,param_2,this_00);
      return pFVar5;
    }
  }
  return (FD3D12ComputePipelineState *)0x0;
}

// FindInLowLevelCache @ 145a15bc0

/* WARNING: Enum "Type": Some values do not have unique names */

FD3D12PipelineState * __thiscall
FD3D12PipelineStateCacheBase::FindInLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12ComputePipelineStateDesc *param_1)

{
  FPlatformRWLock *SRWLock;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12PipelineState *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheHit> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheMiss> FVar10;
  longlong lVar11;
  longlong *plVar12;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  FStatMessage local_38;
  
  if ((param_1->CombinedHash == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.CombinedHash != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                         ,0x2e5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12PipelineState *)(*pcVar2)();
    return pFVar5;
  }
  SRWLock = &this->ComputePipelineStateCacheMutex;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar4 = TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
          ::FindIndexByHash<FD3D12ComputePipelineStateDesc>
                    ((TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                      *)&this->ComputePipelineStateCache,(uint)param_1->CombinedHash,param_1);
  if (iVar4 != -1) {
    lVar11 = (longlong)iVar4 * 0x70 + *(longlong *)&this->ComputePipelineStateCache;
    plVar12 = (longlong *)(lVar11 + 0x60);
    if (lVar11 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      if (FThreadStats::bPrimaryEnable != false) {
        FVar7 = StatPtr_STAT_PSOComputeLowlevelCacheHit;
        if (StatPtr_STAT_PSOComputeLowlevelCacheHit ==
            (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheHit>)0x0) {
          pFVar6 = ::FName::FName(&local_res18,"STAT_PSOComputeLowlevelCacheHit");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheHit>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeLowlevelCacheHit,
                             *pFVar6,L"Compute: Low-level cache hit","STATGROUP_D3D12PipelineState",
                             "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64
                             ,false,false,MCR_Invalid);
        }
        FVar1 = *(FName *)FVar7;
        local_res8 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_48.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_res8 = FVar1;
          local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_48);
          FStatsTrace::Add(&local_res8,1);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
      bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
      if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
         (GLowLevelCacheKeepUsedPSOs == false)) {
        LOCK();
        *(int *)(*plVar12 + 8) = *(int *)(*plVar12 + 8) + 1;
        UNLOCK();
      }
      pFVar5 = (FD3D12PipelineState *)*plVar12;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      return pFVar5;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar10 = StatPtr_STAT_PSOComputeLowlevelCacheMiss;
    if (StatPtr_STAT_PSOComputeLowlevelCacheMiss ==
        (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheMiss>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_PSOComputeLowlevelCacheMiss");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheMiss>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeLowlevelCacheMiss,
                          *pFVar6,L"Compute: Low-level cache miss","STATGROUP_D3D12PipelineState",
                          "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,
                          false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar10;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_38.StatData.Pad[0] = '\x01';
      local_38.StatData.Pad[1] = '\0';
      local_38.StatData.Pad[2] = '\0';
      local_38.StatData.Pad[3] = '\0';
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_res10 = FVar1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res10,1);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  return (FD3D12PipelineState *)0x0;
}

// FindInLowLevelCache @ 145a15f70

/* WARNING: Enum "Type": Some values do not have unique names */

FD3D12PipelineState * __thiscall
FD3D12PipelineStateCacheBase::FindInLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12LowLevelGraphicsPipelineStateDesc *param_1)

{
  FPlatformRWLock *SRWLock;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12PipelineState *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheHit> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheMiss> FVar10;
  longlong lVar11;
  longlong *plVar12;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  FStatMessage local_38;
  
  if ((param_1->CombinedHash == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.CombinedHash != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                         ,0x24e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12PipelineState *)(*pcVar2)();
    return pFVar5;
  }
  SRWLock = &this->LowLevelGraphicsPipelineStateCacheMutex;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar4 = TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
          ::FindIndexByHash<FD3D12LowLevelGraphicsPipelineStateDesc>
                    ((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                      *)&this->LowLevelGraphicsPipelineStateCache,(uint)param_1->CombinedHash,
                     param_1);
  if (iVar4 != -1) {
    lVar11 = (longlong)iVar4 * 0x310 + *(longlong *)&this->LowLevelGraphicsPipelineStateCache;
    plVar12 = (longlong *)(lVar11 + 0x300);
    if (lVar11 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      if (FThreadStats::bPrimaryEnable != false) {
        FVar7 = StatPtr_STAT_PSOGraphicsLowlevelCacheHit;
        if (StatPtr_STAT_PSOGraphicsLowlevelCacheHit ==
            (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheHit>)0x0) {
          pFVar6 = ::FName::FName(&local_res18,"STAT_PSOGraphicsLowlevelCacheHit");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheHit>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsLowlevelCacheHit,
                             *pFVar6,L"Graphics: Low-level cache hit","STATGROUP_D3D12PipelineState"
                             ,"STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,true,
                             ST_int64,false,false,MCR_Invalid);
        }
        FVar1 = *(FName *)FVar7;
        local_res8 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_48.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_res8 = FVar1;
          local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_48);
          FStatsTrace::Add(&local_res8,1);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
      bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
      if (((bVar3) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
         (GLowLevelCacheKeepUsedPSOs == false)) {
        LOCK();
        *(int *)(*plVar12 + 8) = *(int *)(*plVar12 + 8) + 1;
        UNLOCK();
      }
      pFVar5 = (FD3D12PipelineState *)*plVar12;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      return pFVar5;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar10 = StatPtr_STAT_PSOGraphicsLowlevelCacheMiss;
    if (StatPtr_STAT_PSOGraphicsLowlevelCacheMiss ==
        (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheMiss>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_PSOGraphicsLowlevelCacheMiss");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheMiss>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsLowlevelCacheMiss,
                          *pFVar6,L"Graphics: Low-level cache miss","STATGROUP_D3D12PipelineState",
                          "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,
                          false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar10;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_38.StatData.Pad[0] = '\x01';
      local_38.StatData.Pad[1] = '\0';
      local_38.StatData.Pad[2] = '\0';
      local_38.StatData.Pad[3] = '\0';
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_res10 = FVar1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res10,1);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  return (FD3D12PipelineState *)0x0;
}

// HashData @ 145a1c9b0

ulong64 __cdecl FD3D12PipelineStateCacheBase::HashData(void *param_1,int param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uStackX_10;
  
  uVar7 = (ulonglong)(uint)param_2;
  if (0x20 < (uint)param_2) {
    if ((uint)param_2 < 0x41) {
      lVar9 = *(longlong *)((uVar7 - 0x18) + (longlong)param_1);
      lVar14 = (ulonglong)(uint)(param_2 * 2) + 0x9ae16a3b2f90404f;
      lVar4 = *(longlong *)((longlong)param_1 + 0x18) * 9;
      uVar2 = *(longlong *)param_1 * -0x651e95c4d06fbfb1 +
              *(longlong *)((uVar7 - 8) + (longlong)param_1);
      lVar5 = lVar14 * *(longlong *)((uVar7 - 0x10) + (longlong)param_1);
      lVar8 = lVar4 + 1 + (uVar2 ^ *(ulonglong *)((uVar7 - 0x20) + (longlong)param_1));
      uVar3 = lVar4 + *(longlong *)((longlong)param_1 + 0x10) * -0x651e95c4d06fbfb1;
      lVar4 = (uVar3 >> 0x2a | uVar3 * 0x400000) + lVar9;
      uVar2 = (((*(ulonglong *)((longlong)param_1 + 8) >> 0x1e |
                *(ulonglong *)((longlong)param_1 + 8) << 0x22) + lVar9) * 9 +
              (uVar2 >> 0x2b | uVar2 * 0x200000) + lVar8) * lVar14;
      uVar2 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38) + lVar8 + lVar5) * lVar14;
      uVar2 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38) + uVar3 + lVar9 + lVar4 +
              *(longlong *)((uVar7 - 8) + (longlong)param_1)) * lVar14;
      uVar7 = ((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
               uVar2 << 0x38) + uVar3 + lVar9 + *(longlong *)((longlong)param_1 + 8)) * lVar14 +
              lVar5 + *(longlong *)((uVar7 - 0x20) + (longlong)param_1);
      uVar1 = (uVar7 >> 0x2f ^ uVar7) * lVar14 + lVar4;
    }
    else {
      lVar9 = *(longlong *)((uVar7 - 0x28) + (longlong)param_1);
      uVar10 = *(longlong *)((uVar7 - 0x38) + (longlong)param_1) +
               *(longlong *)((uVar7 - 0x10) + (longlong)param_1);
      uVar3 = (*(longlong *)((uVar7 - 0x30) + (longlong)param_1) + uVar7 ^
              *(ulonglong *)((uVar7 - 0x18) + (longlong)param_1)) * -0x622015f714c7d297;
      uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ *(ulonglong *)((uVar7 - 0x18) + (longlong)param_1)) *
              -0x622015f714c7d297;
      uVar11 = (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
      lVar5 = *(longlong *)((uVar7 - 0x40) + (longlong)param_1) + uVar7;
      uVar2 = *(longlong *)((uVar7 - 0x30) + (longlong)param_1) +
              *(longlong *)((uVar7 - 0x38) + (longlong)param_1) + lVar5;
      uVar3 = lVar5 + lVar9 + uVar11;
      lVar4 = *(longlong *)((uVar7 - 8) + (longlong)param_1);
      uVar13 = (uVar3 >> 0x15 | uVar3 << 0x2b) + (uVar2 >> 0x2c | uVar2 * 0x100000) + lVar5;
      lVar5 = uVar10 + 0xb492b66fbe98f273 + *(longlong *)((uVar7 - 0x20) + (longlong)param_1);
      uVar3 = *(longlong *)((uVar7 - 0x10) + (longlong)param_1) +
              *(longlong *)((uVar7 - 0x18) + (longlong)param_1) + lVar5;
      uVar12 = lVar5 + lVar4 + lVar9;
      uVar7 = uVar3 + lVar4;
      lVar4 = lVar9 * -0x4b6d499041670d8d + *(longlong *)param_1;
      uVar12 = (uVar12 >> 0x15 | uVar12 << 0x2b) + (uVar3 >> 0x2c | uVar3 * 0x100000) + lVar5;
      uStackX_10 = param_2 - 1U & 0xffffffc0;
      uVar3 = uVar2 + lVar9;
      plVar15 = (longlong *)((longlong)param_1 + 0x30);
      do {
        uVar6 = plVar15[-5] + uVar3 + uVar10 + lVar4;
        uVar10 = uVar10 + *plVar15 + uVar13;
        lVar9 = plVar15[-6] + uVar13 * -0x4b6d499041670d8d;
        uVar13 = plVar15[-4] + plVar15[-5] + lVar9;
        lVar4 = (uVar7 + uVar11 >> 0x21 | (uVar7 + uVar11) * 0x80000000) * -0x4b6d499041670d8d;
        uVar2 = plVar15[-3] + uVar13;
        uVar11 = (uVar6 >> 0x25 | uVar6 * 0x8000000) * -0x4b6d499041670d8d ^ uVar12;
        uVar7 = uVar7 + plVar15[-3] + lVar9 + uVar11;
        uVar10 = (uVar10 >> 0x2a | uVar10 * 0x400000) * -0x4b6d499041670d8d + plVar15[-1] + uVar3;
        uVar13 = (uVar13 >> 0x2c | uVar13 * 0x100000) + (uVar7 >> 0x15 | uVar7 << 0x2b) + lVar9;
        lVar9 = plVar15[-2] + lVar4 + uVar12;
        uVar7 = plVar15[-1] + *plVar15 + lVar9;
        uVar3 = plVar15[-4] + plVar15[1] + lVar9 + uVar10;
        uVar12 = (uVar7 >> 0x2c | uVar7 * 0x100000) + (uVar3 >> 0x15 | uVar3 << 0x2b) + lVar9;
        uVar7 = plVar15[1] + uVar7;
        uStackX_10 = uStackX_10 - 0x40;
        uVar3 = uVar2;
        plVar15 = plVar15 + 8;
      } while (uStackX_10 != 0);
      uVar3 = (uVar12 ^ uVar13) * -0x622015f714c7d297;
      uVar2 = (uVar7 ^ uVar2) * -0x622015f714c7d297;
      uVar3 = (uVar3 >> 0x2f ^ uVar3 ^ uVar12) * -0x622015f714c7d297;
      uVar7 = (uVar2 >> 0x2f ^ uVar2 ^ uVar7) * -0x622015f714c7d297;
      uVar3 = (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297 + lVar4;
      uVar7 = ((uVar10 >> 0x2f ^ uVar10) * -0x4b6d499041670d8d +
               (uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297 + uVar11 ^ uVar3) * -0x622015f714c7d297
      ;
      uVar7 = (uVar7 >> 0x2f ^ uVar7 ^ uVar3) * -0x622015f714c7d297;
      uVar1 = (uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    }
    return uVar1;
  }
  if (0x10 < (uint)param_2) {
    lVar9 = (ulonglong)(uint)(param_2 * 2) + 0x9ae16a3b2f90404f;
    uVar10 = lVar9 * *(longlong *)((uVar7 - 8) + (longlong)param_1);
    uVar3 = *(longlong *)((longlong)param_1 + 8) + *(longlong *)param_1 * -0x4b6d499041670d8d;
    uVar2 = *(longlong *)((longlong)param_1 + 8) + 0x9ae16a3b2f90404f;
    uVar2 = (uVar2 >> 0x12 | uVar2 << 0x2e) + uVar10 + *(longlong *)param_1 * -0x4b6d499041670d8d;
    uVar7 = (*(longlong *)((uVar7 - 0x10) + (longlong)param_1) * -0x651e95c4d06fbfb1 +
             (uVar10 >> 0x1e | uVar10 << 0x22) + (uVar3 >> 0x2b | uVar3 * 0x200000) ^ uVar2) * lVar9
    ;
    uVar7 = (uVar7 >> 0x2f ^ uVar7 ^ uVar2) * lVar9;
    return (uVar7 >> 0x2f ^ uVar7) * lVar9;
  }
  if ((uint)param_2 < 8) {
    if ((uint)param_2 < 4) {
      if (param_2 == 0) {
        return 0x9ae16a3b2f90404f;
      }
      uVar7 = (ulonglong)*(byte *)((ulonglong)((uint)param_2 >> 1) + (longlong)param_1) *
              -0x1e95c4d06fbfb100 + (ulonglong)*(byte *)param_1 * -0x651e95c4d06fbfb1 ^
              (ulonglong)
              (param_2 + (uint)*(byte *)((ulonglong)(param_2 - 1) + (longlong)param_1) * 4) *
              -0x3c5a37a36834ced9;
      return (uVar7 >> 0x2f ^ uVar7) * -0x651e95c4d06fbfb1;
    }
    uVar3 = (ulonglong)*(uint *)((uVar7 - 4) + (longlong)param_1);
    lVar9 = (ulonglong)(uint)(param_2 * 2) + 0x9ae16a3b2f90404f;
    uVar7 = (uVar7 + (ulonglong)*(uint *)param_1 * 8 ^ uVar3) * lVar9;
    uVar3 = uVar7 >> 0x2f ^ uVar7 ^ uVar3;
  }
  else {
    uVar7 = *(ulonglong *)((uVar7 - 8) + (longlong)param_1);
    uVar2 = *(longlong *)param_1 + 0x9ae16a3b2f90404f;
    lVar9 = (ulonglong)(uint)(param_2 * 2) + 0x9ae16a3b2f90404f;
    uVar3 = ((uVar2 >> 0x19 | uVar2 << 0x27) + uVar7) * lVar9;
    uVar7 = ((uVar7 >> 0x25 | uVar7 << 0x1b) * lVar9 + uVar2 ^ uVar3) * lVar9;
    uVar3 = uVar7 >> 0x2f ^ uVar7 ^ uVar3;
  }
  return (uVar3 * lVar9 >> 0x2f ^ uVar3 * lVar9) * lVar9;
}

// HashPSODesc @ 145a1c9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl FD3D12PipelineStateCacheBase::HashPSODesc(FD3D12ComputePipelineStateDesc *param_1)

{
  ulong64 uVar1;
  undefined1 auStack_48 [32];
  ulong64 local_28;
  ulong64 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_18 = *(undefined4 *)&(param_1->Desc).field_0x18;
  local_28 = (param_1->CSHash).Hash[0];
  uStack_20 = (param_1->CSHash).Hash[1];
  local_14 = *(undefined4 *)&(param_1->Desc).field_0x30;
  uVar1 = CityHash64((char *)&local_28,0x18);
  return uVar1;
}

// HashPSODesc @ 145a1ca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
FD3D12PipelineStateCacheBase::HashPSODesc(FD3D12LowLevelGraphicsPipelineStateDesc *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DXGI_FORMAT *pDVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong lVar7;
  longlong lVar8;
  D3D12_RENDER_TARGET_BLEND_DESC *pDVar9;
  D3D12_RT_FORMAT_ARRAY *pDVar10;
  undefined1 auStack_278 [32];
  ulong64 local_258;
  ulong64 uStack_250;
  ulong64 local_248;
  ulong64 uStack_240;
  ulong64 local_238;
  ulong64 uStack_230;
  ulong64 local_228;
  ulong64 uStack_220;
  ulong64 local_218;
  ulong64 uStack_210;
  uint local_208;
  undefined1 local_204;
  undefined1 local_203;
  uint local_200;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  D3D12_CONSERVATIVE_RASTERIZATION_MODE local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  D3D12_INDEX_BUFFER_STRIP_CUT_VALUE local_198;
  D3D12_PRIMITIVE_TOPOLOGY_TYPE local_194;
  DXGI_FORMAT local_190;
  DXGI_SAMPLE_DESC local_18c;
  uint local_184;
  D3D12_PIPELINE_STATE_FLAGS local_180;
  undefined8 local_174 [43];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  lVar7 = (longlong)(int)(param_1->Desc).RTFormatArray.NumRenderTargets;
  lVar8 = lVar7 * 0x2c;
  memset(&local_258,0,lVar8 + 0xe0);
  local_208 = param_1->InputLayoutHash;
  local_204 = (undefined1)(param_1->Desc).BlendState.AlphaToCoverageEnable;
  local_203 = (undefined1)(param_1->Desc).BlendState.IndependentBlendEnable;
  local_200 = (param_1->Desc).SampleMask;
  local_1d4 = (param_1->Desc).RasterizerState.ConservativeRaster;
  local_198 = (param_1->Desc).IBStripCutValue;
  local_194 = (param_1->Desc).PrimitiveTopologyType;
  local_190 = (param_1->Desc).DSVFormat;
  local_18c = (param_1->Desc).SampleDesc;
  local_184 = (param_1->Desc).NodeMask;
  local_180 = (param_1->Desc).Flags;
  local_258 = (param_1->VSHash).Hash[0];
  uStack_250 = (param_1->VSHash).Hash[1];
  local_248 = (param_1->MSHash).Hash[0];
  uStack_240 = (param_1->MSHash).Hash[1];
  local_238 = (param_1->ASHash).Hash[0];
  uStack_230 = (param_1->ASHash).Hash[1];
  local_228 = (param_1->GSHash).Hash[0];
  uStack_220 = (param_1->GSHash).Hash[1];
  local_218 = (param_1->PSHash).Hash[0];
  uStack_210 = (param_1->PSHash).Hash[1];
  local_1ec._0_4_ = (param_1->Desc).RasterizerState.DepthBiasClamp;
  local_1ec._4_4_ = (param_1->Desc).RasterizerState.SlopeScaledDepthBias;
  uStack_1e4._0_4_ = (param_1->Desc).RasterizerState.DepthClipEnable;
  uStack_1e4._4_4_ = (param_1->Desc).RasterizerState.MultisampleEnable;
  local_1fc._0_4_ = (param_1->Desc).RasterizerState.FillMode;
  local_1fc._4_4_ = (param_1->Desc).RasterizerState.CullMode;
  uStack_1f4._0_4_ = (param_1->Desc).RasterizerState.FrontCounterClockwise;
  uStack_1f4._4_4_ = (param_1->Desc).RasterizerState.DepthBias;
  local_1c0._0_1_ = (param_1->Desc).DepthStencilState.StencilReadMask;
  local_1c0._1_1_ = (param_1->Desc).DepthStencilState.StencilWriteMask;
  local_1c0._2_2_ = *(undefined2 *)&(param_1->Desc).DepthStencilState.field_0x12;
  local_1c0._4_4_ = (param_1->Desc).DepthStencilState.FrontFace.StencilFailOp;
  uStack_1b8._0_4_ = (param_1->Desc).DepthStencilState.FrontFace.StencilDepthFailOp;
  uStack_1b8._4_4_ = (param_1->Desc).DepthStencilState.FrontFace.StencilPassOp;
  local_1dc._0_4_ = (param_1->Desc).RasterizerState.AntialiasedLineEnable;
  local_1dc._4_4_ = (param_1->Desc).RasterizerState.ForcedSampleCount;
  local_1d0._0_4_ = (param_1->Desc).DepthStencilState.DepthEnable;
  local_1d0._4_4_ = (param_1->Desc).DepthStencilState.DepthWriteMask;
  uStack_1c8._0_4_ = (param_1->Desc).DepthStencilState.DepthFunc;
  uStack_1c8._4_4_ = (param_1->Desc).DepthStencilState.StencilEnable;
  local_1a0 = *(undefined8 *)&(param_1->Desc).DepthStencilState.BackFace.StencilFunc;
  local_1b0 = *(undefined8 *)&(param_1->Desc).DepthStencilState.FrontFace.StencilFunc;
  uStack_1a8._0_4_ = (param_1->Desc).DepthStencilState.BackFace.StencilDepthFailOp;
  uStack_1a8._4_4_ = (param_1->Desc).DepthStencilState.BackFace.StencilPassOp;
  if (0 < lVar7) {
    pDVar10 = &(param_1->Desc).RTFormatArray;
    puVar5 = local_174;
    pDVar9 = (param_1->Desc).BlendState.RenderTarget;
    do {
      pDVar4 = pDVar10->RTFormats;
      pDVar10 = (D3D12_RT_FORMAT_ARRAY *)(pDVar10->RTFormats + 1);
      *(DXGI_FORMAT *)((longlong)puVar5 + -4) = *pDVar4;
      uVar1 = *(undefined8 *)&pDVar9->SrcBlend;
      uVar2 = *(undefined8 *)&pDVar9->BlendOp;
      uVar3 = *(undefined8 *)&pDVar9->DestBlendAlpha;
      *puVar5 = *(undefined8 *)pDVar9;
      puVar5[1] = uVar1;
      uVar1 = *(undefined8 *)&pDVar9->LogicOp;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = uVar1;
      lVar7 = lVar7 + -1;
      puVar5 = (undefined8 *)((longlong)puVar5 + 0x2c);
      pDVar9 = pDVar9 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = CityHash64((char *)&local_258,(int)lVar8 + 0xe0);
  return uVar6;
}

// RemoveFromLowLevelCache @ 145a2d530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FD3D12PipelineStateCacheBase::RemoveFromLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12PipelineState *param_1,
          FGraphicsPipelineStateInitializer *param_2,FD3D12RootSignature *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ID3D12RootSignature *pIVar3;
  void *pvVar4;
  ulong64 uVar5;
  void *pvVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  D3D12_BLEND DVar11;
  D3D12_BLEND DVar12;
  D3D12_BLEND_OP DVar13;
  D3D12_BLEND DVar14;
  bool bVar15;
  int iVar16;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar17;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar18;
  longlong lVar19;
  FD3D12LowLevelGraphicsPipelineStateDesc local_628;
  FD3D12LowLevelGraphicsPipelineStateDesc local_328;
  
  bVar15 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((bVar15) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
     (GLowLevelCacheKeepUsedPSOs == false)) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
    plVar1 = &param_1->_padding_;
    LOCK();
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      if (plVar1 == (longlong *)0x0) {
        param_1 = (FD3D12PipelineState *)0x0;
      }
      if (param_1 != (FD3D12PipelineState *)0x0) {
        (**(code **)param_1->_padding_)(param_1,1);
      }
    }
    if ((int)lVar19 == 1) {
      pFVar17 = GetLowLevelGraphicsPipelineStateDesc(&local_328,param_2,param_3);
      lVar19 = 6;
      pFVar18 = &local_628;
      do {
        pIVar3 = (pFVar17->Desc).pRootSignature;
        pvVar4 = (pFVar17->Desc).VS.pShaderBytecode;
        uVar5 = (pFVar17->Desc).VS.BytecodeLength;
        pFVar18->pRootSignature = pFVar17->pRootSignature;
        (pFVar18->Desc).pRootSignature = pIVar3;
        pvVar6 = (pFVar17->Desc).MS.pShaderBytecode;
        uVar7 = (pFVar17->Desc).MS.BytecodeLength;
        (pFVar18->Desc).VS.pShaderBytecode = pvVar4;
        (pFVar18->Desc).VS.BytecodeLength = uVar5;
        pvVar4 = (pFVar17->Desc).AS.pShaderBytecode;
        uVar5 = (pFVar17->Desc).AS.BytecodeLength;
        (pFVar18->Desc).MS.pShaderBytecode = pvVar6;
        (pFVar18->Desc).MS.BytecodeLength = uVar7;
        pvVar6 = (pFVar17->Desc).PS.pShaderBytecode;
        uVar7 = (pFVar17->Desc).PS.BytecodeLength;
        (pFVar18->Desc).AS.pShaderBytecode = pvVar4;
        (pFVar18->Desc).AS.BytecodeLength = uVar5;
        pvVar4 = (pFVar17->Desc).GS.pShaderBytecode;
        uVar5 = (pFVar17->Desc).GS.BytecodeLength;
        (pFVar18->Desc).PS.pShaderBytecode = pvVar6;
        (pFVar18->Desc).PS.BytecodeLength = uVar7;
        iVar16 = (pFVar17->Desc).BlendState.AlphaToCoverageEnable;
        iVar8 = (pFVar17->Desc).BlendState.IndependentBlendEnable;
        iVar9 = (pFVar17->Desc).BlendState.RenderTarget[0].BlendEnable;
        iVar10 = (pFVar17->Desc).BlendState.RenderTarget[0].LogicOpEnable;
        (pFVar18->Desc).GS.pShaderBytecode = pvVar4;
        (pFVar18->Desc).GS.BytecodeLength = uVar5;
        DVar11 = (pFVar17->Desc).BlendState.RenderTarget[0].SrcBlend;
        DVar12 = (pFVar17->Desc).BlendState.RenderTarget[0].DestBlend;
        DVar13 = (pFVar17->Desc).BlendState.RenderTarget[0].BlendOp;
        DVar14 = (pFVar17->Desc).BlendState.RenderTarget[0].SrcBlendAlpha;
        (pFVar18->Desc).BlendState.AlphaToCoverageEnable = iVar16;
        (pFVar18->Desc).BlendState.IndependentBlendEnable = iVar8;
        (pFVar18->Desc).BlendState.RenderTarget[0].BlendEnable = iVar9;
        (pFVar18->Desc).BlendState.RenderTarget[0].LogicOpEnable = iVar10;
        (pFVar18->Desc).BlendState.RenderTarget[0].SrcBlend = DVar11;
        (pFVar18->Desc).BlendState.RenderTarget[0].DestBlend = DVar12;
        (pFVar18->Desc).BlendState.RenderTarget[0].BlendOp = DVar13;
        (pFVar18->Desc).BlendState.RenderTarget[0].SrcBlendAlpha = DVar14;
        lVar19 = lVar19 + -1;
        pFVar17 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
                  &(pFVar17->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
        pFVar18 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
                  &(pFVar18->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
      } while (lVar19 != 0);
      local_628.Desc.NodeMask = 1;
      if (GVirtualMGPU == 0) {
        local_628.Desc.NodeMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      }
      local_628.CombinedHash = HashPSODesc(&local_628);
      iVar16 = TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
               ::Remove((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                         *)&this->LowLevelGraphicsPipelineStateCache,&local_628);
      if (iVar16 != 1) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3462060828205777534>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                            ,0x27e,"ElementsRemoved == 1");
        if (bVar15) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LowLevelGraphicsPipelineStateCacheMutex);
  }
  else {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                        ,0x272,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RemoveFromLowLevelCache @ 145a2d730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FD3D12PipelineStateCacheBase::RemoveFromLowLevelCache
          (FD3D12PipelineStateCacheBase *this,FD3D12PipelineState *param_1,
          FD3D12ComputeShader *param_2,FD3D12RootSignature *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStackY_168 [32];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong64 local_68;
  TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar4 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((!bVar4) || (GLowLevelCacheKeepPrecachedPSOs != false)) &&
     (GLowLevelCacheKeepUsedPSOs != false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                       ,0x28b,L"");
    if (!bVar4) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  plVar1 = &param_1->_padding_;
  LOCK();
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  uVar6 = 1;
  if ((int)lVar3 == 1) {
    if (plVar1 == (longlong *)0x0) {
      param_1 = (FD3D12PipelineState *)0x0;
    }
    if (param_1 != (FD3D12PipelineState *)0x0) {
      (**(code **)param_1->_padding_)(param_1,1);
    }
  }
  if ((int)lVar3 == 1) {
    iVar5 = (int)param_2->_padding_;
    lStack_a0 = (longlong)iVar5;
    local_b8._8_8_ = (param_3->RootSignature).Reference;
    local_a8 = param_2->_padding_;
    if (iVar5 == 0) {
      local_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
    }
    else {
      local_130 = *(undefined4 *)(local_a8 + 4);
      uStack_12c = *(undefined4 *)(local_a8 + 8);
      uStack_128 = *(undefined4 *)(local_a8 + 0xc);
      uStack_124 = *(undefined4 *)(local_a8 + 0x10);
    }
    pTStack_60 = (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0;
    if (0 < (int)param_2->_padding_) {
      pTStack_60 = (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
                   &param_2->_padding_;
    }
    local_68 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    if (GVirtualMGPU == 0) {
      uVar6 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    }
    local_44 = 0;
    local_98 = (ulonglong)uVar6;
    local_b8._0_8_ = param_3;
    local_78 = local_130;
    uStack_74 = uStack_12c;
    uStack_70 = uStack_128;
    uStack_6c = uStack_124;
    local_58 = local_130;
    uStack_54 = uStack_12c;
    uStack_50 = uStack_128;
    uStack_4c = uStack_124;
    local_48 = uVar6;
    local_68 = CityHash64((char *)&local_58,0x18);
    if (((*(int *)&(this->ComputePipelineStateCache).field_0x8 ==
          *(int *)&(this->ComputePipelineStateCache).field_0x34) ||
        (iVar5 = TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                 ::RemoveImpl<FD3D12ComputePipelineStateDesc>
                           ((TSet<TTuple<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12ComputePipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                             *)&this->ComputePipelineStateCache,(uint)local_68,
                            (FD3D12ComputePipelineStateDesc *)local_b8), iVar5 != 1)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3462060828205777559>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                           ,0x297,"ElementsRemoved == 1"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineStateCacheMutex);
  return;
}


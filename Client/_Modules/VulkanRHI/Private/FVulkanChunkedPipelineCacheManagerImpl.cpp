// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 8

// CreatePSO<FVulkanGraphicsPipelineState> @ 145ad2fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

VkResult __thiscall
FVulkanChunkedPipelineCacheManagerImpl::CreatePSO<FVulkanGraphicsPipelineState>
          (FVulkanChunkedPipelineCacheManagerImpl *this,FVulkanGraphicsPipelineState *param_1,
          bool param_2,
          TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
          *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<unsigned___int64> aVar1;
  TDoubleLinkedListNode *pTVar2;
  TDoubleLinkedListNode *pTVar3;
  VkResult VVar4;
  FVulkanPipelineCacheChunk *this_00;
  longlong *plVar5;
  int iVar6;
  undefined1 auStackY_128 [32];
  EPSOCacheFindResult local_e8 [2];
  FVulkanGraphicsPipelineState *local_e0;
  FRWScopeLock local_d8;
  uint local_c8 [2];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e0 = param_1;
  GetCurrentThreadId();
  ::FString::PrintfImpl
            (&local_c0,L"FVulkanChunkedPipelineCacheManager: CreatePSO (precomp %d) tot %d ");
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  GetCurrentThreadId();
  ::FString::PrintfImpl(&local_b0,L"FVulkanChunkedPipelineCacheManager: GetOrAddCache tot %d ");
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  local_d8.LockType = SLT_ReadOnly;
  local_d8.LockObject = &this->ChunkedPipelineCacheLock;
  AcquireSRWLockShared((PSRWLOCK)this);
  this_00 = GetChunk<FVulkanGraphicsPipelineState,FVulkanGraphicsPipelineState_*>
                      (this,param_3,&local_e0,local_e8,local_c8,&local_d8,false);
  if (local_d8.LockType == SLT_ReadOnly) {
    ReleaseSRWLockShared((PSRWLOCK)local_d8.LockObject);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)local_d8.LockObject);
  }
  if ((param_2) && (local_e8[0] == Found)) {
    if (*(longlong *)param_3 != 0) {
      plVar5 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    VVar4 = VK_SUCCESS;
  }
  else {
    GetCurrentThreadId();
    ::FString::PrintfImpl
              (&local_a0,L"FVulkanChunkedPipelineCacheManager: CreatePSO actualcreate %d ");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    aVar1 = this_00->LastUsedFrame;
    local_78._0_8_ = *(undefined8 *)param_3;
    local_78._40_8_ = *(undefined8 *)&param_3->field_0x28;
    *(undefined8 *)&param_3->field_0x28 = 0;
    local_78._32_8_ = *(undefined8 *)&param_3->field_0x20;
    local_78._16_8_ = *(undefined8 *)&param_3->field_0x10;
    local_78._24_8_ = *(undefined8 *)&param_3->field_0x18;
    if (local_78._0_8_ != 0) {
      *(undefined8 *)param_3 = 0;
    }
    VVar4 = FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>
                      (this_00,local_e0,local_e8[0],&local_78);
    if (aVar1 != this_00->LastUsedFrame) {
      GetCurrentThreadId();
      ::FString::PrintfImpl(&local_90,L"FVulkanChunkedPipelineCacheManager: CreatePSO lru %d ");
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      lpCriticalSection = &this->LRUCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pTVar2 = this_00->LRUNode;
      if ((this->CacheChunkLRU).HeadNode != pTVar2) {
        if ((pTVar2->NextNode != (TDoubleLinkedListNode *)0x0) ||
           (pTVar2->PrevNode != (TDoubleLinkedListNode *)0x0)) {
          if ((this->CacheChunkLRU).ListSize == 1) {
            pTVar2->PrevNode = (TDoubleLinkedListNode *)0x0;
            iVar6 = 0;
            pTVar2->NextNode = (TDoubleLinkedListNode *)0x0;
            (this->CacheChunkLRU).TailNode = (TDoubleLinkedListNode *)0x0;
            (this->CacheChunkLRU).HeadNode = (TDoubleLinkedListNode *)0x0;
          }
          else {
            pTVar3 = (this->CacheChunkLRU).TailNode;
            if (pTVar2 == pTVar3) {
              pTVar3 = pTVar3->PrevNode;
              (this->CacheChunkLRU).TailNode = pTVar3;
              pTVar3->NextNode = (TDoubleLinkedListNode *)0x0;
            }
            else {
              pTVar2->NextNode->PrevNode = pTVar2->PrevNode;
              pTVar2->PrevNode->NextNode = pTVar2->NextNode;
            }
            pTVar2->PrevNode = (TDoubleLinkedListNode *)0x0;
            pTVar2->NextNode = (TDoubleLinkedListNode *)0x0;
            iVar6 = (this->CacheChunkLRU).ListSize + -1;
          }
          (**(code **)((this->CacheChunkLRU)._padding_ + 8))(&this->CacheChunkLRU,iVar6);
        }
        pTVar3 = (this->CacheChunkLRU).HeadNode;
        if (pTVar3 == (TDoubleLinkedListNode *)0x0) {
          (this->CacheChunkLRU).TailNode = pTVar2;
        }
        else {
          pTVar2->NextNode = pTVar3;
          ((this->CacheChunkLRU).HeadNode)->PrevNode = pTVar2;
        }
        (this->CacheChunkLRU).HeadNode = pTVar2;
        (**(code **)((this->CacheChunkLRU)._padding_ + 8))
                  (&this->CacheChunkLRU,(this->CacheChunkLRU).ListSize + 1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (*(longlong *)param_3 != 0) {
      plVar5 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return VVar4;
}

// GetChunk<FVulkanGraphicsPipelineState,FVulkanGraphicsPipelineState_*> @ 145ad5ee0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanPipelineCacheChunk * __thiscall
FVulkanChunkedPipelineCacheManagerImpl::
GetChunk<FVulkanGraphicsPipelineState,FVulkanGraphicsPipelineState_*>
          (FVulkanChunkedPipelineCacheManagerImpl *this,
          TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
          *param_1,FVulkanGraphicsPipelineState **param_2,EPSOCacheFindResult *param_3,uint *param_4
          ,FRWScopeLock *param_5,bool param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FVulkanPipelineCacheChunk *pFVar5;
  TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_> *pTVar6;
  uint *puVar7;
  undefined1 *puVar8;
  ulonglong local_res18 [2];
  ulonglong *local_68;
  uint *local_60;
  FVulkanChunkedPipelineCacheManagerImpl *local_58;
  EPSOCacheFindResult *local_50;
  FVulkanGraphicsPipelineState **local_48;
  TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
  *local_40;
  
  local_res18[0] = (*param_2)->PrecacheKey;
  if (*(int *)&(this->PrecachePSOToCacheChunkMap).field_0x8 !=
      *(int *)&(this->PrecachePSOToCacheChunkMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->PrecachePSOToCacheChunkMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->PrecachePSOToCacheChunkMap).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + ((local_res18[0] >> 0x20) * 0x17 + local_res18[0] &
                              (ulonglong)
                              (*(int *)&(this->PrecachePSOToCacheChunkMap).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->PrecachePSOToCacheChunkMap + (longlong)iVar4 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->PrecachePSOToCacheChunkMap + (longlong)iVar4 * 0x18)
            == local_res18[0]) {
          puVar7 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            pTVar6 = TMapBase<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>_>
                     ::FindChecked((TMapBase<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>_>
                                    *)&this->CacheChunksMap,*puVar7);
            pFVar5 = pTVar6->Ptr;
            LOCK();
            this->FoundPSOs = (atomic<int>)((int)this->FoundPSOs + 1);
            UNLOCK();
            *param_3 = Found;
            *param_4 = *puVar7;
            if (pFVar5 != (FVulkanPipelineCacheChunk *)0x0) {
              return pFVar5;
            }
            if ((!param_6) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bTryAdd",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                                   ,0x447,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FVulkanPipelineCacheChunk *)(*pcVar2)();
              return pFVar5;
            }
            goto LAB_145ad604c;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  if (param_6) {
LAB_145ad604c:
    local_58 = this;
    local_50 = param_3;
    local_48 = param_2;
    local_40 = param_1;
    pFVar5 = `FVulkanChunkedPipelineCacheManagerImpl::
             GetChunk<FVulkanGraphicsPipelineState,FVulkanGraphicsPipelineState_*>'::__l12::
             <lambda_1>::operator()(&local_58);
    local_60 = &this->NumChunks;
    *param_4 = this->NumChunks;
    local_68 = local_res18;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->PrecachePSOToCacheChunkMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)&stack0x00000008,
               (bool *)&local_68);
    if ((pFVar5 == (FVulkanPipelineCacheChunk *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReturnChunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                           ,0x475,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FVulkanPipelineCacheChunk *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    *param_3 = NotFound;
    if (param_5->LockType == SLT_ReadOnly) {
      ReleaseSRWLockShared((PSRWLOCK)param_5->LockObject);
      AcquireSRWLockExclusive((PSRWLOCK)param_5->LockObject);
      param_5->LockType = SLT_Write;
    }
    pFVar5 = GetChunk<FVulkanGraphicsPipelineState,FVulkanGraphicsPipelineState_*>
                       (this,param_1,param_2,param_3,param_4,param_5,true);
  }
  return pFVar5;
}

// FVulkanChunkedPipelineCacheManagerImpl @ 145adb180

FVulkanChunkedPipelineCacheManagerImpl * __thiscall
FVulkanChunkedPipelineCacheManagerImpl::FVulkanChunkedPipelineCacheManagerImpl
          (FVulkanChunkedPipelineCacheManagerImpl *this)

{
  (this->ChunkedPipelineCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->NumChunks = 0;
  *(undefined8 *)&this->CacheChunksMap = 0;
  *(undefined8 *)&(this->CacheChunksMap).field_0x8 = 0;
  *(undefined8 *)&(this->CacheChunksMap).field_0x20 = 0;
  *(undefined4 *)&(this->CacheChunksMap).field_0x28 = 0;
  *(undefined4 *)&(this->CacheChunksMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheChunksMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CacheChunksMap).field_0x34 = 0;
  *(undefined8 *)&(this->CacheChunksMap).field_0x40 = 0;
  *(undefined4 *)&(this->CacheChunksMap).field_0x48 = 0;
  this->FoundPSOs = (atomic<int>)0x0;
  *(undefined8 *)&this->PrecachePSOToCacheChunkMap = 0;
  *(undefined8 *)&(this->PrecachePSOToCacheChunkMap).field_0x8 = 0;
  *(undefined8 *)&(this->PrecachePSOToCacheChunkMap).field_0x20 = 0;
  *(undefined4 *)&(this->PrecachePSOToCacheChunkMap).field_0x28 = 0;
  *(undefined4 *)&(this->PrecachePSOToCacheChunkMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrecachePSOToCacheChunkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrecachePSOToCacheChunkMap).field_0x34 = 0;
  *(undefined8 *)&(this->PrecachePSOToCacheChunkMap).field_0x40 = 0;
  *(undefined4 *)&(this->PrecachePSOToCacheChunkMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LRUCS,4000);
  (this->CacheChunkLRU).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->CacheChunkLRU)._padding_ = (longlong)&___7__TDoubleLinkedList_I__6B_;
  (this->CacheChunkLRU).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->CacheChunkLRU).ListSize = 0;
  LoadAllCaches(this);
  return this;
}

// ~FVulkanChunkedPipelineCacheManagerImpl @ 145adc420

void __thiscall
FVulkanChunkedPipelineCacheManagerImpl::~FVulkanChunkedPipelineCacheManagerImpl
          (FVulkanChunkedPipelineCacheManagerImpl *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  TDoubleLinkedList<unsigned_int>::~TDoubleLinkedList<unsigned_int>(&this->CacheChunkLRU);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LRUCS);
  *(undefined4 *)&(this->PrecachePSOToCacheChunkMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrecachePSOToCacheChunkMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrecachePSOToCacheChunkMap);
  *(undefined4 *)&(this->CacheChunksMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CacheChunksMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CacheChunksMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145adc4a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// operator() @ 145adcc20

void __thiscall
`FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches'::__l2::<lambda_1>::operator()
          (void *this,FPSOArchiveReader *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanPipelineCacheChunk *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  FVulkanPipelineCacheChunk *pFVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType FVar10;
  undefined1 local_res8 [16];
  uint local_res18 [4];
  undefined1 local_78 [8];
  FVulkanPipelineCacheChunk *local_70;
  undefined8 local_68;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_60;
  uint *local_50;
  FVulkanPipelineCacheChunk **local_48;
  undefined8 *local_40;
  uint *local_38;
  
  pFVar6 = ::operator_new(0x100,0x40);
  pFVar9 = (FVulkanPipelineCacheChunk *)0x0;
  local_70 = pFVar9;
  if (pFVar6 != (FVulkanPipelineCacheChunk *)0x0) {
    pFVar6->LRUNode = (TDoubleLinkedListNode *)0x0;
    pFVar6->OffsetWithinFile = 0;
    (pFVar6->PipelineCacheObjLock).Mutex.Mutex.Ptr = (void *)0x0;
    (pFVar6->CacheStateLock).Mutex.Mutex.Ptr = (void *)0x0;
    pFVar6->PipelineCacheObj = (VkPipelineCache_T *)0x0;
    *(undefined8 *)&pFVar6->PSOsToBeFlushed2 = 0;
    *(undefined8 *)&pFVar6->PSOsToBeFlushed2 = 0;
    pFVar6->PSOsNotFlushed = 0;
    pFVar6->CacheSize = 0;
    pFVar6->LastSaveSize = 0;
    pFVar6->TotalNumPSOs = (TAtomic<int>)0x0;
    pFVar6->TotalNumUniquePSOs = (TAtomic<int>)0x0;
    (pFVar6->BinaryCacheFileInfo).Filename.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar6->BinaryCacheFileInfo).Filename.Data.ArrayNum = 0;
    (pFVar6->BinaryCacheFileInfo).Filename.Data.ArrayMax = 0;
    (pFVar6->BinaryCacheFileInfo).RawDataOffset = 0xffffffff;
    pFVar6->LastUsedFrame = (atomic<unsigned___int64>)0x0;
    pFVar6->PendingAddToCompiles = (atomic<unsigned___int64>)0x0;
    pFVar6->CacheState = Initialized;
    local_70 = pFVar6;
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  FVulkanPipelineCacheChunk::Load(local_70,param_1,&local_60,LoadAsEvicted);
  local_res18[0] = *(int *)(*(longlong *)this + 8) + 1;
  *(uint *)(*(longlong *)this + 8) = local_res18[0];
  lVar2 = *(longlong *)this;
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar8 = lVar2 + 0x48;
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & local_res18[0]) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar5 * 0x18) == local_res18[0]) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CacheChunksMap.Contains(NewChunkKey)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                             ,0x413,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  pFVar6 = ::operator_new(0x18);
  if (pFVar6 != (FVulkanPipelineCacheChunk *)0x0) {
    *(uint *)&pFVar6->LRUNode = local_res18[0];
    *(TDoubleLinkedListNode **)&pFVar6->OffsetWithinFile = (TDoubleLinkedListNode *)0x0;
    (pFVar6->PipelineCacheObjLock).Mutex.Mutex.Ptr = (TDoubleLinkedListNode *)0x0;
    pFVar9 = pFVar6;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0xb8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)this;
  if (pFVar9 != (FVulkanPipelineCacheChunk *)0x0) {
    if (*(TDoubleLinkedListNode **)(lVar2 + 0xe8) == (TDoubleLinkedListNode *)0x0) {
      *(FVulkanPipelineCacheChunk **)(lVar2 + 0xf0) = pFVar9;
    }
    else {
      *(TDoubleLinkedListNode **)&pFVar9->OffsetWithinFile =
           *(TDoubleLinkedListNode **)(lVar2 + 0xe8);
      *(FVulkanPipelineCacheChunk **)(*(longlong *)(lVar2 + 0xe8) + 0x10) = pFVar9;
    }
    *(FVulkanPipelineCacheChunk **)(lVar2 + 0xe8) = pFVar9;
    (**(code **)(*(longlong *)(lVar2 + 0xe0) + 8))
              ((longlong *)(lVar2 + 0xe0),*(int *)(lVar2 + 0xf8) + 1);
  }
  local_70->LRUNode = (TDoubleLinkedListNode *)pFVar9;
  LeaveCriticalSection(lpCriticalSection);
  local_50 = local_res18;
  local_48 = &local_70;
  TSet<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x10),
             (TPairInitializer<unsigned_int_&,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_&&>
              *)(local_res18 + 2),(bool *)&local_50);
  iVar5 = local_60.ArrayNum;
  uVar7 = (ulonglong)local_60.ArrayNum;
  pFVar1 = local_60.AllocatorInstance.Data + uVar7 * 8;
  FVar10.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar5) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    local_68 = *(undefined8 *)FVar10.Data;
    local_40 = &local_68;
    local_38 = local_res18;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x68),
               (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_78,
               (bool *)&local_40);
    uVar7 = local_60._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  TDefaultDelete<FVulkanPipelineCacheChunk>::operator()
            ((TDefaultDelete<FVulkanPipelineCacheChunk> *)&local_70,local_70);
  return;
}

// operator() @ 145add610

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanPipelineCacheChunk * __thiscall
`FVulkanChunkedPipelineCacheManagerImpl::
GetChunk<FVulkanGraphicsPipelineState,FVulkanGraphicsPipelineState_*>'::__l12::<lambda_1>::
operator()(void *this)

{
  ECacheState EVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVulkanPipelineCacheChunk *pFVar7;
  undefined8 uVar8;
  FVulkanPipelineCacheChunk *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  FVulkanPipelineCacheChunk *pFVar12;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FVulkanPipelineCacheChunk *local_res18;
  uint *local_58;
  FVulkanPipelineCacheChunk **local_50;
  undefined8 local_48;
  VkPipelineCache_T *local_40;
  undefined4 local_38;
  FPlatformRWLock *local_30;
  
  lVar2 = *(longlong *)this;
  pFVar9 = (FVulkanPipelineCacheChunk *)0x0;
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar11 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar11 = lVar2 + 0x48;
    }
    iVar6 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & *(uint *)(lVar2 + 8)) * 4);
    if (iVar6 != -1) {
      do {
        lVar11 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x18;
        if (*(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x18) == *(uint *)(lVar2 + 8))
        {
          pFVar12 = (FVulkanPipelineCacheChunk *)(lVar11 + 8);
          if (lVar11 == 0) {
            pFVar12 = pFVar9;
          }
          if ((pFVar12 != (FVulkanPipelineCacheChunk *)0x0) &&
             (pFVar12 = (FVulkanPipelineCacheChunk *)pFVar12->LRUNode,
             pFVar12 != (FVulkanPipelineCacheChunk *)0x0)) {
            AcquireSRWLockShared((PSRWLOCK)&pFVar12->PipelineCacheObjLock);
            AcquireSRWLockShared((PSRWLOCK)&pFVar12->CacheStateLock);
            EVar1 = pFVar12->CacheState;
            ReleaseSRWLockShared((PSRWLOCK)&pFVar12->CacheStateLock);
            ReleaseSRWLockShared((PSRWLOCK)&pFVar12->PipelineCacheObjLock);
            if (EVar1 == Building) goto LAB_145add8bf;
          }
          break;
        }
        iVar6 = *(int *)(lVar11 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res8[0] = *(int *)(*(longlong *)this + 8) + 1;
  *(uint *)(*(longlong *)this + 8) = local_res8[0];
  lVar2 = *(longlong *)this;
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar11 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar11 = lVar2 + 0x48;
    }
    iVar6 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & local_res8[0]) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x18) == local_res8[0]) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CacheChunksMap.Contains(NewChunk)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                             ,0x456,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FVulkanPipelineCacheChunk *)(*pcVar4)();
            return pFVar9;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  pFVar7 = ::operator_new(0x18);
  pFVar12 = pFVar9;
  if (pFVar7 != (FVulkanPipelineCacheChunk *)0x0) {
    *(uint *)&pFVar7->LRUNode = local_res8[0];
    *(TDoubleLinkedListNode **)&pFVar7->OffsetWithinFile = (TDoubleLinkedListNode *)0x0;
    (pFVar7->PipelineCacheObjLock).Mutex.Mutex.Ptr = (TDoubleLinkedListNode *)0x0;
    pFVar12 = pFVar7;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0xb8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar2 = *(longlong *)this;
  if (pFVar12 != (FVulkanPipelineCacheChunk *)0x0) {
    if (*(TDoubleLinkedListNode **)(lVar2 + 0xe8) == (TDoubleLinkedListNode *)0x0) {
      *(FVulkanPipelineCacheChunk **)(lVar2 + 0xf0) = pFVar12;
    }
    else {
      *(TDoubleLinkedListNode **)&pFVar12->OffsetWithinFile =
           *(TDoubleLinkedListNode **)(lVar2 + 0xe8);
      *(FVulkanPipelineCacheChunk **)(*(longlong *)(lVar2 + 0xe8) + 0x10) = pFVar12;
    }
    *(FVulkanPipelineCacheChunk **)(lVar2 + 0xe8) = pFVar12;
    (**(code **)(*(longlong *)(lVar2 + 0xe0) + 8))
              ((longlong *)(lVar2 + 0xe0),*(int *)(lVar2 + 0xf8) + 1);
  }
  lVar2 = *(longlong *)this;
  pFVar7 = ::operator_new(0x100,0x40);
  if (pFVar7 != (FVulkanPipelineCacheChunk *)0x0) {
    pFVar7->LRUNode = (TDoubleLinkedListNode *)pFVar12;
    pFVar7->OffsetWithinFile = 0;
    (pFVar7->PipelineCacheObjLock).Mutex.Mutex.Ptr = (void *)0x0;
    (pFVar7->CacheStateLock).Mutex.Mutex.Ptr = (void *)0x0;
    pFVar7->PipelineCacheObj = (VkPipelineCache_T *)0x0;
    *(undefined8 *)&pFVar7->PSOsToBeFlushed2 = 0;
    *(undefined8 *)&pFVar7->PSOsToBeFlushed2 = 0;
    pFVar7->PSOsNotFlushed = 0;
    pFVar7->CacheSize = 0;
    pFVar7->LastSaveSize = 0;
    pFVar7->TotalNumPSOs = (TAtomic<int>)0x0;
    pFVar7->TotalNumUniquePSOs = (TAtomic<int>)0x0;
    (pFVar7->BinaryCacheFileInfo).Filename.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar7->BinaryCacheFileInfo).Filename.Data.ArrayNum = 0;
    (pFVar7->BinaryCacheFileInfo).Filename.Data.ArrayMax = 0;
    (pFVar7->BinaryCacheFileInfo).RawDataOffset = 0xffffffff;
    pFVar7->LastUsedFrame = (atomic<unsigned___int64>)0x0;
    pFVar7->PendingAddToCompiles = (atomic<unsigned___int64>)0x0;
    pFVar7->CacheState = Initialized;
    pFVar9 = pFVar7;
  }
  local_58 = local_res8;
  local_50 = &local_res18;
  local_res18 = pFVar9;
  TSet<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x10),
             (TPairInitializer<unsigned_int_&,TUniquePtr<FVulkanPipelineCacheChunk,TDefaultDelete<FVulkanPipelineCacheChunk>_>_&&>
              *)local_res10,(bool *)&local_58);
  pFVar12 = *(FVulkanPipelineCacheChunk **)
             (*(longlong *)(lVar2 + 0x10) + 8 + (longlong)(int)local_res10._0_4_ * 0x18);
  TDefaultDelete<FVulkanPipelineCacheChunk>::operator()
            ((TDefaultDelete<FVulkanPipelineCacheChunk> *)&local_res18,local_res18);
  LeaveCriticalSection(lpCriticalSection);
  FVulkanPipelineCacheChunk::InitNewCache(pFVar12);
LAB_145add8bf:
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  if (((GVulkanRHI->Device->OptionalDeviceExtensions).field0_0x0.Packed >> 0x34 & 1) != 0) {
    local_38 = 0;
    local_48 = **(undefined8 **)((longlong)this + 0x10);
    local_40 = pFVar12->PipelineCacheObj;
    local_30 = &pFVar12->PipelineCacheObjLock;
    UE::Core::Private::Function::CheckCallable((void *)*puVar3);
    pcVar4 = (code *)*puVar3;
    plVar10 = puVar3 + 2;
    if ((longlong *)puVar3[5] != (longlong *)0x0) {
      plVar10 = (longlong *)puVar3[5];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    iVar6 = (*pcVar4)(uVar8,&local_48);
    if (iVar6 == 0) {
      **(undefined4 **)((longlong)this + 8) = 1;
      return pFVar12;
    }
    if ((iVar6 != 0x3b9f5228) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == VK_SUCCESS || Result == VK_PIPELINE_COMPILE_REQUIRED_EXT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                           ,0x205,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FVulkanPipelineCacheChunk *)(*pcVar4)();
      return pFVar9;
    }
  }
  FVulkanPipelineCacheChunk::ReservePendingPSO(pFVar12);
  return pFVar12;
}

// LoadAllCaches @ 145ae9d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches(FVulkanChunkedPipelineCacheManagerImpl *this)

{
  longlong *plVar1;
  code *pcVar2;
  FVulkanChunkedPipelineCacheManagerImpl *SRWLock;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  IFileManager *pIVar9;
  FVulkanCombinedChunkCacheFile *this_01;
  undefined ***pppuVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  undefined8 local_178;
  FString local_170;
  undefined1 local_160;
  undefined1 local_15f [7];
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FVulkanChunkedPipelineCacheManagerImpl *local_f8;
  FString local_f0;
  TStringView<wchar_t> local_e0;
  FScriptContainerElement *local_d0;
  int local_c8;
  TStringView<wchar_t> local_c0;
  undefined8 local_b0;
  int local_a8;
  code *local_98 [2];
  undefined **local_88;
  FVulkanChunkedPipelineCacheManagerImpl *pFStack_80;
  undefined1 *local_78;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FVulkanChunkedPipelineCacheManagerImpl *pFStack_50;
  undefined1 *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_f8 = this;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if (((*(int *)&(this->CacheChunksMap).field_0x8 != *(int *)&(this->CacheChunksMap).field_0x34) ||
      (*(int *)&(this->PrecachePSOToCacheChunkMap).field_0x8 !=
       *(int *)&(this->PrecachePSOToCacheChunkMap).field_0x34)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheChunksMap.IsEmpty() && PrecachePSOToCacheChunkMap.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x3de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  UE::Vulkan::GetRHICacheRootFolder(&local_138);
  UE::Vulkan::GetPSOBinaryCacheVersionedFolder(&local_108);
  local_e0.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
  local_e0.Size = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    local_e0.Size = 0;
  }
  local_d0 = local_108.Data.AllocatorInstance.Data;
  local_c8 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    local_c8 = 0;
  }
  FPaths::CombineInternal(&local_118,&local_e0,2);
  this_00 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  pIVar9 = IFileManager::Get();
  FVar15.Data = local_138.Data.AllocatorInstance.Data;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar13 = local_138.Data.ArrayNum;
  pcVar2 = *(code **)((longlong)*pIVar9 + 0x80);
  uVar16 = (3 - (uint)(iVar13 != 0)) + iVar13;
  local_158.Data.ArrayNum = iVar13;
  if ((int)uVar16 < iVar13) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar16,0,(ForAnyElementType *)&local_158,iVar13,&local_158.Data.ArrayMax);
  if (iVar13 != 0) {
    memcpy(local_158.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar13 * 2);
  }
  ::FString::PathAppend(&local_158,L"*",1);
  (*pcVar2)(pIVar9,&local_180);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  iVar13 = (int)local_178;
  uVar11 = (ulonglong)(int)local_178;
  pFVar17 = local_180.Data + uVar11 * 0x10;
  FVar15.Data = local_180.Data;
  do {
    iVar7 = (int)uVar11;
    if ((int)uVar11 != iVar13) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_160)
      ;
      iVar7 = (int)local_178;
    }
    FVar12.Data = local_138.Data.AllocatorInstance.Data;
    if (FVar15.Data == pFVar17) {
      if ((longlong)local_178 < 0) {
        DestructItems<FString,int>((FString *)local_180.Data,iVar7);
        uVar11 = local_178 >> 0x20;
        local_178 = local_178 & 0xffffffff00000000;
        if ((int)uVar11 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_180,0,(int *)((longlong)&local_178 + 4));
        }
      }
      else {
        DestructItems<FString,int>((FString *)local_180.Data,iVar7);
        local_178 = local_178 & 0xffffffff00000000;
      }
      pIVar9 = IFileManager::Get();
      FVar15.Data = local_118.Data.AllocatorInstance.Data;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar13 = local_118.Data.ArrayNum;
      pcVar2 = *(code **)((longlong)*pIVar9 + 0x80);
      uVar16 = (3 - (uint)(iVar13 != 0)) + iVar13;
      local_148.Data.ArrayNum = iVar13;
      if (iVar13 <= (int)uVar16) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar16,0,(ForAnyElementType *)&local_148,iVar13,&local_148.Data.ArrayMax);
        if (iVar13 != 0) {
          memcpy(local_148.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar13 * 2);
        }
        ::FString::PathAppend(&local_148,L"*",1);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_148.Data.ArrayNum != 0) {
          FVar15.Data = local_148.Data.AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar9,&local_180,FVar15.Data,1);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        iVar13 = (int)local_178;
        uVar11 = (ulonglong)(int)local_178;
        pFVar17 = local_180.Data + uVar11 * 0x10;
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        FVar15.Data = local_180.Data;
        while( true ) {
          if ((int)uVar11 != iVar13) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_15f);
          }
          SRWLock = local_f8;
          if (FVar15.Data == pFVar17) break;
          if ((*(int *)(*plVar1 + 0x9d4c) <
               `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
            ::__l2::Impl.MappedCacheFile.Ptr = (IMappedFileHandle *)0x0;
            `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
            ::__l2::Impl.MappingLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
            `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
            ::__l2::Impl.MappedRegion.Ptr = (IMappedFileRegion *)0x0;
            `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
            ::__l2::Impl.PSOFileWriter.Ptr = (FArchive *)0x0;
            atexit(`FVulkanCombinedChunkCacheFile::Get'::__l2::
                   _dynamic_atexit_destructor_for__Impl__);
            _Init_thread_footer(&`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          ::FString::FString(&local_f0,L"VulkanPSOChunks");
          FVar12.Data = local_f0.Data.AllocatorInstance.Data;
          iVar7 = *(int *)(FVar15.Data + 8);
          if (iVar7 == local_f0.Data.ArrayNum) {
            if (iVar7 < 2) {
              bVar3 = false;
            }
            else {
              iVar7 = wcscmp(*(wchar_t **)FVar15.Data,
                             (wchar_t *)local_f0.Data.AllocatorInstance.Data);
              bVar3 = iVar7 != 0;
            }
          }
          else {
            bVar3 = iVar7 + local_f0.Data.ArrayNum != 1;
          }
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
          if (bVar3) {
            local_c0.DataPtr = (wchar_t *)local_118.Data.AllocatorInstance.Data;
            local_c0.Size = local_118.Data.ArrayNum + -1;
            local_b0 = *(undefined8 *)FVar15.Data;
            if (local_118.Data.ArrayNum == 0) {
              local_c0.Size = 0;
            }
            local_a8 = *(int *)(FVar15.Data + 8) + -1;
            if (*(int *)(FVar15.Data + 8) == 0) {
              local_a8 = 0;
            }
            FPaths::CombineInternal(&local_128,&local_c0,2);
            if (4 < (byte)LogVulkanRHI._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`private:_bool___cdecl_FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches(void)___ptr64'
                          ::__l69::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            }
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_128.Data.ArrayNum != 0) {
              FVar12.Data = local_128.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,FVar12.Data);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
          uVar11 = local_178 & 0xffffffff;
          FVar15.Data = FVar15.Data + 0x10;
        }
        local_58 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__1__LoadAllCaches_FVulkanChunkedPipelineCacheManagerImpl__AEAA_NXZ__00_0A__Function_Private_Core_UE__6B_
        ;
        local_48 = local_188;
        local_188[0] = 0;
        local_68 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches'::__l2::<lambda_1>,void,FVulkanCombinedChunkCacheFile::FPSOArchiveReader_&>
                   ::Call;
        local_40 = (undefined ***)0x0;
        pFStack_50 = local_f8;
        this_01 = FVulkanCombinedChunkCacheFile::Get();
        local_98[0] = local_68;
        local_70 = local_40;
        local_88 = local_58;
        pFStack_80 = pFStack_50;
        local_78 = local_48;
        local_68 = (code *)0x0;
        bVar3 = FVulkanCombinedChunkCacheFile::LoadAllCacheChunks
                          (this_01,(TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader_&)>
                                    *)local_98);
        if (!bVar3) {
          if (4 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`private:_bool___cdecl_FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches(void)___ptr64'
                        ::__l90::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          UE::Vulkan::GUseChunkedPSOCache = 0;
        }
        if (local_68 != (code *)0x0) {
          pppuVar10 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar10 = local_40;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        DestructItems<FString,int>((FString *)local_180.Data,(int)local_178);
        if (local_180.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        return bVar3;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    iVar7 = *(int *)(FVar15.Data + 8) + -1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      iVar7 = 0;
    }
    iVar14 = local_138.Data.ArrayNum;
    local_170.Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar7 != -1)) {
      iVar6 = iVar7 + 2;
LAB_145ae9f4d:
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar6 != 0) goto LAB_145ae9f57;
      local_170.Data.ArrayMax = 0;
    }
    else {
      iVar6 = iVar7 + 1;
      if (iVar14 == 0) goto LAB_145ae9f4d;
LAB_145ae9f57:
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar16 = iVar14 + iVar6;
      if ((int)uVar16 < iVar14) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar16,0,(ForAnyElementType *)&local_170,iVar14,&local_170.Data.ArrayMax);
      if (iVar14 != 0) {
        memcpy(local_170.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar14 * 2);
      }
    }
    ::FString::PathAppend(&local_170,*(wchar_t **)FVar15.Data,iVar7);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar12.Data = local_170.Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar8 + 0x118))(pIVar8,FVar12.Data);
    iVar7 = *(int *)(FVar15.Data + 8);
    if (iVar7 == local_108.Data.ArrayNum) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar15.Data,(wchar_t *)local_108.Data.AllocatorInstance.Data
                          );
        bVar3 = iVar7 == 0;
        goto LAB_145ae9ffc;
      }
LAB_145aea003:
      if (cVar5 == '\0') goto LAB_145aea00b;
    }
    else {
      bVar3 = iVar7 + local_108.Data.ArrayNum == 1;
LAB_145ae9ffc:
      if (bVar3) goto LAB_145aea003;
LAB_145aea00b:
      if (cVar5 == '\0') {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_170.Data.ArrayNum != 0) {
          FVar12.Data = local_170.Data.AllocatorInstance.Data;
        }
        cVar5 = (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,FVar12.Data);
      }
      else {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_170.Data.ArrayNum != 0) {
          FVar12.Data = local_170.Data.AllocatorInstance.Data;
        }
        cVar5 = (**(code **)((longlong)*pIVar8 + 0x1f8))(pIVar8,FVar12.Data);
      }
      if (5 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`private:_bool___cdecl_FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches(void)___ptr64'
                    ::__l22::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if ((2 < (byte)LogRHI._0_1_) && (cVar5 == '\0')) {
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches(void)___ptr64'
                    ::__l40::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    uVar11 = local_178 & 0xffffffff;
    FVar15.Data = FVar15.Data + 0x10;
  } while( true );
}

// TryUnloadCacheChunks @ 145af5630

void __thiscall
FVulkanChunkedPipelineCacheManagerImpl::TryUnloadCacheChunks
          (FVulkanChunkedPipelineCacheManagerImpl *this)

{
  ECacheState EVar1;
  TDoubleLinkedListNode *pTVar2;
  undefined1 *puVar3;
  FVulkanPipelineCacheChunk *this_00;
  TDoubleLinkedListNode *pTVar4;
  code *pcVar5;
  atomic<unsigned___int64> aVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  TDoubleLinkedListNode *pTVar13;
  longlong lVar14;
  atomic<int> local_res8;
  int local_res10;
  
  iVar8 = FGenericPlatformRHIFramePacer::GetFramePaceFromSyncInterval();
  uVar10 = iVar8 * UE::Vulkan::GUntouchedChunkEvictTimeSeconds;
  if (GFrameNumber < (uint)(iVar8 * UE::Vulkan::GUntouchedChunkEvictTimeSeconds)) {
    uVar10 = GFrameNumber;
  }
  uVar10 = GFrameNumber - uVar10;
  AcquireSRWLockShared((PSRWLOCK)this);
  if (&this->LRUCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->LRUCS);
  local_res8 = UE::Vulkan::TotalResidentCacheSize;
  pTVar13 = (this->CacheChunkLRU).TailNode;
  iVar8 = UE::Vulkan::GTargetResidentCacheSizeMb << 0x14;
  local_res10 = 0;
  if (pTVar13 != (TDoubleLinkedListNode *)0x0) {
    aVar6._4_4_ = 0;
    aVar6._0_4_ = uVar10;
    do {
      if ((2 < local_res10) || ((int)local_res8 <= iVar8)) break;
      pTVar2 = pTVar13->PrevNode;
      if (*(int *)&(this->CacheChunksMap).field_0x8 != *(int *)&(this->CacheChunksMap).field_0x34) {
        puVar3 = *(undefined1 **)&(this->CacheChunksMap).field_0x40;
        puVar12 = &(this->CacheChunksMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        iVar9 = *(int *)(puVar12 +
                        (ulonglong)
                        (*(int *)&(this->CacheChunksMap).field_0x48 - 1U & pTVar13->Value) * 4);
        if (iVar9 != -1) {
          do {
            lVar14 = *(longlong *)&this->CacheChunksMap + (longlong)iVar9 * 0x18;
            if (*(uint *)(*(longlong *)&this->CacheChunksMap + (longlong)iVar9 * 0x18) ==
                pTVar13->Value) {
              if (lVar14 == 0) goto LAB_145af574a;
              goto LAB_145af5770;
            }
            iVar9 = *(int *)(lVar14 + 0x10);
          } while (iVar9 != -1);
        }
      }
      lVar14 = 0;
LAB_145af574a:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_145af5770:
      this_00 = *(FVulkanPipelineCacheChunk **)(lVar14 + 8);
      AcquireSRWLockShared((PSRWLOCK)&this_00->PipelineCacheObjLock);
      AcquireSRWLockShared((PSRWLOCK)&this_00->CacheStateLock);
      if (this_00->CacheState == FinalizedEvicted) {
        iVar9 = 0;
      }
      else {
        iVar9 = this_00->CacheSize;
      }
      ReleaseSRWLockShared((PSRWLOCK)&this_00->CacheStateLock);
      ReleaseSRWLockShared((PSRWLOCK)&this_00->PipelineCacheObjLock);
      AcquireSRWLockShared((PSRWLOCK)&this_00->PipelineCacheObjLock);
      AcquireSRWLockShared((PSRWLOCK)&this_00->CacheStateLock);
      EVar1 = this_00->CacheState;
      ReleaseSRWLockShared((PSRWLOCK)&this_00->CacheStateLock);
      ReleaseSRWLockShared((PSRWLOCK)&this_00->PipelineCacheObjLock);
      if (EVar1 == Finalized) {
        if ((ulonglong)aVar6 < (ulonglong)this_00->LastUsedFrame) break;
        FVulkanPipelineCacheChunk::Unload(this_00);
        if ((this->CacheChunkLRU).ListSize == 1) {
          pTVar13->PrevNode = (TDoubleLinkedListNode *)0x0;
          iVar11 = 0;
          pTVar13->NextNode = (TDoubleLinkedListNode *)0x0;
          (this->CacheChunkLRU).TailNode = (TDoubleLinkedListNode *)0x0;
          (this->CacheChunkLRU).HeadNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          pTVar4 = (this->CacheChunkLRU).HeadNode;
          if (pTVar13 == pTVar4) {
            pTVar4 = pTVar4->NextNode;
            (this->CacheChunkLRU).HeadNode = pTVar4;
            pTVar4->PrevNode = (TDoubleLinkedListNode *)0x0;
          }
          else {
            pTVar4 = (this->CacheChunkLRU).TailNode;
            if (pTVar13 == pTVar4) {
              pTVar4 = pTVar4->PrevNode;
              (this->CacheChunkLRU).TailNode = pTVar4;
              pTVar4->NextNode = (TDoubleLinkedListNode *)0x0;
            }
            else {
              pTVar13->NextNode->PrevNode = pTVar13->PrevNode;
              pTVar13->PrevNode->NextNode = pTVar13->NextNode;
            }
          }
          pTVar13->PrevNode = (TDoubleLinkedListNode *)0x0;
          pTVar13->NextNode = (TDoubleLinkedListNode *)0x0;
          iVar11 = (this->CacheChunkLRU).ListSize + -1;
        }
        (**(code **)((this->CacheChunkLRU)._padding_ + 8))(&this->CacheChunkLRU,iVar11);
        local_res8 = (atomic<int>)((int)local_res8 - iVar9);
        local_res10 = local_res10 + 1;
      }
      pTVar13 = pTVar2;
    } while (pTVar2 != (TDoubleLinkedListNode *)0x0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->LRUCS);
                    /* WARNING: Could not recover jumptable at 0x000145af5901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)this);
  return;
}


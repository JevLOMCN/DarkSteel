// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanDescriptorSetCache @ 145b45390

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

FVulkanDescriptorSetCache * __thiscall
FVulkanDescriptorSetCache::FVulkanDescriptorSetCache
          (FVulkanDescriptorSetCache *this,FVulkanDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCachedPool *this_00;
  FCachedPool *pFVar5;
  FVulkanDescriptorSetCache *pFVar6;
  FCachedPool *local_18 [2];
  
  this->Device = param_1;
  pFVar5 = (FCachedPool *)0x0;
  (this->CachedPools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPools).ArrayNum = 0;
  (this->CachedPools).ArrayMax = 0;
  (this->FreePool).Ptr = (FCachedPool *)0x0;
  this->PoolAllocRatio = 0.0;
  this_00 = ::operator_new(0x120);
  if (this_00 != (FCachedPool *)0x0) {
    pFVar5 = FCachedPool::FCachedPool(this_00,this->Device,0x80,DefaultPoolSizes);
  }
  pFVar1 = (this->CachedPools).AllocatorInstance.Data;
  local_18[0] = pFVar5;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)(this->CachedPools).ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVulkanDescriptorSetCache *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (this->CachedPools).ArrayNum;
  if (iVar4 == (this->CachedPools).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CachedPools).AllocatorInstance,&(this->CachedPools).ArrayMax);
  }
  (this->CachedPools).ArrayNum = iVar4 + 1;
  *(FCachedPool **)((this->CachedPools).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_18[0];
  return this;
}

// ~FVulkanDescriptorSetCache @ 145b4d720

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

void __thiscall
FVulkanDescriptorSetCache::~FVulkanDescriptorSetCache(FVulkanDescriptorSetCache *this)

{
  FCachedPool *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->FreePool).Ptr;
  if (pFVar1 != (FCachedPool *)0x0) {
    *(undefined4 *)&(pFVar1->SetCache).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->SetCache).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->SetCache);
    *(undefined4 *)&(pFVar1->SetsCache).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->SetsCache).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->SetsCache);
    FVulkanGenericDescriptorPool::~FVulkanGenericDescriptorPool(&pFVar1->Pool);
    ::operator_delete(pFVar1,0x120);
  }
  DestructItems<TUniquePtr<FVulkanDescriptorSetCache::FCachedPool,TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>_>,int>
            ((TUniquePtr<FVulkanDescriptorSetCache::FCachedPool,TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>_>
              *)(this->CachedPools).AllocatorInstance.Data,(this->CachedPools).ArrayNum);
  pFVar3 = (this->CachedPools).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// AddCachedPool @ 145b56900

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDescriptorSetCache::AddCachedPool(FVulkanDescriptorSetCache *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  VkResult VVar6;
  int iVar7;
  FCachedPool *pFVar8;
  FCachedPool *pFVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  if (this->PoolAllocRatio <= 0.0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoolAllocRatio > 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x3be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar13 = (float)GDSetCacheTargetSetsPerPool / this->PoolAllocRatio;
  auVar12 = ZEXT416((uint)fVar13);
  if (0.0 <= fVar13) {
    auVar12 = roundps(auVar12,auVar12,2);
    fVar13 = auVar12._0_4_;
  }
  else {
    auVar12 = roundps(auVar12,auVar12,1);
    fVar13 = auVar12._0_4_;
  }
  pFVar8 = (this->FreePool).Ptr;
  pFVar9 = (FCachedPool *)0x0;
  if (pFVar8 != (FCachedPool *)0x0) {
    fVar11 = (float)((longlong)fVar13 & 0xffffffff);
    fVar11 = ((float)(pFVar8->Pool).MaxDescriptorSets - fVar11) / fVar11;
    if ((__real_bdcccccd <= fVar11) && (fVar11 <= __real_3f000000)) {
      if ((pFVar8->Pool).DescriptorPool == (VkDescriptorPool_T *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DescriptorPool != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                           ,0x399,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      VVar6 = (*VulkanDynamicAPI::vkResetDescriptorPool)
                        (((pFVar8->Pool).Device)->Device,(pFVar8->Pool).DescriptorPool,0);
      if (VVar6 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar6,"VulkanRHI::vkResetDescriptorPool(Device->GetHandle(), DescriptorPool, 0)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                   ,0x39a);
      }
      TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
               *)&pFVar8->SetsCache);
      TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
               *)&pFVar8->SetCache);
      pFVar8->PoolSizesStatistic[0] = 0;
      pFVar8->PoolSizesStatistic[1] = 0;
      pFVar8->PoolSizesStatistic[2] = 0;
      pFVar8->PoolSizesStatistic[3] = 0;
      pFVar8->PoolSizesStatistic[4] = 0;
      pFVar8->PoolSizesStatistic[5] = 0;
      pFVar8->PoolSizesStatistic[6] = 0;
      pFVar8->PoolSizesStatistic[7] = 0;
      pFVar8->PoolSizesStatistic[8] = 0;
      pFVar8->PoolSizesStatistic[9] = 0;
      pFVar8->PoolSizesStatistic[10] = 0;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,1,&(this->CachedPools).AllocatorInstance,&(this->CachedPools).ArrayNum,
                         &(this->CachedPools).ArrayMax);
      pFVar1 = (this->CachedPools).AllocatorInstance.Data;
      memmove(pFVar1 + 8,pFVar1,(longlong)iVar7 << 3);
      *(FCachedPool **)(this->CachedPools).AllocatorInstance.Data = (this->FreePool).Ptr;
      (this->FreePool).Ptr = (FCachedPool *)0x0;
      return;
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    pFVar8 = (this->FreePool).Ptr;
    if (pFVar8 != (FCachedPool *)0x0) {
      (this->FreePool).Ptr = (FCachedPool *)0x0;
      *(undefined4 *)&(pFVar8->SetCache).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar8->SetCache).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar8->SetCache);
      *(undefined4 *)&(pFVar8->SetsCache).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar8->SetsCache).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar8->SetsCache);
      FVulkanGenericDescriptorPool::~FVulkanGenericDescriptorPool(&pFVar8->Pool);
      ::operator_delete(pFVar8,0x120);
    }
  }
  if ((this->CachedPools).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(this->CachedPools).AllocatorInstance.Data;
  iVar10 = *(int *)(lVar3 + 0xa8) - *(int *)(lVar3 + 0xd4);
  iVar7 = 1;
  if (1 < iVar10) {
    iVar7 = iVar10;
  }
  local_30 = __real_3f800000 / (float)iVar7;
  local_58 = (float)*(uint *)(lVar3 + 0xf4) * local_30;
  local_54 = (float)*(uint *)(lVar3 + 0xf8) * local_30;
  local_50 = (float)*(uint *)(lVar3 + 0xfc) * local_30;
  local_4c = (float)*(uint *)(lVar3 + 0x100) * local_30;
  local_48 = (float)*(uint *)(lVar3 + 0x104) * local_30;
  local_44 = (float)*(uint *)(lVar3 + 0x108) * local_30;
  local_40 = (float)*(uint *)(lVar3 + 0x10c) * local_30;
  local_3c = (float)*(uint *)(lVar3 + 0x110) * local_30;
  local_38 = (float)*(uint *)(lVar3 + 0x114) * local_30;
  local_34 = (float)*(uint *)(lVar3 + 0x118) * local_30;
  local_30 = (float)*(uint *)(lVar3 + 0x11c) * local_30;
  pFVar8 = ::operator_new(0x120);
  if (pFVar8 != (FCachedPool *)0x0) {
    pFVar9 = FCachedPool::FCachedPool(pFVar8,this->Device,(uint)(longlong)fVar13,&local_58);
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,&(this->CachedPools).AllocatorInstance,&(this->CachedPools).ArrayNum,
                     &(this->CachedPools).ArrayMax);
  pFVar1 = (this->CachedPools).AllocatorInstance.Data;
  memmove(pFVar1 + 8,pFVar1,(longlong)iVar7 << 3);
  *(FCachedPool **)(this->CachedPools).AllocatorInstance.Data = pFVar9;
  return;
}

// GC @ 145b68210

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDescriptorSetCache::GC(FVulkanDescriptorSetCache *this)

{
  TUniquePtr<FVulkanDescriptorSetCache::FCachedPool,TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FCachedPool *pFVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (GDSetCacheMaxPoolLookups < (this->CachedPools).ArrayNum) {
    do {
      iVar8 = (this->CachedPools).ArrayNum;
      uVar9 = iVar8 - 1;
      uVar11 = 0;
      if ((int)uVar9 < iVar8) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (GFrameNumberRenderThread -
          *(int *)(*(longlong *)
                    ((this->CachedPools).AllocatorInstance.Data +
                    (longlong)(this->CachedPools).ArrayNum * 8 + -8) + 0xf0) < 4) {
        return;
      }
      pTVar1 = &this->FreePool;
      uVar11 = (this->CachedPools).ArrayNum - 1;
      if ((pTVar1->Ptr != (FCachedPool *)0x0) && (2 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar9 = 0;
      if ((int)uVar11 < (this->CachedPools).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar10 = (longlong)(int)uVar11;
      pFVar3 = (this->CachedPools).AllocatorInstance.Data + lVar10 * 8;
      if ((FScriptContainerElement *)pTVar1 != pFVar3) {
        pFVar4 = pTVar1->Ptr;
        pTVar1->Ptr = *(FCachedPool **)pFVar3;
        *(undefined8 *)pFVar3 = 0;
        if (pFVar4 != (FCachedPool *)0x0) {
          *(undefined4 *)&(pFVar4->SetCache).field_0x48 = 0;
          pvVar5 = *(void **)&(pFVar4->SetCache).field_0x40;
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar4->SetCache);
          *(undefined4 *)&(pFVar4->SetsCache).field_0x48 = 0;
          pvVar5 = *(void **)&(pFVar4->SetsCache).field_0x40;
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar4->SetsCache);
          FVulkanGenericDescriptorPool::~FVulkanGenericDescriptorPool(&pFVar4->Pool);
          ::operator_delete(pFVar4,0x120);
        }
      }
      uVar9 = 0;
      if ((int)uVar11 < (this->CachedPools).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->CachedPools).AllocatorInstance.Data;
      pvVar5 = *(void **)(pFVar3 + lVar10 * 8);
      pFVar3 = pFVar3 + lVar10 * 8;
      if (pvVar5 != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar5 + 0xe8) = 0;
        if (*(void **)((longlong)pvVar5 + 0xe0) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar5 + 0xe0));
        }
        TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pvVar5 + 0xa0));
        *(undefined4 *)((longlong)pvVar5 + 0x98) = 0;
        if (*(void **)((longlong)pvVar5 + 0x90) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar5 + 0x90));
        }
        TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pvVar5 + 0x50));
        FVulkanGenericDescriptorPool::~FVulkanGenericDescriptorPool
                  ((FVulkanGenericDescriptorPool *)((longlong)pvVar5 + 8));
        ::operator_delete(pvVar5,0x120);
      }
      iVar8 = ((this->CachedPools).ArrayNum - uVar11) + -1;
      if (iVar8 != 0) {
        memmove(pFVar3,pFVar3 + 8,(longlong)iVar8 << 3);
      }
      piVar2 = &(this->CachedPools).ArrayNum;
      *piVar2 = *piVar2 + -1;
    } while (GDSetCacheMaxPoolLookups < (this->CachedPools).ArrayNum);
  }
  return;
}

// GetDescriptorSets @ 145b692e0

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetCache::GetDescriptorSets
          (FVulkanDescriptorSetCache *this,FVulkanDSetsKey *param_1,
          FVulkanDescriptorSetsLayout *param_2,
          TArray<FVulkanDescriptorSetWriter,TSizedDefaultAllocator<32>_> *param_3,
          VkDescriptorSet_T **param_4)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  void *_Src;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  if (((this->CachedPools).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedPools.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                         ,0x3db,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < GDSetCacheMaxPoolLookups) {
    do {
      iVar10 = (int)uVar11;
      if ((this->CachedPools).ArrayNum <= iVar10) break;
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->CachedPools).AllocatorInstance.Data + uVar12);
      iVar8 = TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FVulkanDSetsKey>
                        ((TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
                          *)(lVar1 + 0x50),*(uint *)param_1,param_1);
      if (iVar8 != -1) {
        lVar9 = (longlong)iVar8 * 0x58 + *(longlong *)(lVar1 + 0x50);
        _Src = (void *)(lVar9 + 0x18);
        if (lVar9 == 0) {
          _Src = (void *)0x0;
        }
        if (_Src != (void *)0x0) {
          memcpy(param_4,_Src,(longlong)*(int *)((longlong)_Src + 0x30) << 3);
          *(uint *)(lVar1 + 0xf0) = GFrameNumberRenderThread;
          return;
        }
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
      uVar12 = uVar12 + 8;
    } while ((int)(iVar10 + 1U) < GDSetCacheMaxPoolLookups);
  }
  fVar5 = __real_40000000;
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  bVar6 = true;
  while( true ) {
    if (((this->CachedPools).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar7 = FCachedPool::CreateDescriptorSets
                      (*(FCachedPool **)(this->CachedPools).AllocatorInstance.Data,param_1,param_2,
                       param_3,param_4);
    if (bVar7) {
      return;
    }
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFirstTime",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                           ,1000,L"FATAL! Failed to create descriptor sets from new pool!"), bVar6))
    break;
    bVar6 = false;
    fVar14 = fVar5;
    if (this->PoolAllocRatio <= 0.0) {
      fVar14 = 0.0;
    }
    if (((this->CachedPools).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = *(longlong *)(this->CachedPools).AllocatorInstance.Data;
    fVar13 = (float)(*(int *)(lVar1 + 0xa8) - *(int *)(lVar1 + 0xd4)) /
             (float)*(uint *)(lVar1 + 0x10);
    if ((fVar13 < fVar4) && (fVar13 = fVar4, 2 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    this->PoolAllocRatio = (fVar14 * this->PoolAllocRatio + fVar13) / (fVar14 + fVar3);
    AddCachedPool(this);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// UpdateAllocRatio @ 145b822d0

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDescriptorSetCache::UpdateAllocRatio(FVulkanDescriptorSetCache *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (0.0 < this->PoolAllocRatio) {
    fVar5 = __real_40000000;
  }
  if (((this->CachedPools).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(this->CachedPools).AllocatorInstance.Data;
  fVar4 = (float)(*(int *)(lVar1 + 0xa8) - *(int *)(lVar1 + 0xd4)) / (float)*(uint *)(lVar1 + 0x10);
  if ((fVar4 < __real_3f000000) && (fVar4 = __real_3f000000, 2 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    fVar4 = __real_3f000000;
  }
  this->PoolAllocRatio = (fVar5 * this->PoolAllocRatio + fVar4) / (fVar5 + __real_3f800000);
  return;
}


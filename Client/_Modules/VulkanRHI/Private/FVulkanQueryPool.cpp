// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanQueryPool @ 145b46d90

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

FVulkanQueryPool * __thiscall
FVulkanQueryPool::FVulkanQueryPool
          (FVulkanQueryPool *this,FVulkanDevice *param_1,uint param_2,EVulkanQueryPoolType param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  VkResult VVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FVulkanQueryPool *pFVar7;
  VkQueryType VVar8;
  FName local_res8;
  FName local_res10;
  FStatMessage local_68;
  VkQueryPoolCreateInfo local_58;
  
  this->Device = param_1;
  this->MaxQueries = param_2;
  this->QueryType = param_3;
  this->_padding_ = (longlong)&___7FVulkanQueryPool__6B_;
  this->QueryPool = (VkQueryPool_T *)0x0;
  (this->QueryRefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryRefs).ArrayNum = 0;
  (this->QueryRefs).ArrayMax = 0;
  (this->QueryResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryResults).ArrayNum = 0;
  (this->QueryResults).ArrayMax = 0;
  VVar8 = VK_QUERY_TYPE_OCCLUSION;
  this->CurrentQueryCount = 0;
  this->QueryStride = 1;
  this->UnusedFrameCount = 0;
  FVar6 = StatPtr_STAT_VulkanNumQueryPools;
  if (StatPtr_STAT_VulkanNumQueryPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools>)0x0
     ) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_VulkanNumQueryPools");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueryPools,*pFVar5,
                       L"Num Query Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar6;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_68.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_68.StatData.Pad[0] = '\x01';
    local_68.StatData.Pad[1] = '\0';
    local_68.StatData.Pad[2] = '\0';
    local_68.StatData.Pad[3] = '\0';
    local_68.StatData.Pad[4] = '\0';
    local_68.StatData.Pad[5] = '\0';
    local_68.StatData.Pad[6] = '\0';
    local_68.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_68.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_68);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  local_58.sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
  local_58.queryType = VK_QUERY_TYPE_OCCLUSION;
  local_58.queryCount = 0;
  local_58.pipelineStatistics = 0;
  local_58._4_8_ = 0;
  local_58._12_8_ = 0;
  if (param_3 != Occlusion) {
    if (param_3 == PipelineStats) {
      VVar8 = VK_QUERY_TYPE_PIPELINE_STATISTICS;
    }
    else {
      VVar8 = VK_QUERY_TYPE_TIMESTAMP;
      if (param_3 != Timestamp) {
        if (param_3 == ASCompactedSize) {
          VVar8 = VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR;
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.h"
                             ,0x2b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FVulkanQueryPool *)(*pcVar2)();
            return pFVar7;
          }
          VVar8 = VK_QUERY_TYPE_MAX_ENUM;
        }
      }
    }
  }
  local_58.queryCount = this->MaxQueries;
  local_58.queryType = VVar8;
  VVar4 = (*VulkanDynamicAPI::vkCreateQueryPool)
                    (this->Device->Device,&local_58,&VulkanRHI::GAllocationCallbacks,
                     &this->QueryPool);
  if (VVar4 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar4,
               "VulkanRHI::vkCreateQueryPool(Device.GetHandle(), &PoolCreateInfo, VULKAN_CPU_ALLOCATOR, &QueryPool)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp"
               ,0x3a);
  }
  return this;
}

// ~FVulkanQueryPool @ 145b4ef80

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

void __thiscall FVulkanQueryPool::~FVulkanQueryPool(FVulkanQueryPool *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  this->_padding_ = (longlong)&___7FVulkanQueryPool__6B_;
  FVar4 = StatPtr_STAT_VulkanNumQueryPools;
  if (StatPtr_STAT_VulkanNumQueryPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools>)0x0
     ) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_VulkanNumQueryPools");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueryPools,*pFVar3,
                       L"Num Query Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  (*VulkanDynamicAPI::vkDestroyQueryPool)
            (this->Device->Device,this->QueryPool,&VulkanRHI::GAllocationCallbacks);
  this->QueryPool = (VkQueryPool_T *)0x0;
  pFVar2 = (this->QueryResults).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TRefCountPtr<FVulkanRenderQuery>,int>
            ((TRefCountPtr<FVulkanRenderQuery> *)(this->QueryRefs).AllocatorInstance.Data,
             (this->QueryRefs).ArrayNum);
  pFVar2 = (this->QueryRefs).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// IsStale @ 145b6bf20

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

bool __thiscall FVulkanQueryPool::IsStale(FVulkanQueryPool *this)

{
  return GQueryPoolDeletionDelay <= this->UnusedFrameCount;
}

// ReserveQuery @ 145b79460

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

uint __thiscall FVulkanQueryPool::ReserveQuery(FVulkanQueryPool *this,ulong64 *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = this->CurrentQueryCount;
  lVar7 = (longlong)(int)uVar6;
  uVar1 = this->QueryStride;
  this->CurrentQueryCount = uVar6 + 1;
  uVar5 = 0;
  if ((int)uVar6 < (this->QueryRefs).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  pFVar2 = (this->QueryRefs).AllocatorInstance.Data;
  this_00 = *(FRHIResource **)(pFVar2 + lVar7 * 8);
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)(pFVar2 + lVar7 * 8) = 0;
    FRHIResource::Release(this_00);
  }
  uVar5 = 0;
  if ((int)uVar6 < (this->QueryResults).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(ulong64 **)((this->QueryResults).AllocatorInstance.Data + lVar7 * 8) = param_1;
  return uVar6 * uVar1;
}

// ReserveQuery @ 145b79570

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

void __thiscall FVulkanQueryPool::ReserveQuery(FVulkanQueryPool *this,FVulkanRenderQuery *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FVulkanRenderQuery *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = this->CurrentQueryCount;
  lVar6 = (longlong)(int)uVar1;
  this->CurrentQueryCount = uVar1 + 1;
  param_1->IndexInPool = uVar1 * this->QueryStride;
  uVar5 = 0;
  if ((int)uVar1 < (this->QueryRefs).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
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
  pFVar2 = (this->QueryRefs).AllocatorInstance.Data;
  this_00 = *(FVulkanRenderQuery **)(pFVar2 + lVar6 * 8);
  if (this_00 != param_1) {
    *(FVulkanRenderQuery **)(pFVar2 + lVar6 * 8) = param_1;
    FRHIResource::AddRef((FRHIResource *)param_1);
    if (this_00 != (FVulkanRenderQuery *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  uVar5 = 0;
  if ((int)uVar1 < (this->QueryResults).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(ulong64 **)((this->QueryResults).AllocatorInstance.Data + lVar6 * 8) = &param_1->Result;
  return;
}

// Reset @ 145b79dd0

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
FVulkanQueryPool::Reset(FVulkanQueryPool *this,FVulkanCommandBuffer *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *_Dst;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar8 = this->MaxQueries;
  this->CurrentQueryCount = 0;
  this->QueryStride = param_2;
  this->UnusedFrameCount = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->QueryRefs).ArrayNum;
  DestructItems<TRefCountPtr<FVulkanRenderQuery>,int>
            ((TRefCountPtr<FVulkanRenderQuery> *)(this->QueryRefs).AllocatorInstance.Data,
             (this->QueryRefs).ArrayNum);
  piVar2 = &(this->QueryRefs).ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->QueryRefs).AllocatorInstance,0,piVar2);
  }
  uVar8 = this->MaxQueries;
  if (-1 < (int)uVar8) {
    piVar3 = &(this->QueryResults).ArrayNum;
    *piVar3 = 0;
    piVar4 = &(this->QueryResults).ArrayMax;
    if ((this->QueryResults).ArrayMax != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&(this->QueryResults).AllocatorInstance,0,piVar4);
    }
    uVar8 = this->MaxQueries / this->QueryStride;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar8,&(this->QueryRefs).AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<TRefCountPtr<FVulkanRenderQuery>,int>
              ((this->QueryRefs).AllocatorInstance.Data + (longlong)iVar9 * 8,uVar8);
    uVar5 = (ulonglong)this->MaxQueries / (ulonglong)this->QueryStride;
    iVar9 = *piVar3;
    uVar8 = (uint)uVar5;
    if (iVar9 < (int)uVar8) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar8 - iVar9,&(this->QueryResults).AllocatorInstance,piVar3,piVar4);
      memset((this->QueryResults).AllocatorInstance.Data + (longlong)iVar10 * 8,0,
             (longlong)(int)(uVar8 - iVar9) << 3);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar5);
      }
      if ((int)uVar8 < iVar9) {
        uVar11 = iVar9 - uVar8;
        if ((int)(uVar11 | uVar8) < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (uVar11 != 0) {
          _Dst = (this->QueryResults).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
          iVar9 = (*piVar3 - uVar8) - uVar11;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar11 * 8,(longlong)iVar9 << 3);
          }
          *piVar3 = *piVar3 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->QueryResults).AllocatorInstance,*piVar3,piVar4);
        }
      }
    }
    if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x40000000000) == 0) {
      (*VulkanDynamicAPI::vkCmdResetQueryPool)
                (param_1->CommandBufferHandle,this->QueryPool,0,this->MaxQueries);
    }
    else {
      (*VulkanDynamicAPI::vkResetQueryPoolEXT)
                (this->Device->Device,this->QueryPool,0,this->MaxQueries);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanGenericDescriptorPool @ 145b45730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanGenericDescriptorPool * __thiscall
FVulkanGenericDescriptorPool::FVulkanGenericDescriptorPool
          (FVulkanGenericDescriptorPool *this,FVulkanDevice *param_1,uint param_2,float *param_3)

{
  FName FVar1;
  VkResult VVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools> FVar7;
  uchar auVar8 [8];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_138 [32];
  FName local_d8;
  FStatMessage local_d0;
  VkDescriptorPoolCreateInfo local_c0;
  VkDescriptorPoolSize local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  ulonglong local_38;
  
  fVar11 = __real_40800000;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this->Device = param_1;
  this->MaxDescriptorSets = param_2;
  this->DescriptorPool = (VkDescriptorPool_T *)0x0;
  local_98.type = VK_DESCRIPTOR_TYPE_SAMPLER;
  fVar13 = (float)param_2;
  local_90 = 1;
  local_88 = 2;
  local_80 = 3;
  local_78 = 4;
  local_70 = 5;
  local_68 = 6;
  local_60 = 7;
  fVar10 = fVar13 + fVar13;
  if (fVar13 + fVar13 <= fVar11) {
    fVar10 = fVar11;
  }
  fVar12 = fVar13 * __real_3e000000;
  if (fVar13 * __real_3e000000 <= fVar11) {
    fVar12 = fVar11;
  }
  fVar9 = fVar13 * *param_3;
  if (fVar13 * *param_3 <= fVar10) {
    fVar9 = fVar10;
  }
  local_98.descriptorCount = (uint)(longlong)fVar9;
  this->PoolSizes[0] = local_98.descriptorCount;
  fVar9 = fVar13 * param_3[1];
  if (fVar13 * param_3[1] <= fVar10) {
    fVar9 = fVar10;
  }
  local_8c = (uint)(longlong)fVar9;
  this->PoolSizes[1] = local_8c;
  fVar9 = fVar13 * param_3[2];
  if (fVar13 * param_3[2] <= fVar10) {
    fVar9 = fVar10;
  }
  local_84 = (uint)(longlong)fVar9;
  this->PoolSizes[2] = local_84;
  fVar10 = fVar13 * param_3[3];
  if (fVar13 * param_3[3] <= fVar12) {
    fVar10 = fVar12;
  }
  fVar9 = fVar13 * __real_3f000000;
  local_7c = (uint)(longlong)fVar10;
  this->PoolSizes[3] = local_7c;
  if (fVar9 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar10 = fVar13 * param_3[4];
  if (fVar13 * param_3[4] <= fVar9) {
    fVar10 = fVar9;
  }
  local_74 = (uint)(longlong)fVar10;
  this->PoolSizes[4] = local_74;
  fVar10 = fVar13 * param_3[5];
  if (fVar13 * param_3[5] <= fVar12) {
    fVar10 = fVar12;
  }
  fVar9 = fVar13 * __real_3e800000;
  local_6c = (uint)(longlong)fVar10;
  this->PoolSizes[5] = local_6c;
  if (fVar9 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar10 = fVar13 * param_3[6];
  if (fVar13 * param_3[6] <= fVar9) {
    fVar10 = fVar9;
  }
  local_64 = (uint)(longlong)fVar10;
  this->PoolSizes[6] = local_64;
  fVar10 = fVar13 * param_3[7];
  if (fVar13 * param_3[7] <= fVar12) {
    fVar10 = fVar12;
  }
  local_5c = (uint)(longlong)fVar10;
  this->PoolSizes[7] = local_5c;
  local_58 = 8;
  local_50 = 9;
  local_48 = 10;
  local_c0.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
  fVar10 = fVar13 * fVar11;
  if (fVar13 * fVar11 <= fVar11) {
    fVar10 = fVar11;
  }
  fVar11 = fVar13 * param_3[8];
  if (fVar13 * param_3[8] <= fVar10) {
    fVar11 = fVar10;
  }
  local_54 = (uint)(longlong)fVar11;
  this->PoolSizes[8] = local_54;
  fVar11 = fVar13 * param_3[9];
  if (fVar13 * param_3[9] <= fVar12) {
    fVar11 = fVar12;
  }
  local_4c = (uint)(longlong)fVar11;
  this->PoolSizes[9] = local_4c;
  local_c0._28_4_ = 0;
  fVar11 = fVar13 * param_3[10];
  if (fVar13 * param_3[10] <= fVar12) {
    fVar11 = fVar12;
  }
  local_c0.poolSizeCount = 0xb;
  local_c0.maxSets = param_2;
  local_c0._4_8_ = 0;
  local_c0._12_8_ = 0;
  local_44 = (uint)(longlong)fVar11;
  this->PoolSizes[10] = local_44;
  local_c0.pPoolSizes = &local_98;
  VVar2 = (*VulkanDynamicAPI::vkCreateDescriptorPool)
                    (param_1->Device,&local_c0,&VulkanRHI::GAllocationCallbacks,
                     &this->DescriptorPool);
  if (VVar2 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar2,
               "VulkanRHI::vkCreateDescriptorPool(Device->GetHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, &DescriptorPool)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
               ,0x386);
  }
  auVar8[4] = '\0';
  auVar8[5] = '\0';
  auVar8[6] = '\0';
  auVar8[7] = '\0';
  auVar8._0_4_ = this->MaxDescriptorSets;
  if (auVar8 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_VulkanNumDescSetsTotal;
    if (StatPtr_STAT_VulkanNumDescSetsTotal ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)0x0) {
      pFVar3 = ::FName::FName(&local_d8,"STAT_VulkanNumDescSetsTotal");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescSetsTotal,*pFVar3,
                         L"Max Potential Desc Sets","STATGROUP_VulkanRHI","STATCAT_Advanced",
                         L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar4;
    local_d8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_d0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_d8 = FVar1;
      local_d0.StatData.Pad = auVar8;
      local_d0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_d0);
      FStatsTrace::Add(&local_d8,(long64)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  FVar7 = StatPtr_STAT_VulkanNumDescPools;
  if (StatPtr_STAT_VulkanNumDescPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)0x0)
  {
    pFVar3 = ::FName::FName(&local_d8,"STAT_VulkanNumDescPools");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescPools,*pFVar3,
                       L"Num Created DescSet Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",
                       L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_d8 = FVar1;
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_d0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_d0.StatData.Pad[0] = '\x01';
    local_d0.StatData.Pad[1] = '\0';
    local_d0.StatData.Pad[2] = '\0';
    local_d0.StatData.Pad[3] = '\0';
    local_d0.StatData.Pad[4] = '\0';
    local_d0.StatData.Pad[5] = '\0';
    local_d0.StatData.Pad[6] = '\0';
    local_d0.StatData.Pad[7] = '\0';
    local_d8 = FVar1;
    local_d0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar5,&local_d0);
    FStatsTrace::Add(&local_d8,1);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  return this;
}

// ~FVulkanGenericDescriptorPool @ 145b4d900

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
FVulkanGenericDescriptorPool::~FVulkanGenericDescriptorPool(FVulkanGenericDescriptorPool *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools> FVar6;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_38;
  
  if (this->DescriptorPool != (VkDescriptorPool_T *)0x0) {
    auVar7[4] = '\0';
    auVar7[5] = '\0';
    auVar7[6] = '\0';
    auVar7[7] = '\0';
    auVar7._0_4_ = this->MaxDescriptorSets;
    if (auVar7 != (uchar  [8])0x0) {
      FVar3 = StatPtr_STAT_VulkanNumDescSetsTotal;
      if (StatPtr_STAT_VulkanNumDescSetsTotal ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)0x0) {
        pFVar2 = ::FName::FName(&local_res8,"STAT_VulkanNumDescSetsTotal");
        FVar3 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescSetsTotal,*pFVar2
                           ,L"Max Potential Desc Sets","STATGROUP_VulkanRHI","STATCAT_Advanced",
                           L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar3;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar4 == (FThreadStats *)0x0) {
          pFVar5 = FThreadStatsPool::Get();
          pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
        }
        local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar1;
        local_38.StatData.Pad = auVar7;
        local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar4,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar7);
        if (pFVar4->ScopeCount == 0) {
          FThreadStats::Flush(pFVar4,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar4,false,false);
        }
      }
    }
    FVar6 = StatPtr_STAT_VulkanNumDescPools;
    if (StatPtr_STAT_VulkanNumDescPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)0x0
       ) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_VulkanNumDescPools");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescPools,*pFVar2,
                         L"Num Created DescSet Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",
                         L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_38.StatData.Pad[0] = '\x01';
      local_38.StatData.Pad[1] = '\0';
      local_38.StatData.Pad[2] = '\0';
      local_38.StatData.Pad[3] = '\0';
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_res8 = FVar1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-1);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
    (*VulkanDynamicAPI::vkDestroyDescriptorPool)
              (this->Device->Device,this->DescriptorPool,&VulkanRHI::GAllocationCallbacks);
  }
  return;
}

// AllocateDescriptorSet @ 145b56ed0

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

bool __thiscall
FVulkanGenericDescriptorPool::AllocateDescriptorSet
          (FVulkanGenericDescriptorPool *this,VkDescriptorSetLayout_T *param_1,
          VkDescriptorSet_T **param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  VkResult VVar4;
  VkDescriptorSetLayout_T *local_res10 [3];
  VkDescriptorSetAllocateInfo local_38;
  
  local_res10[0] = param_1;
  if (this->DescriptorPool == (VkDescriptorPool_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorPool != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x39f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_38._28_4_ = 0;
  local_38.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
  local_38._4_8_ = 0;
  local_38.pNext._4_4_ = 0;
  local_38.descriptorPool._0_4_ = SUB84(this->DescriptorPool,0);
  local_38.descriptorPool._4_4_ = (undefined4)((ulonglong)this->DescriptorPool >> 0x20);
  local_38.pSetLayouts = local_res10;
  local_38.descriptorSetCount = 1;
  VVar4 = (*VulkanDynamicAPI::vkAllocateDescriptorSets)(this->Device->Device,&local_38,param_2);
  return VVar4 == VK_SUCCESS;
}

// Reset @ 145b79d50

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

void __thiscall FVulkanGenericDescriptorPool::Reset(FVulkanGenericDescriptorPool *this)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  
  if (this->DescriptorPool == (VkDescriptorPool_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorPool != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  VVar3 = (*VulkanDynamicAPI::vkResetDescriptorPool)(this->Device->Device,this->DescriptorPool,0);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,"VulkanRHI::vkResetDescriptorPool(Device->GetHandle(), DescriptorPool, 0)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
               ,0x39a);
    return;
  }
  return;
}


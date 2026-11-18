// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanDescriptorPool @ 145b44eb0

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanDescriptorPool * __thiscall
FVulkanDescriptorPool::FVulkanDescriptorPool
          (FVulkanDescriptorPool *this,FVulkanDevice *param_1,FVulkanDescriptorSetsLayout *param_2,
          uint param_3)

{
  TTypeCompatibleBytes<VkDescriptorPoolSize> *pTVar1;
  uint uVar2;
  FName FVar3;
  FVulkanDescriptorSetsLayout *pFVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  VkResult VVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  uint *puVar13;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal> FVar14;
  longlong *plVar15;
  VkDescriptorType VVar16;
  ulonglong uVar17;
  uchar auVar18 [8];
  undefined1 auStackY_138 [32];
  FName local_d8;
  FStatMessage local_d0;
  VkDescriptorPoolCreateInfo local_c0;
  ForElementType<VkDescriptorPoolSize> local_98;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar17 = 0;
  this->Device = param_1;
  this->MaxDescriptorSets = 0;
  this->NumAllocatedDescriptorSets = 0;
  this->PeakAllocatedDescriptorSets = 0;
  this->DescriptorPool = (VkDescriptorPool_T *)0x0;
  this->Layout = param_2;
  FVar10 = StatPtr_STAT_VulkanNumDescPools;
  if (StatPtr_STAT_VulkanNumDescPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)0x0)
  {
    pFVar9 = ::FName::FName(&local_d8,"STAT_VulkanNumDescPools");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescPools,*pFVar9,
                        L"Num Created DescSet Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",
                        L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar10;
  local_d8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_d0.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_d0.StatData.Pad[0] = '\x01';
    local_d0.StatData.Pad[1] = '\0';
    local_d0.StatData.Pad[2] = '\0';
    local_d0.StatData.Pad[3] = '\0';
    local_d0.StatData.Pad[4] = '\0';
    local_d0.StatData.Pad[5] = '\0';
    local_d0.StatData.Pad[6] = '\0';
    local_d0.StatData.Pad[7] = '\0';
    local_d8 = FVar3;
    local_d0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,&local_d0);
    FStatsTrace::Add(&local_d8,1);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  this->MaxDescriptorSets = param_3;
  local_40 = 0;
  local_3c = 0xb;
  do {
    pFVar4 = this->Layout;
    VVar16 = (VkDescriptorType)uVar17;
    if ((int)pFVar4->_padding_ != *(int *)((longlong)&pFVar4->_padding_ + 4)) {
      plVar15 = &pFVar4->_padding_;
      if ((longlong *)pFVar4->_padding_ != (longlong *)0x0) {
        plVar15 = (longlong *)pFVar4->_padding_;
      }
      iVar6 = *(int *)((longlong)plVar15 + ((int)pFVar4->_padding_ - 1 & uVar17) * 4);
      if (iVar6 != -1) {
        lVar5 = pFVar4->_padding_;
        do {
          if (*(VkDescriptorType *)(lVar5 + (longlong)iVar6 * 0x10) == VVar16) {
            puVar13 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                      ::FindChecked(&pFVar4->_padding_,VVar16);
            uVar2 = *puVar13;
            if (uVar2 != 0) {
              uVar7 = local_40;
              if (local_40 == local_3c) {
                uVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<11>::ForElementType<VkDescriptorPoolSize>_>
                                  (0x408,&local_98,(int *)&local_3c);
              }
              local_40 = uVar7 + 1;
              *(undefined8 *)local_98.InlineData[(int)uVar7].Pad = 0;
              *(VkDescriptorType *)local_98.InlineData[(int)uVar7].Pad = VVar16;
              *(uint *)(local_98.InlineData[(int)uVar7].Pad + 4) = uVar2 * param_3;
            }
            break;
          }
          iVar6 = *(int *)(lVar5 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    uVar17 = (ulonglong)(VVar16 + VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER);
  } while (VVar16 + VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER < 0xb);
  pFVar4 = this->Layout;
  if ((int)pFVar4->_padding_ != *(int *)((longlong)&pFVar4->_padding_ + 4)) {
    plVar15 = (longlong *)pFVar4->_padding_;
    if ((longlong *)pFVar4->_padding_ == (longlong *)0x0) {
      plVar15 = &pFVar4->_padding_;
    }
    iVar6 = *(int *)((longlong)plVar15 + (ulonglong)((int)pFVar4->_padding_ - 1U & 0x3b9d13f0) * 4);
    if (iVar6 != -1) {
      lVar5 = pFVar4->_padding_;
      do {
        if (*(int *)(lVar5 + (longlong)iVar6 * 0x10) == 0x3b9d13f0) {
          puVar13 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                    ::FindChecked(&pFVar4->_padding_,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
          uVar2 = *puVar13;
          if (uVar2 != 0) {
            uVar7 = local_40;
            if (local_40 == local_3c) {
              uVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<11>::ForElementType<VkDescriptorPoolSize>_>
                                (0x408,&local_98,(int *)&local_3c);
            }
            local_40 = uVar7 + 1;
            pTVar1 = local_98.InlineData + (int)uVar7;
            pTVar1->Pad[0] = 0xf0;
            pTVar1->Pad[1] = '\x13';
            pTVar1->Pad[2] = 0x9d;
            pTVar1->Pad[3] = ';';
            *(uint *)(local_98.InlineData[(int)uVar7].Pad + 4) = uVar2 * param_3;
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  local_c0.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
  local_c0._28_4_ = 0;
  local_c0.pPoolSizes = (VkDescriptorPoolSize *)&local_98;
  local_c0.poolSizeCount = local_40;
  local_c0.maxSets = this->MaxDescriptorSets;
  local_c0._4_8_ = 0;
  local_c0._12_8_ = 0;
  VVar8 = (*VulkanDynamicAPI::vkCreateDescriptorPool)
                    (this->Device->Device,&local_c0,&VulkanRHI::GAllocationCallbacks,
                     &this->DescriptorPool);
  if (VVar8 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar8,
               "VulkanRHI::vkCreateDescriptorPool(Device->GetHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, &DescriptorPool)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
               ,0x41);
  }
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18._0_4_ = this->MaxDescriptorSets;
  if (auVar18 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_VulkanNumDescSetsTotal;
    if (StatPtr_STAT_VulkanNumDescSetsTotal ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)0x0) {
      pFVar9 = ::FName::FName(&local_d8,"STAT_VulkanNumDescSetsTotal");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescSetsTotal,*pFVar9,
                          L"Max Potential Desc Sets","STATGROUP_VulkanRHI","STATCAT_Advanced",
                          L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar14;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_d8 = FVar3;
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_d0.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_d8 = FVar3;
      local_d0.StatData.Pad = auVar18;
      local_d0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_d0);
      FStatsTrace::Add(&local_d8,(long64)auVar18);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  return this;
}

// ~FVulkanDescriptorPool @ 145b4d080

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

void __thiscall FVulkanDescriptorPool::~FVulkanDescriptorPool(FVulkanDescriptorPool *this)

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
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescSetsTotal,*pFVar2,
                         L"Max Potential Desc Sets","STATGROUP_VulkanRHI","STATCAT_Advanced",
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
  if (StatPtr_STAT_VulkanNumDescPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)0x0)
  {
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
  if (this->DescriptorPool != (VkDescriptorPool_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyDescriptorPool)
              (this->Device->Device,this->DescriptorPool,&VulkanRHI::GAllocationCallbacks);
    this->DescriptorPool = (VkDescriptorPool_T *)0x0;
  }
  return;
}

// AllocateDescriptorSets @ 145b56f70

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
FVulkanDescriptorPool::AllocateDescriptorSets
          (FVulkanDescriptorPool *this,VkDescriptorSetAllocateInfo *param_1,
          VkDescriptorSet_T **param_2)

{
  VkResult VVar1;
  VkDescriptorSetAllocateInfo local_38;
  
  local_38.descriptorPool = this->DescriptorPool;
  local_38.sType = param_1->sType;
  local_38._4_4_ = *(undefined4 *)&param_1->field_0x4;
  local_38.pNext = param_1->pNext;
  local_38.descriptorSetCount = param_1->descriptorSetCount;
  local_38._28_4_ = *(undefined4 *)&param_1->field_0x1c;
  local_38.pSetLayouts = param_1->pSetLayouts;
  VVar1 = (*VulkanDynamicAPI::vkAllocateDescriptorSets)(this->Device->Device,&local_38,param_2);
  return VVar1 == VK_SUCCESS;
}

// Reset @ 145b79a70

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

void __thiscall FVulkanDescriptorPool::Reset(FVulkanDescriptorPool *this)

{
  VkResult VVar1;
  
  if (this->DescriptorPool != (VkDescriptorPool_T *)0x0) {
    VVar1 = (*VulkanDynamicAPI::vkResetDescriptorPool)(this->Device->Device,this->DescriptorPool,0);
    if (VVar1 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,"VulkanRHI::vkResetDescriptorPool(Device->GetHandle(), DescriptorPool, 0)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                 ,0x74);
    }
    this->NumAllocatedDescriptorSets = 0;
    return;
  }
  this->NumAllocatedDescriptorSets = 0;
  return;
}

// TrackAddUsage @ 145b7f8e0

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

void __thiscall
FVulkanDescriptorPool::TrackAddUsage
          (FVulkanDescriptorPool *this,FVulkanDescriptorSetsLayout *param_1)

{
  longlong *this_00;
  FVulkanDescriptorSetsLayout *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  VkDescriptorType VVar8;
  uint uVar9;
  uint uVar10;
  
  this_00 = &param_1->_padding_;
  VVar8 = VK_DESCRIPTOR_TYPE_SAMPLER;
  do {
    pFVar1 = this->Layout;
    if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
      plVar7 = &pFVar1->_padding_;
      if ((longlong *)pFVar1->_padding_ != (longlong *)0x0) {
        plVar7 = (longlong *)pFVar1->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)pFVar1->_padding_ - VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER & VVar8) *
                      4);
      if (iVar5 != -1) {
        lVar2 = pFVar1->_padding_;
        do {
          if (*(VkDescriptorType *)(lVar2 + (longlong)iVar5 * 0x10) == VVar8) {
            puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                     ::FindChecked(&pFVar1->_padding_,VVar8);
            uVar10 = *puVar6;
            goto LAB_145b7f979;
          }
          iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    uVar10 = 0;
LAB_145b7f979:
    if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
      plVar7 = &param_1->_padding_;
      if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
        plVar7 = (longlong *)param_1->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)param_1->_padding_ - VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER & VVar8)
                      * 4);
      if (iVar5 != -1) {
        do {
          if (*(VkDescriptorType *)(*this_00 + (longlong)iVar5 * 0x10) == VVar8) {
            puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                     ::FindChecked(this_00,VVar8);
            uVar9 = *puVar6;
            goto LAB_145b7f9ca;
          }
          iVar5 = *(int *)(*this_00 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    uVar9 = 0;
LAB_145b7f9ca:
    if ((uVar10 != uVar9) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1172801430751281239>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                           ,0x57,
                           "Layout.GetTypesUsed((VkDescriptorType)TypeIndex) == InLayout.GetTypesUsed((VkDescriptorType)TypeIndex)"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    VVar8 = VVar8 + VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
  } while (VVar8 < (VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT|VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER));
  pFVar1 = this->Layout;
  if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
    plVar7 = (longlong *)pFVar1->_padding_;
    if ((longlong *)pFVar1->_padding_ == (longlong *)0x0) {
      plVar7 = &pFVar1->_padding_;
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)pFVar1->_padding_ - 1U & 0x3b9d13f0) * 4);
    if (iVar5 != -1) {
      lVar2 = pFVar1->_padding_;
      do {
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x10) == 0x3b9d13f0) {
          puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                   ::FindChecked(&pFVar1->_padding_,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
          uVar10 = *puVar6;
          goto LAB_145b7fa5a;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  uVar10 = 0;
LAB_145b7fa5a:
  uVar9 = 0;
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar7 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar7 = &param_1->_padding_;
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1->_padding_ - 1U & 0x3b9d13f0) * 4);
    uVar9 = 0;
    if (iVar5 != -1) {
      do {
        if (*(int *)(*this_00 + (longlong)iVar5 * 0x10) == 0x3b9d13f0) {
          puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                   ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
          uVar9 = *puVar6;
          break;
        }
        iVar5 = *(int *)(*this_00 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if ((uVar10 != uVar9) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1172801430751281243>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                         ,0x5b,
                         "Layout.GetTypesUsed(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) == InLayout.GetTypesUsed(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR)"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->NumAllocatedDescriptorSets = this->NumAllocatedDescriptorSets + (int)param_1->_padding_;
  uVar10 = this->PeakAllocatedDescriptorSets;
  if (this->PeakAllocatedDescriptorSets < this->NumAllocatedDescriptorSets) {
    uVar10 = this->NumAllocatedDescriptorSets;
  }
  this->PeakAllocatedDescriptorSets = uVar10;
  return;
}

// TrackRemoveUsage @ 145b7fb70

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

void __thiscall
FVulkanDescriptorPool::TrackRemoveUsage
          (FVulkanDescriptorPool *this,FVulkanDescriptorSetsLayout *param_1)

{
  longlong *this_00;
  FVulkanDescriptorSetsLayout *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  VkDescriptorType VVar8;
  uint uVar9;
  uint uVar10;
  
  this_00 = &param_1->_padding_;
  VVar8 = VK_DESCRIPTOR_TYPE_SAMPLER;
  do {
    pFVar1 = this->Layout;
    if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
      plVar7 = &pFVar1->_padding_;
      if ((longlong *)pFVar1->_padding_ != (longlong *)0x0) {
        plVar7 = (longlong *)pFVar1->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)pFVar1->_padding_ - VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER & VVar8) *
                      4);
      if (iVar5 != -1) {
        lVar2 = pFVar1->_padding_;
        do {
          if (*(VkDescriptorType *)(lVar2 + (longlong)iVar5 * 0x10) == VVar8) {
            puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                     ::FindChecked(&pFVar1->_padding_,VVar8);
            uVar10 = *puVar6;
            goto LAB_145b7fbf9;
          }
          iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    uVar10 = 0;
LAB_145b7fbf9:
    if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
      plVar7 = &param_1->_padding_;
      if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
        plVar7 = (longlong *)param_1->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)param_1->_padding_ - VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER & VVar8)
                      * 4);
      if (iVar5 != -1) {
        do {
          if (*(VkDescriptorType *)(*this_00 + (longlong)iVar5 * 0x10) == VVar8) {
            puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                     ::FindChecked(this_00,VVar8);
            uVar9 = *puVar6;
            goto LAB_145b7fc4a;
          }
          iVar5 = *(int *)(*this_00 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    uVar9 = 0;
LAB_145b7fc4a:
    if ((uVar10 != uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Layout.GetTypesUsed((VkDescriptorType)TypeIndex) == InLayout.GetTypesUsed((VkDescriptorType)TypeIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                           ,0x66,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    VVar8 = VVar8 + VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
  } while (VVar8 < (VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT|VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER));
  pFVar1 = this->Layout;
  if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
    plVar7 = (longlong *)pFVar1->_padding_;
    if ((longlong *)pFVar1->_padding_ == (longlong *)0x0) {
      plVar7 = &pFVar1->_padding_;
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)pFVar1->_padding_ - 1U & 0x3b9d13f0) * 4);
    if (iVar5 != -1) {
      lVar2 = pFVar1->_padding_;
      do {
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x10) == 0x3b9d13f0) {
          puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                   ::FindChecked(&pFVar1->_padding_,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
          uVar10 = *puVar6;
          goto LAB_145b7fcda;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  uVar10 = 0;
LAB_145b7fcda:
  uVar9 = 0;
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar7 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar7 = &param_1->_padding_;
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1->_padding_ - 1U & 0x3b9d13f0) * 4);
    uVar9 = 0;
    if (iVar5 != -1) {
      do {
        if (*(int *)(*this_00 + (longlong)iVar5 * 0x10) == 0x3b9d13f0) {
          puVar6 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                   ::FindChecked(this_00,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
          uVar9 = *puVar6;
          break;
        }
        iVar5 = *(int *)(*this_00 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if ((uVar10 != uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Layout.GetTypesUsed(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) == InLayout.GetTypesUsed(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                         ,0x6a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->NumAllocatedDescriptorSets = this->NumAllocatedDescriptorSets - (int)param_1->_padding_;
  return;
}

